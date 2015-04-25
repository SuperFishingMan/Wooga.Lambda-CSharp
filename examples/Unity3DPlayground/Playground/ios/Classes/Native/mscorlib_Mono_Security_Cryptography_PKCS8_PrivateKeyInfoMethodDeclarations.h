﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3471;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.Security.Cryptography.DSA
struct DSA_t3018;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m10057 (PrivateKeyInfo_t3471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m10058 (PrivateKeyInfo_t3471 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t961* PrivateKeyInfo_get_PrivateKey_m10059 (PrivateKeyInfo_t3471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m10060 (PrivateKeyInfo_t3471 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t961* PrivateKeyInfo_RemoveLeadingZero_m10061 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t961* PrivateKeyInfo_Normalize_m10062 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t3019 * PrivateKeyInfo_DecodeRSA_m10063 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t3018 * PrivateKeyInfo_DecodeDSA_m10064 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___privateKey, DSAParameters_t3218  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
