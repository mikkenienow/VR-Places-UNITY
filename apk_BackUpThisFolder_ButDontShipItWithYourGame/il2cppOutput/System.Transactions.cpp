﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Transactions.IEnlistmentNotification[]
struct IEnlistmentNotificationU5BU5D_t43C61449FC3AA7F3AC02A1E6FE315C31416357F4;
// System.Transactions.ISinglePhaseNotification[]
struct ISinglePhaseNotificationU5BU5D_tBCC1EA9782E893D8F493B8983F1B686826558207;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Transactions.Enlistment
struct Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_tACB7F43A9D736E8B9F4045339E86D063B540EC66;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Transactions.IPromotableSinglePhaseNotification
struct IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321;
// System.Transactions.ISinglePhaseNotification
struct ISinglePhaseNotification_tA01F24695E100E9C38BC5009D1AFE7BF90296335;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t7B6AA25D7749BF3B05CEEAC921F8A2AC37A0A22B;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Transactions.SinglePhaseEnlistment
struct SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Transactions.Transaction
struct Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD;
// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t8B92520C5347AA8E944F570573B9D799C2769FAF;
// System.Transactions.TransactionCompletedEventHandler
struct TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB;
// System.Transactions.TransactionEventArgs
struct TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82;
// System.Transactions.TransactionException
struct TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF;
// System.Transactions.TransactionInformation
struct TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA;
// System.Transactions.TransactionScope
struct TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnlistmentNotification_tACB7F43A9D736E8B9F4045339E86D063B540EC66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB0FCBD1BB0D5DDFC7C1E4FBDBC8880AC0B13F325;
IL2CPP_EXTERN_C String_t* _stringLiteralE450D74F5D2BAAB6C582160F56F824E1F2E7676D;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDB1BBD5EEB58E2F4C09ED5E3A1840B1C4D60A1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBD39361874346D0E2EE2AA7CE005113DE0A7312A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m58D3F44C5938CA7235526999C2B9C068517BF822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA6A172F9F86EADBD4F544B8289E71343B533E367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m461856AF5428B8A52C0CFBF61D88239241CC0D08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC3B48F43E26A08BF2940C08CC90EFABB187D157F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m53C3B333318540135E1FEA2D1ADAD8EC68844340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction_Rollback_m298E5E20A30D81EFD61CC338DF07E9E3BA82C28D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_mCD8C8392E3EE07D0A0D0AB5362E7659BC4A83AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction__ctor_mDF856DFDF7C245002C76F0B0E0AC7821B25E7ADC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC7572A22E8932A2696F3A78168D22324B896BC29 
{
};

// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEnlistmentNotificationU5BU5D_t43C61449FC3AA7F3AC02A1E6FE315C31416357F4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEnlistmentNotificationU5BU5D_t43C61449FC3AA7F3AC02A1E6FE315C31416357F4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISinglePhaseNotificationU5BU5D_tBCC1EA9782E893D8F493B8983F1B686826558207* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISinglePhaseNotificationU5BU5D_tBCC1EA9782E893D8F493B8983F1B686826558207* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Transactions.Enlistment
struct Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552  : public RuntimeObject
{
	// System.Boolean System.Transactions.Enlistment::done
	bool ___done_0;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.Transactions.Transaction
struct Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD  : public RuntimeObject
{
	// System.Transactions.IsolationLevel System.Transactions.Transaction::level
	int32_t ___level_1;
	// System.Transactions.TransactionInformation System.Transactions.Transaction::info
	TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* ___info_2;
	// System.Collections.ArrayList System.Transactions.Transaction::dependents
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___dependents_3;
	// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::volatiles
	List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* ___volatiles_4;
	// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::durables
	List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* ___durables_5;
	// System.Transactions.IPromotableSinglePhaseNotification System.Transactions.Transaction::pspe
	RuntimeObject* ___pspe_6;
	// System.Boolean System.Transactions.Transaction::aborted
	bool ___aborted_7;
	// System.Transactions.TransactionScope System.Transactions.Transaction::scope
	TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* ___scope_8;
	// System.Exception System.Transactions.Transaction::innerException
	Exception_t* ___innerException_9;
	// System.Transactions.TransactionCompletedEventHandler System.Transactions.Transaction::TransactionCompletedInternal
	TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* ___TransactionCompletedInternal_10;
};

struct Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_ThreadStaticFields
{
	// System.Transactions.Transaction System.Transactions.Transaction::ambient
	Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___ambient_0;
};

// System.Transactions.TransactionInformation
struct TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA  : public RuntimeObject
{
	// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::status
	int32_t ___status_0;
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

// System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>
struct Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.MonoTODOAttribute
struct MonoTODOAttribute_t7B6AA25D7749BF3B05CEEAC921F8A2AC37A0A22B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Transactions.SinglePhaseEnlistment
struct SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C  : public Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552
{
	// System.Transactions.Transaction System.Transactions.SinglePhaseEnlistment::tx
	Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___tx_1;
	// System.Object System.Transactions.SinglePhaseEnlistment::abortingEnlisted
	RuntimeObject* ___abortingEnlisted_2;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Transactions.TransactionEventArgs
struct TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Transactions.Transaction System.Transactions.TransactionEventArgs::transaction
	Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___transaction_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Transactions.TransactionManager
struct TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98  : public RuntimeObject
{
};

struct TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_StaticFields
{
	// System.TimeSpan System.Transactions.TransactionManager::defaultTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___defaultTimeout_0;
	// System.TimeSpan System.Transactions.TransactionManager::maxTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___maxTimeout_1;
};

// System.Transactions.TransactionOptions
struct TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD 
{
	// System.Transactions.IsolationLevel System.Transactions.TransactionOptions::level
	int32_t ___level_0;
	// System.TimeSpan System.Transactions.TransactionOptions::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Transactions.TransactionScope
struct TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4  : public RuntimeObject
{
	// System.Boolean System.Transactions.TransactionScope::completed
	bool ___completed_1;
};

struct TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4_StaticFields
{
	// System.Transactions.TransactionOptions System.Transactions.TransactionScope::defaultOptions
	TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD ___defaultOptions_0;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Transactions.TransactionCompletedEventHandler
struct TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB  : public MulticastDelegate_t
{
};

// System.Transactions.TransactionException
struct TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t8B92520C5347AA8E944F570573B9D799C2769FAF  : public TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF
{
};

// Unity.ThrowStub
struct ThrowStub_t0BE5E40CC257CB268BDB9004F8775ECE8FB0CBCF  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.Enlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enlistment__ctor_m8A01B2DCBBE2F2BB4CD040581D0D3521A449583F (Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.SinglePhaseEnlistment::Aborted(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment_Aborted_m4896852069C6A3E1925500E74AC178E064CD7817 (SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_mDDF0206373667C46B4E753596C1C0F1CC1DD730D (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___x0, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___y1, const RuntimeMethod* method) ;
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m298E5E20A30D81EFD61CC338DF07E9E3BA82C28D (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, Exception_t* ___ex0, RuntimeObject* ___abortingEnlisted1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::.ctor()
inline void List_1__ctor_m461856AF5428B8A52C0CFBF61D88239241CC0D08 (List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::.ctor()
inline void List_1__ctor_mC3B48F43E26A08BF2940C08CC90EFABB187D157F (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031 (const RuntimeMethod* method) ;
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE_inline (const RuntimeMethod* method) ;
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* Transaction_get_TransactionInformation_mB4DBFB45362745793F6E268C7F5BD9ADED3E5861 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) ;
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_mB45D34431DAC463611A59869926E98513B97414A_inline (TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.Transaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m700FBC7080668AD032FCDA055719E100117F14B5 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::get_Durables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* Transaction_get_Durables_mCFB83FC73DFCF3EBD3A758327D3EE835389566A3 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Count()
inline int32_t List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_inline (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_Equals_mC586D4C5C87F45DCF282AF7B071738E8E8B2F6ED (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___t0, const RuntimeMethod* method) ;
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m39B1A486DD944290954B17E02B0BFBDC248659BC (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___x0, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___y1, const RuntimeMethod* method) ;
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m7BEAC0E95FA3B45F0E78C5FF1857F914AAA1909E (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void System.Transactions.Transaction::FireCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_FireCompleted_mD21E71C2CDB94A3F1ED8AEBD8F258C70F8210440 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_mD6A1BC6487DB3CE81488727A3D811024D45F8859 (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_mFE1891FDD22473024672131E28D94176F7D74A01 (SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::get_Volatiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* Transaction_get_Volatiles_mCD1BF84C66655C8FD244A1F5578DD02DBED0129A (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::GetEnumerator()
inline Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040 List_1_GetEnumerator_mA6A172F9F86EADBD4F544B8289E71343B533E367 (List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040 (*) (List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::Dispose()
inline void Enumerator_Dispose_mDB1BBD5EEB58E2F4C09ED5E3A1840B1C4D60A1DB (Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m58D3F44C5938CA7235526999C2B9C068517BF822_inline (Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::MoveNext()
inline bool Enumerator_MoveNext_mBD39361874346D0E2EE2AA7CE005113DE0A7312A (Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147 (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_set_Aborted_m24683739B6DC84AF5BEAF5E83C6ECA1D4B44BE17 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m6D0E87BE8EDD80DC7AFD5A3CEC8E8EA4B1626AFE_inline (TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionEventArgs::.ctor(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_mDE16E072857474C6DD16928DB47058E2A9F98046 (TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* __this, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___transaction0, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionCompletedEventHandler::Invoke(System.Object,System.Transactions.TransactionEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_inline (TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method) ;
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* Transaction_get_Scope_mCB49E7F6BABD63238A74D8C3D08B7267B01CFB8E_inline (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_mA48470D9FFCC137101B3972C9B1D46ED5EC51C8C_inline (TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m3C29A3EB6D1A3AA42E78B96EF45C22CC1F8171BB (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m3FDD9AE8E185D636E05D9A9D83E738C6A63715E4 (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_mFD81A5A7A11F8417373C43F9BEB03EAABF6B28B3 (TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* __this, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mB30C3C4B8AB4DF43F4A453C97CCA76DC4AE63B80 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method) ;
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionOptions__ctor_mB6E01EA3E9A536D3DD7518541B0A19791D044910 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* __this, int32_t ___level0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout1, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m5B9B64DE16F3F0C7BBDE6C6201B59679B90E6C97 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD ___x0, TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_m6E5D4EFB290F14239D57B0C7D364109797600E48 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m2CBBAD27522E17FE6006390ED0E3874676CAA76D (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_mD8274DC4F6F15118D764DB6D0043BB82AD162234 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TransactionManager_get_DefaultTimeout_m986CEE04836E5DCF3328652175C50A276DD75E0F_inline (const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.MonoTODOAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m40097723D242705105133D2FEE544CDD0D4892F0 (MonoTODOAttribute_t7B6AA25D7749BF3B05CEEAC921F8A2AC37A0A22B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_Multicast(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* currentDelegate = reinterpret_cast<TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenInst(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	typedef void (*FunctionPointerType) (RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenStatic(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenStaticInvoker(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_ClosedStaticInvoker(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenVirtual(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	VirtualActionInvoker1< TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenInterface(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	InterfaceActionInvoker1< TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenGenericVirtual(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericVirtualActionInvoker1< TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* >::Invoke(method, ___sender0, ___e1);
}
void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenGenericInterface(TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method)
{
	NullCheck(___sender0);
	GenericInterfaceActionInvoker1< TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* >::Invoke(method, ___sender0, ___e1);
}
// System.Void System.Transactions.TransactionCompletedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler__ctor_mAC6B56920A35858254ACE4F75E3645DD9C394CB4 (TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_Multicast;
}
// System.Void System.Transactions.TransactionCompletedEventHandler::Invoke(System.Object,System.Transactions.TransactionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D (TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.Enlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enlistment__ctor_m8A01B2DCBBE2F2BB4CD040581D0D3521A449583F (Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___done_0 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_mFE1891FDD22473024672131E28D94176F7D74A01 (SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* __this, const RuntimeMethod* method) 
{
	{
		Enlistment__ctor_m8A01B2DCBBE2F2BB4CD040581D0D3521A449583F(__this, NULL);
		return;
	}
}
// System.Void System.Transactions.SinglePhaseEnlistment::Aborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment_Aborted_m66FE899F83074B355F3F13DE9E24131185F1602F (SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* __this, const RuntimeMethod* method) 
{
	{
		SinglePhaseEnlistment_Aborted_m4896852069C6A3E1925500E74AC178E064CD7817(__this, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Transactions.SinglePhaseEnlistment::Aborted(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment_Aborted_m4896852069C6A3E1925500E74AC178E064CD7817 (SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = __this->___tx_1;
		bool L_1;
		L_1 = Transaction_op_Inequality_mDDF0206373667C46B4E753596C1C0F1CC1DD730D(L_0, (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_2 = __this->___tx_1;
		Exception_t* L_3 = ___e0;
		RuntimeObject* L_4 = __this->___abortingEnlisted_2;
		NullCheck(L_2);
		Transaction_Rollback_m298E5E20A30D81EFD61CC338DF07E9E3BA82C28D(L_2, L_3, L_4, NULL);
	}

IL_0020:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::get_Volatiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* Transaction_get_Volatiles_mCD1BF84C66655C8FD244A1F5578DD02DBED0129A (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m461856AF5428B8A52C0CFBF61D88239241CC0D08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* L_0 = __this->___volatiles_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* L_1 = (List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3*)il2cpp_codegen_object_new(List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m461856AF5428B8A52C0CFBF61D88239241CC0D08(L_1, List_1__ctor_m461856AF5428B8A52C0CFBF61D88239241CC0D08_RuntimeMethod_var);
		__this->___volatiles_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___volatiles_4), (void*)L_1);
	}

IL_0013:
	{
		List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* L_2 = __this->___volatiles_4;
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::get_Durables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* Transaction_get_Durables_mCFB83FC73DFCF3EBD3A758327D3EE835389566A3 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC3B48F43E26A08BF2940C08CC90EFABB187D157F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_0 = __this->___durables_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_1 = (List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C*)il2cpp_codegen_object_new(List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC3B48F43E26A08BF2940C08CC90EFABB187D157F(L_1, List_1__ctor_mC3B48F43E26A08BF2940C08CC90EFABB187D157F_RuntimeMethod_var);
		__this->___durables_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___durables_5), (void*)L_1);
	}

IL_0013:
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_2 = __this->___durables_5;
		return L_2;
	}
}
// System.Void System.Transactions.Transaction::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_mCD8C8392E3EE07D0A0D0AB5362E7659BC4A83AB5 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_mCD8C8392E3EE07D0A0D0AB5362E7659BC4A83AB5_RuntimeMethod_var)));
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* Transaction_get_Current_m4781EDC03D62E0BEBD0D9B647FA4A264814DC529 (const RuntimeMethod* method) 
{
	{
		Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031(NULL);
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0;
		L_0 = Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE_inline(NULL);
		return L_0;
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = ((Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var))->___ambient_0;
		return L_0;
	}
}
// System.Transactions.IsolationLevel System.Transactions.Transaction::get_IsolationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transaction_get_IsolationLevel_m3B9ACAC6C1A615154C3EB40B6C40CF9A7953806F (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031(NULL);
		int32_t L_0 = __this->___level_1;
		return L_0;
	}
}
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* Transaction_get_TransactionInformation_mB4DBFB45362745793F6E268C7F5BD9ADED3E5861 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031(NULL);
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_0 = __this->___info_2;
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Dispose_m8507F1AF0ADFB3D1201F30E58BAB1166BD748585 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_0;
		L_0 = Transaction_get_TransactionInformation_mB4DBFB45362745793F6E268C7F5BD9ADED3E5861(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TransactionInformation_get_Status_mB45D34431DAC463611A59869926E98513B97414A_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transaction_Rollback_m700FBC7080668AD032FCDA055719E100117F14B5(__this, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean System.Transactions.Transaction::EnlistPromotableSinglePhase(System.Transactions.IPromotableSinglePhaseNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_EnlistPromotableSinglePhase_m3146489630F14B0472D26AD5FEADD6CA5097EA21 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, RuntimeObject* ___promotableSinglePhaseNotification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031(NULL);
		RuntimeObject* L_0 = __this->___pspe_6;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_1;
		L_1 = Transaction_get_Durables_mCFB83FC73DFCF3EBD3A758327D3EE835389566A3(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_inline(L_1, List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return (bool)0;
	}

IL_001d:
	{
		RuntimeObject* L_3 = ___promotableSinglePhaseNotification0;
		__this->___pspe_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pspe_6), (void*)L_3);
		RuntimeObject* L_4 = __this->___pspe_6;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Transactions.IPromotableSinglePhaseNotification::Initialize() */, IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321_il2cpp_TypeInfo_var, L_4);
		return (bool)1;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_Equals_m6F34A0E9EC2422A790EA8E9774E3E6BAB6B3C11A (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = Transaction_Equals_mC586D4C5C87F45DCF282AF7B071738E8E8B2F6ED(__this, ((Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)IsInstClass((RuntimeObject*)L_0, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_Equals_mC586D4C5C87F45DCF282AF7B071738E8E8B2F6ED (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___t0, const RuntimeMethod* method) 
{
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = ___t0;
		if ((!(((RuntimeObject*)(Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)L_0) == ((RuntimeObject*)(Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_1 = ___t0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->___level_1;
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___level_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_5 = __this->___info_2;
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_6 = ___t0;
		NullCheck(L_6);
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_7 = L_6->___info_2;
		return (bool)((((RuntimeObject*)(TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA*)L_5) == ((RuntimeObject*)(TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA*)L_7))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m39B1A486DD944290954B17E02B0BFBDC248659BC (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___x0, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___y1, const RuntimeMethod* method) 
{
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_1 = ___y1;
		return (bool)((((RuntimeObject*)(Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_2 = ___x0;
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_3 = ___y1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Transaction_Equals_mC586D4C5C87F45DCF282AF7B071738E8E8B2F6ED(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_mDDF0206373667C46B4E753596C1C0F1CC1DD730D (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___x0, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___y1, const RuntimeMethod* method) 
{
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = ___x0;
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_1 = ___y1;
		bool L_2;
		L_2 = Transaction_op_Equality_m39B1A486DD944290954B17E02B0BFBDC248659BC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Transactions.Transaction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transaction_GetHashCode_mAE0370AD6752F802566D7F7D56997BE72D8E4CDB (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___level_1;
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_1 = __this->___info_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->___dependents_3;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)(((int32_t)((int32_t)L_0^L_2))^L_4));
	}
}
// System.Void System.Transactions.Transaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m700FBC7080668AD032FCDA055719E100117F14B5 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		Transaction_Rollback_m7BEAC0E95FA3B45F0E78C5FF1857F914AAA1909E(__this, (Exception_t*)NULL, NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m7BEAC0E95FA3B45F0E78C5FF1857F914AAA1909E (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	{
		Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031(NULL);
		Exception_t* L_0 = ___e0;
		Transaction_Rollback_m298E5E20A30D81EFD61CC338DF07E9E3BA82C28D(__this, L_0, NULL, NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m298E5E20A30D81EFD61CC338DF07E9E3BA82C28D (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, Exception_t* ___ex0, RuntimeObject* ___abortingEnlisted1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDB1BBD5EEB58E2F4C09ED5E3A1840B1C4D60A1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD39361874346D0E2EE2AA7CE005113DE0A7312A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m58D3F44C5938CA7235526999C2B9C068517BF822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnlistmentNotification_tACB7F43A9D736E8B9F4045339E86D063B540EC66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA6A172F9F86EADBD4F544B8289E71343B533E367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* V_0 = NULL;
	List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* V_1 = NULL;
	Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		bool L_0 = __this->___aborted_7;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Transaction_FireCompleted_mD21E71C2CDB94A3F1ED8AEBD8F258C70F8210440(__this, NULL);
		return;
	}

IL_000f:
	{
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_1 = __this->___info_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TransactionInformation_get_Status_mB45D34431DAC463611A59869926E98513B97414A_inline(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* L_3 = (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		TransactionException__ctor_mD6A1BC6487DB3CE81488727A3D811024D45F8859(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE450D74F5D2BAAB6C582160F56F824E1F2E7676D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transaction_Rollback_m298E5E20A30D81EFD61CC338DF07E9E3BA82C28D_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t* L_4 = ___ex0;
		__this->___innerException_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerException_9), (void*)L_4);
		SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* L_5 = (SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C*)il2cpp_codegen_object_new(SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SinglePhaseEnlistment__ctor_mFE1891FDD22473024672131E28D94176F7D74A01(L_5, NULL);
		V_0 = L_5;
		List_1_t9F4F8EB487AD8634210B33C2FD40A9DB5604EDB3* L_6;
		L_6 = Transaction_get_Volatiles_mCD1BF84C66655C8FD244A1F5578DD02DBED0129A(__this, NULL);
		NullCheck(L_6);
		Enumerator_t99B22733591FFD9FAE27C9EFDB0DE1D3BFC99040 L_7;
		L_7 = List_1_GetEnumerator_mA6A172F9F86EADBD4F544B8289E71343B533E367(L_6, List_1_GetEnumerator_mA6A172F9F86EADBD4F544B8289E71343B533E367_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDB1BBD5EEB58E2F4C09ED5E3A1840B1C4D60A1DB((&V_2), Enumerator_Dispose_mDB1BBD5EEB58E2F4C09ED5E3A1840B1C4D60A1DB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0056_1;
			}

IL_0043_1:
			{
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_m58D3F44C5938CA7235526999C2B9C068517BF822_inline((&V_2), Enumerator_get_Current_m58D3F44C5938CA7235526999C2B9C068517BF822_RuntimeMethod_var);
				V_3 = L_8;
				RuntimeObject* L_9 = V_3;
				RuntimeObject* L_10 = ___abortingEnlisted1;
				if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)L_10)))
				{
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_11 = V_3;
				SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* L_12 = V_0;
				NullCheck(L_11);
				InterfaceActionInvoker1< Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* >::Invoke(0 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_tACB7F43A9D736E8B9F4045339E86D063B540EC66_il2cpp_TypeInfo_var, L_11, L_12);
			}

IL_0056_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_mBD39361874346D0E2EE2AA7CE005113DE0A7312A((&V_2), Enumerator_MoveNext_mBD39361874346D0E2EE2AA7CE005113DE0A7312A_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_14;
		L_14 = Transaction_get_Durables_mCFB83FC73DFCF3EBD3A758327D3EE835389566A3(__this, NULL);
		V_1 = L_14;
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_inline(L_15, List_1_get_Count_m17E6803A26B094A16DC42F1F23438275606091C1_RuntimeMethod_var);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147(L_17, 0, List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147_RuntimeMethod_var);
		RuntimeObject* L_19 = ___abortingEnlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject*)L_19)))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t151A1BC1807DD3664F9A0AD5F5D74FF992C57A4C* L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147(L_20, 0, List_1_get_Item_m81C246985A289579522B217404C0B8C99E5C0147_RuntimeMethod_var);
		SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< Enlistment_tDF858DEFBA405B6DF5EF4DC746A92C59DE007552* >::Invoke(0 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_tACB7F43A9D736E8B9F4045339E86D063B540EC66_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_0096:
	{
		RuntimeObject* L_23 = __this->___pspe_6;
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_24 = __this->___pspe_6;
		RuntimeObject* L_25 = ___abortingEnlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_24) == ((RuntimeObject*)(RuntimeObject*)L_25)))
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_26 = __this->___pspe_6;
		SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* L_27 = V_0;
		NullCheck(L_26);
		InterfaceActionInvoker1< SinglePhaseEnlistment_t7AA936D444F929C7355B1D02E9A9B6B2B55D135C* >::Invoke(1 /* System.Void System.Transactions.IPromotableSinglePhaseNotification::Rollback(System.Transactions.SinglePhaseEnlistment) */, IPromotableSinglePhaseNotification_t55FA5C677628E609C73561E23A834E464F5B1321_il2cpp_TypeInfo_var, L_26, L_27);
	}

IL_00b3:
	{
		Transaction_set_Aborted_m24683739B6DC84AF5BEAF5E83C6ECA1D4B44BE17(__this, (bool)1, NULL);
		Transaction_FireCompleted_mD21E71C2CDB94A3F1ED8AEBD8F258C70F8210440(__this, NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_set_Aborted_m24683739B6DC84AF5BEAF5E83C6ECA1D4B44BE17 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___aborted_7 = L_0;
		bool L_1 = __this->___aborted_7;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* L_2 = __this->___info_2;
		NullCheck(L_2);
		TransactionInformation_set_Status_m6D0E87BE8EDD80DC7AFD5A3CEC8E8EA4B1626AFE_inline(L_2, 2, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* Transaction_get_Scope_mCB49E7F6BABD63238A74D8C3D08B7267B01CFB8E (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* L_0 = __this->___scope_8;
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::FireCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_FireCompleted_mD21E71C2CDB94A3F1ED8AEBD8F258C70F8210440 (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* L_0 = __this->___TransactionCompletedInternal_10;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* L_1 = __this->___TransactionCompletedInternal_10;
		TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* L_2 = (TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82*)il2cpp_codegen_object_new(TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TransactionEventArgs__ctor_mDE16E072857474C6DD16928DB47058E2A9F98046(L_2, __this, NULL);
		NullCheck(L_1);
		TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_inline(L_1, __this, L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031 (const RuntimeMethod* method) 
{
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0;
		L_0 = Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE_inline(NULL);
		bool L_1;
		L_1 = Transaction_op_Equality_m39B1A486DD944290954B17E02B0BFBDC248659BC(L_0, (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_2;
		L_2 = Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE_inline(NULL);
		NullCheck(L_2);
		TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* L_3;
		L_3 = Transaction_get_Scope_mCB49E7F6BABD63238A74D8C3D08B7267B01CFB8E_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_4;
		L_4 = Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE_inline(NULL);
		NullCheck(L_4);
		TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* L_5;
		L_5 = Transaction_get_Scope_mCB49E7F6BABD63238A74D8C3D08B7267B01CFB8E_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = TransactionScope_get_IsComplete_mA48470D9FFCC137101B3972C9B1D46ED5EC51C8C_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0FCBD1BB0D5DDFC7C1E4FBDBC8880AC0B13F325)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transaction_EnsureIncompleteCurrentScope_m50358C964D025F5EAF27CC2F0D24229E86BBA031_RuntimeMethod_var)));
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction__ctor_mDF856DFDF7C245002C76F0B0E0AC7821B25E7ADC (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction__ctor_mDF856DFDF7C245002C76F0B0E0AC7821B25E7ADC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Transaction__ctor_mDF856DFDF7C245002C76F0B0E0AC7821B25E7ADC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.TransactionAbortedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_mE17B5A4668B9FA43D669F0B3AB71E0F4402FF215 (TransactionAbortedException_t8B92520C5347AA8E944F570573B9D799C2769FAF* __this, const RuntimeMethod* method) 
{
	{
		TransactionException__ctor_m3C29A3EB6D1A3AA42E78B96EF45C22CC1F8171BB(__this, NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_m919C68C8C22EDE415D82081303D0E44D8E0B00D3 (TransactionAbortedException_t8B92520C5347AA8E944F570573B9D799C2769FAF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		TransactionException__ctor_m3FDD9AE8E185D636E05D9A9D83E738C6A63715E4(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.TransactionEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_mFD81A5A7A11F8417373C43F9BEB03EAABF6B28B3 (TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionEventArgs::.ctor(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_mDE16E072857474C6DD16928DB47058E2A9F98046 (TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* __this, Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* ___transaction0, const RuntimeMethod* method) 
{
	{
		TransactionEventArgs__ctor_mFD81A5A7A11F8417373C43F9BEB03EAABF6B28B3(__this, NULL);
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = ___transaction0;
		__this->___transaction_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transaction_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.TransactionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m3C29A3EB6D1A3AA42E78B96EF45C22CC1F8171BB (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* __this, const RuntimeMethod* method) 
{
	{
		SystemException__ctor_mB30C3C4B8AB4DF43F4A453C97CCA76DC4AE63B80(__this, NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_mD6A1BC6487DB3CE81488727A3D811024D45F8859 (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m3FDD9AE8E185D636E05D9A9D83E738C6A63715E4 (TransactionException_t93E8D757BC2F2616DA953B8A714A645EBCE730AF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_mB45D34431DAC463611A59869926E98513B97414A (TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___status_0;
		return L_0;
	}
}
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m6D0E87BE8EDD80DC7AFD5A3CEC8E8EA4B1626AFE (TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___status_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.TransactionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionManager__cctor_m4E4759360B22227816CDA61B5E775400B5D490C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_0), 0, 1, 0, /*hidden argument*/NULL);
		((TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var))->___defaultTimeout_0 = L_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		memset((&L_1), 0, sizeof(L_1));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_1), 0, ((int32_t)10), 0, /*hidden argument*/NULL);
		((TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var))->___maxTimeout_1 = L_1;
		return;
	}
}
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TransactionManager_get_DefaultTimeout_m986CEE04836E5DCF3328652175C50A276DD75E0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var))->___defaultTimeout_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionOptions__ctor_mB6E01EA3E9A536D3DD7518541B0A19791D044910 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* __this, int32_t ___level0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___level0;
		__this->___level_0 = L_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___timeout1;
		__this->___timeout_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void TransactionOptions__ctor_mB6E01EA3E9A536D3DD7518541B0A19791D044910_AdjustorThunk (RuntimeObject* __this, int32_t ___level0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout1, const RuntimeMethod* method)
{
	TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*>(__this + _offset);
	TransactionOptions__ctor_mB6E01EA3E9A536D3DD7518541B0A19791D044910(_thisAdjusted, ___level0, ___timeout1, method);
}
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m5B9B64DE16F3F0C7BBDE6C6201B59679B90E6C97 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD ___x0, TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD L_0 = ___x0;
		int32_t L_1 = L_0.___level_0;
		TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD L_2 = ___y1;
		int32_t L_3 = L_2.___level_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD L_4 = ___x0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = L_4.___timeout_1;
		TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD L_6 = ___y1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = L_6.___timeout_1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_5, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_m6E5D4EFB290F14239D57B0C7D364109797600E48 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD L_1 = (*(TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*)__this);
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = TransactionOptions_op_Equality_m5B9B64DE16F3F0C7BBDE6C6201B59679B90E6C97(L_1, ((*(TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*)((TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*)(TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*)UnBox(L_2, TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TransactionOptions_Equals_m6E5D4EFB290F14239D57B0C7D364109797600E48_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransactionOptions_Equals_m6E5D4EFB290F14239D57B0C7D364109797600E48(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_mD8274DC4F6F15118D764DB6D0043BB82AD162234 (TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___level_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_1 = (&__this->___timeout_1);
		int32_t L_2;
		L_2 = TimeSpan_GetHashCode_m2CBBAD27522E17FE6006390ED0E3874676CAA76D(L_1, NULL);
		return ((int32_t)((int32_t)L_0^L_2));
	}
}
IL2CPP_EXTERN_C  int32_t TransactionOptions_GetHashCode_mD8274DC4F6F15118D764DB6D0043BB82AD162234_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransactionOptions_GetHashCode_mD8274DC4F6F15118D764DB6D0043BB82AD162234(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_mA48470D9FFCC137101B3972C9B1D46ED5EC51C8C (TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___completed_1;
		return L_0;
	}
}
// System.Void System.Transactions.TransactionScope::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionScope__cctor_m3EFA247165D4145B3459A1B3D476309A6D5DCB48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TransactionManager_get_DefaultTimeout_m986CEE04836E5DCF3328652175C50A276DD75E0F_inline(NULL);
		TransactionOptions_tF977EA80CD543D25883B20A41B8EBAD0E39D21AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		TransactionOptions__ctor_mB6E01EA3E9A536D3DD7518541B0A19791D044910((&L_1), 0, L_0, /*hidden argument*/NULL);
		((TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4_StaticFields*)il2cpp_codegen_static_fields_for(TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4_il2cpp_TypeInfo_var))->___defaultOptions_0 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m53C3B333318540135E1FEA2D1ADAD8EC68844340 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m53C3B333318540135E1FEA2D1ADAD8EC68844340_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* Transaction_get_CurrentInternal_m195CAC9933D30007BD941BF68FA56CE0C7C7FBEE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* L_0 = ((Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD_il2cpp_TypeInfo_var))->___ambient_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_mB45D34431DAC463611A59869926E98513B97414A_inline (TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___status_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_m6D0E87BE8EDD80DC7AFD5A3CEC8E8EA4B1626AFE_inline (TransactionInformation_tFB7D26BBE9CEB8F44CAC3930B739922628AD17EA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___status_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_mBFD780E1344550FC207E7DC648CE87AD1BF5E08D_inline (TransactionCompletedEventHandler_tE63F4C59FFEDF5500FAD819D585CBCAE192CE3DB* __this, RuntimeObject* ___sender0, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, TransactionEventArgs_t061FE4DA10D8A039736DB2C1A8ACB37D856FAD82*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* Transaction_get_Scope_mCB49E7F6BABD63238A74D8C3D08B7267B01CFB8E_inline (Transaction_tB36D4D179023FCFA37362B3BC0C4DC533D2EE1AD* __this, const RuntimeMethod* method) 
{
	{
		TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* L_0 = __this->___scope_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_mA48470D9FFCC137101B3972C9B1D46ED5EC51C8C_inline (TransactionScope_tB6032DAC900A60B7BC491532717C3707414B9BC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___completed_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TransactionManager_get_DefaultTimeout_m986CEE04836E5DCF3328652175C50A276DD75E0F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t66CE9AFC4ED0943EF1DAC0186B32D84DBF39EA98_il2cpp_TypeInfo_var))->___defaultTimeout_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
