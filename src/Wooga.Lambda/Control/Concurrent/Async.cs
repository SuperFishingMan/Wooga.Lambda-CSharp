using System;
using System.Threading;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Control.Concurrent
{
    /// <summary>
    ///     A delegate to label lambdas as Async
    /// </summary>
    /// <typeparam name="T">Result type</typeparam>
    /// <returns>Result</returns>
    public delegate T Async<T>();

    /// <summary>
    ///     A wrapper to encapsulate a ManualResetEvent.
    /// </summary>
    /// <typeparam name="TReply">The type of the reply.</typeparam>
    internal sealed class AsyncEventHandle<T>
    {
        public readonly ManualResetEvent DoneEvent = new ManualResetEvent(false);
        private T _result;

        public Unit Complete(T result)
        {
            _result = result;
            DoneEvent.Set();
            return Unit.Default;
        }

        public T Result()
        {
            return _result;
        }
    }

    /// <summary>
    ///     A handle to a capability to reply to a message.
    /// </summary>
    /// <typeparam name="TReply">The type of the reply.</typeparam>
    public sealed class AsyncReplyChannel<TReply>
    {
        private readonly Func<TReply, Unit> replyf;

        public AsyncReplyChannel(Func<TReply, Unit> reply)
        {
            replyf = reply;
        }

        public void Reply(TReply msg)
        {
            replyf(msg);
        }
    }

    public static class Async
    {
        /// <summary>
        ///     Creates an asynchronous computation that runs the given computation and ignores its result.
        /// </summary>
        /// <typeparam name="T">Type of computation result</typeparam>
        /// <param name="m">The computation.</param>
        /// <returns>Unit</returns>
        public static Async<Unit> Ignore<T>(this Async<T> m)
        {
            return () =>
            {
                m.RunSynchronously();
                return Unit.Default;
            };
        }

        /// <summary>
        ///     Creates an asynchronous computation that executes all the given asynchronous computations, initially queueing each
        ///     as work items and using a fork/join pattern.
        /// </summary>
        /// <typeparam name="T">Type of computation result</typeparam>
        /// <param name="ms">The computations.</param>
        /// <returns>Computation results</returns>
        public static Async<ImmutableList<T>> Parallel<T>(this ImmutableList<Async<T>> ms)
        {
            var empty = new ImmutableList<T>();
            return () =>
            {
                var num = (uint) Math.Min(32, ms.Count); // 64 is maximum here
                var xs = ms.Take(num);
                var rest = ms.RemoveRange(0, (int) num);

                if (num == 0)
                {
                    return empty;
                }

                var asyncs = xs.Map(x =>
                {
                    var handle = new AsyncEventHandle<T>();
                    x.Bind<T, Unit>(v => () => handle.Complete(v)).Start();
                    return handle;
                });
                WaitHandle.WaitAll(asyncs.Map(ah => (WaitHandle) ah.DoneEvent).ToArray());
                var ps = asyncs.Map(x => x.Result());
                return empty.AddRange(rest.Count > 0 ? ps.AddRange(rest.Parallel().RunSynchronously()) : ps);
            };
        }

        /// <summary>
        ///     Runs the provided asynchronous computation and awaits its result.
        /// </summary>
        /// <typeparam name="T">Type of computation result</typeparam>
        /// <param name="m">The computation</param>
        /// <returns>Computation result</returns>
        public static T RunSynchronously<T>(this Async<T> m)
        {
            return m.Invoke();
        }

        /// <summary>
        ///     Creates an asynchronous computation that will sleep for the given time.
        /// </summary>
        /// <param name="ms">The sleep duration in miliseconds</param>
        /// <returns>Async computation</returns>
        public static Async<Unit> Sleep(int ms)
        {
            return () =>
            {
                var e = new ManualResetEvent(false);
                e.WaitOne(ms);
                return Unit.Default;
            };
        }

        /// <summary>
        ///     Starts the asynchronous computation in the thread pool. Do not await its result.
        /// </summary>
        /// <typeparam name="T">Type of computation result</typeparam>
        /// <param name="m">The computation.</param>
        /// <returns>Unit value</returns>
        public static Unit Start<T>(this Async<T> m)
        {
            ThreadPool.QueueUserWorkItem(_ => m.RunSynchronously());
            return Unit.Default;
        }

        /// <summary>
        ///     Starts the asynchronous computation in the thread pool. Await result on AsyncReplyChannel.
        /// </summary>
        /// <typeparam name="T">Type of computation result</typeparam>
        /// <param name="m">The computation.</param>
        /// <param name="f">The lambda providing the AsyncReplyChannel</param>
        /// <returns>Unit value</returns>
        public static Unit StartAndReply<T>(this Async<T> m, Func<AsyncReplyChannel<T>, AsyncReplyChannel<T>> f)
        {
            var ch = f(new AsyncReplyChannel<T>(_ => Unit.Default));
            m.Bind<T, Unit>(v =>
            {
                ch.Reply(v);
                return () => Unit.Default;
            }).Start();
            return Unit.Default;
        }

        /// <summary>
        ///     Starts a child computation. This allows multiple asynchronous computations to be executed simultaneously.
        /// </summary>
        /// <typeparam name="T">Type of computation result</typeparam>
        /// <param name="m">The computation.</param>
        /// <returns>A new computation that waits for the input computation to finish.</returns>
        public static Async<Async<T>> StartChild<T>(this Async<T> m)
        {
            return () =>
            {
                var handle = new AsyncEventHandle<T>();
                m.StartAndReply(ch => new AsyncReplyChannel<T>(r =>
                {
                    ch.Reply(r);
                    handle.Complete(r);
                    return Unit.Default;
                }));
                return () =>
                {
                    handle.DoneEvent.WaitOne();
                    return handle.Result();
                };
            };
        }

        public static Async<Either<Exception, T>> Catch<T>(this Async<T> m)
        {
            return () => Either.Try(m.RunSynchronously);
        }

        public static Async<T2> Bind<T1, T2>(this Async<T1> m, Func<T1, Async<T2>> f)
        {
            return () =>
            {
                var xm = m.RunSynchronously();
                var xf = f(xm).RunSynchronously();
                return xf;
            };
        }

        public static Async<T2> Then<T1, T2>(this Async<T1> m, Async<T2> h)
        {
            return m.Bind(_ => h);
        }

        public static Async<T> Return<T>(Func<T> f)
        {
            return () => f();
        }

        public static Async<T> Return<T>(T f)
        {
            return () => f;
        }
    }
}