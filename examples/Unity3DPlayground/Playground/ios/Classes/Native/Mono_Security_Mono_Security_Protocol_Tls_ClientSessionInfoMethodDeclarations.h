﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t3311;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
 void ClientSessionInfo__ctor_m8385 (ClientSessionInfo_t3311 * __this, String_t* ___hostname, ByteU5BU5D_t961* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
 void ClientSessionInfo__cctor_m8386 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
 void ClientSessionInfo_Finalize_m8387 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
 String_t* ClientSessionInfo_get_HostName_m8388 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
 ByteU5BU5D_t961* ClientSessionInfo_get_Id_m8389 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
 bool ClientSessionInfo_get_Valid_m8390 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_GetContext_m8391 (ClientSessionInfo_t3311 * __this, Context_t3298 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_SetContext_m8392 (ClientSessionInfo_t3311 * __this, Context_t3298 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
 void ClientSessionInfo_KeepAlive_m8393 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
 void ClientSessionInfo_Dispose_m8394 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
 void ClientSessionInfo_Dispose_m8395 (ClientSessionInfo_t3311 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
 void ClientSessionInfo_CheckDisposed_m8396 (ClientSessionInfo_t3311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
