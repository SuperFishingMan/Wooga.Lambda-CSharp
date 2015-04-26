﻿#pragma once

// System.Security.Cryptography.CryptoConfig
struct CryptoConfig_t1887;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
 void CryptoConfig__cctor_m10477 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
 void CryptoConfig_Initialize_m10478 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
 Object_t * CryptoConfig_CreateFromName_m6522 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
 Object_t * CryptoConfig_CreateFromName_m6584 (Object_t * __this/* static, unused */, String_t* ___name, ObjectU5BU5D_t149* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
 String_t* CryptoConfig_MapNameToOID_m7499 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
 ByteU5BU5D_t1071* CryptoConfig_EncodeOID_m6535 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
 ByteU5BU5D_t1071* CryptoConfig_EncodeLongNumber_m10479 (Object_t * __this/* static, unused */, int64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
