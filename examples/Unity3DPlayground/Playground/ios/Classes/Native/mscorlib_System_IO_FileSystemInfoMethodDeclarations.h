﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileSystemInfo
struct FileSystemInfo_t3570;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileSystemInfo::.ctor()
 void FileSystemInfo__ctor_m10873 (FileSystemInfo_t3570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileSystemInfo__ctor_m10874 (FileSystemInfo_t3570 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileSystemInfo_GetObjectData_m10875 (FileSystemInfo_t3570 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileSystemInfo::get_Exists()
// System.String System.IO.FileSystemInfo::get_FullName()
 String_t* FileSystemInfo_get_FullName_m10876 (FileSystemInfo_t3570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
 void FileSystemInfo_Refresh_m10877 (FileSystemInfo_t3570 * __this, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
 void FileSystemInfo_InternalRefresh_m10878 (FileSystemInfo_t3570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
 void FileSystemInfo_CheckPath_m10879 (FileSystemInfo_t3570 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
