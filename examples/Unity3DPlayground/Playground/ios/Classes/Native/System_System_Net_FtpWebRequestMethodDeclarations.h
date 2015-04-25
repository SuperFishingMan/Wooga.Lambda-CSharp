﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t2992;
// System.Uri
struct Uri_t2985;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2993;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
 void FtpWebRequest__ctor_m6699 (FtpWebRequest_t2992 * __this, Uri_t2985 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
 void FtpWebRequest__cctor_m6700 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
 bool FtpWebRequest_U3CcallbackU3Em__B_m6701 (Object_t * __this/* static, unused */, Object_t * ___sender, X509Certificate_t2983 * ___certificate, X509Chain_t2993 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
