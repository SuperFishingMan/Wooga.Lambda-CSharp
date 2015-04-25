﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t3270;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3268;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m8103 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m8104 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___array1, ByteU5BU5D_t961* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t961* PKCS1_I2OSP_m8105 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t961* PKCS1_OS2IP_m8106 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t961* PKCS1_RSASP1_m8107 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, ByteU5BU5D_t961* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t961* PKCS1_RSAVP1_m8108 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, ByteU5BU5D_t961* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t961* PKCS1_Sign_v15_m8109 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, HashAlgorithm_t3268 * ___hash, ByteU5BU5D_t961* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m8110 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, HashAlgorithm_t3268 * ___hash, ByteU5BU5D_t961* ___hashValue, ByteU5BU5D_t961* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m8111 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, HashAlgorithm_t3268 * ___hash, ByteU5BU5D_t961* ___hashValue, ByteU5BU5D_t961* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t961* PKCS1_Encode_v15_m8112 (Object_t * __this/* static, unused */, HashAlgorithm_t3268 * ___hash, ByteU5BU5D_t961* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
