﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding
struct UTF8Encoding_t3880;
// System.Char[]
struct CharU5BU5D_t311;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t3859;
// System.Text.Decoder
struct Decoder_t3566;

// System.Void System.Text.UTF8Encoding::.ctor()
 void UTF8Encoding__ctor_m12625 (UTF8Encoding_t3880 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
 void UTF8Encoding__ctor_m12626 (UTF8Encoding_t3880 * __this, bool ___encoderShouldEmitUTF8Identifier, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
 void UTF8Encoding__ctor_m12627 (UTF8Encoding_t3880 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetByteCount_m12628 (Object_t * __this/* static, unused */, CharU5BU5D_t311* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetByteCount_m12629 (Object_t * __this/* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF8Encoding_GetByteCount_m12630 (UTF8Encoding_t3880 * __this, CharU5BU5D_t311* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF8Encoding_GetByteCount_m12631 (UTF8Encoding_t3880 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetBytes_m12632 (Object_t * __this/* static, unused */, CharU5BU5D_t311* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetBytes_m12633 (Object_t * __this/* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF8Encoding_GetBytes_m12634 (UTF8Encoding_t3880 * __this, CharU5BU5D_t311* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF8Encoding_GetBytes_m12635 (UTF8Encoding_t3880 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF8Encoding_GetBytes_m12636 (UTF8Encoding_t3880 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetCharCount_m12637 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t3859 ** ___fallbackBuffer, ByteU5BU5D_t961** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetCharCount_m12638 (Object_t * __this/* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t3859 ** ___fallbackBuffer, ByteU5BU5D_t961** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
 int32_t UTF8Encoding_Fallback_m12639 (Object_t * __this/* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t3859 ** ___buffer, ByteU5BU5D_t961** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
 void UTF8Encoding_Fallback_m12640 (Object_t * __this/* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t3859 ** ___buffer, ByteU5BU5D_t961** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF8Encoding_GetCharCount_m12641 (UTF8Encoding_t3880 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetChars_m12642 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t311* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t3859 ** ___fallbackBuffer, ByteU5BU5D_t961** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetChars_m12643 (Object_t * __this/* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t3859 ** ___fallbackBuffer, ByteU5BU5D_t961** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF8Encoding_GetChars_m12644 (UTF8Encoding_t3880 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t311* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF8Encoding_GetMaxByteCount_m12645 (UTF8Encoding_t3880 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF8Encoding_GetMaxCharCount_m12646 (UTF8Encoding_t3880 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
 Decoder_t3566 * UTF8Encoding_GetDecoder_m12647 (UTF8Encoding_t3880 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
 ByteU5BU5D_t961* UTF8Encoding_GetPreamble_m12648 (UTF8Encoding_t3880 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
 bool UTF8Encoding_Equals_m12649 (UTF8Encoding_t3880 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
 int32_t UTF8Encoding_GetHashCode_m12650 (UTF8Encoding_t3880 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
 int32_t UTF8Encoding_GetByteCount_m12651 (UTF8Encoding_t3880 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF8Encoding_GetString_m12652 (UTF8Encoding_t3880 * __this, ByteU5BU5D_t961* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
