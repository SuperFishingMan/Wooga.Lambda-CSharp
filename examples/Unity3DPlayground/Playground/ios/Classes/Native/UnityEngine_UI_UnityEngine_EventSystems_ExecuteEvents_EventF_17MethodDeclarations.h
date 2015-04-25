﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t4797;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t169;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void EventFunction_1__ctor_m16907_gshared (EventFunction_1_t4797 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define EventFunction_1__ctor_m16907(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m16907_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
 void EventFunction_1_Invoke_m16909_gshared (EventFunction_1_t4797 * __this, Object_t * ___handler, BaseEventData_t169 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m16909(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m16909_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___handler, (BaseEventData_t169 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
 Object_t * EventFunction_1_BeginInvoke_m16911_gshared (EventFunction_1_t4797 * __this, Object_t * ___handler, BaseEventData_t169 * ___eventData, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m16911(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m16911_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___handler, (BaseEventData_t169 *)___eventData, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
 void EventFunction_1_EndInvoke_m16913_gshared (EventFunction_1_t4797 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m16913(__this, ___result, method) (void)EventFunction_1_EndInvoke_m16913_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___result, method)
