﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t3476;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3275;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
 void SymmetricTransform__ctor_m10091 (SymmetricTransform_t3476 * __this, SymmetricAlgorithm_t3275 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t961* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
 void SymmetricTransform_System_IDisposable_Dispose_m10092 (SymmetricTransform_t3476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
 void SymmetricTransform_Finalize_m10093 (SymmetricTransform_t3476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
 void SymmetricTransform_Dispose_m10094 (SymmetricTransform_t3476 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
 bool SymmetricTransform_get_CanReuseTransform_m10095 (SymmetricTransform_t3476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
 void SymmetricTransform_Transform_m10096 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[])
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
 void SymmetricTransform_CBC_m10097 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
 void SymmetricTransform_CFB_m10098 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
 void SymmetricTransform_OFB_m10099 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
 void SymmetricTransform_CTS_m10100 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_CheckInput_m10101 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_TransformBlock_m10102 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t961* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
 bool SymmetricTransform_get_KeepLastBlock_m10103 (SymmetricTransform_t3476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t SymmetricTransform_InternalTransformBlock_m10104 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t961* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
 void SymmetricTransform_Random_m10105 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___buffer, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
 void SymmetricTransform_ThrowBadPaddingException_m10106 (SymmetricTransform_t3476 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t961* SymmetricTransform_FinalEncrypt_m10107 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t961* SymmetricTransform_FinalDecrypt_m10108 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t961* SymmetricTransform_TransformFinalBlock_m10109 (SymmetricTransform_t3476 * __this, ByteU5BU5D_t961* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
