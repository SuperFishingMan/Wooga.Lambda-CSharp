﻿#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct CrossAppDomainSink_t3711  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;
};
struct CrossAppDomainSink_t3711_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t2960 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t2624 * ___processMessageMethod_1;
};
