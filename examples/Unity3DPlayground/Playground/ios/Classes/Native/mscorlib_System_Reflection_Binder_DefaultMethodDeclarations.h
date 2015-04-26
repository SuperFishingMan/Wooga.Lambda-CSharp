﻿#pragma once

// System.Reflection.Binder/Default
struct Default_t2263;
// System.Reflection.MethodBase
struct MethodBase_t1367;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t2264;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1363;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.String[]
struct StringU5BU5D_t150;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1229;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1368;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1677;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2265;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder/Default::.ctor()
 void Default__ctor_m9799 (Default_t2263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
 MethodBase_t1367 * Default_BindToMethod_m9800 (Default_t2263 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t2264* ___match, ObjectU5BU5D_t149** ___args, ParameterModifierU5BU5D_t1363* ___modifiers, CultureInfo_t1365 * ___culture, StringU5BU5D_t150* ___names, Object_t ** ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
 void Default_ReorderParameters_m9801 (Default_t2263 * __this, StringU5BU5D_t150* ___names, ObjectU5BU5D_t149** ___args, MethodBase_t1367 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
 bool Default_IsArrayAssignable_m9802 (Object_t * __this/* static, unused */, Type_t * ___object_type, Type_t * ___target_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
 Object_t * Default_ChangeType_m9803 (Default_t2263 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
 void Default_ReorderArgumentArray_m9804 (Default_t2263 * __this, ObjectU5BU5D_t149** ___args, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
 bool Default_check_type_m9805 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
 bool Default_check_arguments_m9806 (Object_t * __this/* static, unused */, TypeU5BU5D_t1229* ___types, ParameterInfoU5BU5D_t1368* ___args, bool ___allowByRefMatch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
 MethodBase_t1367 * Default_SelectMethod_m9807 (Default_t2263 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t2264* ___match, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
 MethodBase_t1367 * Default_SelectMethod_m9808 (Default_t2263 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t2264* ___match, TypeU5BU5D_t1229* ___types, ParameterModifierU5BU5D_t1363* ___modifiers, bool ___allowByRefMatch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
 MethodBase_t1367 * Default_GetBetterMethod_m9809 (Default_t2263 * __this, MethodBase_t1367 * ___m1, MethodBase_t1367 * ___m2, TypeU5BU5D_t1229* ___types, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
 int32_t Default_CompareCloserType_m9810 (Default_t2263 * __this, Type_t * ___t1, Type_t * ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
 PropertyInfo_t1677 * Default_SelectProperty_m9811 (Default_t2263 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t2265* ___match, Type_t * ___returnType, TypeU5BU5D_t1229* ___indexes, ParameterModifierU5BU5D_t1363* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
 int32_t Default_check_arguments_with_score_m9812 (Object_t * __this/* static, unused */, TypeU5BU5D_t1229* ___types, ParameterInfoU5BU5D_t1368* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
 int32_t Default_check_type_with_score_m9813 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
