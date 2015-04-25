﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t379;
// System.Object
struct Object_t;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t381;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m2402 (Func_2_t379 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
 float Func_2_Invoke_m2403 (Func_2_t379 * __this, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m21285 (Func_2_t379 * __this, Object_t * ___arg1, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
 float Func_2_EndInvoke_m21286 (Func_2_t379 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
