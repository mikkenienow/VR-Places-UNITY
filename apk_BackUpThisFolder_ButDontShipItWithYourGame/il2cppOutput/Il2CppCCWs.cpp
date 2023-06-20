#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E;
// System.Runtime.InteropServices.ComTypes.IStream
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
// System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Drawing.ComIStreamMarshaler/IStreamVtbl
struct IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E;
// System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E  : public RuntimeObject
{
	// System.IO.Stream System.Drawing.ComIStreamWrapper::baseStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseStream_0;
	// System.Int64 System.Drawing.ComIStreamWrapper::position
	int64_t ___position_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Runtime.InteropServices.ComTypes.FILETIME
struct FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 
{
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwLowDateTime
	int32_t ___dwLowDateTime_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwHighDateTime
	int32_t ___dwHighDateTime_1;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___libNewSize0) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___grfCommitFlags0) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___ppstm0) = 0;
};

// System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 
{
	// System.String System.Runtime.InteropServices.ComTypes.STATSTG::pwcsName
	String_t* ___pwcsName_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::type
	int32_t ___type_1;
	// System.Int64 System.Runtime.InteropServices.ComTypes.STATSTG::cbSize
	int64_t ___cbSize_2;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::mtime
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime_3;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::ctime
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime_4;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::atime
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime_5;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfMode
	int32_t ___grfMode_6;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfLocksSupported
	int32_t ___grfLocksSupported_7;
	// System.Guid System.Runtime.InteropServices.ComTypes.STATSTG::clsid
	Guid_t ___clsid_8;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfStateBits
	int32_t ___grfStateBits_9;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::reserved
	int32_t ___reserved_10;
};
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime_3;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime_4;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime_3;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime_4;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};

