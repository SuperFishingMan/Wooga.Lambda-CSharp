﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t323;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t472;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2623;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
 void UnityEvent_1__ctor_m2229 (UnityEvent_1_t323 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m2248 (UnityEvent_1_t323 * __this, UnityAction_1_t472 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m2247 (UnityEvent_1_t323 * __this, UnityAction_1_t472 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t2624 * UnityEvent_1_FindMethod_Impl_m2230 (UnityEvent_1_t323 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2623 * UnityEvent_1_GetDelegate_m2231 (UnityEvent_1_t323 * __this, Object_t * ___target, MethodInfo_t2624 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2623 * UnityEvent_1_GetDelegate_m20176 (Object_t * __this/* static, unused */, UnityAction_1_t472 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
 void UnityEvent_1_Invoke_m2237 (UnityEvent_1_t323 * __this, float ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
