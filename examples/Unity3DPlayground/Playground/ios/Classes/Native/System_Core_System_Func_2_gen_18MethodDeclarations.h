﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>>
struct Func_2_t5468;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>
struct Either_2_t5451;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
#define Func_2__ctor_m21703(__this, ___object, ___method, method) (void)Func_2__ctor_m16592_gshared((Func_2_t4748 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// TResult System.Func`2<System.Object,Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>>::Invoke(T)
#define Func_2_Invoke_m21704(__this, ___arg1, method) (Either_2_t5451 *)Func_2_Invoke_m16594_gshared((Func_2_t4748 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m21705(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m16596_gshared((Func_2_t4748 *)__this, (Object_t *)___arg1, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,Wooga.Lambda.Control.Monad.Either`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m21706(__this, ___result, method) (Either_2_t5451 *)Func_2_EndInvoke_m16598_gshared((Func_2_t4748 *)__this, (Object_t *)___result, method)
