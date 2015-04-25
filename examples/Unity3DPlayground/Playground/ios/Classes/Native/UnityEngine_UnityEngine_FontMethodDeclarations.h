﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t260;
// UnityEngine.Material
struct Material_t125;
// System.Action`1<UnityEngine.Font>
struct Action_1_t440;

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
 void Font_add_textureRebuilt_m1972 (Object_t * __this/* static, unused */, Action_1_t440 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
 void Font_remove_textureRebuilt_m5933 (Object_t * __this/* static, unused */, Action_1_t440 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
 Material_t125 * Font_get_material_m2314 (Font_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
 bool Font_HasCharacter_m2168 (Font_t260 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
 void Font_InvokeTextureRebuilt_Internal_m5934 (Object_t * __this/* static, unused */, Font_t260 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
 bool Font_get_dynamic_m2316 (Font_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
 int32_t Font_get_fontSize_m2318 (Font_t260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
