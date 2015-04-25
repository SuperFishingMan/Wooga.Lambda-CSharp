﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid
struct Guid_t3940;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t399;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid::.ctor(System.Byte[])
 void Guid__ctor_m13170 (Guid_t3940 * __this, ByteU5BU5D_t961* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
 void Guid__ctor_m13171 (Guid_t3940 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
 void Guid__cctor_m13172 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
 void Guid_CheckNull_m13173 (Object_t * __this/* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
 void Guid_CheckLength_m13174 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
 void Guid_CheckArray_m13175 (Object_t * __this/* static, unused */, ByteU5BU5D_t961* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
 int32_t Guid_Compare_m13176 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
 int32_t Guid_CompareTo_m13177 (Guid_t3940 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
 bool Guid_Equals_m13178 (Guid_t3940 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
 int32_t Guid_CompareTo_m13179 (Guid_t3940 * __this, Guid_t3940  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
 bool Guid_Equals_m13180 (Guid_t3940 * __this, Guid_t3940  ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
 int32_t Guid_GetHashCode_m13181 (Guid_t3940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
 uint16_t Guid_ToHex_m13182 (Object_t * __this/* static, unused */, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
 Guid_t3940  Guid_NewGuid_m13183 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
 void Guid_AppendInt_m13184 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___builder, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
 void Guid_AppendShort_m13185 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___builder, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
 void Guid_AppendByte_m13186 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___builder, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
 String_t* Guid_BaseToString_m13187 (Guid_t3940 * __this, bool ___h, bool ___p, bool ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
 String_t* Guid_ToString_m13188 (Guid_t3940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
 String_t* Guid_ToString_m13189 (Guid_t3940 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
 String_t* Guid_ToString_m13190 (Guid_t3940 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
