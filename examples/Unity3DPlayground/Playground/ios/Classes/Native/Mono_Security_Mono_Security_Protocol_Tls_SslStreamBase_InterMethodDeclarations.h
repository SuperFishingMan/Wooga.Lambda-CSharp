﻿#pragma once

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1983;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t121;
// System.Threading.WaitHandle
struct WaitHandle_t533;
// System.AsyncCallback
struct AsyncCallback_t189;

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void InternalAsyncResult__ctor_m7263 (InternalAsyncResult_t1983 * __this, AsyncCallback_t189 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1071* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
 bool InternalAsyncResult_get_ProceedAfterHandshake_m7264 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
 bool InternalAsyncResult_get_FromWrite_m7265 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
 ByteU5BU5D_t1071* InternalAsyncResult_get_Buffer_m7266 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
 int32_t InternalAsyncResult_get_Offset_m7267 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
 int32_t InternalAsyncResult_get_Count_m7268 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
 int32_t InternalAsyncResult_get_BytesRead_m7269 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
 Object_t * InternalAsyncResult_get_AsyncState_m7270 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
 Exception_t121 * InternalAsyncResult_get_AsyncException_m7271 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
 bool InternalAsyncResult_get_CompletedWithError_m7272 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t533 * InternalAsyncResult_get_AsyncWaitHandle_m7273 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
 bool InternalAsyncResult_get_IsCompleted_m7274 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
 void InternalAsyncResult_SetComplete_m7275 (InternalAsyncResult_t1983 * __this, Exception_t121 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
 void InternalAsyncResult_SetComplete_m7276 (InternalAsyncResult_t1983 * __this, Exception_t121 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
 void InternalAsyncResult_SetComplete_m7277 (InternalAsyncResult_t1983 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
 void InternalAsyncResult_SetComplete_m7278 (InternalAsyncResult_t1983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
