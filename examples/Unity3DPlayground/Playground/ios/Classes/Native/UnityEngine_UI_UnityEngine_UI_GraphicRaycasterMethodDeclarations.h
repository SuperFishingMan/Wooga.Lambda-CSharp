﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t280;
// UnityEngine.Canvas
struct Canvas_t269;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t173;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t278;
// UnityEngine.UI.Graphic
struct Graphic_t273;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
 void GraphicRaycaster__ctor_m975 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
 void GraphicRaycaster__cctor_m976 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
 int32_t GraphicRaycaster_get_sortOrderPriority_m977 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
 int32_t GraphicRaycaster_get_renderOrderPriority_m978 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
 bool GraphicRaycaster_get_ignoreReversedGraphics_m979 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
 void GraphicRaycaster_set_ignoreReversedGraphics_m980 (GraphicRaycaster_t280 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
 int32_t GraphicRaycaster_get_blockingObjects_m981 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
 void GraphicRaycaster_set_blockingObjects_m982 (GraphicRaycaster_t280 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
 Canvas_t269 * GraphicRaycaster_get_canvas_m983 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void GraphicRaycaster_Raycast_m984 (GraphicRaycaster_t280 * __this, PointerEventData_t4 * ___eventData, List_1_t173 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
 Camera_t42 * GraphicRaycaster_get_eventCamera_m985 (GraphicRaycaster_t280 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
 void GraphicRaycaster_Raycast_m986 (Object_t * __this/* static, unused */, Canvas_t269 * ___canvas, Camera_t42 * ___eventCamera, Vector2_t25  ___pointerPosition, List_1_t278 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__6(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
 int32_t GraphicRaycaster_U3CRaycastU3Em__6_m987 (Object_t * __this/* static, unused */, Graphic_t273 * ___g1, Graphic_t273 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
