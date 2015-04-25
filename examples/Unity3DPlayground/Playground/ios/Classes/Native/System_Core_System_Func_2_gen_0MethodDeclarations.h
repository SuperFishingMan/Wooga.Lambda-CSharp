﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t355;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t352;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m2341 (Func_2_t355 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m20913 (Func_2_t355 * __this, Toggle_t352 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m20914 (Func_2_t355 * __this, Toggle_t352 * ___arg1, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m20915 (Func_2_t355 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
