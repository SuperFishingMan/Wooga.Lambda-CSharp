﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5285;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
 void UnityAction_1__ctor_m20745 (UnityAction_1_t5285 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
 void UnityAction_1_Invoke_m20746 (UnityAction_1_t5285 * __this, bool ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
 Object_t * UnityAction_1_BeginInvoke_m20747 (UnityAction_1_t5285 * __this, bool ___arg0, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
 void UnityAction_1_EndInvoke_m20748 (UnityAction_1_t5285 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
