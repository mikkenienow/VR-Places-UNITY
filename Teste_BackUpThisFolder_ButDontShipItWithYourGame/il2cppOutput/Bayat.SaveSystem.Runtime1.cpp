#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>
struct List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>
struct TaskFactory_1_t42BCBAED77CFE3AFE960664FA8A5B38B07BD6B60;
// System.Threading.Tasks.TaskFactory`1<Bayat.SaveSystem.Storage.StorageMetaData>
struct TaskFactory_1_tA0B3777885C9D21655F109306F788C77D7D12DBD;
// System.Threading.Tasks.TaskFactory`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>
struct TaskFactory_1_t5491D64D1A4B4A1853EB66B6BD30D57118B9F7DF;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>
struct Task_1_tD3DB238506129E977AAD47BAADF942FE8995164C;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>
struct Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3;
// System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMetaData>
struct Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01;
// System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>
struct Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Bayat.SaveSystem.Storage.StorageBackup[]
struct StorageBackupU5BU5D_t11AD77EECC6196CAC184E7070E476EC7BB3B07A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Delegate
struct Delegate_t;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Bayat.SaveSystem.Storage.IStorage
struct IStorage_t3FB3DF3436E260D09F61DC4D1A35D68C17374079;
// Bayat.SaveSystem.Storage.IStorageStream
struct IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73;
// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Bayat.SaveSystem.Security.SaveSystemCryptoStream
struct SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E;
// Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream
struct SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21;
// Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption
struct SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Bayat.SaveSystem.Storage.StorageBackup
struct StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779;
// Bayat.SaveSystem.Storage.StorageBase
struct StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F;
// Bayat.SaveSystem.Storage.StorageClearOperationResult
struct StorageClearOperationResult_t953BAB27D5AE1E191EC1BA07EA267AF469790653;
// Bayat.SaveSystem.Storage.StorageCopyOperationResult
struct StorageCopyOperationResult_t3F8338E7E1B3D9BC16355E7B8CA8231A7F0BDB4E;
// Bayat.SaveSystem.Storage.StorageDeleteOperationResult
struct StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC;
// Bayat.SaveSystem.Storage.StorageFactory
struct StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B;
// Bayat.SaveSystem.Storage.StorageListOptions
struct StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E;
// Bayat.SaveSystem.Storage.StorageMetaData
struct StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730;
// Bayat.SaveSystem.Storage.StorageMoveOperationResult
struct StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554;
// Bayat.SaveSystem.Storage.StorageOperationResult
struct StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionStringFactory_t686D3BE588FA79810346210D29D9775694EE3389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral40866342D5EA7852DF2154D8AC99B9DE56BB00D6;
IL2CPP_EXTERN_C String_t* _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F08B18630E0A24F8EB989F6A2B215F49560D4A;
IL2CPP_EXTERN_C String_t* _stringLiteralFD9800B1D52CC44B907B0D48797CCA76FFD21237;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mD7E27A94ACAFE23A5DE30E38E6D4B6CF6C8FC427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m556F292F6516F0F520CE9CACDD0C56F20D48B40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m363449B7B4DA7A6B1A3B74E07E39A17535921112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m8F6692282A817A48B91C9EB3534F8831F421A827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m36D025986858FFE5A6108B5D727B83B2518A12F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_mB668FAA26D9065D55602B873B8A8A5A5495436C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m5CE87A673F61C4EF2BFF9F00CFD71AECC8B30326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mBC13D2038072EE43A7F0387F861ED6A98F7556DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m8D32CD58142DDCB4A3908EE0999231CC3CC642A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m8ED78D70765A5A56043554317FF38B23294F5802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m3085623CCC859921C391F69B05933275B4F51556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF55B0A65B676A8E669B8C8C5658AE338AF149B3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0EE78DD772C1112E6F05EFB19E1A81A7F71F14B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m537AE9D591E6A5471785EB1CA176BE7AE57125FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m295A51CF4D15D05C897C8F9D0E3E88BE76EE186B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4F30DB4814AF728276BA31DCADA5271261BF05AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5107CBADF471594044551DE56E3AD68216A16E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m8FC96899B4ADCFB59BD0D032C90860C4F2D3D86B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mF68966FE75AB899405E76BE3C321F97159EC991D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteBackupU3Ed__60_MoveNext_m0DF804A90AD5DB695838B015FC4164EF8CA24961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestoreBackupU3Ed__58_MoveNext_m901B22D0CFD94BB3F3B5DF11CF701CE98978D4BD_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>
struct List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StorageBackupU5BU5D_t11AD77EECC6196CAC184E7070E476EC7BB3B07A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StorageBackupU5BU5D_t11AD77EECC6196CAC184E7070E476EC7BB3B07A9* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Security.Cryptography.DeriveBytes
struct DeriveBytes_t385A92C1BE5732BD434FBD449B8BFA1A7702A179  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Bayat.SaveSystem.Security.SaveSystemCryptoStream
struct SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E  : public RuntimeObject
{
	// System.Security.Cryptography.CryptoStream Bayat.SaveSystem.Security.SaveSystemCryptoStream::UnderlyingCryptoStream
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___UnderlyingCryptoStream_0;
};

// Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption
struct SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16  : public RuntimeObject
{
	// System.String Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption::AlgorithmName
	String_t* ___AlgorithmName_4;
};

// Bayat.SaveSystem.Storage.StorageBase
struct StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F  : public RuntimeObject
{
	// System.Text.Encoding Bayat.SaveSystem.Storage.StorageBase::textEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___textEncoding_1;
	// System.Boolean Bayat.SaveSystem.Storage.StorageBase::useMetaData
	bool ___useMetaData_2;
	// System.Boolean Bayat.SaveSystem.Storage.StorageBase::useCatalog
	bool ___useCatalog_3;
};

// Bayat.SaveSystem.Storage.StorageFactory
struct StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B  : public RuntimeObject
{
};

struct StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_StaticFields
{
	// Bayat.SaveSystem.Storage.StorageFactory Bayat.SaveSystem.Storage.StorageFactory::Instance
	StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B* ___Instance_0;
};

// Bayat.SaveSystem.Storage.StorageMetaData
struct StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730  : public RuntimeObject
{
	// System.Collections.Hashtable Bayat.SaveSystem.Storage.StorageMetaData::Data
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___Data_0;
};

// Bayat.SaveSystem.Storage.StorageOperationResult
struct StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA  : public RuntimeObject
{
	// System.Boolean Bayat.SaveSystem.Storage.StorageOperationResult::Succeed
	bool ___Succeed_0;
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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// System.Collections.Generic.List`1/Enumerator<Bayat.SaveSystem.Storage.StorageBackup>
struct Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* ____current_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>
struct TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData>
struct TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>
struct TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>
struct Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* ___m_result_22;
};

struct Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t42BCBAED77CFE3AFE960664FA8A5B38B07BD6B60* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMetaData>
struct Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* ___m_result_22;
};

struct Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA0B3777885C9D21655F109306F788C77D7D12DBD* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>
struct Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554* ___m_result_22;
};

