﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ObjRef
struct ObjRef_t3744;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t3755;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t3757;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t3756;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
 void ObjRef__ctor_m11865 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef__ctor_m11866 (ObjRef_t3744 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
 void ObjRef__cctor_m11867 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
 bool ObjRef_get_IsReferenceToWellKnow_m11868 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
 Object_t * ObjRef_get_ChannelInfo_m11869 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
 Object_t * ObjRef_get_EnvoyInfo_m11870 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
 void ObjRef_set_EnvoyInfo_m11871 (ObjRef_t3744 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
 Object_t * ObjRef_get_TypeInfo_m11872 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
 void ObjRef_set_TypeInfo_m11873 (ObjRef_t3744 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
 String_t* ObjRef_get_URI_m11874 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
 void ObjRef_set_URI_m11875 (ObjRef_t3744 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef_GetObjectData_m11876 (ObjRef_t3744 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * ObjRef_GetRealObject_m11877 (ObjRef_t3744 * __this, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
 void ObjRef_UpdateChannelInfo_m11878 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
 Type_t * ObjRef_get_ServerType_m11879 (ObjRef_t3744 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
