﻿#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t3299;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t3316  : public Object_t
{
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t3299 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t961* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t961* ___serverWriteMAC_2;
};
