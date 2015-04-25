﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionCache
struct ClientSessionCache_t3312;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t3311;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
 void ClientSessionCache__cctor_m8397 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
 void ClientSessionCache_Add_m8398 (Object_t * __this/* static, unused */, String_t* ___host, ByteU5BU5D_t961* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
 ByteU5BU5D_t961* ClientSessionCache_FromHost_m8399 (Object_t * __this/* static, unused */, String_t* ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
 ClientSessionInfo_t3311 * ClientSessionCache_FromContext_m8400 (Object_t * __this/* static, unused */, Context_t3298 * ___context, bool ___checkValidity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextInCache_m8401 (Object_t * __this/* static, unused */, Context_t3298 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextFromCache_m8402 (Object_t * __this/* static, unused */, Context_t3298 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
