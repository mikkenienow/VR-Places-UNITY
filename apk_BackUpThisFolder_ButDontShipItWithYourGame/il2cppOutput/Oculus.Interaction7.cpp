#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67;
// Oculus.Interaction.Input.DataModifier`1<System.Object>
struct DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916;
// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A;
// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18;
// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>
struct Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63;
// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC;
// Oculus.Interaction.Collections.EnumerableHashSet`1<System.Int32Enum>
struct EnumerableHashSet_1_t3903EDC60D9B834B54C954ADADF9BA772EDCD83D;
// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
// Oculus.Interaction.Input.IDataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct IDataSource_1_t63E4660329CACFB22DE9833CC56BC5227752B69E;
// Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose>
struct IEnumerator_1_t5CBE96AF6D34AD77B69C46BFC2D221735CFAC144;
// System.Collections.Generic.IEqualityComparer`1<Oculus.Interaction.Body.Input.BodyJointId>
struct IEqualityComparer_1_tE953DD2D8AA81AA1147A9C45DA2ADDB9E0CFBD0E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct KeyCollection_tA68B7DFE91D59B21B5CB097C056DA93C25FEC701;
// System.Collections.Generic.Dictionary`2/KeyCollection<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct ValueCollection_t1F708390422EEAE5E42BCC48AB593F5A6D3EE8DE;
// System.Collections.Generic.Dictionary`2/ValueCollection<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>[]
struct EntryU5BU5D_t5B6AE12EB750F0996927A16CEBA03631886ABC56;
// System.Collections.Generic.Dictionary`2/Entry<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>[]
struct EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA;
// System.Collections.Generic.HashSet`1/Slot<Oculus.Interaction.Body.Input.BodyJointId>[]
struct SlotU5BU5D_t6330A804D564209879C77287E98FBAC33142DFC5;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Oculus.Interaction.Body.Input.Body
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69;
// Oculus.Interaction.Body.Input.BodyDataAsset
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456;
// Oculus.Interaction.Body.Input.BodyJointsCache
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1;
// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Oculus.Interaction.Body.Input.IBody
struct IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01;
// Oculus.Interaction.Body.PoseDetection.IBodyPose
struct IBodyPose_t2BA886A75367D7351AACFE310468790C66930097;
// Oculus.Interaction.Input.IDataSource
struct IDataSource_t682BCFAE95AD4135956A60A61649AD955D665712;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Oculus.Interaction.Body.Input.ISkeletonMapping
struct ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Oculus.Interaction.Body.SkeletonDebugGizmos
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90;
// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
struct Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C;
// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9;
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>
struct Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5B6AE12EB750F0996927A16CEBA03631886ABC56* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA68B7DFE91D59B21B5CB097C056DA93C25FEC701* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1F708390422EEAE5E42BCC48AB593F5A6D3EE8DE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>
struct Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE62A13A1FEF77841F1FAB117106E0C7F17210FDA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA201EA52EF76888976363D072D6637B6C2B5B056* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF6717F22C628C61C5F398B5B99E380F8DD527CCB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<UnityEngine.Pose>
struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4  : public RuntimeObject
{
};

struct EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields
{
	// T[] System.EmptyArray`1::Value
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___Value_0;
};

// System.Collections.Generic.HashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t6330A804D564209879C77287E98FBAC33142DFC5* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};
struct Il2CppArrayBounds;

