﻿#pragma once

// UnityEngine.Matrix4x4
struct Matrix4x4_t478;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
 float Matrix4x4_get_Item_m3451 (Matrix4x4_t478 * __this, int32_t ___row, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
 void Matrix4x4_set_Item_m3452 (Matrix4x4_t478 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
 float Matrix4x4_get_Item_m3453 (Matrix4x4_t478 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
 void Matrix4x4_set_Item_m3454 (Matrix4x4_t478 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
 int32_t Matrix4x4_GetHashCode_m3455 (Matrix4x4_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
 bool Matrix4x4_Equals_m3456 (Matrix4x4_t478 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
 Matrix4x4_t478  Matrix4x4_Inverse_m3457 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
 Matrix4x4_t478  Matrix4x4_INTERNAL_CALL_Inverse_m3458 (Object_t * __this/* static, unused */, Matrix4x4_t478 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
 Matrix4x4_t478  Matrix4x4_Transpose_m3459 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
 Matrix4x4_t478  Matrix4x4_INTERNAL_CALL_Transpose_m3460 (Object_t * __this/* static, unused */, Matrix4x4_t478 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
 bool Matrix4x4_Invert_m3461 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___inMatrix, Matrix4x4_t478 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
 bool Matrix4x4_INTERNAL_CALL_Invert_m3462 (Object_t * __this/* static, unused */, Matrix4x4_t478 * ___inMatrix, Matrix4x4_t478 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
 Matrix4x4_t478  Matrix4x4_get_inverse_m3463 (Matrix4x4_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
 Matrix4x4_t478  Matrix4x4_get_transpose_m3464 (Matrix4x4_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
 bool Matrix4x4_get_isIdentity_m3465 (Matrix4x4_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
 Vector4_t299  Matrix4x4_GetColumn_m3466 (Matrix4x4_t478 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
 Vector4_t299  Matrix4x4_GetRow_m3467 (Matrix4x4_t478 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
 void Matrix4x4_SetColumn_m3468 (Matrix4x4_t478 * __this, int32_t ___i, Vector4_t299  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
 void Matrix4x4_SetRow_m3469 (Matrix4x4_t478 * __this, int32_t ___i, Vector4_t299  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
 Vector3_t10  Matrix4x4_MultiplyPoint_m3470 (Matrix4x4_t478 * __this, Vector3_t10  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
 Vector3_t10  Matrix4x4_MultiplyPoint3x4_m2271 (Matrix4x4_t478 * __this, Vector3_t10  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
 Vector3_t10  Matrix4x4_MultiplyVector_m3471 (Matrix4x4_t478 * __this, Vector3_t10  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
 Matrix4x4_t478  Matrix4x4_Scale_m3472 (Object_t * __this/* static, unused */, Vector3_t10  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
 Matrix4x4_t478  Matrix4x4_get_zero_m3473 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
 Matrix4x4_t478  Matrix4x4_get_identity_m3474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
 void Matrix4x4_SetTRS_m3475 (Matrix4x4_t478 * __this, Vector3_t10  ___pos, Quaternion_t74  ___q, Vector3_t10  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
 Matrix4x4_t478  Matrix4x4_TRS_m3476 (Object_t * __this/* static, unused */, Vector3_t10  ___pos, Quaternion_t74  ___q, Vector3_t10  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
 Matrix4x4_t478  Matrix4x4_INTERNAL_CALL_TRS_m3477 (Object_t * __this/* static, unused */, Vector3_t10 * ___pos, Quaternion_t74 * ___q, Vector3_t10 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
 String_t* Matrix4x4_ToString_m3478 (Matrix4x4_t478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
 String_t* Matrix4x4_ToString_m3479 (Matrix4x4_t478 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
 Matrix4x4_t478  Matrix4x4_Ortho_m3480 (Object_t * __this/* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
 Matrix4x4_t478  Matrix4x4_Perspective_m3481 (Object_t * __this/* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 Matrix4x4_t478  Matrix4x4_op_Multiply_m3482 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___lhs, Matrix4x4_t478  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
 Vector4_t299  Matrix4x4_op_Multiply_m3483 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___lhs, Vector4_t299  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 bool Matrix4x4_op_Equality_m3484 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___lhs, Matrix4x4_t478  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 bool Matrix4x4_op_Inequality_m3485 (Object_t * __this/* static, unused */, Matrix4x4_t478  ___lhs, Matrix4x4_t478  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
