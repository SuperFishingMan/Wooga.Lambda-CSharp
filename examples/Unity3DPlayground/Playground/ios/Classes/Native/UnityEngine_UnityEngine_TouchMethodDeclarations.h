﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t120;
struct Touch_t120_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m1860 (Touch_t120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t25  Touch_get_position_m369 (Touch_t120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m1861 (Touch_t120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t120_marshal(const Touch_t120& unmarshaled, Touch_t120_marshaled& marshaled);
void Touch_t120_marshal_back(const Touch_t120_marshaled& marshaled, Touch_t120& unmarshaled);
void Touch_t120_marshal_cleanup(Touch_t120_marshaled& marshaled);
