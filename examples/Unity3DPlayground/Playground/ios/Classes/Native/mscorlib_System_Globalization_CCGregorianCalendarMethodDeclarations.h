﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CCGregorianCalendar
struct CCGregorianCalendar_t3555;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Boolean System.Globalization.CCGregorianCalendar::is_leap_year(System.Int32)
 bool CCGregorianCalendar_is_leap_year_m10593 (Object_t * __this/* static, unused */, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::fixed_from_dmy(System.Int32,System.Int32,System.Int32)
 int32_t CCGregorianCalendar_fixed_from_dmy_m10594 (Object_t * __this/* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::year_from_fixed(System.Int32)
 int32_t CCGregorianCalendar_year_from_fixed_m10595 (Object_t * __this/* static, unused */, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::my_from_fixed(System.Int32&,System.Int32&,System.Int32)
 void CCGregorianCalendar_my_from_fixed_m10596 (Object_t * __this/* static, unused */, int32_t* ___month, int32_t* ___year, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::dmy_from_fixed(System.Int32&,System.Int32&,System.Int32&,System.Int32)
 void CCGregorianCalendar_dmy_from_fixed_m10597 (Object_t * __this/* static, unused */, int32_t* ___day, int32_t* ___month, int32_t* ___year, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::month_from_fixed(System.Int32)
 int32_t CCGregorianCalendar_month_from_fixed_m10598 (Object_t * __this/* static, unused */, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::day_from_fixed(System.Int32)
 int32_t CCGregorianCalendar_day_from_fixed_m10599 (Object_t * __this/* static, unused */, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetDayOfMonth(System.DateTime)
 int32_t CCGregorianCalendar_GetDayOfMonth_m10600 (Object_t * __this/* static, unused */, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetMonth(System.DateTime)
 int32_t CCGregorianCalendar_GetMonth_m10601 (Object_t * __this/* static, unused */, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetYear(System.DateTime)
 int32_t CCGregorianCalendar_GetYear_m10602 (Object_t * __this/* static, unused */, DateTime_t2501  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
