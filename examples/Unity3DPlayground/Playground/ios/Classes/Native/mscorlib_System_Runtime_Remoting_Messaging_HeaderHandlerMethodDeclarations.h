﻿#pragma once

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2399;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2356;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
 void HeaderHandler__ctor_m11977 (HeaderHandler_t2399 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
 Object_t * HeaderHandler_Invoke_m11978 (HeaderHandler_t2399 * __this, HeaderU5BU5D_t2356* ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
 Object_t * HeaderHandler_BeginInvoke_m11979 (HeaderHandler_t2399 * __this, HeaderU5BU5D_t2356* ___headers, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
 Object_t * HeaderHandler_EndInvoke_m11980 (HeaderHandler_t2399 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
