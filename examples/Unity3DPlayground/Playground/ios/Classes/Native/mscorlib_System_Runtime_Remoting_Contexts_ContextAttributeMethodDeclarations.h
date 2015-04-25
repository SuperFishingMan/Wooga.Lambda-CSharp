﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.ContextAttribute
struct ContextAttribute_t3702;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t3703;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3704;

// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
 void ContextAttribute__ctor_m11676 (ContextAttribute_t3702 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
 String_t* ContextAttribute_get_Name_m11677 (ContextAttribute_t3702 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
 bool ContextAttribute_Equals_m11678 (ContextAttribute_t3702 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
 int32_t ContextAttribute_GetHashCode_m11679 (ContextAttribute_t3702 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ContextAttribute_GetPropertiesForNewContext_m11680 (ContextAttribute_t3702 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ContextAttribute_IsContextOK_m11681 (ContextAttribute_t3702 * __this, Context_t3704 * ___ctx, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
