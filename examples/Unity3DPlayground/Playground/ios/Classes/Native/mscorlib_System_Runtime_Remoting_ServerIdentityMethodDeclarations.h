﻿#pragma once

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2063;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2371;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
 void ServerIdentity__ctor_m10330 (ServerIdentity_t2063 * __this, String_t* ___objectUri, Context_t2332 * ___context, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
 Type_t * ServerIdentity_get_ObjectType_m10331 (ServerIdentity_t2063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
 ObjRef_t2371 * ServerIdentity_CreateObjRef_m10332 (ServerIdentity_t2063 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
