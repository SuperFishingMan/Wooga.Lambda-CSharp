﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t3352;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerHelloDone__ctor_m8771 (TlsServerHelloDone_t3352 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
 void TlsServerHelloDone_ProcessAsSsl3_m8772 (TlsServerHelloDone_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
 void TlsServerHelloDone_ProcessAsTls1_m8773 (TlsServerHelloDone_t3352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
