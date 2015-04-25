﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextReader
struct TextReader_t3499;
// System.Char[]
struct CharU5BU5D_t311;
// System.String
struct String_t;

// System.Void System.IO.TextReader::.ctor()
 void TextReader__ctor_m11012 (TextReader_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
 void TextReader__cctor_m11013 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
 void TextReader_Dispose_m11014 (TextReader_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
 void TextReader_Dispose_m11015 (TextReader_t3499 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
 int32_t TextReader_Peek_m11016 (TextReader_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
 int32_t TextReader_Read_m11017 (TextReader_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
 int32_t TextReader_Read_m11018 (TextReader_t3499 * __this, CharU5BU5D_t311* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
 String_t* TextReader_ReadLine_m11019 (TextReader_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
 String_t* TextReader_ReadToEnd_m11020 (TextReader_t3499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
 TextReader_t3499 * TextReader_Synchronized_m11021 (Object_t * __this/* static, unused */, TextReader_t3499 * ___reader, MethodInfo* method) IL2CPP_METHOD_ATTR;
