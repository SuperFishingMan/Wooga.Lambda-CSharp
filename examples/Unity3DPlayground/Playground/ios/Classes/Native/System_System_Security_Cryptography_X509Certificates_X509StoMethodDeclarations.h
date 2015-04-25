﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t3039;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t3029;
// Mono.Security.X509.X509Stores
struct X509Stores_t3055;
// Mono.Security.X509.X509Store
struct X509Store_t3054;
// System.Security.Cryptography.X509Certificates.StoreName
#include "System_System_Security_Cryptography_X509Certificates_StoreNa.h"
// System.Security.Cryptography.X509Certificates.StoreLocation
#include "System_System_Security_Cryptography_X509Certificates_StoreLo.h"
// System.Security.Cryptography.X509Certificates.OpenFlags
#include "System_System_Security_Cryptography_X509Certificates_OpenFla.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
 void X509Store__ctor_m6986 (X509Store_t3039 * __this, int32_t ___storeName, int32_t ___storeLocation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
 X509Certificate2Collection_t3029 * X509Store_get_Certificates_m6987 (X509Store_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
 X509Stores_t3055 * X509Store_get_Factory_m6988 (X509Store_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
 X509Store_t3054 * X509Store_get_Store_m6989 (X509Store_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
 void X509Store_Close_m6990 (X509Store_t3039 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
 void X509Store_Open_m6991 (X509Store_t3039 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
