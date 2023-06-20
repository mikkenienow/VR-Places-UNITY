#include "pch-cpp.hpp"

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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]>
struct ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>
struct UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>
struct UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8;
// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>
struct UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E;
// Meta.WitAi.AudioDurationTracker
struct AudioDurationTracker_t43BE70DF8036B15F8C7D0E4E49F3333F0323BBFD;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Meta.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t9DB0F42120182B87787DF6413D5A8A57F1B136DB;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9;
// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497;
// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2;
// Meta.WitAi.CallbackHandlers.WitIntentMatcher
struct WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7;
// Meta.WitAi.WitRequest
struct WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B;
// Meta.WitAi.CallbackHandlers.WitResponseErrorEvent
struct WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B;
// Meta.WitAi.CallbackHandlers.WitResponseEvent
struct WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA;
// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1;
// Meta.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;
// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739;
// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C;
// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Meta.WitAi.WitRequest/OnCustomizeUriEvent
struct OnCustomizeUriEvent_t9763454475C9A0802CE0A68DD50B1206BC1678BE;
// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent
struct OnProvideCustomHeadersEvent_tAE425A4949CC45A3669E527731B58B12341E7AA4;
// Meta.WitAi.WitRequest/PreSendRequestDelegate
struct PreSendRequestDelegate_t2C0F13F2841C74740CFA0F3F4BAF91EC5CF87C5A;

IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m3BE015247D975D021458FB03EFE01B70C52B2F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mAC2CEBD22F038154D0E2B839E6888F728C67F4BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E;

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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C  : public RuntimeObject
{
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* ___U3CResultsU3Ek__BackingField_5;
};
struct Il2CppArrayBounds;

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Meta.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8  : public RuntimeObject
{
	// System.Single Meta.WitAi.CallbackHandlers.ConfidenceRange::minConfidence
	float ___minConfidence_0;
	// System.Single Meta.WitAi.CallbackHandlers.ConfidenceRange::maxConfidence
	float ___maxConfidence_1;
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.ConfidenceRange::onWithinConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onWithinConfidenceRange_2;
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.ConfidenceRange::onOutsideConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onOutsideConfidenceRange_3;
};

// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____overriddenCallbacksHash_1;
};

// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.FormattedValueEvents::format
	String_t* ___format_0;
	// Meta.WitAi.CallbackHandlers.ValueEvent Meta.WitAi.CallbackHandlers.FormattedValueEvents::onFormattedValueEvent
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* ___onFormattedValueEvent_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::path
	String_t* ___path_0;
	// Meta.WitAi.Data.WitValue Meta.WitAi.CallbackHandlers.ValuePathMatcher::witValueReference
	WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* ___witValueReference_1;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::contentRequired
	bool ___contentRequired_2;
	// Meta.WitAi.CallbackHandlers.MatchMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchMethod
	int32_t ___matchMethod_3;
	// Meta.WitAi.CallbackHandlers.ComparisonMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::comparisonMethod
	int32_t ___comparisonMethod_4;
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchValue
	String_t* ___matchValue_5;
	// System.Double Meta.WitAi.CallbackHandlers.ValuePathMatcher::floatingPointComparisonTolerance
	double ___floatingPointComparisonTolerance_6;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_7;
	// Meta.WitAi.CallbackHandlers.ConfidenceRange[] Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidenceRanges
	ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges_8;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::pathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___pathReference_9;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidencePathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___confidencePathReference_10;
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

// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B  : public RuntimeObject
{
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;
};

// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};

// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581  : public RuntimeObject
{
	// Meta.WitAi.WitResponseReference Meta.WitAi.WitResponseReference::child
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___child_0;
	// System.String Meta.WitAi.WitResponseReference::path
	String_t* ___path_1;
};

// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963  : public VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;
};

// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>
struct UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9  : public EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE
{
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.VoiceEvents::OnResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ___OnResponse_7;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.VoiceEvents::OnPartialResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ___OnPartialResponse_8;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::OnValidatePartialResponse
	WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* ___OnValidatePartialResponse_9;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.VoiceEvents::OnError
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* ___OnError_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnAborting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborting_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnAborted_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRequestCompleted_13;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::OnCanceled
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___OnCanceled_14;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.VoiceEvents::OnComplete
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ___OnComplete_15;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.VoiceEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ___OnMicLevelChanged_16;
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.VoiceEvents::OnRequestOptionSetup
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* ___OnRequestOptionSetup_17;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.VoiceEvents::OnRequestInitialized
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ___OnRequestInitialized_18;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.VoiceEvents::OnRequestCreated
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* ___OnRequestCreated_19;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStartListening_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListening_21;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToInactivity_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToTimeout_23;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnStoppedListeningDueToDeactivation_24;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMicDataSent_25;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.VoiceEvents::OnMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnMinimumWakeThresholdHit_26;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onPartialTranscription_27;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.VoiceEvents::onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onFullTranscription_28;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::OnByteDataReady
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ___OnByteDataReady_29;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::OnByteDataSent
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ___OnByteDataSent_30;
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

// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25  : public TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963
{
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

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06  : public UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD
{
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B  : public UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8
{
};

// Meta.WitAi.CallbackHandlers.WitResponseErrorEvent
struct WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B  : public UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9
{
};

// Meta.WitAi.CallbackHandlers.WitResponseEvent
struct WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C  : public UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA
{
};

// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323  : public NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25
{
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_7;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>
struct UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>
struct UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536  : public NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323
{
};

// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::reference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___reference_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.WitAi.WitRequest
struct WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900  : public VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.WitRequest::<Configuration>k__BackingField
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___U3CConfigurationU3Ek__BackingField_9;
	// System.Int32 Meta.WitAi.WitRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_10;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.WitRequest::<AudioEncoding>k__BackingField
	AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* ___U3CAudioEncodingU3Ek__BackingField_11;
	// System.String Meta.WitAi.WitRequest::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_12;
	// System.String Meta.WitAi.WitRequest::<Command>k__BackingField
	String_t* ___U3CCommandU3Ek__BackingField_13;
	// System.Boolean Meta.WitAi.WitRequest::<IsPost>k__BackingField
	bool ___U3CIsPostU3Ek__BackingField_14;
	// System.Byte[] Meta.WitAi.WitRequest::postData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___postData_15;
	// System.String Meta.WitAi.WitRequest::postContentType
	String_t* ___postContentType_16;
	// System.String Meta.WitAi.WitRequest::forcedHttpMethodType
	String_t* ___forcedHttpMethodType_17;
	// System.Boolean Meta.WitAi.WitRequest::<HasResponseStarted>k__BackingField
	bool ___U3CHasResponseStartedU3Ek__BackingField_18;
	// System.Boolean Meta.WitAi.WitRequest::<IsInputStreamReady>k__BackingField
	bool ___U3CIsInputStreamReadyU3Ek__BackingField_19;
	// Meta.WitAi.AudioDurationTracker Meta.WitAi.WitRequest::audioDurationTracker
	AudioDurationTracker_t43BE70DF8036B15F8C7D0E4E49F3333F0323BBFD* ___audioDurationTracker_20;
	// System.Net.HttpWebRequest Meta.WitAi.WitRequest::_request
	HttpWebRequest_tDE1EF6EAE715BE99DB1645ED937A6A2AB930E7C9* ____request_21;
	// System.IO.Stream Meta.WitAi.WitRequest::_writeStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____writeStream_22;
	// System.Object Meta.WitAi.WitRequest::_streamLock
	RuntimeObject* ____streamLock_23;
	// System.Int32 Meta.WitAi.WitRequest::_bytesWritten
	int32_t ____bytesWritten_24;
	// System.String Meta.WitAi.WitRequest::_stackTrace
	String_t* ____stackTrace_25;
	// System.DateTime Meta.WitAi.WitRequest::_requestStartTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____requestStartTime_26;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Byte[]> Meta.WitAi.WitRequest::_writeBuffer
	ConcurrentQueue_1_t65D5F18D7E02C26657F50B992141DC982E85B4A0* ____writeBuffer_27;
	// System.String Meta.WitAi.WitRequest::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_28;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitRequest::_lastResponseData
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ____lastResponseData_29;
	// Meta.WitAi.WitRequest/OnProvideCustomHeadersEvent Meta.WitAi.WitRequest::onProvideCustomHeaders
	OnProvideCustomHeadersEvent_tAE425A4949CC45A3669E527731B58B12341E7AA4* ___onProvideCustomHeaders_30;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onInputStreamReady
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onInputStreamReady_31;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onRawResponse
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onRawResponse_32;
	// Meta.WitAi.WitRequest/OnCustomizeUriEvent Meta.WitAi.WitRequest::onCustomizeUri
	OnCustomizeUriEvent_t9763454475C9A0802CE0A68DD50B1206BC1678BE* ___onCustomizeUri_33;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onPartialTranscription
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPartialTranscription_35;
	// System.Action`1<System.String> Meta.WitAi.WitRequest::onFullTranscription
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onFullTranscription_36;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onPartialResponse
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onPartialResponse_37;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.WitRequest::onResponse
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onResponse_38;
	// System.Boolean Meta.WitAi.WitRequest::_initialized
	bool ____initialized_39;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.WitRequest::_performer
	CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* ____performer_40;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Meta.WitAi.WitRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* ____mainThreadCallbacks_41;
};

struct WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_StaticFields
{
	// Meta.WitAi.WitRequest/PreSendRequestDelegate Meta.WitAi.WitRequest::onPreSendRequest
	PreSendRequestDelegate_t2C0F13F2841C74740CFA0F3F4BAF91EC5CF87C5A* ___onPreSendRequest_34;
};

// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::_conduitParameterProvider
	RuntimeObject* ____conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ___events_6;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::telemetryEvents
	TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___telemetryEvents_7;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.VoiceService::_requests
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ____requests_9;
};

// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.VoiceService Meta.WitAi.CallbackHandlers.WitResponseHandler::Voice
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___Voice_4;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::ValidateEarly
	bool ___ValidateEarly_5;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::_validated
	bool ____validated_6;
};

// Meta.WitAi.CallbackHandlers.WitIntentMatcher
struct WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::intent
	String_t* ___intent_7;
	// System.Single Meta.WitAi.CallbackHandlers.WitIntentMatcher::confidenceThreshold
	float ___confidenceThreshold_8;
};

// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_7;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_8;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_9;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onUtteranceMatched_10;
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex_11;
};

// Meta.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// Meta.WitAi.CallbackHandlers.ValuePathMatcher[] Meta.WitAi.CallbackHandlers.WitResponseMatcher::valueMatchers
	ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* ___valueMatchers_9;
	// Meta.WitAi.CallbackHandlers.FormattedValueEvents[] Meta.WitAi.CallbackHandlers.WitResponseMatcher::formattedValueEvents
	FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* ___formattedValueEvents_10;
	// Meta.WitAi.CallbackHandlers.MultiValueEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onMultiValueEvent
	MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* ___onMultiValueEvent_11;
};

struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields
{
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitResponseMatcher::valueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___valueRegex_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583  : public RuntimeArray
{
	ALIGN_FIELD (8) ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* m_Items[1];

	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E  : public RuntimeArray
{
	ALIGN_FIELD (8) ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* m_Items[1];

	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5  : public RuntimeArray
{
	ALIGN_FIELD (8) FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* m_Items[1];

	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::.ctor()
inline void UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>::.ctor()
inline void UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA (UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.VoiceService>()
inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC (const RuntimeMethod* method)
{
	return ((  VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.WitRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3BBF69B733FCE68C7FD972493991041BCEEE4445 (UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m3BE015247D975D021458FB03EFE01B70C52B2F96 (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8* __this, UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8*, UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22 (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mAC2CEBD22F038154D0E2B839E6888F728C67F4BD (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8* __this, UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8*, UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395 (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::RefreshConfidenceRange(System.Single,Meta.WitAi.CallbackHandlers.ConfidenceRange[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901 (float ___confidence0, ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges1, bool ___allowConfidenceOverlap2, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94 (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Escape_mCBB92EEA6FB5B703811AF678FD53918F6A364227 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::.ctor()
inline void UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60 (String_t* ___path0, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3 (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.CallbackHandlers.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_mEB8A2107D62FCF3E539D8C46674E3657EE53351D (WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F(__this, UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseErrorEvent__ctor_mC2D1603CF552BD5D67B1D38F1B798ABED8718CBD (WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA(__this, UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnValidate_m726AB689BA0091CCDDE1041DBDEC8DE9C346B4A8 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		__this->___Voice_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_4), (void*)L_2);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m3BE015247D975D021458FB03EFE01B70C52B2F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		__this->___Voice_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_4), (void*)L_2);
	}

IL_0018:
	{
		// if (!Voice)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_3 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0057;
		}
	}
	{
		// VLog.E($"VoiceService not found in scene.\nDisabling {GetType().Name} on {gameObject.name}");
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760, L_6, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_8, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_9, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0057:
	{
		// Voice.VoiceEvents.OnRequestCreated.AddListener(OnRequestCreated);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_10 = __this->___Voice_4;
		NullCheck(L_10);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11;
		L_11 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_10);
		NullCheck(L_11);
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_12 = L_11->___OnRequestCreated_19;
		UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E* L_13 = (UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E*)il2cpp_codegen_object_new(UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m3BBF69B733FCE68C7FD972493991041BCEEE4445(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_12);
		UnityEvent_1_AddListener_m3BE015247D975D021458FB03EFE01B70C52B2F96(L_12, L_13, UnityEvent_1_AddListener_m3BE015247D975D021458FB03EFE01B70C52B2F96_RuntimeMethod_var);
		// Voice.VoiceEvents.OnValidatePartialResponse.AddListener(HandleValidateEarlyResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_14 = __this->___Voice_4;
		NullCheck(L_14);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_15;
		L_15 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_14);
		NullCheck(L_15);
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_16 = L_15->___OnValidatePartialResponse_9;
		UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* L_17 = (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*)il2cpp_codegen_object_new(UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22(L_17, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F(L_16, L_17, UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var);
		// Voice.VoiceEvents.OnResponse.AddListener(HandleFinalResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_18 = __this->___Voice_4;
		NullCheck(L_18);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_19;
		L_19 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_18);
		NullCheck(L_19);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_20 = L_19->___OnResponse_7;
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_21 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_21, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_20);
		UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55(L_20, L_21, UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mAC2CEBD22F038154D0E2B839E6888F728C67F4BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Voice)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// Voice.VoiceEvents.OnRequestCreated.RemoveListener(OnRequestCreated);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2 = __this->___Voice_4;
		NullCheck(L_2);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_3;
		L_3 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_2);
		NullCheck(L_3);
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_4 = L_3->___OnRequestCreated_19;
		UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E* L_5 = (UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E*)il2cpp_codegen_object_new(UnityAction_1_tBFFF98F6541528504327975481CB258579A87B3E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m3BBF69B733FCE68C7FD972493991041BCEEE4445(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_mAC2CEBD22F038154D0E2B839E6888F728C67F4BD(L_4, L_5, UnityEvent_1_RemoveListener_mAC2CEBD22F038154D0E2B839E6888F728C67F4BD_RuntimeMethod_var);
		// Voice.VoiceEvents.OnValidatePartialResponse.RemoveListener(HandleValidateEarlyResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_6 = __this->___Voice_4;
		NullCheck(L_6);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_6);
		NullCheck(L_7);
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_8 = L_7->___OnValidatePartialResponse_9;
		UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* L_9 = (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*)il2cpp_codegen_object_new(UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_8);
		UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395(L_8, L_9, UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var);
		// Voice.VoiceEvents.OnResponse.RemoveListener(HandleFinalResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_10 = __this->___Voice_4;
		NullCheck(L_10);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11;
		L_11 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_10);
		NullCheck(L_11);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_12 = L_11->___OnResponse_7;
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_13 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_12);
		UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54(L_12, L_13, UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnRequestCreated(Meta.WitAi.WitRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnRequestCreated_mBEF64D966296FAF909413A206E2FAD69AFEC18A9 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, WitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900* ___request0, const RuntimeMethod* method) 
{
	{
		// _validated = false;
		__this->____validated_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::HandleValidateEarlyResponse(Meta.WitAi.Data.VoiceSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleValidateEarlyResponse_m4EA66386A19F9C6F5FA6ED7E18A2129BDD6E55CA (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* ___session0, const RuntimeMethod* method) 
{
	{
		// if (ValidateEarly && !_validated)
		bool L_0 = __this->___ValidateEarly_5;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = __this->____validated_6;
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		// string invalidReason = OnValidateResponse(session.response, true);
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_2 = ___session0;
		NullCheck(L_2);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3 = L_2->___response_1;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, bool >::Invoke(9 /* System.String Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean) */, __this, L_3, (bool)1);
		// if (string.IsNullOrEmpty(invalidReason))
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// _validated = true;
		__this->____validated_6 = (bool)1;
		// OnResponseSuccess(session.response);
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_6 = ___session0;
		NullCheck(L_6);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = L_6->___response_1;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(11 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode) */, __this, L_7);
		// session.validResponse = true;
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_8 = ___session0;
		NullCheck(L_8);
		L_8->___validResponse_2 = (bool)1;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::HandleFinalResponse(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleFinalResponse_mA72C4C58DE375B3A6B091F98E0A4658F6F0B0E1D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// if (!_validated)
		bool L_0 = __this->____validated_6;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		// string invalidReason = OnValidateResponse(response, false);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, bool >::Invoke(9 /* System.String Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean) */, __this, L_1, (bool)0);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(invalidReason))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		// OnResponseInvalid(response, invalidReason);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_5 = ___response0;
		String_t* L_6 = V_0;
		VirtualActionInvoker2< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(10 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String) */, __this, L_5, L_6);
		goto IL_002a;
	}

IL_0023:
	{
		// OnResponseSuccess(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(11 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode) */, __this, L_7);
	}

IL_002a:
	{
		// _validated = true;
		__this->____validated_6 = (bool)1;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::RefreshConfidenceRange(System.Single,Meta.WitAi.CallbackHandlers.ConfidenceRange[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901 (float ___confidence0, ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges1, bool ___allowConfidenceOverlap2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* V_3 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B10_0 = NULL;
	{
		// bool foundIn = false;
		V_0 = (bool)0;
		// bool foundOut = false;
		V_1 = (bool)0;
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		V_2 = 0;
		goto IL_005a;
	}

IL_0008:
	{
		// var range = confidenceRanges[i];
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_0 = ___confidenceRanges1;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = L_3;
		// if (confidence >= range.minConfidence &&
		//     confidence <= range.maxConfidence)
		float L_4 = ___confidence0;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_5 = V_3;
		NullCheck(L_5);
		float L_6 = L_5->___minConfidence_0;
		if ((!(((float)L_4) >= ((float)L_6))))
		{
			goto IL_003b;
		}
	}
	{
		float L_7 = ___confidence0;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_8 = V_3;
		NullCheck(L_8);
		float L_9 = L_8->___maxConfidence_1;
		if ((!(((float)L_7) <= ((float)L_9))))
		{
			goto IL_003b;
		}
	}
	{
		// if (!allowConfidenceOverlap && foundIn)
		bool L_10 = ___allowConfidenceOverlap2;
		bool L_11 = V_0;
		if (((int32_t)(((((int32_t)L_10) == ((int32_t)0))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0056;
		}
	}
	{
		// range.onWithinConfidenceRange?.Invoke();
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_12 = V_3;
		NullCheck(L_12);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = L_12->___onWithinConfidenceRange_2;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = L_13;
		G_B5_0 = L_14;
		if (L_14)
		{
			G_B6_0 = L_14;
			goto IL_0032;
		}
	}
	{
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B6_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B6_0, NULL);
	}

IL_0037:
	{
		// foundIn = true;
		V_0 = (bool)1;
		goto IL_0056;
	}

IL_003b:
	{
		// if (!allowConfidenceOverlap && foundOut)
		bool L_15 = ___allowConfidenceOverlap2;
		bool L_16 = V_1;
		if (((int32_t)(((((int32_t)L_15) == ((int32_t)0))? 1 : 0)&(int32_t)L_16)))
		{
			goto IL_0056;
		}
	}
	{
		// range.onOutsideConfidenceRange?.Invoke();
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_17 = V_3;
		NullCheck(L_17);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = L_17->___onOutsideConfidenceRange_3;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_004f;
		}
	}
	{
		goto IL_0054;
	}

IL_004f:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B11_0, NULL);
	}

IL_0054:
	{
		// foundOut = true;
		V_1 = (bool)1;
	}

IL_0056:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005a:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_21 = ___confidenceRanges1;
		if (!L_21)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_22 = V_2;
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_23 = ___confidenceRanges1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0008;
		}
	}

IL_0063:
	{
		// return foundIn;
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	{
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
// System.String Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseMatcher_OnValidateResponse_m370C2401BB4867D568DC09F2FD73C3AF676FBDBE (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = base.OnValidateResponse(response, isEarlyResponse);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1 = ___isEarlyResponse1;
		String_t* L_2;
		L_2 = WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(result))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		String_t* L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		// if (isEarlyResponse && !ValueMatches(response))
		bool L_6 = ___isEarlyResponse1;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		bool L_8;
		L_8 = WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA(__this, L_7, NULL);
		if (L_8)
		{
			goto IL_0025;
		}
	}
	{
		// return "No value matches";
		return _stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D;
	}

IL_0025:
	{
		// return string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_9;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnResponseInvalid_m6BBA9D0C9A3CEB80A84D86C8C7ECE14AB7D84599 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error) {}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnResponseSuccess_m2DEB51AE589F7EB483BF2935963387580C247CCC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* V_6 = NULL;
	int32_t V_7 = 0;
	ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* V_8 = NULL;
	String_t* V_9 = NULL;
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* G_B13_0 = NULL;
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* G_B12_0 = NULL;
	float G_B21_0 = 0.0f;
	{
		// if (ValueMatches(response))
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_00ee;
		}
	}
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		V_1 = 0;
		goto IL_00e0;
	}

IL_0013:
	{
		// var formatEvent = formattedValueEvents[j];
		FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* L_2 = __this->___formattedValueEvents_10;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var result = formatEvent.format;
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7 = L_6->___format_0;
		V_3 = L_7;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_4 = 0;
		goto IL_00b3;
	}

IL_002b:
	{
		// var reference = valueMatchers[i].Reference;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_8 = __this->___valueMatchers_9;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_12;
		L_12 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_11, NULL);
		// var value = reference.GetStringValue(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_13 = ___response0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_12, L_13);
		V_5 = L_14;
		// if (!string.IsNullOrEmpty(formatEvent.format))
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_15 = V_2;
		NullCheck(L_15);
		String_t* L_16 = L_15->___format_0;
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		if (L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// if (!string.IsNullOrEmpty(value))
		String_t* L_18 = V_5;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (L_19)
		{
			goto IL_0087;
		}
	}
	{
		// result = valueRegex.Replace(result, value, 1);
		il2cpp_codegen_runtime_class_init_inline(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_20 = ((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_12;
		String_t* L_21 = V_3;
		String_t* L_22 = V_5;
		NullCheck(L_20);
		String_t* L_23;
		L_23 = Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492(L_20, L_21, L_22, 1, NULL);
		V_3 = L_23;
		// result = result.Replace("{" + i + "}", value);
		String_t* L_24 = V_3;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_26;
		L_26 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_25, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		String_t* L_27 = V_5;
		NullCheck(L_24);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_24, L_26, L_27, NULL);
		V_3 = L_28;
		goto IL_00ad;
	}

IL_0087:
	{
		// else if (result.Contains("{" + i + "}"))
		String_t* L_29 = V_3;
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_31;
		L_31 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_30, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_29);
		bool L_32;
		L_32 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00ad;
		}
	}
	{
		// result = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_00c2;
	}

IL_00ad:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b3:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_34 = V_4;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_35 = __this->___valueMatchers_9;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_00c2:
	{
		// if (!string.IsNullOrEmpty(result))
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_36, NULL);
		if (L_37)
		{
			goto IL_00dc;
		}
	}
	{
		// formatEvent.onFormattedValueEvent?.Invoke(result);
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_38 = V_2;
		NullCheck(L_38);
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_39 = L_38->___onFormattedValueEvent_1;
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_40 = L_39;
		G_B12_0 = L_40;
		if (L_40)
		{
			G_B13_0 = L_40;
			goto IL_00d6;
		}
	}
	{
		goto IL_00dc;
	}

IL_00d6:
	{
		String_t* L_41 = V_3;
		NullCheck(G_B13_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B13_0, L_41, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00dc:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e0:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_43 = V_1;
		FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* L_44 = __this->___formattedValueEvents_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0013;
		}
	}

IL_00ee:
	{
		// List<string> values = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_45 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_45, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_45;
		// foreach (var matcher in valueMatchers)
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_46 = __this->___valueMatchers_9;
		V_6 = L_46;
		V_7 = 0;
		goto IL_0161;
	}

IL_0101:
	{
		// foreach (var matcher in valueMatchers)
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_47 = V_6;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_8 = L_50;
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_51 = V_8;
		NullCheck(L_51);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_52;
		L_52 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_51, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_53 = ___response0;
		NullCheck(L_52);
		String_t* L_54;
		L_54 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_52, L_53);
		V_9 = L_54;
		// values.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_55 = V_0;
		String_t* L_56 = V_9;
		NullCheck(L_55);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_55, L_56, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (matcher.ConfidenceReference != null)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_57 = V_8;
		NullCheck(L_57);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_58;
		L_58 = ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382(L_57, NULL);
		if (!L_58)
		{
			goto IL_015b;
		}
	}
	{
		// float confidenceValue = ValueMatches(response, matcher)
		//     ? matcher.ConfidenceReference.GetFloatValue(response)
		//     : 0f;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_59 = ___response0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_60 = V_8;
		bool L_61;
		L_61 = WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2(__this, L_59, L_60, NULL);
		if (L_61)
		{
			goto IL_013a;
		}
	}
	{
		G_B21_0 = (0.0f);
		goto IL_0147;
	}

IL_013a:
	{
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_62 = V_8;
		NullCheck(L_62);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_63;
		L_63 = ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382(L_62, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_64 = ___response0;
		NullCheck(L_63);
		float L_65;
		L_65 = VirtualFuncInvoker1< float, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(6 /* System.Single Meta.WitAi.WitResponseReference::GetFloatValue(Meta.WitAi.Json.WitResponseNode) */, L_63, L_64);
		G_B21_0 = L_65;
	}

IL_0147:
	{
		// RefreshConfidenceRange(confidenceValue, matcher.confidenceRanges, matcher.allowConfidenceOverlap);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_66 = V_8;
		NullCheck(L_66);
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_67 = L_66->___confidenceRanges_8;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_68 = V_8;
		NullCheck(L_68);
		bool L_69 = L_68->___allowConfidenceOverlap_7;
		bool L_70;
		L_70 = WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901(G_B21_0, L_67, L_69, NULL);
	}

IL_015b:
	{
		int32_t L_71 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0161:
	{
		// foreach (var matcher in valueMatchers)
		int32_t L_72 = V_7;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_73 = V_6;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))
		{
			goto IL_0101;
		}
	}
	{
		// onMultiValueEvent.Invoke(values.ToArray());
		MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* L_74 = __this->___onMultiValueEvent_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_75 = V_0;
		NullCheck(L_75);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76;
		L_76 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_75, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_74);
		UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94(L_74, L_76, UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool matches = true;
		V_0 = (bool)1;
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_0006:
	{
		// matches &= ValueMatches(response, valueMatchers[i]);
		bool L_0 = V_0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_2 = __this->___valueMatchers_9;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2(__this, L_1, L_5, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_0&(int32_t)L_6));
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001c:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_8 = V_1;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_9 = __this->___valueMatchers_9;
		NullCheck(L_9);
		bool L_10 = V_0;
		if (((int32_t)(((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0)&(int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		// return matches;
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_0 = ___matcher1;
		NullCheck(L_0);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_1;
		L_1 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_0, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_1, L_2);
		V_0 = L_3;
		// bool result = !matcher.contentRequired || !string.IsNullOrEmpty(value);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_4 = ___matcher1;
		NullCheck(L_4);
		bool L_5 = L_4->___contentRequired_2;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_1 = (bool)G_B3_0;
		// switch (matcher.matchMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_8 = ___matcher1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___matchMethod_3;
		V_2 = L_9;
		int32_t L_10 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)))
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_0047:
	{
		// result &= Regex.Match(value, matcher.matchValue).Success;
		bool L_11 = V_1;
		String_t* L_12 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_13 = ___matcher1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___matchValue_5;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_15;
		L_15 = Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972(L_12, L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_15, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_11&(int32_t)L_16));
		// break;
		goto IL_0093;
	}

IL_005d:
	{
		// result &= value == matcher.matchValue;
		bool L_17 = V_1;
		String_t* L_18 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_19 = ___matcher1;
		NullCheck(L_19);
		String_t* L_20 = L_19->___matchValue_5;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, L_20, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_17&(int32_t)L_21));
		// break;
		goto IL_0093;
	}

IL_006e:
	{
		// result &= CompareInt(value, matcher);
		bool L_22 = V_1;
		String_t* L_23 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_24 = ___matcher1;
		bool L_25;
		L_25 = WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC(__this, L_23, L_24, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_22&(int32_t)L_25));
		// break;
		goto IL_0093;
	}

IL_007b:
	{
		// result &= CompareFloat(value, matcher);
		bool L_26 = V_1;
		String_t* L_27 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_28 = ___matcher1;
		bool L_29;
		L_29 = WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4(__this, L_27, L_28, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_26&(int32_t)L_29));
		// break;
		goto IL_0093;
	}

IL_0088:
	{
		// result &= CompareDouble(value, matcher);
		bool L_30 = V_1;
		String_t* L_31 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_32 = ___matcher1;
		bool L_33;
		L_33 = WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7(__this, L_31, L_32, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_30&(int32_t)L_33));
	}

IL_0093:
	{
		// return result;
		bool L_34 = V_1;
		return L_34;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// double dMatchValue = double.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		double L_4;
		L_4 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_006b;
			}
			case 4:
			{
				goto IL_0066;
			}
			case 5:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) < matcher.floatingPointComparisonTolerance;
		double L_8 = V_0;
		double L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_10) < ((double)L_12))? 1 : 0);
	}

IL_0050:
	{
		// return Math.Abs(dValue - dMatchValue) > matcher.floatingPointComparisonTolerance;
		double L_13 = V_0;
		double L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(((double)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_15) > ((double)L_17))? 1 : 0);
	}

IL_0061:
	{
		// return dValue > dMatchValue;
		double L_18 = V_0;
		double L_19 = V_1;
		return (bool)((((double)L_18) > ((double)L_19))? 1 : 0);
	}

IL_0066:
	{
		// return dValue < dMatchValue;
		double L_20 = V_0;
		double L_21 = V_1;
		return (bool)((((double)L_20) < ((double)L_21))? 1 : 0);
	}

IL_006b:
	{
		// return dValue >= dMatchValue;
		double L_22 = V_0;
		double L_23 = V_1;
		return (bool)((((int32_t)((!(((double)L_22) >= ((double)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0073:
	{
		// return dValue <= dMatchValue;
		double L_24 = V_0;
		double L_25 = V_1;
		return (bool)((((int32_t)((!(((double)L_24) <= ((double)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// float dMatchValue = float.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		float L_4;
		L_4 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0068;
			}
			case 5:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) <
		//        matcher.floatingPointComparisonTolerance;
		float L_8 = V_0;
		float L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_10)) < ((double)L_12))? 1 : 0);
	}

IL_0051:
	{
		// return Math.Abs(dValue - dMatchValue) >
		//        matcher.floatingPointComparisonTolerance;
		float L_13 = V_0;
		float L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_15)) > ((double)L_17))? 1 : 0);
	}

IL_0063:
	{
		// return dValue > dMatchValue;
		float L_18 = V_0;
		float L_19 = V_1;
		return (bool)((((float)L_18) > ((float)L_19))? 1 : 0);
	}

IL_0068:
	{
		// return dValue < dMatchValue;
		float L_20 = V_0;
		float L_21 = V_1;
		return (bool)((((float)L_20) < ((float)L_21))? 1 : 0);
	}

IL_006d:
	{
		// return dValue >= dMatchValue;
		float L_22 = V_0;
		float L_23 = V_1;
		return (bool)((((int32_t)((!(((float)L_22) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		// return dValue <= dMatchValue;
		float L_24 = V_0;
		float L_25 = V_1;
		return (bool)((((int32_t)((!(((float)L_24) <= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// int dMatchValue = int.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		int32_t L_4;
		L_4 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_003f:
	{
		// return dValue == dMatchValue;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0044:
	{
		// return dValue != dMatchValue;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		return (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004c:
	{
		// return dValue > dMatchValue;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		return (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
	}

IL_0051:
	{
		// return dValue < dMatchValue;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		return (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
	}

IL_0056:
	{
		// return dValue >= dMatchValue;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		return (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		// return dValue <= dMatchValue;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		return (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__ctor_m15B71CF2202B13D134164FA1679EB8242D1C39CE (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private MultiValueEvent onMultiValueEvent = new MultiValueEvent();
		MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* L_0 = (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06*)il2cpp_codegen_object_new(MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6(L_0, NULL);
		__this->___onMultiValueEvent_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMultiValueEvent_11), (void*)L_0);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__cctor_mB51DBF05D137B61E4228C21220980F86281F6313 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Regex valueRegex = new Regex(Regex.Escape("{value}"), RegexOptions.Compiled);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Regex_Escape_mCBB92EEA6FB5B703811AF678FD53918F6A364227(_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, 8, NULL);
		((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_12), (void*)L_1);
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
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D(__this, UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.FormattedValueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedValueEvents__ctor_m4F5464C9A565D08A0E4FAFCC55DD1B6444CEBD91 (FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueEvent onFormattedValueEvent = new ValueEvent();
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_0 = (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32*)il2cpp_codegen_object_new(ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7(L_0, NULL);
		__this->___onFormattedValueEvent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFormattedValueEvent_1), (void*)L_0);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B4_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0 = __this->___confidencePathReference_10;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_1 = __this->___confidencePathReference_10;
		return L_1;
	}

IL_000f:
	{
		// var confidencePath = Reference?.path;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_2;
		L_2 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(__this, NULL);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		String_t* L_4 = G_B4_0->___path_1;
		G_B5_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(confidencePath))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		// confidencePath = confidencePath.Substring(0, confidencePath.LastIndexOf("."));
		String_t* L_7 = V_0;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_9, NULL);
		V_0 = L_10;
		// confidencePath += ".confidence";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E, NULL);
		V_0 = L_12;
		// confidencePathReference = WitResultUtilities.GetWitResponseReference(confidencePath);
		String_t* L_13 = V_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_14;
		L_14 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_13, NULL);
		__this->___confidencePathReference_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___confidencePathReference_10), (void*)L_14);
	}

IL_0055:
	{
		// return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_15 = __this->___confidencePathReference_10;
		return L_15;
	}
}
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_0 = __this->___witValueReference_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_2 = __this->___witValueReference_1;
		NullCheck(L_2);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3;
		L_3 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// if (null == pathReference || pathReference.path != path)
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_4 = __this->___pathReference_9;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_5 = __this->___pathReference_9;
		NullCheck(L_5);
		String_t* L_6 = L_5->___path_1;
		String_t* L_7 = __this->___path_0;
		bool L_8;
		L_8 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_0039:
	{
		// pathReference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_9 = __this->___path_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_10;
		L_10 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_9, NULL);
		__this->___pathReference_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathReference_9), (void*)L_10);
	}

IL_004a:
	{
		// return pathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_11 = __this->___pathReference_9;
		return L_11;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.ValuePathMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuePathMatcher__ctor_m217C778A08D77714D81C3168B0DEFA6A9075613C (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	{
		// public bool contentRequired = true;
		__this->___contentRequired_2 = (bool)1;
		// public double floatingPointComparisonTolerance = .0001f;
		__this->___floatingPointComparisonTolerance_6 = (9.9999997473787516E-05);
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
// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUtteranceMatcher_OnValidateResponse_m2551E293B3A7FCCEE25F5252D8177CBB2C0D7125 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (!IsMatch(text))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return "Required utterance does not match";
		return _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
	}

IL_0020:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseInvalid_m298720942103F62B7413E24A7CB99B544406DA0E (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error){}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseSuccess_mD0D71280596EB5A9DAA364A89918326221411165 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B2_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B1_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// onUtteranceMatched?.Invoke(text);
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_3 = __this->___onUtteranceMatched_10;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_5, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	{
		// if (useRegex)
		bool L_0 = __this->___useRegex_9;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (null == regex)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = __this->___regex_11;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_2 = __this->___searchText_7;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_3, L_2, ((int32_t)9), NULL);
		__this->___regex_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_11), (void*)L_3);
	}

IL_0023:
	{
		// var match = regex.Match(text);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->___regex_11;
		String_t* L_5 = ___text0;
		NullCheck(L_4);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_6;
		L_6 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_4, L_5, NULL);
		V_0 = L_6;
		// if (match.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_7, NULL);
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_9 = __this->___exactMatch_8;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_10, NULL);
		String_t* L_12 = ___text0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_14 = __this->___exactMatch_8;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_15 = ___text0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_15, NULL);
		String_t* L_17 = __this->___searchText_7;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0073:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_20 = ___text0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_20, NULL);
		String_t* L_22 = __this->___searchText_7;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_008d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_m4C14137AA9E9CCE83EA0033E58813FD8FA07D59B (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->___exactMatch_8 = (bool)1;
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_0, NULL);
		__this->___onUtteranceMatched_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUtteranceMatched_10), (void*)L_0);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
