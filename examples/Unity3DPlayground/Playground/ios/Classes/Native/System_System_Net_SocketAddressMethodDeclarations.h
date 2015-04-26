﻿#pragma once

// System.Net.SocketAddress
struct SocketAddress_t1589;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
 void SocketAddress__ctor_m5192 (SocketAddress_t1589 * __this, int32_t ___family, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
 int32_t SocketAddress_get_Family_m5193 (SocketAddress_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::get_Size()
 int32_t SocketAddress_get_Size_m5194 (SocketAddress_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.SocketAddress::get_Item(System.Int32)
 uint8_t SocketAddress_get_Item_m5195 (SocketAddress_t1589 * __this, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.SocketAddress::set_Item(System.Int32,System.Byte)
 void SocketAddress_set_Item_m5196 (SocketAddress_t1589 * __this, int32_t ___offset, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.SocketAddress::ToString()
 String_t* SocketAddress_ToString_m5197 (SocketAddress_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.SocketAddress::Equals(System.Object)
 bool SocketAddress_Equals_m5198 (SocketAddress_t1589 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::GetHashCode()
 int32_t SocketAddress_GetHashCode_m5199 (SocketAddress_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
