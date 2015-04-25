﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t3800;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
 void SerializationInfoEnumerator__ctor_m12037 (SerializationInfoEnumerator_t3800 * __this, ArrayList_t2972 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m12038 (SerializationInfoEnumerator_t3800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
 SerializationEntry_t3798  SerializationInfoEnumerator_get_Current_m12039 (SerializationInfoEnumerator_t3800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
 String_t* SerializationInfoEnumerator_get_Name_m12040 (SerializationInfoEnumerator_t3800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
 Object_t * SerializationInfoEnumerator_get_Value_m12041 (SerializationInfoEnumerator_t3800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
 bool SerializationInfoEnumerator_MoveNext_m12042 (SerializationInfoEnumerator_t3800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
 void SerializationInfoEnumerator_Reset_m12043 (SerializationInfoEnumerator_t3800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
