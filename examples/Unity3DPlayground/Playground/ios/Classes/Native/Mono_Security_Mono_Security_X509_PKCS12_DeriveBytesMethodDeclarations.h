﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t3279;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
 void DeriveBytes__ctor_m8151 (DeriveBytes_t3279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
 void DeriveBytes__cctor_m8152 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
 void DeriveBytes_set_HashName_m8153 (DeriveBytes_t3279 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
 void DeriveBytes_set_IterationCount_m8154 (DeriveBytes_t3279 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
 void DeriveBytes_set_Password_m8155 (DeriveBytes_t3279 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
 void DeriveBytes_set_Salt_m8156 (DeriveBytes_t3279 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
 void DeriveBytes_Adjust_m8157 (DeriveBytes_t3279 * __this, ByteU5BU5D_t961* ___a, int32_t ___aOff, ByteU5BU5D_t961* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
 ByteU5BU5D_t961* DeriveBytes_Derive_m8158 (DeriveBytes_t3279 * __this, ByteU5BU5D_t961* ___diversifier, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
 ByteU5BU5D_t961* DeriveBytes_DeriveKey_m8159 (DeriveBytes_t3279 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
 ByteU5BU5D_t961* DeriveBytes_DeriveIV_m8160 (DeriveBytes_t3279 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
 ByteU5BU5D_t961* DeriveBytes_DeriveMAC_m8161 (DeriveBytes_t3279 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
