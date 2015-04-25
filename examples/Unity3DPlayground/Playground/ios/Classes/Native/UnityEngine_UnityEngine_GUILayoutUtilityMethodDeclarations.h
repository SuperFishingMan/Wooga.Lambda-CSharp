﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t2508;
// UnityEngine.GUIStyle
struct GUIStyle_t2502;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2506;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2509;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2505;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
 void GUILayoutUtility__cctor_m5335 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
 LayoutCache_t2506 * GUILayoutUtility_SelectIDList_m5336 (Object_t * __this/* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
 void GUILayoutUtility_Begin_m5337 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutUtility_BeginWindow_m5338 (Object_t * __this/* static, unused */, int32_t ___windowID, GUIStyle_t2502 * ___style, GUILayoutOptionU5BU5D_t2509* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
 void GUILayoutUtility_Layout_m5339 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
 void GUILayoutUtility_LayoutFromEditorWindow_m5340 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutFreeGroup_m5341 (Object_t * __this/* static, unused */, GUILayoutGroup_t2505 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutSingleGroup_m5342 (Object_t * __this/* static, unused */, GUILayoutGroup_t2505 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
 Rect_t276  GUILayoutUtility_Internal_GetWindowRect_m5343 (Object_t * __this/* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
 void GUILayoutUtility_Internal_MoveWindow_m5344 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t276  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
 void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5345 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t276 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
 GUIStyle_t2502 * GUILayoutUtility_get_spaceStyle_m5346 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
