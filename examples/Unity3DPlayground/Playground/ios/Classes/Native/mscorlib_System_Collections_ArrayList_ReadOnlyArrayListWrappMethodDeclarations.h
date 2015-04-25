﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t3528;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.Collections.IComparer
struct IComparer_t925;

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ReadOnlyArrayListWrapper__ctor_m10358 (ReadOnlyArrayListWrapper_t3528 * __this, ArrayList_t2972 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
 String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m10359 (ReadOnlyArrayListWrapper_t3528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
 bool ReadOnlyArrayListWrapper_get_IsReadOnly_m10360 (ReadOnlyArrayListWrapper_t3528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
 Object_t * ReadOnlyArrayListWrapper_get_Item_m10361 (ReadOnlyArrayListWrapper_t3528 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
 void ReadOnlyArrayListWrapper_set_Item_m10362 (ReadOnlyArrayListWrapper_t3528 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
 void ReadOnlyArrayListWrapper_Sort_m10363 (ReadOnlyArrayListWrapper_t3528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
 void ReadOnlyArrayListWrapper_Sort_m10364 (ReadOnlyArrayListWrapper_t3528 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
