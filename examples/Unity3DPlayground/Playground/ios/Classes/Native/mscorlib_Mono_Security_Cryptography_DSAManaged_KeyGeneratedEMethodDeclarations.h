﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3466;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t3276;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
 void KeyGeneratedEventHandler__ctor_m9992 (KeyGeneratedEventHandler_t3466 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
 void KeyGeneratedEventHandler_Invoke_m9993 (KeyGeneratedEventHandler_t3466 * __this, Object_t * ___sender, EventArgs_t3276 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * KeyGeneratedEventHandler_BeginInvoke_m9994 (KeyGeneratedEventHandler_t3466 * __this, Object_t * ___sender, EventArgs_t3276 * ___e, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
 void KeyGeneratedEventHandler_EndInvoke_m9995 (KeyGeneratedEventHandler_t3466 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
