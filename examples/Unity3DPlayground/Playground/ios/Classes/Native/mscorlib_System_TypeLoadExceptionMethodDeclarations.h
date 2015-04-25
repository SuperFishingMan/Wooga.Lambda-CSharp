﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeLoadException
struct TypeLoadException_t3926;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeLoadException::.ctor()
 void TypeLoadException__ctor_m13491 (TypeLoadException_t3926 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
 void TypeLoadException__ctor_m13492 (TypeLoadException_t3926 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TypeLoadException__ctor_m13493 (TypeLoadException_t3926 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeLoadException::get_Message()
 String_t* TypeLoadException_get_Message_m13494 (TypeLoadException_t3926 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TypeLoadException_GetObjectData_m13495 (TypeLoadException_t3926 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
