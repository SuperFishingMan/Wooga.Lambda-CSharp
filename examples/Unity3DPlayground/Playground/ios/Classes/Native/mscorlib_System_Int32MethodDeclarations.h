﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int32
struct Int32_t104;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t115;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3390;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Boolean System.Int32::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Int32_System_IConvertible_ToBoolean_m8991 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Int32_System_IConvertible_ToByte_m8992 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int32::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Int32_System_IConvertible_ToChar_m8993 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int32::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t2501  Int32_System_IConvertible_ToDateTime_m8994 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int32::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t3391  Int32_System_IConvertible_ToDecimal_m8995 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
 double Int32_System_IConvertible_ToDouble_m8996 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Int32_System_IConvertible_ToInt16_m8997 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Int32_System_IConvertible_ToInt32_m8998 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Int32_System_IConvertible_ToInt64_m8999 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int32::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Int32_System_IConvertible_ToSByte_m9000 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
 float Int32_System_IConvertible_ToSingle_m9001 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Int32_System_IConvertible_ToType_m9002 (int32_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Int32_System_IConvertible_ToUInt16_m9003 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Int32_System_IConvertible_ToUInt32_m9004 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Int32_System_IConvertible_ToUInt64_m9005 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Object)
 int32_t Int32_CompareTo_m9006 (int32_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Object)
 bool Int32_Equals_m9007 (int32_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::GetHashCode()
 int32_t Int32_GetHashCode_m6159 (int32_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Int32)
 int32_t Int32_CompareTo_m1766 (int32_t* __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Int32)
 bool Int32_Equals_m6161 (int32_t* __this, int32_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ProcessTrailingWhitespace(System.Boolean,System.String,System.Int32,System.Exception&)
 bool Int32_ProcessTrailingWhitespace_m9008 (Object_t * __this/* static, unused */, bool ___tryParse, String_t* ___s, int32_t ___position, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Parse(System.String,System.Boolean,System.Int32&,System.Exception&)
 bool Int32_Parse_m9009 (Object_t * __this/* static, unused */, String_t* ___s, bool ___tryParse, int32_t* ___result, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
 int32_t Int32_Parse_m9010 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::CheckStyle(System.Globalization.NumberStyles,System.Boolean,System.Exception&)
 bool Int32_CheckStyle_m9011 (Object_t * __this/* static, unused */, int32_t ___style, bool ___tryParse, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::JumpOverWhite(System.Int32&,System.String,System.Boolean,System.Boolean,System.Exception&)
 bool Int32_JumpOverWhite_m9012 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, bool ___reportError, bool ___tryParse, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindSign(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&,System.Boolean&)
 void Int32_FindSign_m9013 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, NumberFormatInfo_t3390 * ___nfi, bool* ___foundSign, bool* ___negative, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindCurrency(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&)
 void Int32_FindCurrency_m9014 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, NumberFormatInfo_t3390 * ___nfi, bool* ___foundCurrency, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindExponent(System.Int32&,System.String,System.Int32&,System.Boolean,System.Exception&)
 bool Int32_FindExponent_m9015 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, int32_t* ___exponent, bool ___tryParse, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindOther(System.Int32&,System.String,System.String)
 bool Int32_FindOther_m9016 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, String_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ValidDigit(System.Char,System.Boolean)
 bool Int32_ValidDigit_m9017 (Object_t * __this/* static, unused */, uint16_t ___e, bool ___allowHex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Int32::GetFormatException()
 Exception_t115 * Int32_GetFormatException_m9018 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Int32&,System.Exception&)
 bool Int32_Parse_m9019 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___fp, bool ___tryParse, int32_t* ___result, Exception_t115 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
 int32_t Int32_Parse_m7885 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 int32_t Int32_Parse_m9020 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
 bool Int32_TryParse_m9021 (Object_t * __this/* static, unused */, String_t* ___s, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
 bool Int32_TryParse_m7696 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
 String_t* Int32_ToString_m6269 (int32_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.IFormatProvider)
 String_t* Int32_ToString_m8888 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
 String_t* Int32_ToString_m7880 (int32_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
 String_t* Int32_ToString_m8891 (int32_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Int32::GetTypeCode()
 int32_t Int32_GetTypeCode_m9022 (int32_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