struct Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5491D64D1A4B4A1853EB66B6BD30D57118B9F7DF* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F 
{
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshaled_com
{
	Il2CppChar* ____name_0;
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

// Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream
struct SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21  : public SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E
{
	// System.Security.Cryptography.SymmetricAlgorithm Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream::Algorithm
	SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* ___Algorithm_1;
	// System.Security.Cryptography.ICryptoTransform Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream::CryptoTransform
	RuntimeObject* ___CryptoTransform_2;
};

// Bayat.SaveSystem.Storage.StorageClearOperationResult
struct StorageClearOperationResult_t953BAB27D5AE1E191EC1BA07EA267AF469790653  : public StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA
{
	// System.String[] Bayat.SaveSystem.Storage.StorageClearOperationResult::DeletedItems
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DeletedItems_1;
};

// Bayat.SaveSystem.Storage.StorageCopyOperationResult
struct StorageCopyOperationResult_t3F8338E7E1B3D9BC16355E7B8CA8231A7F0BDB4E  : public StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA
{
	// System.String Bayat.SaveSystem.Storage.StorageCopyOperationResult::ResultIdentifier
	String_t* ___ResultIdentifier_1;
};

// Bayat.SaveSystem.Storage.StorageDeleteOperationResult
struct StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC  : public StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA
{
};

// Bayat.SaveSystem.Storage.StorageMoveOperationResult
struct StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554  : public StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA
{
	// System.String Bayat.SaveSystem.Storage.StorageMoveOperationResult::ResultIdentifier
	String_t* ___ResultIdentifier_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>
struct AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tD3DB238506129E977AAD47BAADF942FE8995164C* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tD3DB238506129E977AAD47BAADF942FE8995164C* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>
struct AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3* ___s_defaultResultTask_0;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
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

// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB  : public DeriveBytes_t385A92C1BE5732BD434FBD449B8BFA1A7702A179
{
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_password
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____password_0;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____salt_1;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::_iterations
	uint32_t ____iterations_2;
	// System.Security.Cryptography.HMAC System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684* ____hmac_3;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_blockSize
	int32_t ____blockSize_4;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::_block
	uint32_t ____block_6;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_startIndex
	int32_t ____startIndex_7;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_endIndex
	int32_t ____endIndex_8;
	// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.Rfc2898DeriveBytes::<HashAlgorithm>k__BackingField
	HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F ___U3CHashAlgorithmU3Ek__BackingField_9;
};

// Bayat.SaveSystem.Storage.StorageBackup
struct StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779  : public RuntimeObject
{
	// System.String Bayat.SaveSystem.Storage.StorageBackup::Identifier
	String_t* ___Identifier_0;
	// System.DateTime Bayat.SaveSystem.Storage.StorageBackup::BackupTimeUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___BackupTimeUtc_1;
};

// Bayat.SaveSystem.Storage.StorageListOptions
struct StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E  : public RuntimeObject
{
	// System.Boolean Bayat.SaveSystem.Storage.StorageListOptions::<Recurse>k__BackingField
	bool ___U3CRecurseU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Bayat.SaveSystem.Storage.StorageListOptions::<MaxResults>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CMaxResultsU3Ek__BackingField_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60
struct U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6 
{
	// System.Int32 Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>t__builder
	AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF ___U3CU3Et__builder_1;
	// Bayat.SaveSystem.Storage.StorageBackup Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::backup
	StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* ___backup_2;
	// Bayat.SaveSystem.Storage.StorageBase Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>4__this
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* ___U3CU3E4__this_3;
	// System.String Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::identifier
	String_t* ___identifier_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>u__2
	TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F ___U3CU3Eu__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>u__3
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::<>u__4
	TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 ___U3CU3Eu__4_8;
};

// Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61
struct U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E 
{
	// System.Int32 Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// Bayat.SaveSystem.Storage.StorageBase Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>4__this
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* ___U3CU3E4__this_2;
	// System.String Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::identifier
	String_t* ___identifier_3;
	// Bayat.SaveSystem.Storage.StorageMetaData Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<metaData>5__2
	StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* ___U3CmetaDataU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>u__1
	TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F ___U3CU3Eu__1_5;
	// System.Boolean Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<allSucceed>5__3
	bool ___U3CallSucceedU3E5__3_6;
	// System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<backups>5__4
	List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* ___U3CbackupsU3E5__4_7;
	// System.Collections.Generic.List`1/Enumerator<Bayat.SaveSystem.Storage.StorageBackup> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>7__wrap4
	Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 ___U3CU3E7__wrap4_8;
	// Bayat.SaveSystem.Storage.StorageBackup Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<backup>5__6
	StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* ___U3CbackupU3E5__6_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>u__2
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__2_10;
	// System.Boolean Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>7__wrap6
	bool ___U3CU3E7__wrap6_11;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult> Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>u__3
	TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 ___U3CU3Eu__3_12;
	// System.Runtime.CompilerServices.TaskAwaiter Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::<>u__4
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__4_13;
};

// Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59
struct U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42 
{
	// System.Int32 Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>> Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::<>t__builder
	AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D ___U3CU3Et__builder_1;
	// Bayat.SaveSystem.Storage.StorageBase Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::<>4__this
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* ___U3CU3E4__this_2;
	// System.String Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::identifier
	String_t* ___identifier_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData> Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::<>u__1
	TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F ___U3CU3Eu__1_4;
};

// Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58
struct U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F 
{
	// System.Int32 Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// Bayat.SaveSystem.Storage.StorageBackup Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::backup
	StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* ___backup_2;
	// Bayat.SaveSystem.Storage.StorageBase Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::<>4__this
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* ___U3CU3E4__this_3;
	// System.String Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::identifier
	String_t* ___identifier_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult> Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::<>u__2
	TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC ___U3CU3Eu__2_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m29AA44E877DD57EE69391D9D9EEB0B1F546094A3_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_m93B62D8FAE3797D488A619AEFA7F412297AFCA16_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* ___stateMachine1, const RuntimeMethod* method) ;
// T Bayat.SaveSystem.Storage.StorageMetaData::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageMetaData_Get_TisRuntimeObject_m126C628498B82C6ADFF6335F405176FF00525D5D_gshared (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m17405B724EE0794EFF6CC48EC9E341077BB8D702_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m743FAC273E3617BC482343A271310A37078A5AC5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m1DFD2A9687A0126D69BEE6DEE3F9C62F50DBDFFC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m59D4E9A3D30F02E52F35DEA7C922659F7EFDF22C_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>::GetAwaiter()
inline TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC Task_1_GetAwaiter_mF68966FE75AB899405E76BE3C321F97159EC991D (Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC (*) (Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m8FC96899B4ADCFB59BD0D032C90860C4F2D3D86B (TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>,Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m5CE87A673F61C4EF2BFF9F00CFD71AECC8B30326 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC* ___awaiter0, U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC*, U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m29AA44E877DD57EE69391D9D9EEB0B1F546094A3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult>::GetResult()
inline StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554* TaskAwaiter_1_GetResult_m5107CBADF471594044551DE56E3AD68216A16E11 (TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC* __this, const RuntimeMethod* method)
{
	return ((  StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554* (*) (TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___result0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreBackupU3Ed__58_MoveNext_m901B22D0CFD94BB3F3B5DF11CF701CE98978D4BD (U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreBackupU3Ed__58_SetStateMachine_m0281A0E52629AEEE7AF4E28DE607B75CD1E55E5C (U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMetaData>::GetAwaiter()
inline TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89 (Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F (*) (Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249 (TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData>,Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_mB668FAA26D9065D55602B873B8A8A5A5495436C5 (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* __this, TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* ___awaiter0, U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D*, TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F*, U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_m93B62D8FAE3797D488A619AEFA7F412297AFCA16_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData>::GetResult()
inline StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA (TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* __this, const RuntimeMethod* method)
{
	return ((  StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* (*) (TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Bayat.SaveSystem.Storage.StorageMetaData::Has(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageMetaData_Has_mEB96E20805DDFE38A0E0F16E97FC3B16748D975A (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* __this, String_t* ___key0, const RuntimeMethod* method) ;
// T Bayat.SaveSystem.Storage.StorageMetaData::Get<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>(System.String)
inline List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931 (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* (*) (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730*, String_t*, const RuntimeMethod*))StorageMetaData_Get_TisRuntimeObject_m126C628498B82C6ADFF6335F405176FF00525D5D_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m8D32CD58142DDCB4A3908EE0999231CC3CC642A3 (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m3085623CCC859921C391F69B05933275B4F51556 (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* __this, List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D*, List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBackupsU3Ed__59_MoveNext_m9688CFF9980FE9F1FDA211830D07C274BCAB1206 (U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m537AE9D591E6A5471785EB1CA176BE7AE57125FD (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBackupsU3Ed__59_SetStateMachine_m613D59DC90647D1B2AF0BAD64196B0242EE3D6A6 (U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mD7E27A94ACAFE23A5DE30E38E6D4B6CF6C8FC427 (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m17405B724EE0794EFF6CC48EC9E341077BB8D702_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageDeleteOperationResult::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageDeleteOperationResult__ctor_m4DF7B3D430ABAF6BC02170F5E5E7EA354F8742CC (StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* __this, bool ___succeed0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m8F6692282A817A48B91C9EB3534F8831F421A827 (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F*, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m743FAC273E3617BC482343A271310A37078A5AC5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>::GetEnumerator()
inline Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309 (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 (*) (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Bayat.SaveSystem.Storage.StorageBackup>::Dispose()
inline void Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82 (Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Bayat.SaveSystem.Storage.StorageBackup>::get_Current()
inline StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_inline (Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* __this, const RuntimeMethod* method)
{
	return ((  StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* (*) (Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Bayat.SaveSystem.Storage.StorageBackup>::MoveNext()
inline bool Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69 (Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>::Remove(T)
inline bool List_1_Remove_m4F30DB4814AF728276BA31DCADA5271261BF05AA (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* __this, StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295*, StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageMetaData::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetaData_set_Item_m00331E820DEB8022F4F8289B84157D9B0CE13FBB (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mBC13D2038072EE43A7F0387F861ED6A98F7556DC (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m1DFD2A9687A0126D69BEE6DEE3F9C62F50DBDFFC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::GetAwaiter()
inline TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E (Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 (*) (Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A (TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m556F292F6516F0F520CE9CACDD0C56F20D48B40C (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09* ___awaiter0, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09*, U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m743FAC273E3617BC482343A271310A37078A5AC5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::GetResult()
inline StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53 (TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09* __this, const RuntimeMethod* method)
{
	return ((  StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* (*) (TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m8ED78D70765A5A56043554317FF38B23294F5802 (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF55B0A65B676A8E669B8C8C5658AE338AF149B3D (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupU3Ed__60_MoveNext_m0DF804A90AD5DB695838B015FC4164EF8CA24961 (U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0EE78DD772C1112E6F05EFB19E1A81A7F71F14B4 (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupU3Ed__60_SetStateMachine_mF4E0861C33DA39A4FA7AB39428F1B2CEE676B53E (U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageMetaData>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m36D025986858FFE5A6108B5D727B83B2518A12F3 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F*, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m59D4E9A3D30F02E52F35DEA7C922659F7EFDF22C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult>,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m363449B7B4DA7A6B1A3B74E07E39A17535921112 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09*, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m59D4E9A3D30F02E52F35DEA7C922659F7EFDF22C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Collections.Generic.List`1<Bayat.SaveSystem.Storage.StorageBackup>::Clear()
inline void List_1_Clear_m295A51CF4D15D05C897C8F9D0E3E88BE76EE186B_inline (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupsU3Ed__61_MoveNext_m08581126F6449C2C0B4B8EAE2CF25C42E141468C (U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* __this, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupsU3Ed__61_SetStateMachine_m9F1F2C1A4B481D764668B374058F864B0A951E35 (U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// Bayat.SaveSystem.Storage.IStorage Bayat.SaveSystem.Storage.StorageFactory::FromConnectionString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFactory_FromConnectionString_m804372EE5DD1CE35D5421E89717496BCFFEA2B91 (String_t* ___connectionString0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Storage.StorageFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageFactory__ctor_mB6CA4E28DC1CDC3672FBED6A9480EA54A1F4E30F (StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Bayat.SaveSystem.Storage.IStorage Bayat.SaveSystem.Storage.ConnectionStringFactory::CreateStorage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionStringFactory_CreateStorage_mA78A0880EA7E07A7F978AFCDBE0CA92C904A250A (String_t* ___connectionString0, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Storage.StorageOperationResult::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageOperationResult__ctor_m74BE9CD0EBEDFBC919A05034E9B9A43DCADE64D3 (StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA* __this, bool ___succeed0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemSymmetricEncryption__ctor_mE05B5FE85C5291CF6ECD3232F063FB54B6546233 (SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16* __this, String_t* ___algorithmName0, const RuntimeMethod* method) ;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* SymmetricAlgorithm_Create_m385361C6AD2D98EA9F1209F35AC0ED320689BFB1 (String_t* ___algName0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Rfc2898DeriveBytes::.ctor(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rfc2898DeriveBytes__ctor_m6A404112259375CF4C7A32B9205F6DDBC2EA1E8A (Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___iterations2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___transform1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream::.ctor(System.Security.Cryptography.CryptoStream,System.Security.Cryptography.SymmetricAlgorithm,System.Security.Cryptography.ICryptoTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemSymmetricCryptoStream__ctor_m39E95FE5424A10778F1DE00DF0F7D538A133A54C (SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21* __this, CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___cryptoStream0, SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* ___algorithm1, RuntimeObject* ___cryptoTransform2, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Security.SaveSystemCryptoStream::.ctor(System.Security.Cryptography.CryptoStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemCryptoStream__ctor_m5F0E6A8A53D753C6F5D24B42184C541A01F5322F (SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E* __this, CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___cryptoStream0, const RuntimeMethod* method) ;
// System.Void Bayat.SaveSystem.Security.SaveSystemCryptoStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemCryptoStream_Dispose_mFCA304DD2D41AFA843213FE98D33BAB76A057A72 (SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_Dispose_mD45B75F17100B4636F6AD139D5E6249E681DDD8A (SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreBackupU3Ed__58_MoveNext_m901B22D0CFD94BB3F3B5DF11CF701CE98978D4BD (U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m5CE87A673F61C4EF2BFF9F00CFD71AECC8B30326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5107CBADF471594044551DE56E3AD68216A16E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8FC96899B4ADCFB59BD0D032C90860C4F2D3D86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF68966FE75AB899405E76BE3C321F97159EC991D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006e_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00e3_1;
			}
		}
		{
			// if (backup == null)
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_4 = __this->___backup_2;
			if (L_4)
			{
				goto IL_002b_1;
			}
		}
		{
			// throw new ArgumentNullException(nameof(backup));
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40866342D5EA7852DF2154D8AC99B9DE56BB00D6)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRestoreBackupU3Ed__58_MoveNext_m901B22D0CFD94BB3F3B5DF11CF701CE98978D4BD_RuntimeMethod_var)));
		}

IL_002b_1:
		{
			// if (!await Exists(backup.Identifier))
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_6 = V_1;
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_7 = __this->___backup_2;
			NullCheck(L_7);
			String_t* L_8 = L_7->___Identifier_0;
			NullCheck(L_6);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_9;
			L_9 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(63 /* System.Threading.Tasks.Task`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase::Exists(System.String) */, L_6, L_8);
			NullCheck(L_9);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_10;
			L_10 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_9, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_3), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_008a_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_13 = V_3;
			__this->___U3CU3Eu__1_5 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545(L_14, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m9560C59CFF822C5AEF5B69104647D6696D03C545_RuntimeMethod_var);
			goto IL_013c;
		}

IL_006e_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_15 = __this->___U3CU3Eu__1_5;
			V_3 = L_15;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_16 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_008a_1:
		{
			bool L_18;
			L_18 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_3), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_009a_1;
			}
		}
		{
			// return false;
			V_2 = (bool)0;
			goto IL_0128;
		}

IL_009a_1:
		{
			// return (await Move(backup.Identifier, identifier, true)).Succeed;
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_19 = V_1;
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_20 = __this->___backup_2;
			NullCheck(L_20);
			String_t* L_21 = L_20->___Identifier_0;
			String_t* L_22 = __this->___identifier_4;
			NullCheck(L_19);
			Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7* L_23;
			L_23 = VirtualFuncInvoker3< Task_1_t143DB5D5919F33C052A70AAC6017CDEDE6CC80A7*, String_t*, String_t*, bool >::Invoke(64 /* System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMoveOperationResult> Bayat.SaveSystem.Storage.StorageBase::Move(System.String,System.String,System.Boolean) */, L_19, L_21, L_22, (bool)1);
			NullCheck(L_23);
			TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC L_24;
			L_24 = Task_1_GetAwaiter_mF68966FE75AB899405E76BE3C321F97159EC991D(L_23, Task_1_GetAwaiter_mF68966FE75AB899405E76BE3C321F97159EC991D_RuntimeMethod_var);
			V_4 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_m8FC96899B4ADCFB59BD0D032C90860C4F2D3D86B((&V_4), TaskAwaiter_1_get_IsCompleted_m8FC96899B4ADCFB59BD0D032C90860C4F2D3D86B_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0100_1;
			}
		}
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC L_27 = V_4;
			__this->___U3CU3Eu__2_6 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m5CE87A673F61C4EF2BFF9F00CFD71AECC8B30326(L_28, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC_TisU3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F_m5CE87A673F61C4EF2BFF9F00CFD71AECC8B30326_RuntimeMethod_var);
			goto IL_013c;
		}

IL_00e3_1:
		{
			TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC L_29 = __this->___U3CU3Eu__2_6;
			V_4 = L_29;
			TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC* L_30 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_tFAE16D73D03D96A63917FA573D975CFEC3531ECC));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_0100_1:
		{
			StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554* L_32;
			L_32 = TaskAwaiter_1_GetResult_m5107CBADF471594044551DE56E3AD68216A16E11((&V_4), TaskAwaiter_1_GetResult_m5107CBADF471594044551DE56E3AD68216A16E11_RuntimeMethod_var);
			NullCheck(L_32);
			bool L_33 = ((StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA*)L_32)->___Succeed_0;
			V_2 = L_33;
			goto IL_0128;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010f;
		}
		throw e;
	}

CATCH_010f:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_34, L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013c;
	}// end catch (depth: 1)

IL_0128:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_36 = (&__this->___U3CU3Et__builder_1);
		bool L_37 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_36, L_37, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_013c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRestoreBackupU3Ed__58_MoveNext_m901B22D0CFD94BB3F3B5DF11CF701CE98978D4BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F*>(__this + _offset);
	U3CRestoreBackupU3Ed__58_MoveNext_m901B22D0CFD94BB3F3B5DF11CF701CE98978D4BD(_thisAdjusted, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<RestoreBackup>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestoreBackupU3Ed__58_SetStateMachine_m0281A0E52629AEEE7AF4E28DE607B75CD1E55E5C (U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRestoreBackupU3Ed__58_SetStateMachine_m0281A0E52629AEEE7AF4E28DE607B75CD1E55E5C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRestoreBackupU3Ed__58_t420FFF5222E584DC01822D9654E5E9864C5C4A1F*>(__this + _offset);
	U3CRestoreBackupU3Ed__58_SetStateMachine_m0281A0E52629AEEE7AF4E28DE607B75CD1E55E5C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBackupsU3Ed__59_MoveNext_m9688CFF9980FE9F1FDA211830D07C274BCAB1206 (U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_mB668FAA26D9065D55602B873B8A8A5A5495436C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m3085623CCC859921C391F69B05933275B4F51556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* V_1 = NULL;
	List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* V_2 = NULL;
	StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* V_3 = NULL;
	TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e_1;
			}
		}
		{
			// StorageMetaData metaData = await LoadMetaData(identifier);
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_3 = V_1;
			String_t* L_4 = __this->___identifier_3;
			NullCheck(L_3);
			Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01* L_5;
			L_5 = VirtualFuncInvoker1< Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01*, String_t* >::Invoke(72 /* System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMetaData> Bayat.SaveSystem.Storage.StorageBase::LoadMetaData(System.String) */, L_3, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_6;
			L_6 = Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89(L_5, Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var);
			V_4 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249((&V_4), TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006b_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_9 = V_4;
			__this->___U3CU3Eu__1_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_mB668FAA26D9065D55602B873B8A8A5A5495436C5(L_10, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42_mB668FAA26D9065D55602B873B8A8A5A5495436C5_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_004e_1:
		{
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_11 = __this->___U3CU3Eu__1_4;
			V_4 = L_11;
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* L_12 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006b_1:
		{
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_14;
			L_14 = TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA((&V_4), TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var);
			V_3 = L_14;
			// if (metaData.Has("Backups"))
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_15 = V_3;
			NullCheck(L_15);
			bool L_16;
			L_16 = StorageMetaData_Has_mEB96E20805DDFE38A0E0F16E97FC3B16748D975A(L_15, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, NULL);
			if (!L_16)
			{
				goto IL_008e_1;
			}
		}
		{
			// return metaData.Get<List<StorageBackup>>("Backups");
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_17 = V_3;
			NullCheck(L_17);
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_18;
			L_18 = StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931(L_17, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var);
			V_2 = L_18;
			goto IL_00ab;
		}

IL_008e_1:
		{
			// return null;
			V_2 = (List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295*)NULL;
			goto IL_00ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* L_19 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m8D32CD58142DDCB4A3908EE0999231CC3CC642A3(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8D32CD58142DDCB4A3908EE0999231CC3CC642A3_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	}// end catch (depth: 1)

IL_00ab:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* L_21 = (&__this->___U3CU3Et__builder_1);
		List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_22 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m3085623CCC859921C391F69B05933275B4F51556(L_21, L_22, AsyncTaskMethodBuilder_1_SetResult_m3085623CCC859921C391F69B05933275B4F51556_RuntimeMethod_var);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetBackupsU3Ed__59_MoveNext_m9688CFF9980FE9F1FDA211830D07C274BCAB1206_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42*>(__this + _offset);
	U3CGetBackupsU3Ed__59_MoveNext_m9688CFF9980FE9F1FDA211830D07C274BCAB1206(_thisAdjusted, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<GetBackups>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBackupsU3Ed__59_SetStateMachine_m613D59DC90647D1B2AF0BAD64196B0242EE3D6A6 (U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m537AE9D591E6A5471785EB1CA176BE7AE57125FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t68ED15D7E0BE49517CAAE9B4D01CF0F059875F5D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m537AE9D591E6A5471785EB1CA176BE7AE57125FD(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m537AE9D591E6A5471785EB1CA176BE7AE57125FD_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetBackupsU3Ed__59_SetStateMachine_m613D59DC90647D1B2AF0BAD64196B0242EE3D6A6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetBackupsU3Ed__59_t1B0663A8E98B9802418AB83C84D193747F1F6D42*>(__this + _offset);
	U3CGetBackupsU3Ed__59_SetStateMachine_m613D59DC90647D1B2AF0BAD64196B0242EE3D6A6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupU3Ed__60_MoveNext_m0DF804A90AD5DB695838B015FC4164EF8CA24961 (U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mD7E27A94ACAFE23A5DE30E38E6D4B6CF6C8FC427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m556F292F6516F0F520CE9CACDD0C56F20D48B40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m8F6692282A817A48B91C9EB3534F8831F421A827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mBC13D2038072EE43A7F0387F861ED6A98F7556DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF55B0A65B676A8E669B8C8C5658AE338AF149B3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m4F30DB4814AF728276BA31DCADA5271261BF05AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* V_1 = NULL;
	StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* V_2 = NULL;
	StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* V_3 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F V_5;
	memset((&V_5), 0, sizeof(V_5));
	List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* V_6 = NULL;
	StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* V_7 = NULL;
	Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 V_8;
	memset((&V_8), 0, sizeof(V_8));
	StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* V_9 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_10;
	memset((&V_10), 0, sizeof(V_10));
	TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_007c_1;
				}
				case 1:
				{
					goto IL_00ee_1;
				}
				case 2:
				{
					goto IL_01de_1;
				}
				case 3:
				{
					goto IL_0244_1;
				}
			}
		}
		{
			// if (backup == null)
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_3 = __this->___backup_2;
			if (L_3)
			{
				goto IL_0037_1;
			}
		}
		{
			// throw new ArgumentNullException(nameof(backup));
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			NullCheck(L_4);
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40866342D5EA7852DF2154D8AC99B9DE56BB00D6)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteBackupU3Ed__60_MoveNext_m0DF804A90AD5DB695838B015FC4164EF8CA24961_RuntimeMethod_var)));
		}

IL_0037_1:
		{
			// if (!await Exists(backup.Identifier))
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_5 = V_1;
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_6 = __this->___backup_2;
			NullCheck(L_6);
			String_t* L_7 = L_6->___Identifier_0;
			NullCheck(L_5);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_8;
			L_8 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(63 /* System.Threading.Tasks.Task`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase::Exists(System.String) */, L_5, L_7);
			NullCheck(L_8);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_9;
			L_9 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_8, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_4 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_4), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0099_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_12 = V_4;
			__this->___U3CU3Eu__1_5 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mD7E27A94ACAFE23A5DE30E38E6D4B6CF6C8FC427(L_13, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mD7E27A94ACAFE23A5DE30E38E6D4B6CF6C8FC427_RuntimeMethod_var);
			goto IL_0298;
		}

IL_007c_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = __this->___U3CU3Eu__1_5;
			V_4 = L_14;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_15 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0099_1:
		{
			bool L_17;
			L_17 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_4), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_00ae_1;
			}
		}
		{
			// return new StorageDeleteOperationResult(false);
			StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* L_18 = (StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC*)il2cpp_codegen_object_new(StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			StorageDeleteOperationResult__ctor_m4DF7B3D430ABAF6BC02170F5E5E7EA354F8742CC(L_18, (bool)0, NULL);
			V_2 = L_18;
			goto IL_0284;
		}

IL_00ae_1:
		{
			// StorageMetaData metaData = await LoadMetaData(identifier);
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_19 = V_1;
			String_t* L_20 = __this->___identifier_4;
			NullCheck(L_19);
			Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01* L_21;
			L_21 = VirtualFuncInvoker1< Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01*, String_t* >::Invoke(72 /* System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMetaData> Bayat.SaveSystem.Storage.StorageBase::LoadMetaData(System.String) */, L_19, L_20);
			NullCheck(L_21);
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_22;
			L_22 = Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89(L_21, Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var);
			V_5 = L_22;
			bool L_23;
			L_23 = TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249((&V_5), TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_010b_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_25 = V_5;
			__this->___U3CU3Eu__2_6 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_26 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m8F6692282A817A48B91C9EB3534F8831F421A827(L_26, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m8F6692282A817A48B91C9EB3534F8831F421A827_RuntimeMethod_var);
			goto IL_0298;
		}

IL_00ee_1:
		{
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_27 = __this->___U3CU3Eu__2_6;
			V_5 = L_27;
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* L_28 = (&__this->___U3CU3Eu__2_6);
			il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_010b_1:
		{
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_30;
			L_30 = TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA((&V_5), TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var);
			V_3 = L_30;
			// if (metaData.Has("Backups"))
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_31 = V_3;
			NullCheck(L_31);
			bool L_32;
			L_32 = StorageMetaData_Has_mEB96E20805DDFE38A0E0F16E97FC3B16748D975A(L_31, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, NULL);
			if (!L_32)
			{
				goto IL_0202_1;
			}
		}
		{
			// List<StorageBackup> backups = metaData.Get<List<StorageBackup>>("Backups");
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_33 = V_3;
			NullCheck(L_33);
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_34;
			L_34 = StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931(L_33, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var);
			V_6 = L_34;
			// StorageBackup backupToRemove = backup;
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_35 = __this->___backup_2;
			V_7 = L_35;
			// foreach (StorageBackup currentBackup in backups)
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_36 = V_6;
			NullCheck(L_36);
			Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 L_37;
			L_37 = List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309(L_36, List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309_RuntimeMethod_var);
			V_8 = L_37;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0174_1:
				{// begin finally (depth: 2)
					{
						int32_t L_38 = V_0;
						if ((((int32_t)L_38) >= ((int32_t)0)))
						{
							goto IL_0185_1;
						}
					}
					{
						Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82((&V_8), Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82_RuntimeMethod_var);
					}

IL_0185_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0169_2;
				}

IL_0143_2:
				{
					// foreach (StorageBackup currentBackup in backups)
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_39;
					L_39 = Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_inline((&V_8), Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_RuntimeMethod_var);
					V_9 = L_39;
					// if (currentBackup.Identifier == backup.Identifier)
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_40 = V_9;
					NullCheck(L_40);
					String_t* L_41 = L_40->___Identifier_0;
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_42 = __this->___backup_2;
					NullCheck(L_42);
					String_t* L_43 = L_42->___Identifier_0;
					bool L_44;
					L_44 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_41, L_43, NULL);
					if (!L_44)
					{
						goto IL_0169_2;
					}
				}
				{
					// backupToRemove = currentBackup;
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_45 = V_9;
					V_7 = L_45;
				}

IL_0169_2:
				{
					// foreach (StorageBackup currentBackup in backups)
					bool L_46;
					L_46 = Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69((&V_8), Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69_RuntimeMethod_var);
					if (L_46)
					{
						goto IL_0143_2;
					}
				}
				{
					goto IL_0186_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0186_1:
		{
			// backups.Remove(backupToRemove);
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_47 = V_6;
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_48 = V_7;
			NullCheck(L_47);
			bool L_49;
			L_49 = List_1_Remove_m4F30DB4814AF728276BA31DCADA5271261BF05AA(L_47, L_48, List_1_Remove_m4F30DB4814AF728276BA31DCADA5271261BF05AA_RuntimeMethod_var);
			// metaData["Backups"] = backups;
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_50 = V_3;
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_51 = V_6;
			NullCheck(L_50);
			StorageMetaData_set_Item_m00331E820DEB8022F4F8289B84157D9B0CE13FBB(L_50, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, L_51, NULL);
			// await SaveMetaData(identifier, metaData);
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_52 = V_1;
			String_t* L_53 = __this->___identifier_4;
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_54 = V_3;
			NullCheck(L_52);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_55;
			L_55 = VirtualFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* >::Invoke(71 /* System.Threading.Tasks.Task Bayat.SaveSystem.Storage.StorageBase::SaveMetaData(System.String,Bayat.SaveSystem.Storage.StorageMetaData) */, L_52, L_53, L_54);
			NullCheck(L_55);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_56;
			L_56 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_55, NULL);
			V_10 = L_56;
			bool L_57;
			L_57 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_10), NULL);
			if (L_57)
			{
				goto IL_01fb_1;
			}
		}
		{
			int32_t L_58 = 2;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_59 = V_10;
			__this->___U3CU3Eu__3_7 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_60 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mBC13D2038072EE43A7F0387F861ED6A98F7556DC(L_60, (&V_10), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_mBC13D2038072EE43A7F0387F861ED6A98F7556DC_RuntimeMethod_var);
			goto IL_0298;
		}

IL_01de_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_61 = __this->___U3CU3Eu__3_7;
			V_10 = L_61;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_62 = (&__this->___U3CU3Eu__3_7);
			il2cpp_codegen_initobj(L_62, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_01fb_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_10), NULL);
		}

IL_0202_1:
		{
			// return await Delete(backup.Identifier);
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_64 = V_1;
			StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_65 = __this->___backup_2;
			NullCheck(L_65);
			String_t* L_66 = L_65->___Identifier_0;
			NullCheck(L_64);
			Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3* L_67;
			L_67 = VirtualFuncInvoker1< Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3*, String_t* >::Invoke(61 /* System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult> Bayat.SaveSystem.Storage.StorageBase::Delete(System.String) */, L_64, L_66);
			NullCheck(L_67);
			TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 L_68;
			L_68 = Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E(L_67, Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E_RuntimeMethod_var);
			V_11 = L_68;
			bool L_69;
			L_69 = TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A((&V_11), TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A_RuntimeMethod_var);
			if (L_69)
			{
				goto IL_0261_1;
			}
		}
		{
			int32_t L_70 = 3;
			V_0 = L_70;
			__this->___U3CU3E1__state_0 = L_70;
			TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 L_71 = V_11;
			__this->___U3CU3Eu__4_8 = L_71;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__4_8))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_72 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m556F292F6516F0F520CE9CACDD0C56F20D48B40C(L_72, (&V_11), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6_m556F292F6516F0F520CE9CACDD0C56F20D48B40C_RuntimeMethod_var);
			goto IL_0298;
		}

IL_0244_1:
		{
			TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 L_73 = __this->___U3CU3Eu__4_8;
			V_11 = L_73;
			TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09* L_74 = (&__this->___U3CU3Eu__4_8);
			il2cpp_codegen_initobj(L_74, sizeof(TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09));
			int32_t L_75 = (-1);
			V_0 = L_75;
			__this->___U3CU3E1__state_0 = L_75;
		}

IL_0261_1:
		{
			StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* L_76;
			L_76 = TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53((&V_11), TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53_RuntimeMethod_var);
			V_2 = L_76;
			goto IL_0284;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026b;
		}
		throw e;
	}

CATCH_026b:
	{// begin catch(System.Exception)
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_77 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_78 = V_12;
		AsyncTaskMethodBuilder_1_SetException_m8ED78D70765A5A56043554317FF38B23294F5802(L_77, L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8ED78D70765A5A56043554317FF38B23294F5802_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0298;
	}// end catch (depth: 1)

IL_0284:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_79 = (&__this->___U3CU3Et__builder_1);
		StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* L_80 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF55B0A65B676A8E669B8C8C5658AE338AF149B3D(L_79, L_80, AsyncTaskMethodBuilder_1_SetResult_mF55B0A65B676A8E669B8C8C5658AE338AF149B3D_RuntimeMethod_var);
	}

IL_0298:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteBackupU3Ed__60_MoveNext_m0DF804A90AD5DB695838B015FC4164EF8CA24961_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6*>(__this + _offset);
	U3CDeleteBackupU3Ed__60_MoveNext_m0DF804A90AD5DB695838B015FC4164EF8CA24961(_thisAdjusted, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackup>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupU3Ed__60_SetStateMachine_mF4E0861C33DA39A4FA7AB39428F1B2CEE676B53E (U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0EE78DD772C1112E6F05EFB19E1A81A7F71F14B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t0E4F257730CD92490165DBB3C5239B2FA3155CAF* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0EE78DD772C1112E6F05EFB19E1A81A7F71F14B4(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m0EE78DD772C1112E6F05EFB19E1A81A7F71F14B4_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteBackupU3Ed__60_SetStateMachine_mF4E0861C33DA39A4FA7AB39428F1B2CEE676B53E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteBackupU3Ed__60_tAAEA901B53480AF459ED8C9F4273803BEA7112B6*>(__this + _offset);
	U3CDeleteBackupU3Ed__60_SetStateMachine_mF4E0861C33DA39A4FA7AB39428F1B2CEE676B53E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupsU3Ed__61_MoveNext_m08581126F6449C2C0B4B8EAE2CF25C42E141468C (U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m363449B7B4DA7A6B1A3B74E07E39A17535921112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m36D025986858FFE5A6108B5D727B83B2518A12F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m295A51CF4D15D05C897C8F9D0E3E88BE76EE186B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* V_1 = NULL;
	bool V_2 = false;
	StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* V_3 = NULL;
	TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_5;
	memset((&V_5), 0, sizeof(V_5));
	StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* V_6 = NULL;
	TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 V_7;
	memset((&V_7), 0, sizeof(V_7));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0064_1;
				}
				case 1:
				{
					goto IL_00d3_1;
				}
				case 2:
				{
					goto IL_00d3_1;
				}
				case 3:
				{
					goto IL_028d_1;
				}
			}
		}
		{
			// StorageMetaData metaData = await LoadMetaData(identifier);
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_3 = V_1;
			String_t* L_4 = __this->___identifier_3;
			NullCheck(L_3);
			Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01* L_5;
			L_5 = VirtualFuncInvoker1< Task_1_t5FA9184FA880C9AC9339DA30B2447A5A795F8D01*, String_t* >::Invoke(72 /* System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageMetaData> Bayat.SaveSystem.Storage.StorageBase::LoadMetaData(System.String) */, L_3, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_6;
			L_6 = Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89(L_5, Task_1_GetAwaiter_m9F04A19039100574116A7EC7231183FB04AE0A89_RuntimeMethod_var);
			V_4 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249((&V_4), TaskAwaiter_1_get_IsCompleted_mECCC009AE17AAD06C308DF04BFDB28DD1A35A249_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0081_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_9 = V_4;
			__this->___U3CU3Eu__1_5 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m36D025986858FFE5A6108B5D727B83B2518A12F3(L_10, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m36D025986858FFE5A6108B5D727B83B2518A12F3_RuntimeMethod_var);
			goto IL_02f9;
		}

IL_0064_1:
		{
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F L_11 = __this->___U3CU3Eu__1_5;
			V_4 = L_11;
			TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F* L_12 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tD93347C81F94027355EA30F8498A26AD9C654D6F));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0081_1:
		{
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_14;
			L_14 = TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA((&V_4), TaskAwaiter_1_GetResult_m0F71367171C6048B568BD078A95E33ED395AE2FA_RuntimeMethod_var);
			V_3 = L_14;
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_15 = V_3;
			__this->___U3CmetaDataU3E5__2_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmetaDataU3E5__2_4), (void*)L_15);
			// if (metaData.Has("Backups"))
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_16 = __this->___U3CmetaDataU3E5__2_4;
			NullCheck(L_16);
			bool L_17;
			L_17 = StorageMetaData_Has_mEB96E20805DDFE38A0E0F16E97FC3B16748D975A(L_16, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, NULL);
			if (!L_17)
			{
				goto IL_02ba_1;
			}
		}
		{
			// bool allSucceed = true;
			__this->___U3CallSucceedU3E5__3_6 = (bool)1;
			// List<StorageBackup> backups = metaData.Get<List<StorageBackup>>("Backups");
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_18 = __this->___U3CmetaDataU3E5__2_4;
			NullCheck(L_18);
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_19;
			L_19 = StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931(L_18, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, StorageMetaData_Get_TisList_1_t0657A0B79C04E684CF59C292552951C9A3DBF295_m50DAD45FFC9809BE8738EFDC40E4A4207E1F0931_RuntimeMethod_var);
			__this->___U3CbackupsU3E5__4_7 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbackupsU3E5__4_7), (void*)L_19);
			// foreach (StorageBackup backup in backups)
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_20 = __this->___U3CbackupsU3E5__4_7;
			NullCheck(L_20);
			Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0 L_21;
			L_21 = List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309(L_20, List_1_GetEnumerator_m6B9B058A0EB3EABC591520D3ED3FC52386826309_RuntimeMethod_var);
			__this->___U3CU3E7__wrap4_8 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap4_8))->____list_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap4_8))->____current_3), (void*)NULL);
			#endif
		}

IL_00d3_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0207_1:
				{// begin finally (depth: 2)
					{
						int32_t L_22 = V_0;
						if ((((int32_t)L_22) >= ((int32_t)0)))
						{
							goto IL_021c_1;
						}
					}
					{
						Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* L_23 = (&__this->___U3CU3E7__wrap4_8);
						Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82(L_23, Enumerator_Dispose_m8ACDE75224A7A7373DBDD49C68429BA132A47C82_RuntimeMethod_var);
					}

IL_021c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_24 = V_0;
					if ((((int32_t)L_24) == ((int32_t)1)))
					{
						goto IL_013a_2;
					}
				}
				{
					int32_t L_25 = V_0;
					if ((((int32_t)L_25) == ((int32_t)2)))
					{
						goto IL_01b4_2;
					}
				}
				{
					goto IL_01f5_2;
				}

IL_00e4_2:
				{
					// foreach (StorageBackup backup in backups)
					Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* L_26 = (&__this->___U3CU3E7__wrap4_8);
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_27;
					L_27 = Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_inline(L_26, Enumerator_get_Current_m29823EE70C9FCFFE96662349DD8640CAAAFC34F8_RuntimeMethod_var);
					__this->___U3CbackupU3E5__6_9 = L_27;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbackupU3E5__6_9), (void*)L_27);
					// if (await Exists(backup.Identifier))
					StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_28 = V_1;
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_29 = __this->___U3CbackupU3E5__6_9;
					NullCheck(L_29);
					String_t* L_30 = L_29->___Identifier_0;
					NullCheck(L_28);
					Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_31;
					L_31 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(63 /* System.Threading.Tasks.Task`1<System.Boolean> Bayat.SaveSystem.Storage.StorageBase::Exists(System.String) */, L_28, L_30);
					NullCheck(L_31);
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_32;
					L_32 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_31, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
					V_5 = L_32;
					bool L_33;
					L_33 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_5), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
					if (L_33)
					{
						goto IL_0157_2;
					}
				}
				{
					int32_t L_34 = 1;
					V_0 = L_34;
					__this->___U3CU3E1__state_0 = L_34;
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_35 = V_5;
					__this->___U3CU3Eu__2_10 = L_35;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_36 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD(L_36, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m98E6BCD9544CD5281CDD92CC53B9A397FE7F4FCD_RuntimeMethod_var);
					goto IL_02f9;
				}

IL_013a_2:
				{
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_37 = __this->___U3CU3Eu__2_10;
					V_5 = L_37;
					TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_38 = (&__this->___U3CU3Eu__2_10);
					il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
					int32_t L_39 = (-1);
					V_0 = L_39;
					__this->___U3CU3E1__state_0 = L_39;
				}

IL_0157_2:
				{
					bool L_40;
					L_40 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_5), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
					if (!L_40)
					{
						goto IL_01ee_2;
					}
				}
				{
					// allSucceed &= (await Delete(backup.Identifier)).Succeed;
					bool L_41 = __this->___U3CallSucceedU3E5__3_6;
					__this->___U3CU3E7__wrap6_11 = L_41;
					StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_42 = V_1;
					StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779* L_43 = __this->___U3CbackupU3E5__6_9;
					NullCheck(L_43);
					String_t* L_44 = L_43->___Identifier_0;
					NullCheck(L_42);
					Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3* L_45;
					L_45 = VirtualFuncInvoker1< Task_1_t6558CCCDD0F6498AE688B159599EA333B7F875B3*, String_t* >::Invoke(61 /* System.Threading.Tasks.Task`1<Bayat.SaveSystem.Storage.StorageDeleteOperationResult> Bayat.SaveSystem.Storage.StorageBase::Delete(System.String) */, L_42, L_44);
					NullCheck(L_45);
					TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 L_46;
					L_46 = Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E(L_45, Task_1_GetAwaiter_mF7BA80A1B8254DE9427DA0758E86B9F394E19B8E_RuntimeMethod_var);
					V_7 = L_46;
					bool L_47;
					L_47 = TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A((&V_7), TaskAwaiter_1_get_IsCompleted_mD33246DBE591580F8CC00E7072632D1E7D934F1A_RuntimeMethod_var);
					if (L_47)
					{
						goto IL_01d1_2;
					}
				}
				{
					int32_t L_48 = 2;
					V_0 = L_48;
					__this->___U3CU3E1__state_0 = L_48;
					TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 L_49 = V_7;
					__this->___U3CU3Eu__3_12 = L_49;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__3_12))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_50 = (&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m363449B7B4DA7A6B1A3B74E07E39A17535921112(L_50, (&V_7), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m363449B7B4DA7A6B1A3B74E07E39A17535921112_RuntimeMethod_var);
					goto IL_02f9;
				}

IL_01b4_2:
				{
					TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09 L_51 = __this->___U3CU3Eu__3_12;
					V_7 = L_51;
					TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09* L_52 = (&__this->___U3CU3Eu__3_12);
					il2cpp_codegen_initobj(L_52, sizeof(TaskAwaiter_1_t6CA6C93D0DA004F44EA28D71DE6567F77D7CFC09));
					int32_t L_53 = (-1);
					V_0 = L_53;
					__this->___U3CU3E1__state_0 = L_53;
				}

IL_01d1_2:
				{
					StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* L_54;
					L_54 = TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53((&V_7), TaskAwaiter_1_GetResult_mAC89CBB734303D0FFBBE2494BBBC4ADE0C5DDF53_RuntimeMethod_var);
					V_6 = L_54;
					bool L_55 = __this->___U3CU3E7__wrap6_11;
					StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* L_56 = V_6;
					NullCheck(L_56);
					bool L_57 = ((StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA*)L_56)->___Succeed_0;
					__this->___U3CallSucceedU3E5__3_6 = (bool)((int32_t)((int32_t)L_55&(int32_t)L_57));
				}

IL_01ee_2:
				{
					// }
					__this->___U3CbackupU3E5__6_9 = (StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbackupU3E5__6_9), (void*)(StorageBackup_tF4F74A94C2BB95EB4BDFB52DC5D01D21D4CC4779*)NULL);
				}

IL_01f5_2:
				{
					// foreach (StorageBackup backup in backups)
					Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* L_58 = (&__this->___U3CU3E7__wrap4_8);
					bool L_59;
					L_59 = Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69(L_58, Enumerator_MoveNext_m90F7B0B5C05156E41093003542D24BEFC52C1A69_RuntimeMethod_var);
					if (L_59)
					{
						goto IL_00e4_2;
					}
				}
				{
					goto IL_021d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_021d_1:
		{
			Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0* L_60 = (&__this->___U3CU3E7__wrap4_8);
			il2cpp_codegen_initobj(L_60, sizeof(Enumerator_t1CF4716C615E90DE5194C509A08A8E75589F18F0));
			// backups.Clear();
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_61 = __this->___U3CbackupsU3E5__4_7;
			NullCheck(L_61);
			List_1_Clear_m295A51CF4D15D05C897C8F9D0E3E88BE76EE186B_inline(L_61, List_1_Clear_m295A51CF4D15D05C897C8F9D0E3E88BE76EE186B_RuntimeMethod_var);
			// metaData["Backups"] = backups;
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_62 = __this->___U3CmetaDataU3E5__2_4;
			List_1_t0657A0B79C04E684CF59C292552951C9A3DBF295* L_63 = __this->___U3CbackupsU3E5__4_7;
			NullCheck(L_62);
			StorageMetaData_set_Item_m00331E820DEB8022F4F8289B84157D9B0CE13FBB(L_62, _stringLiteral8BFA19A7D9F5A29694A2D939511FCFB25CA5468E, L_63, NULL);
			// await SaveMetaData(identifier, metaData);
			StorageBase_t91FF09F14A57B9BD93FF58A2EE80FE8E96F80A7F* L_64 = V_1;
			String_t* L_65 = __this->___identifier_3;
			StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* L_66 = __this->___U3CmetaDataU3E5__2_4;
			NullCheck(L_64);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_67;
			L_67 = VirtualFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730* >::Invoke(71 /* System.Threading.Tasks.Task Bayat.SaveSystem.Storage.StorageBase::SaveMetaData(System.String,Bayat.SaveSystem.Storage.StorageMetaData) */, L_64, L_65, L_66);
			NullCheck(L_67);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_68;
			L_68 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_67, NULL);
			V_8 = L_68;
			bool L_69;
			L_69 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_8), NULL);
			if (L_69)
			{
				goto IL_02aa_1;
			}
		}
		{
			int32_t L_70 = 3;
			V_0 = L_70;
			__this->___U3CU3E1__state_0 = L_70;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_71 = V_8;
			__this->___U3CU3Eu__4_13 = L_71;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__4_13))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_72 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52(L_72, (&V_8), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E_m0DB84EFE43382E6E8AE07AE46C823A7B28E8EC52_RuntimeMethod_var);
			goto IL_02f9;
		}

IL_028d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_73 = __this->___U3CU3Eu__4_13;
			V_8 = L_73;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_74 = (&__this->___U3CU3Eu__4_13);
			il2cpp_codegen_initobj(L_74, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_75 = (-1);
			V_0 = L_75;
			__this->___U3CU3E1__state_0 = L_75;
		}

IL_02aa_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_8), NULL);
			// return allSucceed;
			bool L_76 = __this->___U3CallSucceedU3E5__3_6;
			V_2 = L_76;
			goto IL_02de;
		}

IL_02ba_1:
		{
			// return false;
			V_2 = (bool)0;
			goto IL_02de;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02be;
		}
		throw e;
	}

CATCH_02be:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmetaDataU3E5__2_4 = (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmetaDataU3E5__2_4), (void*)(StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_77 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_78 = V_9;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_77, L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02f9;
	}// end catch (depth: 1)

IL_02de:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmetaDataU3E5__2_4 = (StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmetaDataU3E5__2_4), (void*)(StorageMetaData_t5491AF2D7B79E36892038F3B118B37A0F86FE730*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_79 = (&__this->___U3CU3Et__builder_1);
		bool L_80 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_79, L_80, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_02f9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteBackupsU3Ed__61_MoveNext_m08581126F6449C2C0B4B8EAE2CF25C42E141468C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E*>(__this + _offset);
	U3CDeleteBackupsU3Ed__61_MoveNext_m08581126F6449C2C0B4B8EAE2CF25C42E141468C(_thisAdjusted, method);
}
// System.Void Bayat.SaveSystem.Storage.StorageBase/<DeleteBackups>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteBackupsU3Ed__61_SetStateMachine_m9F1F2C1A4B481D764668B374058F864B0A951E35 (U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteBackupsU3Ed__61_SetStateMachine_m9F1F2C1A4B481D764668B374058F864B0A951E35_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDeleteBackupsU3Ed__61_tA77659278310E4171AAF66521A01562E626D368E*>(__this + _offset);
	U3CDeleteBackupsU3Ed__61_SetStateMachine_m9F1F2C1A4B481D764668B374058F864B0A951E35(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Bayat.SaveSystem.Storage.IStorage Bayat.SaveSystem.Storage.StorageFactory::get_DefaultStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFactory_get_DefaultStorage_mCF7CF9F043410DBD440DF00AA1595779D92D7BFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F08B18630E0A24F8EB989F6A2B215F49560D4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD9800B1D52CC44B907B0D48797CCA76FFD21237);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(Application.persistentDataPath))
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return FromConnectionString("playerprefs://");
		il2cpp_codegen_runtime_class_init_inline(StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = StorageFactory_FromConnectionString_m804372EE5DD1CE35D5421E89717496BCFFEA2B91(_stringLiteralFD9800B1D52CC44B907B0D48797CCA76FFD21237, NULL);
		return L_2;
	}

IL_0017:
	{
		// return FromConnectionString("disk://path=" + Application.persistentDataPath);
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD4F08B18630E0A24F8EB989F6A2B215F49560D4A, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = StorageFactory_FromConnectionString_m804372EE5DD1CE35D5421E89717496BCFFEA2B91(L_4, NULL);
		return L_5;
	}
}
// System.Void Bayat.SaveSystem.Storage.StorageFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageFactory__cctor_m8E503512673E75FD13D32B3DAA4BA32F52082DFA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = new StorageFactory();
		StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B* L_0 = (StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B*)il2cpp_codegen_object_new(StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StorageFactory__ctor_mB6CA4E28DC1CDC3672FBED6A9480EA54A1F4E30F(L_0, NULL);
		((StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_StaticFields*)il2cpp_codegen_static_fields_for(StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_StaticFields*)il2cpp_codegen_static_fields_for(StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Bayat.SaveSystem.Storage.StorageFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageFactory__ctor_mB6CA4E28DC1CDC3672FBED6A9480EA54A1F4E30F (StorageFactory_t72A8D422274EB560B8FC76678CCCD8829CFB610B* __this, const RuntimeMethod* method) 
{
	{
		// private StorageFactory()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// Bayat.SaveSystem.Storage.IStorage Bayat.SaveSystem.Storage.StorageFactory::FromConnectionString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFactory_FromConnectionString_m804372EE5DD1CE35D5421E89717496BCFFEA2B91 (String_t* ___connectionString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionStringFactory_t686D3BE588FA79810346210D29D9775694EE3389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ConnectionStringFactory.CreateStorage(connectionString);
		String_t* L_0 = ___connectionString0;
		il2cpp_codegen_runtime_class_init_inline(ConnectionStringFactory_t686D3BE588FA79810346210D29D9775694EE3389_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ConnectionStringFactory_CreateStorage_mA78A0880EA7E07A7F978AFCDBE0CA92C904A250A(L_0, NULL);
		return L_1;
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
// System.Boolean Bayat.SaveSystem.Storage.StorageListOptions::get_Recurse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageListOptions_get_Recurse_m63ABFF66E11E06CCC7449D3A2BAB0BC25168E6D9 (StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E* __this, const RuntimeMethod* method) 
{
	{
		// public bool Recurse { get; set; }
		bool L_0 = __this->___U3CRecurseU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Bayat.SaveSystem.Storage.StorageListOptions::set_Recurse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageListOptions_set_Recurse_m07110426DCD03BAB8A08A1D4DE3F5F3FEF13EB28 (StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Recurse { get; set; }
		bool L_0 = ___value0;
		__this->___U3CRecurseU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Bayat.SaveSystem.Storage.StorageListOptions::get_MaxResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 StorageListOptions_get_MaxResults_m2AF4F3466C3B092FB42FA71B8C55DA1B4E31456D (StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E* __this, const RuntimeMethod* method) 
{
	{
		// public int? MaxResults { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CMaxResultsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Bayat.SaveSystem.Storage.StorageListOptions::set_MaxResults(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageListOptions_set_MaxResults_m28229C54301DA50D12D0EB251DC33BFC1031C694 (StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? MaxResults { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CMaxResultsU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Bayat.SaveSystem.Storage.StorageListOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageListOptions__ctor_m7C2DABC559100B0E91B8570A5103B5FBD9364ECD (StorageListOptions_t578B0F209FDE5BF84EAF8155DF1A44C53ABC990E* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bayat.SaveSystem.Storage.StorageOperationResult::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageOperationResult__ctor_m74BE9CD0EBEDFBC919A05034E9B9A43DCADE64D3 (StorageOperationResult_t667DE47F547E94FCC7A314CACB764C08CD2553FA* __this, bool ___succeed0, const RuntimeMethod* method) 
{
	{
		// public StorageOperationResult(bool succeed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Succeed = succeed;
		bool L_0 = ___succeed0;
		__this->___Succeed_0 = L_0;
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
// System.Void Bayat.SaveSystem.Storage.StorageDeleteOperationResult::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageDeleteOperationResult__ctor_m4DF7B3D430ABAF6BC02170F5E5E7EA354F8742CC (StorageDeleteOperationResult_tA7F4802F9B9509B657E9C2C3BAE73EBB4953A1AC* __this, bool ___succeed0, const RuntimeMethod* method) 
{
	{
		// public StorageDeleteOperationResult(bool succeed) : base(succeed)
		bool L_0 = ___succeed0;
		StorageOperationResult__ctor_m74BE9CD0EBEDFBC919A05034E9B9A43DCADE64D3(__this, L_0, NULL);
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
// System.Void Bayat.SaveSystem.Storage.StorageClearOperationResult::.ctor(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageClearOperationResult__ctor_m3939AF06221E3BAB1B27ACF55FE4BF45E945CE54 (StorageClearOperationResult_t953BAB27D5AE1E191EC1BA07EA267AF469790653* __this, bool ___succeed0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___deletedItems1, const RuntimeMethod* method) 
{
	{
		// public StorageClearOperationResult(bool succeed, string[] deletedItems) : base(succeed)
		bool L_0 = ___succeed0;
		StorageOperationResult__ctor_m74BE9CD0EBEDFBC919A05034E9B9A43DCADE64D3(__this, L_0, NULL);
		// this.DeletedItems = deletedItems;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___deletedItems1;
		__this->___DeletedItems_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeletedItems_1), (void*)L_1);
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
// System.Void Bayat.SaveSystem.Storage.StorageMoveOperationResult::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMoveOperationResult__ctor_m20D37617D97B70D8AA60D62954A5F45707D2007D (StorageMoveOperationResult_tB346BA7116E3995186C7D669BEADA7B994242554* __this, bool ___succeed0, String_t* ___resultIdentifier1, const RuntimeMethod* method) 
{
	{
		// public StorageMoveOperationResult(bool succeed, string resultIdentifier) : base(succeed)
		bool L_0 = ___succeed0;
		StorageOperationResult__ctor_m74BE9CD0EBEDFBC919A05034E9B9A43DCADE64D3(__this, L_0, NULL);
		// this.ResultIdentifier = resultIdentifier;
		String_t* L_1 = ___resultIdentifier1;
		__this->___ResultIdentifier_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ResultIdentifier_1), (void*)L_1);
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
// System.Void Bayat.SaveSystem.Storage.StorageCopyOperationResult::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageCopyOperationResult__ctor_m42E577449DDC42415456E8B687D258DD7129B37F (StorageCopyOperationResult_t3F8338E7E1B3D9BC16355E7B8CA8231A7F0BDB4E* __this, bool ___succeed0, String_t* ___resultIdentifier1, const RuntimeMethod* method) 
{
	{
		// public StorageCopyOperationResult(bool succeed, string resultIdentifier) : base(succeed)
		bool L_0 = ___succeed0;
		StorageOperationResult__ctor_m74BE9CD0EBEDFBC919A05034E9B9A43DCADE64D3(__this, L_0, NULL);
		// this.ResultIdentifier = resultIdentifier;
		String_t* L_1 = ___resultIdentifier1;
		__this->___ResultIdentifier_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ResultIdentifier_1), (void*)L_1);
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
// System.Void Bayat.SaveSystem.Security.SaveSystemCryptoStream::.ctor(System.Security.Cryptography.CryptoStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemCryptoStream__ctor_m5F0E6A8A53D753C6F5D24B42184C541A01F5322F (SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E* __this, CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___cryptoStream0, const RuntimeMethod* method) 
{
	{
		// public SaveSystemCryptoStream(CryptoStream cryptoStream)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.UnderlyingCryptoStream = cryptoStream;
		CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_0 = ___cryptoStream0;
		__this->___UnderlyingCryptoStream_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UnderlyingCryptoStream_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Bayat.SaveSystem.Security.SaveSystemCryptoStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemCryptoStream_Dispose_mFCA304DD2D41AFA843213FE98D33BAB76A057A72 (SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E* __this, const RuntimeMethod* method) 
{
	{
		// this.UnderlyingCryptoStream.Dispose();
		CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_0 = __this->___UnderlyingCryptoStream_0;
		NullCheck(L_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_0, NULL);
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
// System.Void Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemSymmetricEncryption__ctor_mE3B2EFEBC1380094A158017C89F85C897AAF679B (SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SaveSystemSymmetricEncryption() : this(DefaultAlgorithmName)
		SaveSystemSymmetricEncryption__ctor_mE05B5FE85C5291CF6ECD3232F063FB54B6546233(__this, _stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4, NULL);
		// }
		return;
	}
}
// System.Void Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemSymmetricEncryption__ctor_mE05B5FE85C5291CF6ECD3232F063FB54B6546233 (SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16* __this, String_t* ___algorithmName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly string AlgorithmName = DefaultAlgorithmName;
		__this->___AlgorithmName_4 = _stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlgorithmName_4), (void*)_stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4);
		// public SaveSystemSymmetricEncryption(string algorithmName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (string.IsNullOrEmpty(algorithmName))
		String_t* L_0 = ___algorithmName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// this.AlgorithmName = DefaultAlgorithmName;
		__this->___AlgorithmName_4 = _stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlgorithmName_4), (void*)_stringLiteralCC3D35AD2EA704216A559E64090EE33BA961B8A4);
		return;
	}

IL_0025:
	{
		// this.AlgorithmName = algorithmName;
		String_t* L_2 = ___algorithmName0;
		__this->___AlgorithmName_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlgorithmName_4), (void*)L_2);
		// }
		return;
	}
}
// Bayat.SaveSystem.Security.SaveSystemCryptoStream Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption::GetWriteStream(Bayat.SaveSystem.Storage.IStorageStream,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E* SaveSystemSymmetricEncryption_GetWriteStream_m3AB5E13DEDA1711927058B7837A849718FF62E3C (SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16* __this, RuntimeObject* ___stream0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* V_0 = NULL;
	Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var alg = SymmetricAlgorithm.Create(this.AlgorithmName);
		String_t* L_0 = __this->___AlgorithmName_4;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_1;
		L_1 = SymmetricAlgorithm_Create_m385361C6AD2D98EA9F1209F35AC0ED320689BFB1(L_0, NULL);
		V_0 = L_1;
		// alg.Mode = CipherMode.CBC;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_2, 1);
		// alg.Padding = PaddingMode.PKCS7;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_3 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_3, 2);
		// alg.GenerateIV();
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_4 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(25 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_4);
		// var key = new Rfc2898DeriveBytes(password, alg.IV, pwIterations);
		String_t* L_5 = ___password1;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_6);
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_8 = (Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB*)il2cpp_codegen_object_new(Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Rfc2898DeriveBytes__ctor_m6A404112259375CF4C7A32B9205F6DDBC2EA1E8A(L_8, L_5, L_7, ((int32_t)100), NULL);
		V_1 = L_8;
		// alg.Key = key.GetBytes(keySize);
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_9 = V_0;
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_10, ((int32_t)16));
		NullCheck(L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_9, L_11);
		// stream.UnderlyingStream.Write(alg.IV, 0, ivSize);
		RuntimeObject* L_12 = ___stream0;
		NullCheck(L_12);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13;
		L_13 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(1 /* System.IO.Stream Bayat.SaveSystem.Storage.IStorageStream::get_UnderlyingStream() */, IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var, L_12);
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_14);
		NullCheck(L_13);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_15, 0, ((int32_t)16));
		// var encryptor = alg.CreateEncryptor();
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_16);
		V_2 = L_17;
		// return new SaveSystemSymmetricCryptoStream(new CryptoStream(stream.UnderlyingStream, encryptor, CryptoStreamMode.Write), alg, encryptor);
		RuntimeObject* L_18 = ___stream0;
		NullCheck(L_18);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19;
		L_19 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(1 /* System.IO.Stream Bayat.SaveSystem.Storage.IStorageStream::get_UnderlyingStream() */, IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = V_2;
		CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_21 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_21, L_19, L_20, 1, NULL);
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_22 = V_0;
		RuntimeObject* L_23 = V_2;
		SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21* L_24 = (SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21*)il2cpp_codegen_object_new(SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		SaveSystemSymmetricCryptoStream__ctor_m39E95FE5424A10778F1DE00DF0F7D538A133A54C(L_24, L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Bayat.SaveSystem.Security.SaveSystemCryptoStream Bayat.SaveSystem.Security.SaveSystemSymmetricEncryption::GetReadStream(Bayat.SaveSystem.Storage.IStorageStream,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveSystemCryptoStream_t426673EC1B4F3823D0478A4CE99B5229E155E22E* SaveSystemSymmetricEncryption_GetReadStream_m8755EBDA18E91674E3EB60B621625C465B0A9647 (SaveSystemSymmetricEncryption_tACB163ED7054A0353E195ECEC6FE8780819F7E16* __this, RuntimeObject* ___stream0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var alg = SymmetricAlgorithm.Create(this.AlgorithmName);
		String_t* L_0 = __this->___AlgorithmName_4;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_1;
		L_1 = SymmetricAlgorithm_Create_m385361C6AD2D98EA9F1209F35AC0ED320689BFB1(L_0, NULL);
		V_0 = L_1;
		// alg.Mode = CipherMode.CBC;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_2, 1);
		// alg.Padding = PaddingMode.PKCS7;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_3 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_3, 2);
		// var thisIV = new byte[ivSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_4;
		// stream.UnderlyingStream.Read(thisIV, 0, ivSize);
		RuntimeObject* L_5 = ___stream0;
		NullCheck(L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6;
		L_6 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(1 /* System.IO.Stream Bayat.SaveSystem.Storage.IStorageStream::get_UnderlyingStream() */, IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)16));
		// alg.IV = thisIV;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_9, L_10);
		// var key = new Rfc2898DeriveBytes(password, alg.IV, pwIterations);
		String_t* L_11 = ___password1;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_12);
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_14 = (Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB*)il2cpp_codegen_object_new(Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Rfc2898DeriveBytes__ctor_m6A404112259375CF4C7A32B9205F6DDBC2EA1E8A(L_14, L_11, L_13, ((int32_t)100), NULL);
		V_2 = L_14;
		// alg.Key = key.GetBytes(keySize);
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_15 = V_0;
		Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB* L_16 = V_2;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.DeriveBytes::GetBytes(System.Int32) */, L_16, ((int32_t)16));
		NullCheck(L_15);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_15, L_17);
		// var decryptor = alg.CreateDecryptor();
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_18);
		V_3 = L_19;
		// return new SaveSystemSymmetricCryptoStream(new CryptoStream(stream.UnderlyingStream, decryptor, CryptoStreamMode.Read), alg, decryptor);
		RuntimeObject* L_20 = ___stream0;
		NullCheck(L_20);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21;
		L_21 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(1 /* System.IO.Stream Bayat.SaveSystem.Storage.IStorageStream::get_UnderlyingStream() */, IStorageStream_t6E467D18E2C8D5E6CC3A4D5745402302B282DE73_il2cpp_TypeInfo_var, L_20);
		RuntimeObject* L_22 = V_3;
		CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_23 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_23, L_21, L_22, 0, NULL);
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_24 = V_0;
		RuntimeObject* L_25 = V_3;
		SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21* L_26 = (SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21*)il2cpp_codegen_object_new(SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		SaveSystemSymmetricCryptoStream__ctor_m39E95FE5424A10778F1DE00DF0F7D538A133A54C(L_26, L_23, L_24, L_25, NULL);
		return L_26;
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
// System.Void Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream::.ctor(System.Security.Cryptography.CryptoStream,System.Security.Cryptography.SymmetricAlgorithm,System.Security.Cryptography.ICryptoTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemSymmetricCryptoStream__ctor_m39E95FE5424A10778F1DE00DF0F7D538A133A54C (SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21* __this, CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___cryptoStream0, SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* ___algorithm1, RuntimeObject* ___cryptoTransform2, const RuntimeMethod* method) 
{
	{
		// public SaveSystemSymmetricCryptoStream(CryptoStream cryptoStream, SymmetricAlgorithm algorithm, ICryptoTransform cryptoTransform) : base(cryptoStream)
		CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_0 = ___cryptoStream0;
		SaveSystemCryptoStream__ctor_m5F0E6A8A53D753C6F5D24B42184C541A01F5322F(__this, L_0, NULL);
		// this.Algorithm = algorithm;
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_1 = ___algorithm1;
		__this->___Algorithm_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Algorithm_1), (void*)L_1);
		// this.CryptoTransform = cryptoTransform;
		RuntimeObject* L_2 = ___cryptoTransform2;
		__this->___CryptoTransform_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CryptoTransform_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void Bayat.SaveSystem.Security.SaveSystemSymmetricCryptoStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystemSymmetricCryptoStream_Dispose_m7B2E9D723D6F37299B0B71F0FECBA94F408A0976 (SaveSystemSymmetricCryptoStream_t5E8938D2E5E0AEB9A5BB943EAA880B6CF11B5D21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Dispose();
		SaveSystemCryptoStream_Dispose_mFCA304DD2D41AFA843213FE98D33BAB76A057A72(__this, NULL);
		// this.Algorithm.Dispose();
		SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* L_0 = __this->___Algorithm_1;
		NullCheck(L_0);
		SymmetricAlgorithm_Dispose_mD45B75F17100B4636F6AD139D5E6249E681DDD8A(L_0, NULL);
		// this.CryptoTransform.Dispose();
		RuntimeObject* L_1 = __this->___CryptoTransform_2;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
