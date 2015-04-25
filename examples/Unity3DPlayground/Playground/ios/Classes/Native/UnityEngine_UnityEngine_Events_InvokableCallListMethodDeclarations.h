﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2636;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2623;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object[]
struct ObjectU5BU5D_t126;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
 void InvokableCallList__ctor_m6112 (InvokableCallList_t2636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m6113 (InvokableCallList_t2636 * __this, BaseInvokableCall_t2623 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddListener_m6114 (InvokableCallList_t2636 * __this, BaseInvokableCall_t2623 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void InvokableCallList_RemoveListener_m6115 (InvokableCallList_t2636 * __this, Object_t * ___targetObj, MethodInfo_t2624 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
 void InvokableCallList_ClearPersistent_m6116 (InvokableCallList_t2636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
 void InvokableCallList_Invoke_m6117 (InvokableCallList_t2636 * __this, ObjectU5BU5D_t126* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
