﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t3010;
// System.Uri
struct Uri_t2985;
// System.String[]
struct StringU5BU5D_t127;
// System.Net.ICredentials
struct ICredentials_t3009;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
 void WebProxy__ctor_m6793 (WebProxy_t3010 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
 void WebProxy__ctor_m6794 (WebProxy_t3010 * __this, Uri_t2985 * ___address, bool ___bypassOnLocal, StringU5BU5D_t127* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy__ctor_m6795 (WebProxy_t3010 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m6796 (WebProxy_t3010 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
 bool WebProxy_get_UseDefaultCredentials_m6797 (WebProxy_t3010 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
 Uri_t2985 * WebProxy_GetProxy_m6798 (WebProxy_t3010 * __this, Uri_t2985 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
 bool WebProxy_IsBypassed_m6799 (WebProxy_t3010 * __this, Uri_t2985 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_GetObjectData_m6800 (WebProxy_t3010 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
 void WebProxy_CheckBypassList_m6801 (WebProxy_t3010 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
