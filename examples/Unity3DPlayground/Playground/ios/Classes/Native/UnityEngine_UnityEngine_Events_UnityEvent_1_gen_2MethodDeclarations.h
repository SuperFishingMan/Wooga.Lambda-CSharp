﻿#pragma once

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t328;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t477;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
 void UnityEvent_1__ctor_m2235 (UnityEvent_1_t328 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m2254 (UnityEvent_1_t328 * __this, UnityAction_1_t477 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m2253 (UnityEvent_1_t328 * __this, UnityAction_1_t477 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t1265 * UnityEvent_1_FindMethod_Impl_m2236 (UnityEvent_1_t328 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m2237 (UnityEvent_1_t328 * __this, Object_t * ___target, MethodInfo_t1265 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m19157 (Object_t * __this/* static, unused */, UnityAction_1_t477 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
 void UnityEvent_1_Invoke_m2243 (UnityEvent_1_t328 * __this, float ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
