﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t3923;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Delegate
struct Delegate_t447;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder__ctor_m13125 (DelegateSerializationHolder_t3923 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder_GetDelegateData_m13126 (Object_t * __this/* static, unused */, Delegate_t447 * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder_GetObjectData_m13127 (DelegateSerializationHolder_t3923 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * DelegateSerializationHolder_GetRealObject_m13128 (DelegateSerializationHolder_t3923 * __this, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
