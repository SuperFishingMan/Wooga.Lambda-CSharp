﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t3043;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t3038;
// System.Collections.IEnumerable
struct IEnumerable_t1668;

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
 void X509ChainElementEnumerator__ctor_m6937 (X509ChainElementEnumerator_t3043 * __this, Object_t * ___enumerable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_m6938 (X509ChainElementEnumerator_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::get_Current()
 X509ChainElement_t3038 * X509ChainElementEnumerator_get_Current_m6939 (X509ChainElementEnumerator_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
 bool X509ChainElementEnumerator_MoveNext_m6940 (X509ChainElementEnumerator_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
 void X509ChainElementEnumerator_Reset_m6941 (X509ChainElementEnumerator_t3043 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