// System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C  : public RuntimeObject
{
	// System.IntPtr System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::comInterface
	intptr_t ___comInterface_0;
	// System.Drawing.ComIStreamMarshaler/IStreamVtbl System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::managedVtable
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* ___managedVtable_1;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_back(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_cleanup(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);


// System.Void System.Drawing.ComIStreamWrapper::Read(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Read_m4C6041146285EBE4CD5F6C206CB88B5EE7BB05B1 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::Write(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Write_m79D2E6B0354200D0C2CED397807CBBA33563DFB4 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::Seek(System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::SetSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_SetSize_m5963DA1AACAFECE89C0D3E6444FD8820E6B6E528 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___libNewSize0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_CopyTo_mD8F3C7CF2BD6E7D0F4F638DC677E62FA8122E1F3 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, RuntimeObject* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::Commit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Commit_mA184C65ECC3CA08CA69F1017EA135D3F1AC3E548 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int32_t ___grfCommitFlags0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::LockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::UnlockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Stat_mF4035A6DF7FE59763D440145873AC8D3FB0F7F30 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg0, int32_t ___grfStatFlag1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::Clone(System.Runtime.InteropServices.ComTypes.IStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, RuntimeObject** ___ppstm0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Read(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Read_m92D93E15422F8E7AA6FE0970A92919F39FD5E827 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Write(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Write_m2CC6ED3BBBB91C9B2DFF9312AB5CD200D8C7A236 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Seek(System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Seek_m3F200D92D11803B2279B860F73A8CD6EEED1A7B3 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::SetSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_SetSize_m0A80C7C20A343A24628B4E047EA7951625C77EA8 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___libNewSize0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_CopyTo_mEA49498C9B6A02F18A1C45AACD09F3F1FD3D6539 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, RuntimeObject* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Commit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Commit_m1CDDE6076066A37352EC8F2E570E59E0D63C7598 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int32_t ___grfCommitFlags0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Revert_m6CEE0B80317E4CEC07237902E8E81A076C2ACA49 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::LockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_LockRegion_m28C5D057ACE791F074CE96598BF713A24E07A3DB (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::UnlockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_UnlockRegion_m6A59115770B8DD8C4E6AA9A9838AA89C55FC0FDF (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Stat_m34C4C16D96E7CDEFDEFB505200A102037AD5959A (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg0, int32_t ___grfStatFlag1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Clone(System.Runtime.InteropServices.ComTypes.IStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Clone_m6D34867528FA20C62023BCE1E029E495BA408793 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, RuntimeObject** ___ppstm0, const RuntimeMethod* method) ;

// COM Callable Wrapper for System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper>, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8
{
	inline ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pv0' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pv0_empty = NULL;
		if (___pv0 != NULL)
		{
			____pv0_empty = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___cb1));
		}

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Read_m4C6041146285EBE4CD5F6C206CB88B5EE7BB05B1(__thisValue, ____pv0_empty, ___cb1, ___pcbRead2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pv0' back from managed representation
		if (____pv0_empty != NULL)
		{
			il2cpp_array_size_t _____pv0_empty_Length = (____pv0_empty)->max_length;
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_____pv0_empty_Length); i++)
			{
				(___pv0)[i] = (____pv0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pv0' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pv0_unmarshaled = NULL;
		if (___pv0 != NULL)
		{
			____pv0_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___cb1));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(___cb1); i++)
			{
				(____pv0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pv0)[i]);
			}
		}

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Write_m79D2E6B0354200D0C2CED397807CBBA33563DFB4(__thisValue, ____pv0_unmarshaled, ___cb1, ___pcbWritten2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED(__thisValue, ___dlibMove0, ___dwOrigin1, ___plibNewPosition2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___libNewSize0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_SetSize_m5963DA1AACAFECE89C0D3E6444FD8820E6B6E528(__thisValue, ___libNewSize0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pstm0' to managed representation
		RuntimeObject* ____pstm0_unmarshaled = NULL;
		if (___pstm0 != NULL)
		{
			____pstm0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pstm0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pstm0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pstm0_unmarshaled), IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, ___pstm0);
			}
		}
		else
		{
			____pstm0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_CopyTo_mD8F3C7CF2BD6E7D0F4F638DC677E62FA8122E1F3(__thisValue, ____pstm0_unmarshaled, ___cb1, ___pcbRead2, ___pcbWritten3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___grfCommitFlags0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Commit_mA184C65ECC3CA08CA69F1017EA135D3F1AC3E548(__thisValue, ___grfCommitFlags0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D(__thisValue, ___libOffset0, ___cb1, ___dwLockType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585(__thisValue, ___libOffset0, ___cb1, ___dwLockType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pstatstg0' to managed representation
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____pstatstg0_empty;
		memset((&____pstatstg0_empty), 0, sizeof(____pstatstg0_empty));

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Stat_mF4035A6DF7FE59763D440145873AC8D3FB0F7F30(__thisValue, (&____pstatstg0_empty), ___grfStatFlag1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pstatstg0' back from managed representation
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____pstatstg0_empty, *___pstatstg0);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___ppstm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppstm0' to managed representation
		RuntimeObject* ____ppstm0_empty = NULL;

		// Managed method invocation
		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3(__thisValue, (&____ppstm0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppstm0' back from managed representation
		if (____ppstm0_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____ppstm0_empty))
			{
				*___ppstm0 = il2cpp_codegen_com_query_interface<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(static_cast<Il2CppComObject*>(____ppstm0_empty));
				(*___ppstm0)->AddRef();
			}
			else
			{
				*___ppstm0 = il2cpp_codegen_com_get_or_create_ccw<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(____ppstm0_empty);
			}
		}
		else
		{
			*___ppstm0 = NULL;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper>, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8
{
	inline NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pv0' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pv0_empty = NULL;
		if (___pv0 != NULL)
		{
			____pv0_empty = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___cb1));
		}

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Read_m92D93E15422F8E7AA6FE0970A92919F39FD5E827(__thisValue, ____pv0_empty, ___cb1, ___pcbRead2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pv0' back from managed representation
		if (____pv0_empty != NULL)
		{
			il2cpp_array_size_t _____pv0_empty_Length = (____pv0_empty)->max_length;
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_____pv0_empty_Length); i++)
			{
				(___pv0)[i] = (____pv0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pv0' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pv0_unmarshaled = NULL;
		if (___pv0 != NULL)
		{
			____pv0_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___cb1));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(___cb1); i++)
			{
				(____pv0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pv0)[i]);
			}
		}

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Write_m2CC6ED3BBBB91C9B2DFF9312AB5CD200D8C7A236(__thisValue, ____pv0_unmarshaled, ___cb1, ___pcbWritten2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Seek_m3F200D92D11803B2279B860F73A8CD6EEED1A7B3(__thisValue, ___dlibMove0, ___dwOrigin1, ___plibNewPosition2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___libNewSize0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_SetSize_m0A80C7C20A343A24628B4E047EA7951625C77EA8(__thisValue, ___libNewSize0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pstm0' to managed representation
		RuntimeObject* ____pstm0_unmarshaled = NULL;
		if (___pstm0 != NULL)
		{
			____pstm0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pstm0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pstm0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pstm0_unmarshaled), IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, ___pstm0);
			}
		}
		else
		{
			____pstm0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_CopyTo_mEA49498C9B6A02F18A1C45AACD09F3F1FD3D6539(__thisValue, ____pstm0_unmarshaled, ___cb1, ___pcbRead2, ___pcbWritten3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___grfCommitFlags0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Commit_m1CDDE6076066A37352EC8F2E570E59E0D63C7598(__thisValue, ___grfCommitFlags0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Revert_m6CEE0B80317E4CEC07237902E8E81A076C2ACA49(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_LockRegion_m28C5D057ACE791F074CE96598BF713A24E07A3DB(__thisValue, ___libOffset0, ___cb1, ___dwLockType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_UnlockRegion_m6A59115770B8DD8C4E6AA9A9838AA89C55FC0FDF(__thisValue, ___libOffset0, ___cb1, ___dwLockType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pstatstg0' to managed representation
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____pstatstg0_empty;
		memset((&____pstatstg0_empty), 0, sizeof(____pstatstg0_empty));

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Stat_m34C4C16D96E7CDEFDEFB505200A102037AD5959A(__thisValue, (&____pstatstg0_empty), ___grfStatFlag1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pstatstg0' back from managed representation
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____pstatstg0_empty, *___pstatstg0);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___ppstm0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppstm0' to managed representation
		RuntimeObject* ____ppstm0_empty = NULL;

		// Managed method invocation
		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Clone_m6D34867528FA20C62023BCE1E029E495BA408793(__thisValue, (&____ppstm0_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppstm0' back from managed representation
		if (____ppstm0_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____ppstm0_empty))
			{
				*___ppstm0 = il2cpp_codegen_com_query_interface<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(static_cast<Il2CppComObject*>(____ppstm0_empty));
				(*___ppstm0)->AddRef();
			}
			else
			{
				*___ppstm0 = il2cpp_codegen_com_get_or_create_ccw<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(____ppstm0_empty);
			}
		}
		else
		{
			*___ppstm0 = NULL;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper(obj));
}
