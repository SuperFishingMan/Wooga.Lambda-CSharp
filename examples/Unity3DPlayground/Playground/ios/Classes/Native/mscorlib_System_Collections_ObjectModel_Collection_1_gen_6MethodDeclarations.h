﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Component>
struct Collection_1_t4831;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t118;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// UnityEngine.Component[]
struct ComponentU5BU5D_t4822;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t4824;
// System.Collections.Generic.IList`1<UnityEngine.Component>
struct IList_1_t4830;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m17219(__this, method) (void)Collection_1__ctor_m15196_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17220(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15197_gshared((Collection_1_t4562 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m17221(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15198_gshared((Collection_1_t4562 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m17222(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15199_gshared((Collection_1_t4562 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m17223(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15200_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m17224(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15201_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m17225(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15202_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m17226(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15203_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m17227(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15204_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m17228(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15205_gshared((Collection_1_t4562 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m17229(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15206_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m17230(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15207_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m17231(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15208_gshared((Collection_1_t4562 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m17232(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15209_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m17233(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15210_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Add(T)
#define Collection_1_Add_m17234(__this, ___item, method) (void)Collection_1_Add_m15211_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Clear()
#define Collection_1_Clear_m17235(__this, method) (void)Collection_1_Clear_m15212_gshared((Collection_1_t4562 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ClearItems()
#define Collection_1_ClearItems_m17236(__this, method) (void)Collection_1_ClearItems_m15213_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Contains(T)
#define Collection_1_Contains_m17237(__this, ___item, method) (bool)Collection_1_Contains_m15214_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m17238(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15215_gshared((Collection_1_t4562 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::GetEnumerator()
#define Collection_1_GetEnumerator_m17239(__this, method) (Object_t*)Collection_1_GetEnumerator_m15216_gshared((Collection_1_t4562 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IndexOf(T)
#define Collection_1_IndexOf_m17240(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15217_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Insert(System.Int32,T)
#define Collection_1_Insert_m17241(__this, ___index, ___item, method) (void)Collection_1_Insert_m15218_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m17242(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15219_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::Remove(T)
#define Collection_1_Remove_m17243(__this, ___item, method) (bool)Collection_1_Remove_m15220_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m17244(__this, ___index, method) (void)Collection_1_RemoveAt_m15221_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m17245(__this, ___index, method) (void)Collection_1_RemoveItem_m15222_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Count()
#define Collection_1_get_Count_m17246(__this, method) (int32_t)Collection_1_get_Count_m15223_gshared((Collection_1_t4562 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::get_Item(System.Int32)
#define Collection_1_get_Item_m17247(__this, ___index, method) (Component_t118 *)Collection_1_get_Item_m15224_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m17248(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15225_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m17249(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15226_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m17250(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15227_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m17251(__this/* static, unused */, ___item, method) (Component_t118 *)Collection_1_ConvertItem_m15228_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m17252(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15229_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m17253(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15230_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Component>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m17254(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15231_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
