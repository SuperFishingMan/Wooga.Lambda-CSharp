﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t3456;
// Mono.Math.BigInteger
struct BigInteger_t3455;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
 void SequentialSearchPrimeGeneratorBase__ctor_m9895 (SequentialSearchPrimeGeneratorBase_t3456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
 BigInteger_t3455 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m9896 (SequentialSearchPrimeGeneratorBase_t3456 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
 BigInteger_t3455 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m9897 (SequentialSearchPrimeGeneratorBase_t3456 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
 BigInteger_t3455 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m9898 (SequentialSearchPrimeGeneratorBase_t3456 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
 bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m9899 (SequentialSearchPrimeGeneratorBase_t3456 * __this, BigInteger_t3455 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
