﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t3463;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.RSA
struct RSA_t3019;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
 int32_t CryptoConvert_ToInt32LE_m9975 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
 uint32_t CryptoConvert_ToUInt32LE_m9976 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___bytes, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
 ByteU5BU5D_t961* CryptoConvert_GetBytesLE_m9977 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
 ByteU5BU5D_t961* CryptoConvert_ToCapiPrivateKeyBlob_m9978 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
 RSA_t3019 * CryptoConvert_FromCapiPublicKeyBlob_m9979 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___blob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
 RSA_t3019 * CryptoConvert_FromCapiPublicKeyBlob_m9980 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___blob, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
 ByteU5BU5D_t961* CryptoConvert_ToCapiPublicKeyBlob_m9981 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
 ByteU5BU5D_t961* CryptoConvert_ToCapiKeyBlob_m9982 (Object_t * __this/* static, unused */, RSA_t3019 * ___rsa, bool ___includePrivateKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
