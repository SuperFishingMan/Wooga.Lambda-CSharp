﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3743;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t3747;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
 void RealProxy__ctor_m11833 (RealProxy_t3743 * __this, Type_t * ___classToProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
 void RealProxy__ctor_m11834 (RealProxy_t3743 * __this, Type_t * ___classToProxy, ClientIdentity_t3747 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
 void RealProxy__ctor_m11835 (RealProxy_t3743 * __this, Type_t * ___classToProxy, IntPtr_t31 ___stub, Object_t * ___stubData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
 Type_t * RealProxy_InternalGetProxyType_m11836 (Object_t * __this/* static, unused */, Object_t * ___transparentProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
 Type_t * RealProxy_GetProxiedType_m11837 (RealProxy_t3743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
 Object_t * RealProxy_InternalGetTransparentProxy_m11838 (RealProxy_t3743 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
 Object_t * RealProxy_GetTransparentProxy_m11839 (RealProxy_t3743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
 void RealProxy_SetTargetDomain_m11840 (RealProxy_t3743 * __this, int32_t ___domainId, MethodInfo* method) IL2CPP_METHOD_ATTR;
