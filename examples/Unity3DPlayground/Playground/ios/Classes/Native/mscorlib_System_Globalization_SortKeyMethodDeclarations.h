﻿#pragma once

// System.Globalization.SortKey
struct SortKey_t2091;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Globalization.CompareOptions)
 void SortKey__ctor_m8476 (SortKey_t2091 * __this, int32_t ___lcid, String_t* ___source, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Byte[],System.Globalization.CompareOptions,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void SortKey__ctor_m8477 (SortKey_t2091 * __this, int32_t ___lcid, String_t* ___source, ByteU5BU5D_t1071* ___buffer, int32_t ___opt, int32_t ___lv1Length, int32_t ___lv2Length, int32_t ___lv3Length, int32_t ___kanaSmallLength, int32_t ___markTypeLength, int32_t ___katakanaLength, int32_t ___kanaWidthLength, int32_t ___identLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::Compare(System.Globalization.SortKey,System.Globalization.SortKey)
 int32_t SortKey_Compare_m8478 (Object_t * __this/* static, unused */, SortKey_t2091 * ___sortkey1, SortKey_t2091 * ___sortkey2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::get_OriginalString()
 String_t* SortKey_get_OriginalString_m8479 (SortKey_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Globalization.SortKey::get_KeyData()
 ByteU5BU5D_t1071* SortKey_get_KeyData_m8480 (SortKey_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.SortKey::Equals(System.Object)
 bool SortKey_Equals_m8481 (SortKey_t2091 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::GetHashCode()
 int32_t SortKey_GetHashCode_m8482 (SortKey_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::ToString()
 String_t* SortKey_ToString_m8483 (SortKey_t2091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