// Oculus.Interaction.Body.Input.Constants
struct Constants_t6B524980617E2621568CC57EDDE006CAC3DF9797  : public RuntimeObject
{
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses
struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649  : public RuntimeObject
{
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::_poses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____poses_0;
};

struct ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields
{
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::<Empty>k__BackingField
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CEmptyU3Ek__BackingField_1;
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

// Oculus.Interaction.Body.Input.Body/<>c
struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84  : public RuntimeObject
{
};

struct U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields
{
	// Oculus.Interaction.Body.Input.Body/<>c Oculus.Interaction.Body.Input.Body/<>c::<>9
	U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.Input.Body/<>c::<>9__23_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__23_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c
struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90  : public RuntimeObject
{
};

struct U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<>9
	U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<>9__17_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__17_0_1;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping
struct Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C  : public RuntimeObject
{
	// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Joints
	EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* ___Joints_0;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::JointToParent
	Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* ___JointToParent_1;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c
struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9  : public RuntimeObject
{
};

struct U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields
{
	// Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9
	U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* ___U3CU3E9_0;
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<>9__24_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__24_0_1;
};

// Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>
struct EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC  : public HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC
{
};

// System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>
struct Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tFB6959DD5406E08C0EC5C28336B7D7AB946B22AC* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>
struct Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	int32_t ____current_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17
struct __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB__padding[17];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9__padding[96];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t6884355282165D4E80B093E8026110DAC79B4BC8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388
	__StaticArrayInitTypeSizeU3D68_t8553F026D1D75E1D4A7C21EEB23D8BCC30DCA6C5 ___0299EA23B40AFFB6F2D4C56761D939F88BEAEDFFC98799B1D0011E2FC867A388_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___1085AB18045526E0E6BC49579C2783F82561DA676F694D26D184D6EB7F99118F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___1C3D8119FF82FC2957242BBC5C8A184F08DADCE3CF113F282639E90D4E35BC0B_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___2E72A286F6E80D4ED2E83596D4A0AA21DCECB4DD925F30310EC73BCDF7BCFF08_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___32D25725828EB444D141C82FB6F3FE5F46BC72A69AC4DEB861BA8130F035E2E7_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___3CF966F20334243238BDC191F80FA740E98ACF8F5FDD0CA2DCCE683C1542EEDF_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___407885E61A69335134A1F85FD82A94E871508B8B6E33095F8E39FAEAC298C63E_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___418D8378E48059C857D5F7CA8BE28422B288CAAD519525F1A1FF93F68F825B97_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___4F26A554B65395F540C074E9557877CF00BC194281240AB820E5297B8C499C70_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783
	__StaticArrayInitTypeSizeU3D120_tA21F7B5487225AB07B984C42D48669A1891FDBD6 ___6DECF653BB3B6156F392DC8693FAFEBE036F9534D6BBC557005D2786C4895783_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___6FD4287A48C4D2CF873A476F8EA1781656383AE265F2F2FAE9C6B9F159863EFE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8CA6EE1043DEFCFD05AA29DEE581CBC519E783E414A687D7C26AC6070D3F6DEE_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___8E1614B69F720DC37A9ED6825E1DD7A6656F63DD9ABE7D0A48C911FD2DC418CE_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___8EE3A1C9C508357E9D0EBCB0A6C6F8E01416BD7CDA0320AC080CEA649014F412_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___918234F629EBF0C84BFE41B60824833200105B6094AB357EE6A872A28F2BAD6A_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___9290AB548294BA6BFDDD1E2EE079ABB3E02A463A085D6CFA86701AE11DAF4E85_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___94AD2BDBB6455BBF8B60747E6C5D85F859F15DFEDAAE84DA39E8AF4D5F07BFC9_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9C3B1F31D79675E772863CCCEEBB691C9A6C10718B45796B5DA322FB6C7A4881_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___9D525C94DA0D9E0D4A9CE96909F6AE5E6C4DB27466EF98E0288AC9A99A07F07B_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___A56D6BBBE254A23749343FB727E7F348B719BC6314763D6A792843E2F7C466EE_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___A634C1261CFDC51CA97439046CF09516F654F96F8A99317B3DE5965811495B3D_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___BEFD47F245DFF15422B7998AF33B5BFB32F8CDB3B32232065909F28F4DCD91A1_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC
	__StaticArrayInitTypeSizeU3D20_t0A8103C19F9B0776A39079FD4105AFF72E164001 ___C1C0669C18711EC44EABC6FF99E1BCB996C6B892AF94287F5CC4B8774138D7AC_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___CE99AE045C8B2A2A8A58FD1A2120956E74E90322EEF45F7DFE1CA73EEFE655D4_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5
	__StaticArrayInitTypeSizeU3D16_t27EFFA97FE987A68DFD348E1EA30D2A26985C121 ___CFDD61EEBBC699DC56E78F04CF5CCE1896957BC5D29AF2B21468B62CD1E759C5_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=17 <PrivateImplementationDetails>::D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552
	__StaticArrayInitTypeSizeU3D17_t4959168BD7CF3BF86512C10948FAE301A1A2E0AB ___D421CA4F288D780319BC80684387DE61CF750142A8AC39A87240A6CB9261F552_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D8C9807AE9FA3FFE054D614675E4FD8DEE163272C453DEA596107ABE48E4412B_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___D9F6C3F18D26E171FCA762EBF56C34EA1CAAF992D3AF8F901BC55595F2BE125F_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A
	__StaticArrayInitTypeSizeU3D96_t2A9C6E4E95E1881E37A1DFD2ECB0E96121BAD3F9 ___E0757700FBD2A0A111F78FE8D30FA1BEC4ABECC6B52669266B91208535F9647A_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78
	__StaticArrayInitTypeSizeU3D12_t762F06A1B9DDEBDC6D8AF7B257311874AC29741D ___E54A423CAFA0DAA9A176E7D9CB32B41C39E2A6BF367AA389214A3FC6A1044F78_34;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Oculus.Interaction.Body.Input.BodyDataAsset
struct BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456  : public RuntimeObject
{
	// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::<SkeletonMapping>k__BackingField
	RuntimeObject* ___U3CSkeletonMappingU3Ek__BackingField_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::<Root>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CRootU3Ek__BackingField_1;
	// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::<RootScale>k__BackingField
	float ___U3CRootScaleU3Ek__BackingField_2;
	// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_3;
	// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_4;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::<JointPoses>k__BackingField
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CJointPosesU3Ek__BackingField_5;
	// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_6;
};

// Oculus.Interaction.Body.Input.BodyJointsCache
struct BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::<LocalDataVersion>k__BackingField
	int32_t ___U3CLocalDataVersionU3Ek__BackingField_1;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_originalPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____originalPoses_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_posesFromRoot
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____posesFromRoot_3;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_localPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____localPoses_4;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyJointsCache::_worldPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____worldPoses_5;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_posesFromRootCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____posesFromRootCollection_6;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_worldPosesCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____worldPosesCollection_7;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.BodyJointsCache::_localPosesCollection
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ____localPosesCollection_8;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyJointsFromRoot
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyJointsFromRoot_9;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyLocalJoints
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyLocalJoints_10;
	// System.UInt64[] Oculus.Interaction.Body.Input.BodyJointsCache::_dirtyWorldJoints
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____dirtyWorldJoints_11;
	// UnityEngine.Matrix4x4 Oculus.Interaction.Body.Input.BodyJointsCache::_scale
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____scale_12;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::_rootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____rootPose_13;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::_worldRoot
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____worldRoot_14;
	// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyJointsCache::_mapping
	RuntimeObject* ____mapping_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData
struct JointData_tCDEE6DDE0F7900EB80761EE6CC67FE40A2293FDE 
{
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::JointId
	int32_t ___JointId_0;
	// Oculus.Interaction.Body.Input.BodyJointId Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::ParentId
	int32_t ___ParentId_1;
	// UnityEngine.Pose Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::PoseFromRoot
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PoseFromRoot_2;
	// UnityEngine.Pose Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData::LocalPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___LocalPose_3;
};

// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2
struct U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B  : public RuntimeObject
{
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>2__current
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CU3E2__current_1;
	// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>4__this
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ___U3CU3E4__this_2;
	// UnityEngine.Pose[] Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>7__wrap1
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___U3CU3E7__wrap1_3;
	// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Input.DataSource`1<System.Object>
struct DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_started
	bool ____started_4;
	// System.Boolean Oculus.Interaction.Input.DataSource`1::_requiresUpdate
	bool ____requiresUpdate_5;
	// Oculus.Interaction.Input.DataSource`1/UpdateModeFlags<TData> Oculus.Interaction.Input.DataSource`1::_updateMode
	int32_t ____updateMode_6;
	// UnityEngine.Object Oculus.Interaction.Input.DataSource`1::_updateAfter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____updateAfter_7;
	// Oculus.Interaction.Input.IDataSource Oculus.Interaction.Input.DataSource`1::UpdateAfter
	RuntimeObject* ___UpdateAfter_8;
	// System.Int32 Oculus.Interaction.Input.DataSource`1::_currentDataVersion
	int32_t ____currentDataVersion_9;
	// System.Action Oculus.Interaction.Input.DataSource`1::InputDataAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDataAvailable_10;
};

// Oculus.Interaction.Body.PoseDetection.PoseFromBody
struct PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Oculus.Interaction.Body.PoseDetection.PoseFromBody::WhenBodyPoseUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyPoseUpdated_4;
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.PoseFromBody::_body
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____body_5;
	// Oculus.Interaction.Body.Input.IBody Oculus.Interaction.Body.PoseDetection.PoseFromBody::Body
	RuntimeObject* ___Body_6;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::_autoUpdate
	bool ____autoUpdate_7;
	// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::_started
	bool ____started_8;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.PoseFromBody::_jointPosesLocal
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesLocal_9;
	// System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> Oculus.Interaction.Body.PoseDetection.PoseFromBody::_jointPosesFromRoot
	Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* ____jointPosesFromRoot_10;
};

// Oculus.Interaction.Body.SkeletonDebugGizmos
struct SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::_visibility
	int32_t ____visibility_4;
	// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::_jointColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____jointColor_5;
	// UnityEngine.Color Oculus.Interaction.Body.SkeletonDebugGizmos::_boneColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____boneColor_6;
	// System.Single Oculus.Interaction.Body.SkeletonDebugGizmos::_radius
	float ____radius_7;
};

// Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>
struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67  : public DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A
{
	// UnityEngine.Object Oculus.Interaction.Input.DataModifier`1::_iModifyDataFromSourceMono
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____iModifyDataFromSourceMono_11;
	// Oculus.Interaction.Input.IDataSource`1<TData> Oculus.Interaction.Input.DataModifier`1::_modifyDataFromSource
	RuntimeObject* ____modifyDataFromSource_12;
	// System.Boolean Oculus.Interaction.Input.DataModifier`1::_applyModifier
	bool ____applyModifier_13;
	// TData Oculus.Interaction.Input.DataModifier`1::_thisDataAsset
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____thisDataAsset_15;
	// TData Oculus.Interaction.Input.DataModifier`1::_currentDataAsset
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ____currentDataAsset_16;
};

struct DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_StaticFields
{
	// TData Oculus.Interaction.Input.DataModifier`1::<InvalidAsset>k__BackingField
	BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___U3CInvalidAssetU3Ek__BackingField_14;
};

// Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos
struct BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5  : public SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A
{
	// UnityEngine.Object Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::_bodyPose
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____bodyPose_8;
	// Oculus.Interaction.Body.PoseDetection.IBodyPose Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::BodyPose
	RuntimeObject* ___BodyPose_9;
};

// Oculus.Interaction.Body.Input.Body
struct Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69  : public DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67
{
	// UnityEngine.Transform Oculus.Interaction.Body.Input.Body::_trackingSpace
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trackingSpace_17;
	// System.Action Oculus.Interaction.Body.Input.Body::WhenBodyUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___WhenBodyUpdated_18;
	// Oculus.Interaction.Body.Input.BodyJointsCache Oculus.Interaction.Body.Input.Body::_jointPosesCache
	BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* ____jointPosesCache_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Collections.EnumerableHashSet`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumerableHashSet_1__ctor_mD0F27BBCBCF87EE832CECC2FD495A1EAA7DA836F_gshared (EnumerableHashSet_1_t3903EDC60D9B834B54C954ADADF9BA772EDCD83D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Pose>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared (Dictionary_2_tE72420335B7C1DFE868864FDA5220F3CEEFBEB63* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value1, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<System.Object>::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<System.Object>::MarkInputDataRequiresUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Input.DataSource`1<System.Object>::get_Started()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataModifier`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared (DataModifier_1_tFFB583BEE176837ABBE7D394279FEBF0AD473916* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Pose>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline (const RuntimeMethod* method) ;

// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Oculus.Interaction.Collections.EnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::.ctor()
inline void EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13 (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC*, const RuntimeMethod*))EnumerableHashSet_1__ctor_mD0F27BBCBCF87EE832CECC2FD495A1EAA7DA836F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId>::.ctor()
inline void Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*, const RuntimeMethod*))Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::Dispose()
inline void Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_Dispose_mFC7254CC839D017CD5CAB53078E6FE76C773792C_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::get_Current()
inline int32_t Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline)(__this, method);
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::GetVisibilityFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::Draw(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, int32_t ___joint0, int32_t ___visibility1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Oculus.Interaction.Body.Input.BodyJointId>::MoveNext()
inline bool Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8 (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546*, const RuntimeMethod*))Enumerator_MoveNext_mC6ED73C696A0B066E8B0C8131F1E3084A9B20BB0_gshared)(__this, method);
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.SkeletonDebugGizmos::get_Visibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.SkeletonDebugGizmos::get_HasNegativeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895 (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.SkeletonDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*))Dictionary_2_TryGetValue_m296FCC360AD230E54405BFE85236DA0B356CBD57_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::.ctor()
inline void Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2__ctor_mED794D96E56F3C951AD2C642C113C61C996C495E_gshared)(__this, method);
}
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::BeginStart(UnityEngine.MonoBehaviour,System.Boolean&,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___baseStart2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.MonoBehaviourStartExtensions::EndStart(UnityEngine.MonoBehaviour,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoBehaviour0, bool* ___started1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::Clear()
inline void Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, const RuntimeMethod*))Dictionary_2_Clear_mC2826E60ADBE9FF63FA018F9D95D8A6212BFA178_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6 (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* __this, int32_t ___key0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Dictionary_2_set_Item_mB1229F6F10C00557ECABAC32C04E72C47E4C95E7_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___body0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) ;
// TData Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::GetData()
inline BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_GetData_mE0944D4610B955BBECA722C21CCC9B01D9400925_gshared)(__this, method);
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataHighConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::get_RootScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonMapping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsTrackedDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.Body::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.Body::CheckJointPosesCacheUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldRootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::get_LocalDataVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::Update(Oculus.Interaction.Body.Input.BodyDataAsset,System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___data0, int32_t ___dataVersion1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingSpace2, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::MarkInputDataRequiresUpdate()
inline void DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_MarkInputDataRequiresUpdate_mBA20B66721DEB3B905745B43ABAEA2C1AA87668C_gshared)(__this, method);
}
// System.Boolean Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_Started()
inline bool DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSource_1_tF073EB05A2D29ABA77A19C288B67C94C7578922A*, const RuntimeMethod*))DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline)(__this, method);
}
// System.Void Oculus.Interaction.Body.Input.Body::InitializeJointPosesCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Input.DataModifier`1<Oculus.Interaction.Body.Input.BodyDataAsset>::.ctor()
inline void DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873 (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67* __this, const RuntimeMethod* method)
{
	((  void (*) (DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67*, const RuntimeMethod*))DataModifier_1__ctor_mCAB06B1F01741CC4EAF1ED7F2C76D80C645D5043_gshared)(__this, method);
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::get_Root()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_Root(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_RootScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataHighConfidence(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonChangedCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonChangedCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::get_JointPoses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::set_LocalDataVersion(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.ctor(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___poses0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllLocalPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllPosesFromRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllWorldPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) ;
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::CheckJointDirty(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::SetJointClean(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.PoseUtils::Postmultiply(UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseUtils_Postmultiply_m428D74BAC9502D19EACB8AF6CBD8738FFC4B41CE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___a0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___b1, const RuntimeMethod* method) ;
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose> Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.Pose>()
inline PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_inline (const RuntimeMethod* method)
{
	return ((  PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* (*) (const RuntimeMethod*))Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline)(method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Oculus.Interaction.Body.Input.ISkeletonMapping.get_Joints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mapping_Oculus_Interaction_Body_Input_ISkeletonMapping_get_Joints_m2D30235FE8177893DC93393BE1CD674AC641ECB8 (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerableHashSet<BodyJointId> ISkeletonMapping.Joints => Joints;
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_0 = __this->___Joints_0;
		return L_0;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::Oculus.Interaction.Body.Input.ISkeletonMapping.TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mapping_Oculus_Interaction_Body_Input_ISkeletonMapping_TryGetParentJointId_m4C6551B1C27A94C4AE64BDC310387CE39A549518 (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, int32_t ___jointId0, int32_t* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JointToParent.TryGetValue(jointId, out parent);
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_0 = __this->___JointToParent_1;
		int32_t L_1 = ___jointId0;
		int32_t* L_2 = ___parent1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC(L_0, L_1, L_2, Dictionary_2_TryGetValue_m96FFC5C97A9C7F9EDA0DE271851717F25C9996BC_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping__ctor_m6F13E67DA073EA487DDBDE62454BDF8A23AD99DE (Mapping_tBEC385BAF5A28C978A2713E8A769DC68C2D9F50C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EnumerableHashSet<BodyJointId> Joints =
		//     new EnumerableHashSet<BodyJointId>();
		EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC* L_0 = (EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC*)il2cpp_codegen_object_new(EnumerableHashSet_1_t0E4CA7496AF459BE0A415B775318942BF6C97BEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13(L_0, EnumerableHashSet_1__ctor_m59547C25A6D1E2B5A2CCDDB581148F95D4C58B13_RuntimeMethod_var);
		__this->___Joints_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Joints_0), (void*)L_0);
		// public Dictionary<BodyJointId, BodyJointId> JointToParent =
		//     new Dictionary<BodyJointId, BodyJointId>();
		Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18* L_1 = (Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18*)il2cpp_codegen_object_new(Dictionary_2_tDC2DCCD0E88A21AFF29E3B156D61A32A65FE3D18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB(L_1, Dictionary_2__ctor_mB5959076C82B94F0753E430F716B31A89BEC8CDB_RuntimeMethod_var);
		__this->___JointToParent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JointToParent_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAE28EBDB5735F7747B668B15B2772E24DF30BE2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* L_0 = (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90*)il2cpp_codegen_object_new(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719(L_0, NULL);
		((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC862656C90F4033ECC1313F0902EFCFFFB75719 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseData/<>c::<.ctor>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__17_0_m6E4F4E249BFD10AC52CE1EF2F4826FD1EC743962 (U3CU3Ec_t4CA5CAC9EAB029C01599ABD0F177C29F40BB0C90* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Awake_m1F2FAE9E28854672B894612994E02E5C0C645E2C (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BodyPose = _bodyPose as IBodyPose;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->____bodyPose_8;
		__this->___BodyPose_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_9), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Start_mA0FE7E685A0C2BE1BCCD57C9D34E116AE7AEA685 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_Update_m2648C2A6347BF946016DF0D357E2B9F82DB66A1B (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
		RuntimeObject* L_0 = __this->___BodyPose_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.IBodyPose::get_SkeletonMapping() */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_3;
		L_3 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0018_1:
			{
				// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
				int32_t L_4;
				L_4 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_4;
				// Draw(joint, GetVisibilityFlags());
				int32_t L_5 = V_1;
				int32_t L_6;
				L_6 = BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0(__this, NULL);
				SkeletonDebugGizmos_Draw_m343BEDA97A50D045FD405F54CF05E280BA8D7390(__this, L_5, L_6, NULL);
			}

IL_002d_1:
			{
				// foreach (BodyJointId joint in BodyPose.SkeletonMapping.Joints)
				bool L_7;
				L_7 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// Oculus.Interaction.Body.SkeletonDebugGizmos/VisibilityFlags Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::GetVisibilityFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyPoseDebugGizmos_GetVisibilityFlags_m4081619D833F0F778E980871DFD9EB96CA5850A0 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// VisibilityFlags modifiedFlags = Visibility;
		int32_t L_0;
		L_0 = SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline(__this, NULL);
		V_0 = L_0;
		// if (HasNegativeScale)
		bool L_1;
		L_1 = SkeletonDebugGizmos_get_HasNegativeScale_m018A324D52FF3E534D7F727F1EB8B602E7EBB895(__this, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// modifiedFlags &= ~VisibilityFlags.Axes;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2&((int32_t)-3)));
	}

IL_0014:
	{
		// return modifiedFlags;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::TryGetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetWorldJointPose_m118B15E71FE7391486DCB4F9CECA70F2A3BA85CC (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___jointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BodyPose.GetJointPoseFromRoot(jointId, out pose))
		RuntimeObject* L_0 = __this->___BodyPose_9;
		int32_t L_1 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(4 /* System.Boolean Oculus.Interaction.Body.PoseDetection.IBodyPose::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// pose.position = transform.TransformPoint(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = ___pose1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___pose1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_7, NULL);
		L_4->___position_0 = L_8;
		// pose.rotation = transform.rotation * pose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___pose1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___pose1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = L_12->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_11, L_13, NULL);
		L_9->___rotation_1 = L_14;
		// return true;
		return (bool)1;
	}

IL_0044:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyPoseDebugGizmos_TryGetParentJointId_m000322E4F958E7B722297A6C965DCA3634D09512 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, int32_t ___jointId0, int32_t* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BodyPose.SkeletonMapping.TryGetParentJointId(jointId, out parent);
		RuntimeObject* L_0 = __this->___BodyPose_9;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.IBodyPose::get_SkeletonMapping() */, IBodyPose_t2BA886A75367D7351AACFE310468790C66930097_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = ___jointId0;
		int32_t* L_3 = ___parent1;
		NullCheck(L_1);
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectAllBodyJointDebugGizmos(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectAllBodyJointDebugGizmos_mBF057DE9337123DAE98C5C615AB60F71ED3B141A (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) 
{
	{
		// InjectBodyPose(bodyPose);
		RuntimeObject* L_0 = ___bodyPose0;
		BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::InjectBodyPose(Oculus.Interaction.Body.PoseDetection.IBodyPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos_InjectBodyPose_m1531E11B5782CEB992872B90F1EC4269FF71EB26 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, RuntimeObject* ___bodyPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _bodyPose = bodyPose as UnityEngine.Object;
		RuntimeObject* L_0 = ___bodyPose0;
		__this->____bodyPose_8 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyPose_8), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// BodyPose = bodyPose;
		RuntimeObject* L_1 = ___bodyPose0;
		__this->___BodyPose_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyPose_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.BodyPoseDebugGizmos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyPoseDebugGizmos__ctor_m90242A1FA4DC5DDF6AC92D02BB2D37978A393FE8 (BodyPoseDebugGizmos_t00D8FA7DF1B998A0CC463F14105D4C210DEB40C5* __this, const RuntimeMethod* method) 
{
	{
		SkeletonDebugGizmos__ctor_mBCAC1A2285616EA1604DBD9CBC01C0F169FF79AE(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::add_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_add_WhenBodyPoseUpdated_m4F367E0747FC9D30C136610A4D21A3C2E97ED764 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::remove_WhenBodyPoseUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_remove_WhenBodyPoseUpdated_m878542A32B4026D1013A456977681CDC5DDBF995 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyPoseUpdated_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyPoseUpdated_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_get_AutoUpdate_m1B19BF70341673621096BEECA9C3284C8E1A6BAC (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// get => _autoUpdate;
		bool L_0 = __this->____autoUpdate_7;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::set_AutoUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_set_AutoUpdate_m281E0DF37FCE1DAB2B973B90684B83FD345F0A5E (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => _autoUpdate = value;
		bool L_0 = ___value0;
		__this->____autoUpdate_7 = L_0;
		return;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.PoseDetection.PoseFromBody::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoseFromBody_get_SkeletonMapping_m79DFFF5AD444C8C2AC87E9629128631A4871D8FD (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISkeletonMapping SkeletonMapping => Body.SkeletonMapping;
		RuntimeObject* L_0 = __this->___Body_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseLocal_m237F69CDB94CFE83C54A20DB0F9F6F7A5A96D68C (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesLocal.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal_9;
		int32_t L_1 = ___bodyJointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Oculus.Interaction.Body.PoseDetection.PoseFromBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseFromBody_GetJointPoseFromRoot_mC6AE256BAA70695B7A8C89A0FC2B12139A208088 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesFromRoot.TryGetValue(bodyJointId, out pose);
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesFromRoot_10;
		int32_t L_1 = ___bodyJointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35(L_0, L_1, L_2, Dictionary_2_TryGetValue_m711787E747050EB4A6D40A68B50617048BF15F35_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Awake_m3C62CA5606E08599B6148463371FD03F9C9D7BE2 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _jointPosesLocal = new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_0, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesLocal_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesLocal_9), (void*)L_0);
		// _jointPosesFromRoot = new Dictionary<BodyJointId, Pose>();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = (Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482*)il2cpp_codegen_object_new(Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E(L_1, Dictionary_2__ctor_m26FD8D184272BACFE032288596F40E2E9887276E_RuntimeMethod_var);
		__this->____jointPosesFromRoot_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesFromRoot_10), (void*)L_1);
		// Body = _body as IBody;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->____body_5;
		__this->___Body_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_6), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Start_m18CD67AB3AF54313EB3C7EFBDBF98B25015DA023 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// this.BeginStart(ref _started);
		bool* L_0 = (&__this->____started_8);
		MonoBehaviourStartExtensions_BeginStart_mC498E0AC129F7CDC354718BF0E799CB2A2E04366(__this, L_0, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		// this.EndStart(ref _started);
		bool* L_1 = (&__this->____started_8);
		MonoBehaviourStartExtensions_EndStart_mB9C76425BEAB3A0D8A30965081A4F356F9F69CF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnEnable_mC35E282A150221780C957F4A691D12A8FDA8F525 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Body.WhenBodyUpdated += Body_WhenBodyUpdated;
		RuntimeObject* L_1 = __this->___Body_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(10 /* System.Void Oculus.Interaction.Body.Input.IBody::add_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_OnDisable_mBB57DDE21523E881429E79588EB573CD071D0D59 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_started)
		bool L_0 = __this->____started_8;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// Body.WhenBodyUpdated -= Body_WhenBodyUpdated;
		RuntimeObject* L_1 = __this->___Body_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(11 /* System.Void Oculus.Interaction.Body.Input.IBody::remove_WhenBodyUpdated(System.Action) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::Body_WhenBodyUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_Body_WhenBodyUpdated_mD6ED0AD4287F3A810E21E5E6EAA1A576321A9F15 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	{
		// if (_autoUpdate)
		bool L_0 = __this->____autoUpdate_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdatePose();
		PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_UpdatePose_m9E4CF38593C5F31ADEC52CE5167889581369BB3B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _jointPosesLocal.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_0 = __this->____jointPosesLocal_9;
		NullCheck(L_0);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_0, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// _jointPosesFromRoot.Clear();
		Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_1 = __this->____jointPosesFromRoot_10;
		NullCheck(L_1);
		Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C(L_1, Dictionary_2_Clear_m49994D97F18CC1CD1EE82FE4F43A036416A2C40C_RuntimeMethod_var);
		// foreach (var joint in Body.SkeletonMapping.Joints)
		RuntimeObject* L_2 = __this->___Body_6;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.IBody::get_SkeletonMapping() */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_5;
		L_5 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0070_1;
			}

IL_002e_1:
			{
				// foreach (var joint in Body.SkeletonMapping.Joints)
				int32_t L_6;
				L_6 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_6;
				// if (Body.GetJointPoseLocal(joint,
				//     out Pose localPose))
				RuntimeObject* L_7 = __this->___Body_6;
				int32_t L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(7 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_7, L_8, (&V_2));
				if (!L_9)
				{
					goto IL_0053_1;
				}
			}
			{
				// _jointPosesLocal[joint] = localPose;
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_10 = __this->____jointPosesLocal_9;
				int32_t L_11 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_2;
				NullCheck(L_10);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_10, L_11, L_12, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_0053_1:
			{
				// if (Body.GetJointPoseFromRoot(joint,
				//     out Pose poseFromRoot))
				RuntimeObject* L_13 = __this->___Body_6;
				int32_t L_14 = V_1;
				NullCheck(L_13);
				bool L_15;
				L_15 = InterfaceFuncInvoker2< bool, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* >::Invoke(8 /* System.Boolean Oculus.Interaction.Body.Input.IBody::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&) */, IBody_tAB5443EC7B3057201A78E3ABD03C6542A6F91E01_il2cpp_TypeInfo_var, L_13, L_14, (&V_3));
				if (!L_15)
				{
					goto IL_0070_1;
				}
			}
			{
				// _jointPosesFromRoot[joint] = poseFromRoot;
				Dictionary_2_tB40651EC233856D969862CAADA3357A70F93D482* L_16 = __this->____jointPosesFromRoot_10;
				int32_t L_17 = V_1;
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_3;
				NullCheck(L_16);
				Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6(L_16, L_17, L_18, Dictionary_2_set_Item_mB0F6FFA30850B2EF473A368FFFF2C78E750091D6_RuntimeMethod_var);
			}

IL_0070_1:
			{
				// foreach (var joint in Body.SkeletonMapping.Joints)
				bool L_19;
				L_19 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		// WhenBodyPoseUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = __this->___WhenBodyPoseUpdated_4;
		NullCheck(L_20);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_20, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectAllPoseFromBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectAllPoseFromBody_m04B85AF80EBF8B7C2F19387F83AAA769393967A3 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	{
		// InjectBody(body);
		RuntimeObject* L_0 = ___body0;
		PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::InjectBody(Oculus.Interaction.Body.Input.IBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody_InjectBody_m7B07261E5C7370D4F1FD642B5B795D55C394CC5B (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, RuntimeObject* ___body0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _body = body as UnityEngine.Object;
		RuntimeObject* L_0 = ___body0;
		__this->____body_5 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____body_5), (void*)((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		// Body = body;
		RuntimeObject* L_1 = ___body0;
		__this->___Body_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseFromBody__ctor_m93DB6B0461C2AFF46BE0CC634AD6F2B5955C1AC0 (PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	PoseFromBody_t0ABE582710351544C897CE0E821314556399ED6C* G_B1_1 = NULL;
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_2 = ((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyPoseUpdated_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyPoseUpdated_4), (void*)G_B2_0);
		// private bool _autoUpdate = true;
		__this->____autoUpdate_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE297FA05D8CD9E9E5891918A299A22431B08D6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* L_0 = (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9*)il2cpp_codegen_object_new(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E(L_0, NULL);
		((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A746DA1F739C7C1F6C14222B72E928295366F3E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.PoseDetection.PoseFromBody/<>c::<.ctor>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__24_0_m6BA7C3447A8C3C7E2B65E4230DE3C290D995FB1E (U3CU3Ec_tDCA80A8DE121FE80A2A878CCE332E2A9BB8CEDC9* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyPoseUpdated = delegate { };
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
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsConnected_m4BBC7B62898B592847FEDC68045AC3F6C63A51FF (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsConnected => GetData().IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsHighConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsHighConfidence_m0BFF1FFD4774604FAF7ADA1497C0949207D5BEBC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsHighConfidence => GetData().IsDataHighConfidence;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Single Oculus.Interaction.Body.Input.Body::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Body_get_Scale_mADAE445C0468C2BB6930BCBBDC9810416233D8A6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float Scale => GetData().RootScale;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1;
		L_1 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_0, NULL);
		return L_1;
	}
}
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.Body::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ISkeletonMapping SkeletonMapping => GetData().SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::get_IsTrackedDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsTrackedDataValid => GetData().IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0;
		L_0 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::add_WhenBodyUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_add_WhenBodyUpdated_m4B022B818252F0A0BBFAFB945DC2A6727EF899DC (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyUpdated_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::remove_WhenBodyUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_remove_WhenBodyUpdated_mA9C5D98323F3666D16A3752C34226F26B42B3F18 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___WhenBodyUpdated_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___WhenBodyUpdated_18);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPose(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPose_mC4219B1E7D4EF11E74EE7258170353DF43C6AB20 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___bodyJointId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetWorldJointPose(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose1;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_8 = __this->____jointPosesCache_19;
		int32_t L_9 = ___bodyJointId0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A(L_8, L_9, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_10;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseLocal_mE9642BCCA92EC6B2529B3F589A4A274F4F436735 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___bodyJointId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetLocalJointPose(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose1;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_8 = __this->____jointPosesCache_19;
		int32_t L_9 = ___bodyJointId0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D(L_8, L_9, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_10;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetJointPoseFromRoot_m69D84B629E83600E081F1345E40C0E791DBB763A (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, int32_t ___bodyJointId0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid || !SkeletonMapping.Joints.Contains(bodyJointId))
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = Body_get_SkeletonMapping_m544AF155D645F4044F8ECC1D7011E9E96F64F70B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = ___bodyJointId0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::Contains(T) */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_4, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetJointPoseFromRoot(bodyJointId);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___pose1;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_8 = __this->____jointPosesCache_19;
		int32_t L_9 = ___bodyJointId0;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(L_8, L_9, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_10;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.Body::GetRootPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Body_GetRootPose_m6C75EDBF0A1C9D10433029997E26279B13604A35 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = ___pose0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_0 = L_1;
		// if (!IsTrackedDataValid)
		bool L_2;
		L_2 = Body_get_IsTrackedDataValid_m8D64E08589BD312332FCF9B014E7804DE89270CB(__this, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// CheckJointPosesCacheUpdate();
		Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E(__this, NULL);
		// pose = _jointPosesCache.GetWorldRootPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___pose0;
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_4 = __this->____jointPosesCache_19;
		NullCheck(L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline(L_4, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_3 = L_5;
		// return true;
		return (bool)1;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::InitializeJointPosesCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointPosesCache == null)
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache_19;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _jointPosesCache = new BodyJointsCache();
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_1 = (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1*)il2cpp_codegen_object_new(BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705(L_1, NULL);
		__this->____jointPosesCache_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jointPosesCache_19), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::CheckJointPosesCacheUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_CheckJointPosesCacheUpdate_m54B12A020DADCF14B6F351CD7DE1AA49213B0E4E (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_jointPosesCache != null
		//     && CurrentDataVersion != _jointPosesCache.LocalDataVersion)
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_0 = __this->____jointPosesCache_19;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_CurrentDataVersion() */, __this);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_2 = __this->____jointPosesCache_19;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		// _jointPosesCache.Update(GetData(), CurrentDataVersion, _trackingSpace);
		BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* L_4 = __this->____jointPosesCache_19;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_5;
		L_5 = DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B(__this, DataSource_1_GetData_mEBAAEB41B26515720E84EA44AB5BC5EABD34CC2B_RuntimeMethod_var);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Oculus.Interaction.Input.DataSource`1<Oculus.Interaction.Body.Input.BodyDataAsset>::get_CurrentDataVersion() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____trackingSpace_17;
		NullCheck(L_4);
		BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8(L_4, L_5, L_6, L_7, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::Apply(Oculus.Interaction.Body.Input.BodyDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_Apply_m2265B8B3A62FE368E5A43B6001BACD7769B647C6 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___data0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::MarkInputDataRequiresUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_MarkInputDataRequiresUpdate_m023BCD6AFEBC1A05252A6493085BDCF029492C01 (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.MarkInputDataRequiresUpdate();
		DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC(__this, DataSource_1_MarkInputDataRequiresUpdate_m94DD195593284BA85215005FD325C6449887B5FC_RuntimeMethod_var);
		// if (Started)
		bool L_0;
		L_0 = DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_inline(__this, DataSource_1_get_Started_mC57367D10E055742071221C222C674623D56440F_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// InitializeJointPosesCache();
		Body_InitializeJointPosesCache_mE1555C53CC1A114856D7FBA21DE532DF3C387FC1(__this, NULL);
		// WhenBodyUpdated.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___WhenBodyUpdated_18;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body__ctor_m5939597A61F910B26A9F5F008F58BC849B3B9B0D (Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Body_tBBB488A8423567EB729A7B55B211B6C38FAA2E69* G_B1_1 = NULL;
	{
		// public event Action WhenBodyUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_2 = ((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9__23_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___WhenBodyUpdated_18 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___WhenBodyUpdated_18), (void*)G_B2_0);
		il2cpp_codegen_runtime_class_init_inline(DataModifier_1_t1AF5E4609D8BBC4B65936BE83022D125C7094F67_il2cpp_TypeInfo_var);
		DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873(__this, DataModifier_1__ctor_m587ADA0F3374AEE86E6747ACD3C03D13D5F66873_RuntimeMethod_var);
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
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B5F8F6C9982D2B9BB674F10EB59FD1E25D250B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* L_0 = (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84*)il2cpp_codegen_object_new(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40(L_0, NULL);
		((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FE11F95FD8F4815A034DF0D5BA1C9D40CD7ED40 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.Body/<>c::<.ctor>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__23_0_mE9C7625780BAC828F5B0CFF92173124877DC5167 (U3CU3Ec_t4CFA42A274364A7B2EF6B663103DFCBE9421EF84* __this, const RuntimeMethod* method) 
{
	{
		// public event Action WhenBodyUpdated = delegate { };
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
// Oculus.Interaction.Body.Input.ISkeletonMapping Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonMapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSkeletonMappingU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyDataAsset::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_Root(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Oculus.Interaction.Body.Input.BodyDataAsset::get_RootScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_RootScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = ___value0;
		__this->___U3CRootScaleU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyDataAsset::get_IsDataHighConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_IsDataHighConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Pose[] Oculus.Interaction.Body.Input.BodyDataAsset::get_JointPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_JointPoses(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_JointPoses_m3BD13A56F9DD4E6EC6803871CD0D04F60F434FED (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___value0;
		__this->___U3CJointPosesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Int32 Oculus.Interaction.Body.Input.BodyDataAsset::get_SkeletonChangedCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::set_SkeletonChangedCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::CopyFrom(Oculus.Interaction.Body.Input.BodyDataAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset_CopyFrom_m7E93AB9DB6DA8D6E02D3D45C12B2125A4854C854 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___source0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// SkeletonMapping = source.SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_0 = ___source0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_0, NULL);
		BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline(__this, L_1, NULL);
		// Root = source.Root;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_2 = ___source0;
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_2, NULL);
		BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline(__this, L_3, NULL);
		// RootScale = source.RootScale;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_4 = ___source0;
		NullCheck(L_4);
		float L_5;
		L_5 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_4, NULL);
		BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline(__this, L_5, NULL);
		// IsDataValid = source.IsDataValid;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_6 = ___source0;
		NullCheck(L_6);
		bool L_7;
		L_7 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_6, NULL);
		BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline(__this, L_7, NULL);
		// IsDataHighConfidence = source.IsDataHighConfidence;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_8 = ___source0;
		NullCheck(L_8);
		bool L_9;
		L_9 = BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline(L_8, NULL);
		BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline(__this, L_9, NULL);
		// SkeletonChangedCount = source.SkeletonChangedCount;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline(L_10, NULL);
		BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline(__this, L_11, NULL);
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		V_0 = 0;
		goto IL_0068;
	}

IL_004c:
	{
		// JointPoses[i] = source.JointPoses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12;
		L_12 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(__this, NULL);
		int32_t L_13 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_14 = ___source0;
		NullCheck(L_14);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_15;
		L_15 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_14, NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_18);
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0068:
	{
		// for (int i = 0; i < source.JointPoses.Length; ++i)
		int32_t L_20 = V_0;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_21 = ___source0;
		NullCheck(L_21);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_22;
		L_22 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_21, NULL);
		NullCheck(L_22);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyDataAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyDataAsset__ctor_mF8B6BB967E907A5ACA382FE386F6DD3C87A4E262 (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose Root { get; set; } = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		// public float RootScale { get; set; } = 1f;
		__this->___U3CRootScaleU3Ek__BackingField_2 = (1.0f);
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->___U3CJointPosesU3Ek__BackingField_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJointPosesU3Ek__BackingField_5), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 Oculus.Interaction.Body.Input.BodyJointsCache::get_LocalDataVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::set_LocalDataVersion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = ___value0;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache__ctor_mCF4BA4A24F80736694FA9D2FE1BE682790D5E705 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int LocalDataVersion { get; private set; } = -1;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = (-1);
		// private Pose[] _originalPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____originalPoses_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____originalPoses_2), (void*)L_0);
		// private Pose[] _posesFromRoot = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____posesFromRoot_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRoot_3), (void*)L_1);
		// private Pose[] _localPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____localPoses_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPoses_4), (void*)L_2);
		// private Pose[] _worldPoses = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70));
		__this->____worldPoses_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPoses_5), (void*)L_3);
		// public BodyJointsCache()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LocalDataVersion = -1;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, (-1), NULL);
		// _dirtyJointsFromRoot = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyJointsFromRoot_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyJointsFromRoot_9), (void*)L_4);
		// _dirtyLocalJoints = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyLocalJoints_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyLocalJoints_10), (void*)L_5);
		// _dirtyWorldJoints = new ulong[DIRTY_ARRAY_SIZE];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____dirtyWorldJoints_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dirtyWorldJoints_11), (void*)L_6);
		// _localPosesCollection = new ReadOnlyBodyJointPoses(_localPoses);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = __this->____localPoses_4;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_8 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_8, L_7, NULL);
		__this->____localPosesCollection_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localPosesCollection_8), (void*)L_8);
		// _worldPosesCollection = new ReadOnlyBodyJointPoses(_worldPoses);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_9 = __this->____worldPoses_5;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_10 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_10, L_9, NULL);
		__this->____worldPosesCollection_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worldPosesCollection_7), (void*)L_10);
		// _posesFromRootCollection = new ReadOnlyBodyJointPoses(_posesFromRoot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_11 = __this->____posesFromRoot_3;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_12 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_12, L_11, NULL);
		__this->____posesFromRootCollection_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____posesFromRootCollection_6), (void*)L_12);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::Update(Oculus.Interaction.Body.Input.BodyDataAsset,System.Int32,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_Update_m891B0069F02BE9A95BE2EE6B02DDB4554B598CE8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* ___data0, int32_t ___dataVersion1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingSpace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// LocalDataVersion = dataVersion;
		int32_t L_0 = ___dataVersion1;
		BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline(__this, L_0, NULL);
		// _mapping = data.SkeletonMapping;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_1 = ___data0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline(L_1, NULL);
		__this->____mapping_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mapping_15), (void*)L_2);
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		V_0 = 0;
		goto IL_0039;
	}

IL_0017:
	{
		// _dirtyJointsFromRoot[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____dirtyJointsFromRoot_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint64_t)((int64_t)(-1)));
		// _dirtyLocalJoints[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____dirtyLocalJoints_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((int64_t)(-1)));
		// _dirtyWorldJoints[i] = ulong.MaxValue;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->____dirtyWorldJoints_11;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)((int64_t)(-1)));
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < DIRTY_ARRAY_SIZE; ++i)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)2)))
		{
			goto IL_0017;
		}
	}
	{
		// if (!data.IsDataValid)
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_11 = ___data0;
		NullCheck(L_11);
		bool L_12;
		L_12 = BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// _scale = Matrix4x4.Scale(Vector3.one * data.RootScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_14 = ___data0;
		NullCheck(L_14);
		float L_15;
		L_15 = BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_15, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17;
		L_17 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_16, NULL);
		__this->____scale_12 = L_17;
		// _rootPose = data.Root;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_18 = ___data0;
		NullCheck(L_18);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline(L_18, NULL);
		__this->____rootPose_13 = L_19;
		// _worldRoot = _rootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = __this->____rootPose_13;
		__this->____worldRoot_14 = L_20;
		// if (trackingSpace != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___trackingSpace2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		// _scale *= Matrix4x4.Scale(trackingSpace.lossyScale);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23 = __this->____scale_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___trackingSpace2;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_24, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Matrix4x4_Scale_m95902D2A889FD6E7B04BBEAE6FAE5D6D8A88E642(L_25, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27;
		L_27 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_23, L_26, NULL);
		__this->____scale_12 = L_27;
		// _worldRoot.position = trackingSpace.TransformPoint(_rootPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = (&__this->____worldRoot_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = ___trackingSpace2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = (&__this->____rootPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30->___position_0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_29, L_31, NULL);
		L_28->___position_0 = L_32;
		// _worldRoot.rotation = trackingSpace.rotation * _rootPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = (&__this->____worldRoot_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = ___trackingSpace2;
		NullCheck(L_34);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_34, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_36 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = L_36->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_35, L_37, NULL);
		L_33->___rotation_1 = L_38;
	}

IL_00db:
	{
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		V_1 = 0;
		goto IL_00fb;
	}

IL_00df:
	{
		// _originalPoses[i] = data.JointPoses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_39 = __this->____originalPoses_2;
		int32_t L_40 = V_1;
		BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* L_41 = ___data0;
		NullCheck(L_41);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_42;
		L_42 = BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline(L_41, NULL);
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_45);
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00fb:
	{
		// for (int i = 0; i < Constants.NUM_BODY_JOINTS; ++i)
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)70))))
		{
			goto IL_00df;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllLocalPoses(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllLocalPoses_mC8BF8BA0AA0FD490D6EA91BAD6B21C759C027EB3 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___localJointPoses0, const RuntimeMethod* method) 
{
	{
		// UpdateAllLocalPoses();
		BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B(__this, NULL);
		// localJointPoses = _localPosesCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___localJointPoses0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____localPosesCollection_8;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _localPosesCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____localPosesCollection_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllPosesFromRoot(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllPosesFromRoot_m2D463DB2AABCEC580600448646B5BA9CE482337C (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___posesFromRoot0, const RuntimeMethod* method) 
{
	{
		// UpdateAllPosesFromRoot();
		BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102(__this, NULL);
		// posesFromRoot = _posesFromRootCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___posesFromRoot0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____posesFromRootCollection_6;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _posesFromRootCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____posesFromRootCollection_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::GetAllWorldPoses(Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_GetAllWorldPoses_mE6DF5987E80578B0B228ECA3119BE6F23DFFB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** ___worldJointPoses0, const RuntimeMethod* method) 
{
	{
		// UpdateAllWorldPoses();
		BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4(__this, NULL);
		// worldJointPoses = _worldPosesCollection;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649** L_0 = ___worldJointPoses0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->____worldPosesCollection_7;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// return _worldPosesCollection.Count > 0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_2 = __this->____worldPosesCollection_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetLocalJointPose_mD3AD917B5EF5673D8368775A3049D8265842994D (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// UpdateLocalJointPose(jointId);
		int32_t L_0 = ___jointId0;
		BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_0, NULL);
		// return _localPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____localPoses_4;
		int32_t L_2 = ___jointId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// UpdateJointPoseFromRoot(jointId);
		int32_t L_0 = ___jointId0;
		BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_0, NULL);
		// return _posesFromRoot[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____posesFromRoot_3;
		int32_t L_2 = ___jointId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldJointPose_m68FE10DF70ECA23545ED3485802304027E1B0E0A (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	{
		// UpdateWorldJointPose(jointId);
		int32_t L_0 = ___jointId0;
		BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_0, NULL);
		// return _worldPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____worldPoses_5;
		int32_t L_2 = ___jointId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.BodyJointsCache::GetWorldRootPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// return _worldRoot;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____worldRoot_14;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!CheckJointDirty(jointId, _dirtyJointsFromRoot))
		int32_t L_0 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyJointsFromRoot_9;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// Pose originalPose = _originalPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = __this->____originalPoses_2;
		int32_t L_4 = ___jointId0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// Vector3 posFromRoot = Quaternion.Inverse(_rootPose.rotation) *
		//     (originalPose.position - _rootPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_8, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = (&__this->____rootPose_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_9, L_14, NULL);
		V_1 = L_15;
		// Quaternion rotFromRoot = Quaternion.Inverse(_rootPose.rotation) *
		//     originalPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = (&__this->____rootPose_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_17, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = L_19.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_18, L_20, NULL);
		V_2 = L_21;
		// _posesFromRoot[(int)jointId] = new Pose(posFromRoot, rotFromRoot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_22 = __this->____posesFromRoot_3;
		int32_t L_23 = ___jointId0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_26), L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_26);
		// SetJointClean(jointId, _dirtyJointsFromRoot);
		int32_t L_27 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = __this->____dirtyJointsFromRoot_9;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateLocalJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!CheckJointDirty(jointId, _dirtyLocalJoints))
		int32_t L_0 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyLocalJoints_10;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (_mapping.TryGetParentJointId(jointId, out BodyJointId parentId) &&
		//     parentId >= BodyJointId.Body_Root)
		RuntimeObject* L_3 = __this->____mapping_15;
		int32_t L_4 = ___jointId0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean Oculus.Interaction.Body.Input.ISkeletonMapping::TryGetParentJointId(Oculus.Interaction.Body.Input.BodyJointId,Oculus.Interaction.Body.Input.BodyJointId&) */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_3, L_4, (&V_0));
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		// Pose originalPose = _originalPoses[(int)jointId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_7 = __this->____originalPoses_2;
		int32_t L_8 = ___jointId0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// Pose parentPose = _originalPoses[(int)parentId];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_11 = __this->____originalPoses_2;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// Vector3 localPos = Quaternion.Inverse(parentPose.rotation) *
		//     (originalPose.position - parentPose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_16, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_17, L_22, NULL);
		V_3 = L_23;
		// Quaternion localRot = Quaternion.Inverse(parentPose.rotation) *
		//     originalPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_25, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = L_27.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_26, L_28, NULL);
		V_4 = L_29;
		// _localPoses[(int)jointId] = new Pose(localPos, localRot);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_30 = __this->____localPoses_4;
		int32_t L_31 = ___jointId0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_34), L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_34);
		goto IL_009f;
	}

IL_008e:
	{
		// _localPoses[(int)jointId] = Pose.identity;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_35 = __this->____localPoses_4;
		int32_t L_36 = ___jointId0;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_37;
		L_37 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_37);
	}

IL_009f:
	{
		// SetJointClean(jointId, _dirtyLocalJoints);
		int32_t L_38 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = __this->____dirtyLocalJoints_10;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_38, L_39, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateWorldJointPose(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!CheckJointDirty(jointId, _dirtyWorldJoints))
		int32_t L_0 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____dirtyWorldJoints_11;
		bool L_2;
		L_2 = BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F(__this, L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// Pose fromRoot = GetJointPoseFromRoot(jointId);
		int32_t L_3 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = BodyJointsCache_GetJointPoseFromRoot_m34D21788D86044FE92334BB88F58D872D23B13E6(__this, L_3, NULL);
		V_0 = L_4;
		// fromRoot.position = _scale * fromRoot.position;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->____scale_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___position_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_7, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_5, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_9, NULL);
		(&V_0)->___position_0 = L_10;
		// fromRoot.Postmultiply(GetWorldRootPose());
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline(__this, NULL);
		V_1 = L_11;
		PoseUtils_Postmultiply_m428D74BAC9502D19EACB8AF6CBD8738FFC4B41CE((&V_0), (&V_1), NULL);
		// _worldPoses[(int)jointId] = fromRoot;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12 = __this->____worldPoses_5;
		int32_t L_13 = ___jointId0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_14);
		// SetJointClean(jointId, _dirtyWorldJoints);
		int32_t L_15 = ___jointId0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->____dirtyWorldJoints_11;
		BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF(__this, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllWorldPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllWorldPoses_mF9129DFB6BAF2AB6E7C70F4D11F235E90D434BD4 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateWorldJointPose(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateWorldJointPose_m15B8F1C924F9A88D881D6509D55C622A26FC57F2(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllLocalPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllLocalPoses_m55E19022E4AFF1738F5B5E132B42B7CFB27EB52B (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateLocalJointPose(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateLocalJointPose_m09CDE159D2855D4CD5D239187D703A53B2226815(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::UpdateAllPosesFromRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_UpdateAllPosesFromRoot_m27430F05C016293A8B6E3986907E4329B5565102 (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// foreach (BodyJointId joint in _mapping.Joints)
		RuntimeObject* L_0 = __this->____mapping_15;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId> Oculus.Interaction.Body.Input.ISkeletonMapping::get_Joints() */, ISkeletonMapping_t5EC09A7DD06D541CEFF5EE0988D49C2AA50D9A07_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 L_2;
		L_2 = InterfaceFuncInvoker0< Enumerator_tD5E4EBA2E014E745E46E7BD629005700D647D546 >::Invoke(1 /* System.Collections.Generic.HashSet`1/Enumerator<T> Oculus.Interaction.Collections.IEnumerableHashSet`1<Oculus.Interaction.Body.Input.BodyJointId>::GetEnumerator() */, IEnumerableHashSet_1_t54EFF25B645E1796C7D776840F663F2A25F9155C_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F((&V_0), Enumerator_Dispose_mFC396DF4AC732100E1D9A3D9E1DB2963C1945B1F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0013_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				int32_t L_3;
				L_3 = Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_inline((&V_0), Enumerator_get_Current_mBD313D072A7D6DE22768FDFD25BF1E2753441484_RuntimeMethod_var);
				V_1 = L_3;
				// UpdateJointPoseFromRoot(joint);
				int32_t L_4 = V_1;
				BodyJointsCache_UpdateJointPoseFromRoot_m7242AC9A6E08FAACF01D9A16187A0F22556A7450(__this, L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (BodyJointId joint in _mapping.Joints)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8((&V_0), Enumerator_MoveNext_m5F6EB936DF2A34CA353A4D6E6E4362ED44D97FE8_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.BodyJointsCache::CheckJointDirty(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BodyJointsCache_CheckJointDirty_mC7678502BC1543441BBC57DB6D310033DFF0AC2F (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int outerIdx = (int)jointId / 64;
		int32_t L_0 = ___jointId0;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		// int innerIdx = (int)jointId % 64;
		int32_t L_1 = ___jointId0;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		// return (dirtyFlags[outerIdx] & (1UL << innerIdx)) != 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___dirtyFlags1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return (bool)((!(((uint64_t)((int64_t)(L_5&((int64_t)(((int64_t)1)<<((int32_t)(L_6&((int32_t)63)))))))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Void Oculus.Interaction.Body.Input.BodyJointsCache::SetJointClean(Oculus.Interaction.Body.Input.BodyJointId,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyJointsCache_SetJointClean_mD795AB0810A3A82D5493EDCFABA5443D2A3DF3CF (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___jointId0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___dirtyFlags1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int outerIdx = (int)jointId / 64;
		int32_t L_0 = ___jointId0;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)64)));
		// int innerIdx = (int)jointId % 64;
		int32_t L_1 = ___jointId0;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)64)));
		// dirtyFlags[outerIdx] = dirtyFlags[outerIdx] & ~(1UL << innerIdx);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___dirtyFlags1;
		int32_t L_3 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___dirtyFlags1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)((int64_t)(L_7&((~((int64_t)(((int64_t)1)<<((int32_t)(L_8&((int32_t)63))))))))));
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.ctor(UnityEngine.Pose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___poses0, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyBodyJointPoses(Pose[] poses)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _poses = poses;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ___poses0;
		__this->____poses_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poses_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Pose> Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_0 = (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyBodyJointPoses_System_Collections_IEnumerable_GetEnumerator_m0EBABD29DA3CD384530ED6DC2CD883D13E986305 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = ReadOnlyBodyJointPoses_GetEnumerator_m39FC6242245D2D52ACCDC529140A768CE9AB818C(__this, NULL);
		return L_0;
	}
}
// Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* ReadOnlyBodyJointPoses_get_Empty_mC44AA9A5794DB38A6D1AAE3F2BFE3AF3A948A144 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ReadOnlyBodyJointPoses Empty { get; } = new ReadOnlyBodyJointPoses(Array.Empty<Pose>());
		il2cpp_codegen_runtime_class_init_inline(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_0 = ((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyBodyJointPoses_get_Count_m58EF875E7DED7353B14255F762C03F0A3536F77B (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, const RuntimeMethod* method) 
{
	{
		// public int Count => _poses.Length;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReadOnlyBodyJointPoses_get_Item_m1857F5403B3763E108D7D958CE17B2F949B95162 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public Pose this[int index] => _poses[index];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// UnityEngine.Pose& modreq(System.Runtime.InteropServices.InAttribute) Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::get_Item(Oculus.Interaction.Body.Input.BodyJointId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ReadOnlyBodyJointPoses_get_Item_m437A4A40FA462414921D9CA23037598632978256 (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// public ref readonly Pose this[BodyJointId index] => ref _poses[(int)index];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->____poses_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		return ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyBodyJointPoses__cctor_m1A25C248F626E6D4BD222F433A6C35E6E508BDDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ReadOnlyBodyJointPoses Empty { get; } = new ReadOnlyBodyJointPoses(Array.Empty<Pose>());
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0;
		L_0 = Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_inline(Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_RuntimeMethod_var);
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = (ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649*)il2cpp_codegen_object_new(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyBodyJointPoses__ctor_mAE57A29F00E1E454D54C5A9C4EFB214951672D2C(L_1, L_0, NULL);
		((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_StaticFields*)il2cpp_codegen_static_fields_for(ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_1), (void*)L_1);
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
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2__ctor_m6FDFCB23D425A7E05F346937D0E4EA8D61C42695 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m96830FE6B1A2DDA8A03FB83E2A6CECA5193DCBA8 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__2_MoveNext_mCF94D045336F511597C930CDBBAE6A45AEC3690D (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* V_1 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var pose in _poses)
		ReadOnlyBodyJointPoses_t6201F457EA9221F5F501C9216FB0424401829649* L_4 = V_1;
		NullCheck(L_4);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_5 = L_4->____poses_0;
		__this->___U3CU3E7__wrap1_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_5);
		__this->___U3CU3E7__wrap2_4 = 0;
		goto IL_006a;
	}

IL_0033:
	{
		// foreach (var pose in _poses)
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_6 = __this->___U3CU3E7__wrap1_3;
		int32_t L_7 = __this->___U3CU3E7__wrap2_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// yield return pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_2;
		__this->___U3CU3E2__current_1 = L_10;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_11 = __this->___U3CU3E7__wrap2_4;
		__this->___U3CU3E7__wrap2_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_006a:
	{
		// foreach (var pose in _poses)
		int32_t L_12 = __this->___U3CU3E7__wrap2_4;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = __this->___U3CU3E7__wrap1_3;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		__this->___U3CU3E7__wrap1_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Pose Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_PoseU3E_get_Current_m871B6725F46060A97986220B07EB4087A70D351E (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_mA945AD564DFB5ED2AD8208B055B7026B2EB9CDFA_RuntimeMethod_var)));
	}
}
// System.Object Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses/<GetEnumerator>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m3C0250A8B7B7020A3C2032A868FA5D0AA07E8602 (U3CGetEnumeratorU3Ed__2_t9E509BADFE4F1BB7BF14DE5EF87112DB36C7F18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CU3E2__current_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = L_0;
		RuntimeObject* L_2 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeletonDebugGizmos_get_Visibility_m9A57301DB979950520969EC50CC9EFA1566D948B_inline (SkeletonDebugGizmos_t1AFE922CF1E0E62810BD8C54CFC47E97C10FF89A* __this, const RuntimeMethod* method) 
{
	{
		// get => _visibility;
		int32_t L_0 = __this->____visibility_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataValid_m6D0C339F77F4DE2DC89E1E552826A94680EA7199_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyDataAsset_get_IsDataHighConfidence_m1E6B56EEE87E5ACBDB0C0B35376AAF3A1EEAD29E_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BodyDataAsset_get_RootScale_m11F0C2E7B97A8E9F617F9A3F894405DA148FC510_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = __this->___U3CRootScaleU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BodyDataAsset_get_SkeletonMapping_mB0EC89FA59723958941D157A60C4E11304DBA968_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = __this->___U3CSkeletonMappingU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyJointsCache_GetWorldRootPose_mFCAA73400346636230CEA5A3B66DECB8A1B38DA8_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// return _worldRoot;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____worldRoot_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyJointsCache_get_LocalDataVersion_m16A3A6BE42650D985602C49F5DE6C3A479BE78CE_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = __this->___U3CLocalDataVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonMapping_mB6DF36A7012359D311F3C0888AADA3F9CA1D8F84_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISkeletonMapping SkeletonMapping { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSkeletonMappingU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSkeletonMappingU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 BodyDataAsset_get_Root_mBDC6B64758E82072A79B3A8E0CB9AB4F7BBF03F5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_Root_mA4227DE133677A6B81A21005029B53D0CD816161_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___value0, const RuntimeMethod* method) 
{
	{
		// public Pose Root { get; set; } = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___value0;
		__this->___U3CRootU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_RootScale_mBA174F53CE563D588848320D605C576DABAF4CE5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float RootScale { get; set; } = 1f;
		float L_0 = ___value0;
		__this->___U3CRootScaleU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataValid_mF12679F578A873BC383687500370067420D9A68F_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataValid { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataValidU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_IsDataHighConfidence_m953EEBED8F285FA85FAEF8FB678E8C092E3F3E95_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; set; } = false;
		bool L_0 = ___value0;
		__this->___U3CIsDataHighConfidenceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyDataAsset_get_SkeletonChangedCount_mD485AEF65554B7C24D78270A74DD17F42ED234EA_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = __this->___U3CSkeletonChangedCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyDataAsset_set_SkeletonChangedCount_mC45A59445F977719A2A0A3B61169E378E260BA1D_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int SkeletonChangedCount { get; set; } = 0;
		int32_t L_0 = ___value0;
		__this->___U3CSkeletonChangedCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* BodyDataAsset_get_JointPoses_m1F6288350B6B36BDE4A1DFE02DFDCD71FE6D14E5_inline (BodyDataAsset_tABE642D7F55B97949428DC81DE984B16C21D2456* __this, const RuntimeMethod* method) 
{
	{
		// public Pose[] JointPoses { get; set; } = new Pose[Constants.NUM_BODY_JOINTS];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = __this->___U3CJointPosesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyJointsCache_set_LocalDataVersion_m9240627DC92A3FE81AD4B5FBC5EB2219D443DD77_inline (BodyJointsCache_tA6AE824B9CA431D12949F37CEB1A3FC740C83ED1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int LocalDataVersion { get; private set; } = -1;
		int32_t L_0 = ___value0;
		__this->___U3CLocalDataVersionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mA0DBBD9C59D8292DA10ACC1F8163E1BD9BA9D92C_gshared_inline (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSource_1_get_Started_m77565B7ACC9BD8E12717175F4FC85142D82812AA_gshared_inline (DataSource_1_tE4347B771FFD29D6E6CF9CBDFF842BBE043BF642* __this, const RuntimeMethod* method) 
{
	{
		// public bool Started => _started;
		bool L_0 = (bool)__this->____started_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* Array_Empty_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_mD0B50B55EDCEDB8ECC76F60BC8C4E71EFB917ED9_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = ((EmptyArray_1_tB6A7DFB5F9BF0574C37679FBFE2A8EA941A7DFF4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
