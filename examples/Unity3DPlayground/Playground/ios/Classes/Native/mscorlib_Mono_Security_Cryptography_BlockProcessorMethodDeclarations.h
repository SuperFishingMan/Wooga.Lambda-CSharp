﻿#pragma once

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t2105;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1923;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
 void BlockProcessor__ctor_m8590 (BlockProcessor_t2105 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
 void BlockProcessor_Finalize_m8591 (BlockProcessor_t2105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
 void BlockProcessor_Initialize_m8592 (BlockProcessor_t2105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
 void BlockProcessor_Core_m8593 (BlockProcessor_t2105 * __this, ByteU5BU5D_t1071* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
 void BlockProcessor_Core_m8594 (BlockProcessor_t2105 * __this, ByteU5BU5D_t1071* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
 ByteU5BU5D_t1071* BlockProcessor_Final_m8595 (BlockProcessor_t2105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
