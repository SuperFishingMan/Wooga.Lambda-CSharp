﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3275;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3274;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3264;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
 void SymmetricAlgorithm__ctor_m8842 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
 void SymmetricAlgorithm_System_IDisposable_Dispose_m8814 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
 void SymmetricAlgorithm_Finalize_m8810 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
 void SymmetricAlgorithm_Clear_m8861 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
 void SymmetricAlgorithm_Dispose_m8844 (SymmetricAlgorithm_t3275 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
 int32_t SymmetricAlgorithm_get_BlockSize_m8815 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
 void SymmetricAlgorithm_set_BlockSize_m8816 (SymmetricAlgorithm_t3275 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
 int32_t SymmetricAlgorithm_get_FeedbackSize_m8817 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
 ByteU5BU5D_t961* SymmetricAlgorithm_get_IV_m12331 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
 void SymmetricAlgorithm_set_IV_m8859 (SymmetricAlgorithm_t3275 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
 ByteU5BU5D_t961* SymmetricAlgorithm_get_Key_m8845 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
 void SymmetricAlgorithm_set_Key_m8846 (SymmetricAlgorithm_t3275 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
 int32_t SymmetricAlgorithm_get_KeySize_m8818 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
 void SymmetricAlgorithm_set_KeySize_m8819 (SymmetricAlgorithm_t3275 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
 KeySizesU5BU5D_t3274* SymmetricAlgorithm_get_LegalKeySizes_m8820 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
 int32_t SymmetricAlgorithm_get_Mode_m8821 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
 void SymmetricAlgorithm_set_Mode_m8822 (SymmetricAlgorithm_t3275 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
 int32_t SymmetricAlgorithm_get_Padding_m8823 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
 void SymmetricAlgorithm_set_Padding_m8824 (SymmetricAlgorithm_t3275 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
 Object_t * SymmetricAlgorithm_CreateDecryptor_m8825 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
 Object_t * SymmetricAlgorithm_CreateEncryptor_m8813 (SymmetricAlgorithm_t3275 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
 SymmetricAlgorithm_t3275 * SymmetricAlgorithm_Create_m8858 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
