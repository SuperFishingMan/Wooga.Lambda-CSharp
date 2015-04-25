﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager
struct ServicePointManager_t3006;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t3005;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2991;
// System.Net.ServicePoint
struct ServicePoint_t2982;
// System.Uri
struct Uri_t2985;
// System.Net.IWebProxy
struct IWebProxy_t2987;
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.cctor()
 void ServicePointManager__cctor_m6768 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
 Object_t * ServicePointManager_get_CertificatePolicy_m6769 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
 bool ServicePointManager_get_CheckCertificateRevocationList_m6770 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
 int32_t ServicePointManager_get_SecurityProtocol_m6771 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
 RemoteCertificateValidationCallback_t2991 * ServicePointManager_get_ServerCertificateValidationCallback_m6772 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
 ServicePoint_t2982 * ServicePointManager_FindServicePoint_m6773 (Object_t * __this/* static, unused */, Uri_t2985 * ___address, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
 void ServicePointManager_RecycleServicePoints_m6774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
