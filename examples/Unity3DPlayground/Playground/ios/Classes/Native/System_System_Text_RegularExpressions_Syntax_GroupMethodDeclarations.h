﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t3105;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3107;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3110;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3111;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
 void Group__ctor_m7311 (Group_t3105 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
 void Group_AppendExpression_m7312 (Group_t3105 * __this, Expression_t3107 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Group_Compile_m7313 (Group_t3105 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
 void Group_GetWidth_m7314 (Group_t3105 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
 AnchorInfo_t3111 * Group_GetAnchorInfo_m7315 (Group_t3105 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
