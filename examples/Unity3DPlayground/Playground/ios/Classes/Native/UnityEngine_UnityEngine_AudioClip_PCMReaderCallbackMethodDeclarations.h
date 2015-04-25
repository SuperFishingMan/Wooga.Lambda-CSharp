﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t2559;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t93;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
 void PCMReaderCallback__ctor_m5839 (PCMReaderCallback_t2559 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
 void PCMReaderCallback_Invoke_m5840 (PCMReaderCallback_t2559 * __this, SingleU5BU5D_t93* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
 Object_t * PCMReaderCallback_BeginInvoke_m5841 (PCMReaderCallback_t2559 * __this, SingleU5BU5D_t93* ___data, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
 void PCMReaderCallback_EndInvoke_m5842 (PCMReaderCallback_t2559 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
