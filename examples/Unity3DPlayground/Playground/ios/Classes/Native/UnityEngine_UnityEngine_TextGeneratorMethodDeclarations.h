﻿#pragma once

// UnityEngine.TextGenerator
struct TextGenerator_t318;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t485;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t469;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t467;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t265;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t317;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t1221;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t1222;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1219;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1220;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t280;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"

// System.Void UnityEngine.TextGenerator::.ctor()
 void TextGenerator__ctor_m2127 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
 void TextGenerator__ctor_m2318 (TextGenerator_t318 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
 void TextGenerator_System_IDisposable_Dispose_m3821 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
 void TextGenerator_Init_m3822 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
 void TextGenerator_Dispose_cpp_m3823 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
 bool TextGenerator_Populate_Internal_m3824 (TextGenerator_t318 * __this, String_t* ___str, Font_t265 * ___font, Color_t168  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t25  ___extents, Vector2_t25  ___pivot, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
 bool TextGenerator_Populate_Internal_cpp_m3825 (TextGenerator_t318 * __this, String_t* ___str, Font_t265 * ___font, Color_t168  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
 bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m3826 (Object_t * __this/* static, unused */, TextGenerator_t318 * ___self, String_t* ___str, Font_t265 * ___font, Color_t168 * ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
 Rect_t281  TextGenerator_get_rectExtents_m2191 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
 int32_t TextGenerator_get_vertexCount_m3827 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
 void TextGenerator_GetVerticesInternal_m3828 (TextGenerator_t318 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
 UIVertexU5BU5D_t317* TextGenerator_GetVerticesArray_m3829 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
 int32_t TextGenerator_get_characterCount_m3830 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
 int32_t TextGenerator_get_characterCountVisible_m2167 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
 void TextGenerator_GetCharactersInternal_m3831 (TextGenerator_t318 * __this, Object_t * ___characters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
 UICharInfoU5BU5D_t1221* TextGenerator_GetCharactersArray_m3832 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
 int32_t TextGenerator_get_lineCount_m2166 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
 void TextGenerator_GetLinesInternal_m3833 (TextGenerator_t318 * __this, Object_t * ___lines, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
 UILineInfoU5BU5D_t1222* TextGenerator_GetLinesArray_m3834 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
 int32_t TextGenerator_get_fontSizeUsedForBestFit_m2215 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
 void TextGenerator_Finalize_m3835 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
 TextGenerationSettings_t352  TextGenerator_ValidatedSettings_m3836 (TextGenerator_t318 * __this, TextGenerationSettings_t352  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
 void TextGenerator_Invalidate_m2327 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
 void TextGenerator_GetCharacters_m3837 (TextGenerator_t318 * __this, List_1_t1219 * ___characters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
 void TextGenerator_GetLines_m3838 (TextGenerator_t318 * __this, List_1_t1220 * ___lines, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void TextGenerator_GetVertices_m3839 (TextGenerator_t318 * __this, List_1_t280 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
 float TextGenerator_GetPreferredWidth_m2325 (TextGenerator_t318 * __this, String_t* ___str, TextGenerationSettings_t352  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
 float TextGenerator_GetPreferredHeight_m2326 (TextGenerator_t318 * __this, String_t* ___str, TextGenerationSettings_t352  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
 bool TextGenerator_Populate_m2189 (TextGenerator_t318 * __this, String_t* ___str, TextGenerationSettings_t352  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
 bool TextGenerator_PopulateAlways_m3840 (TextGenerator_t318 * __this, String_t* ___str, TextGenerationSettings_t352  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
 Object_t* TextGenerator_get_verts_m2329 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
 Object_t* TextGenerator_get_characters_m2168 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
 Object_t* TextGenerator_get_lines_m2164 (TextGenerator_t318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
