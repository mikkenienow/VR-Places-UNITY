#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Meta.Voice.VoiceRequestState Meta.Voice.IVoiceRequest`4::get_State()
// 0x00000002 System.Single Meta.Voice.IVoiceRequest`4::get_DownloadProgress()
// 0x00000003 System.Single Meta.Voice.IVoiceRequest`4::get_UploadProgress()
// 0x00000004 TOptions Meta.Voice.IVoiceRequest`4::get_Options()
// 0x00000005 TEvents Meta.Voice.IVoiceRequest`4::get_Events()
// 0x00000006 TResults Meta.Voice.IVoiceRequest`4::get_Results()
// 0x00000007 System.Boolean Meta.Voice.IVoiceRequest`4::get_CanSend()
// 0x00000008 System.Void Meta.Voice.IVoiceRequest`4::Send()
// 0x00000009 System.Void Meta.Voice.IVoiceRequest`4::Cancel(System.String)
// 0x0000000A TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnStateChange()
// 0x0000000B TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnDownloadProgressChange()
// 0x0000000C TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnUploadProgressChange()
// 0x0000000D TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnInit()
// 0x0000000E TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnSend()
// 0x0000000F TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnCancel()
// 0x00000010 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnFailed()
// 0x00000011 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnSuccess()
// 0x00000012 TUnityEvent Meta.Voice.IVoiceRequestEvents`1::get_OnComplete()
// 0x00000013 System.String Meta.Voice.IVoiceRequestOptions::get_RequestId()
// 0x00000014 System.String Meta.Voice.IVoiceRequestResults::get_Message()
// 0x00000015 Meta.Voice.NLPRequestResponseEvent Meta.Voice.INLPAudioRequestEvents`1::get_OnPartialResponse()
// 0x00000016 System.Void Meta.Voice.NLPRequestResponseEvent::.ctor()
extern void NLPRequestResponseEvent__ctor_m5DAADB236F720F195FFABA26B94C8E97FE8CCA48 (void);
// 0x00000017 Meta.Voice.NLPRequestResponseEvent Meta.Voice.INLPRequestEvents`1::get_OnFullResponse()
// 0x00000018 Meta.WitAi.Json.WitResponseNode Meta.Voice.INLPRequestResults::get_ResponseData()
// 0x00000019 System.Void Meta.Voice.INLPTextRequest`4::Send(System.String)
// 0x0000001A System.String Meta.Voice.INLPTextRequestOptions::get_Text()
// 0x0000001B System.Void Meta.Voice.INLPTextRequestOptions::set_Text(System.String)
// 0x0000001C System.Void Meta.Voice.NLPAudioRequest`4::.ctor(TOptions,TEvents)
// 0x0000001D Meta.WitAi.Json.WitResponseNode Meta.Voice.NLPAudioRequest`4::get_ResponseData()
// 0x0000001E System.Void Meta.Voice.NLPAudioRequest`4::set_ResponseData(Meta.WitAi.Json.WitResponseNode)
// 0x0000001F System.Void Meta.Voice.NLPAudioRequest`4::ApplyResultResponseData(Meta.WitAi.Json.WitResponseNode)
// 0x00000020 System.Void Meta.Voice.NLPAudioRequest`4::OnResponseDataChanged()
// 0x00000021 System.Void Meta.Voice.NLPAudioRequest`4::HandleNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
// 0x00000022 Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::get_OnPartialResponse()
// 0x00000023 Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::get_OnFullResponse()
// 0x00000024 System.Void Meta.Voice.NLPAudioRequestEvents`1::.ctor()
// 0x00000025 Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::get_InputType()
// 0x00000026 System.Void Meta.Voice.NLPRequest`4::set_InputType(Meta.Voice.NLPRequestInputType)
// 0x00000027 System.Void Meta.Voice.NLPRequest`4::.ctor(Meta.Voice.NLPRequestInputType,TOptions,TEvents)
// 0x00000028 System.Void Meta.Voice.NLPRequest`4::SetState(Meta.Voice.VoiceRequestState)
// 0x00000029 System.Void Meta.Voice.NLPRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x0000002A System.String Meta.Voice.NLPRequest`4::GetActivateAudioError()
// 0x0000002B System.String Meta.Voice.NLPRequest`4::GetSendError()
// 0x0000002C System.Void Meta.Voice.NLPRequest`4::Send(System.String)
// 0x0000002D System.Void Meta.Voice.NLPRequestEvents`1::.ctor()
// 0x0000002E Meta.Voice.VoiceAudioInputState Meta.Voice.ITranscriptionRequest`4::get_AudioInputState()
// 0x0000002F System.Boolean Meta.Voice.ITranscriptionRequest`4::get_IsAudioInputActivated()
// 0x00000030 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_IsListening()
// 0x00000031 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_CanActivateAudio()
// 0x00000032 System.Void Meta.Voice.ITranscriptionRequest`4::ActivateAudio()
// 0x00000033 System.Boolean Meta.Voice.ITranscriptionRequest`4::get_CanDeactivateAudio()
// 0x00000034 System.Void Meta.Voice.ITranscriptionRequest`4::DeactivateAudio()
// 0x00000035 System.Void Meta.Voice.TranscriptionRequestEvent::.ctor()
extern void TranscriptionRequestEvent__ctor_m79205A4049FAC31DE5F80B8115C267A27B7586DE (void);
// 0x00000036 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioInputStateChange()
// 0x00000037 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioActivation()
// 0x00000038 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnStartListening()
// 0x00000039 TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnAudioDeactivation()
// 0x0000003A TUnityEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnStopListening()
// 0x0000003B Meta.Voice.TranscriptionRequestEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnPartialTranscription()
// 0x0000003C Meta.Voice.TranscriptionRequestEvent Meta.Voice.ITranscriptionRequestEvents`1::get_OnFullTranscription()
// 0x0000003D System.Single Meta.Voice.ITranscriptionRequestOptions::get_AudioThreshold()
// 0x0000003E System.String Meta.Voice.ITranscriptionRequestResults::get_Transcription()
// 0x0000003F Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::get_AudioInputState()
// 0x00000040 System.Void Meta.Voice.TranscriptionRequest`4::set_AudioInputState(Meta.Voice.VoiceAudioInputState)
// 0x00000041 System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsAudioInputActivated()
// 0x00000042 System.Boolean Meta.Voice.TranscriptionRequest`4::get_IsListening()
// 0x00000043 System.Boolean Meta.Voice.TranscriptionRequest`4::get_CanActivateAudio()
// 0x00000044 System.Boolean Meta.Voice.TranscriptionRequest`4::get_CanDeactivateAudio()
// 0x00000045 System.Void Meta.Voice.TranscriptionRequest`4::.ctor(TOptions,TEvents)
// 0x00000046 System.Void Meta.Voice.TranscriptionRequest`4::SetAudioInputState(Meta.Voice.VoiceAudioInputState)
// 0x00000047 System.Void Meta.Voice.TranscriptionRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x00000048 System.String Meta.Voice.TranscriptionRequest`4::get_Transcription()
// 0x00000049 System.Void Meta.Voice.TranscriptionRequest`4::set_Transcription(System.String)
// 0x0000004A System.Void Meta.Voice.TranscriptionRequest`4::ApplyResultTranscription(System.String)
// 0x0000004B System.Void Meta.Voice.TranscriptionRequest`4::OnTranscriptionChanged()
// 0x0000004C System.String Meta.Voice.TranscriptionRequest`4::GetActivateAudioError()
// 0x0000004D System.Void Meta.Voice.TranscriptionRequest`4::ActivateAudio()
// 0x0000004E System.Void Meta.Voice.TranscriptionRequest`4::OnAudioActivation()
// 0x0000004F System.Void Meta.Voice.TranscriptionRequest`4::HandleAudioActivation()
// 0x00000050 System.Void Meta.Voice.TranscriptionRequest`4::OnStartListening()
// 0x00000051 System.Void Meta.Voice.TranscriptionRequest`4::DeactivateAudio()
// 0x00000052 System.Void Meta.Voice.TranscriptionRequest`4::OnAudioDeactivation()
// 0x00000053 System.Void Meta.Voice.TranscriptionRequest`4::HandleAudioDeactivation()
// 0x00000054 System.Void Meta.Voice.TranscriptionRequest`4::OnStopListening()
// 0x00000055 System.Void Meta.Voice.TranscriptionRequest`4::Send()
// 0x00000056 System.Void Meta.Voice.TranscriptionRequest`4::OnSuccess()
// 0x00000057 System.Void Meta.Voice.TranscriptionRequest`4::Cancel(System.String)
// 0x00000058 TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioInputStateChange()
// 0x00000059 TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioActivation()
// 0x0000005A TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnStartListening()
// 0x0000005B TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnAudioDeactivation()
// 0x0000005C TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnStopListening()
// 0x0000005D Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnPartialTranscription()
// 0x0000005E Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::get_OnFullTranscription()
// 0x0000005F System.Void Meta.Voice.TranscriptionRequestEvents`1::.ctor()
// 0x00000060 Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::get_State()
// 0x00000061 System.Void Meta.Voice.VoiceRequest`4::set_State(Meta.Voice.VoiceRequestState)
// 0x00000062 System.Boolean Meta.Voice.VoiceRequest`4::get_IsActive()
// 0x00000063 System.Single Meta.Voice.VoiceRequest`4::get_DownloadProgress()
// 0x00000064 System.Void Meta.Voice.VoiceRequest`4::set_DownloadProgress(System.Single)
// 0x00000065 System.Single Meta.Voice.VoiceRequest`4::get_UploadProgress()
// 0x00000066 System.Void Meta.Voice.VoiceRequest`4::set_UploadProgress(System.Single)
// 0x00000067 TOptions Meta.Voice.VoiceRequest`4::get_Options()
// 0x00000068 System.Void Meta.Voice.VoiceRequest`4::set_Options(TOptions)
// 0x00000069 TEvents Meta.Voice.VoiceRequest`4::get_Events()
// 0x0000006A System.Void Meta.Voice.VoiceRequest`4::set_Events(TEvents)
// 0x0000006B TResults Meta.Voice.VoiceRequest`4::get_Results()
// 0x0000006C System.Void Meta.Voice.VoiceRequest`4::set_Results(TResults)
// 0x0000006D System.Boolean Meta.Voice.VoiceRequest`4::get_CanSend()
// 0x0000006E System.Void Meta.Voice.VoiceRequest`4::.ctor(TOptions,TEvents)
// 0x0000006F System.Void Meta.Voice.VoiceRequest`4::OnInit()
// 0x00000070 System.Void Meta.Voice.VoiceRequest`4::SetState(Meta.Voice.VoiceRequestState)
// 0x00000071 System.Void Meta.Voice.VoiceRequest`4::SetDownloadProgress(System.Single)
// 0x00000072 System.Void Meta.Voice.VoiceRequest`4::SetUploadProgress(System.Single)
// 0x00000073 System.Void Meta.Voice.VoiceRequest`4::RaiseEvent(TUnityEvent)
// 0x00000074 System.Void Meta.Voice.VoiceRequest`4::Log(System.String,System.Boolean)
// 0x00000075 System.Void Meta.Voice.VoiceRequest`4::LogW(System.String)
// 0x00000076 System.Void Meta.Voice.VoiceRequest`4::AppendLogData(System.Text.StringBuilder,System.Boolean)
// 0x00000077 System.String Meta.Voice.VoiceRequest`4::GetSendError()
// 0x00000078 System.Void Meta.Voice.VoiceRequest`4::Send()
// 0x00000079 System.Void Meta.Voice.VoiceRequest`4::OnSend()
// 0x0000007A System.Void Meta.Voice.VoiceRequest`4::HandleSend()
// 0x0000007B TResults Meta.Voice.VoiceRequest`4::GetResultsWithMessage(System.String)
// 0x0000007C System.Void Meta.Voice.VoiceRequest`4::HandleFailure(System.String)
// 0x0000007D System.Void Meta.Voice.VoiceRequest`4::HandleFailure(TResults)
// 0x0000007E System.Void Meta.Voice.VoiceRequest`4::OnFailed()
// 0x0000007F System.Void Meta.Voice.VoiceRequest`4::HandleSuccess(TResults)
// 0x00000080 System.Void Meta.Voice.VoiceRequest`4::OnSuccess()
// 0x00000081 System.Void Meta.Voice.VoiceRequest`4::Cancel(System.String)
// 0x00000082 System.Void Meta.Voice.VoiceRequest`4::HandleCancel()
// 0x00000083 System.Void Meta.Voice.VoiceRequest`4::OnCancel()
// 0x00000084 System.Void Meta.Voice.VoiceRequest`4::OnComplete()
// 0x00000085 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnStateChange()
// 0x00000086 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnInit()
// 0x00000087 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnSend()
// 0x00000088 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnCancel()
// 0x00000089 TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnFailed()
// 0x0000008A TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnSuccess()
// 0x0000008B TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnComplete()
// 0x0000008C TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnDownloadProgressChange()
// 0x0000008D TUnityEvent Meta.Voice.VoiceRequestEvents`1::get_OnUploadProgressChange()
// 0x0000008E System.Void Meta.Voice.VoiceRequestEvents`1::.ctor()
// 0x0000008F System.String Meta.WitAi.IWitRequestConfiguration::GetConfigurationId()
// 0x00000090 System.String Meta.WitAi.IWitRequestConfiguration::GetApplicationId()
// 0x00000091 Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.IWitRequestConfiguration::GetApplicationInfo()
// 0x00000092 Meta.WitAi.WitRequestEndpointOverride Meta.WitAi.IWitRequestConfiguration::GetEndpointOverrides()
// 0x00000093 System.String Meta.WitAi.IWitRequestConfiguration::GetClientAccessToken()
// 0x00000094 System.Void Meta.WitAi.ComponentExtensions::Copy(T,T)
// 0x00000095 System.Void Meta.WitAi.ComponentExtensions::PreloadCopyData(T)
// 0x00000096 Meta.WitAi.ComponentExtensions/ComponentCopyData Meta.WitAi.ComponentExtensions::GetCopyData(T)
// 0x00000097 System.Boolean Meta.WitAi.ComponentExtensions::IsObsolete(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>)
extern void ComponentExtensions_IsObsolete_m26BAC93041AFBA2F1DD54E5319DEDCA9E85C8BD2 (void);
// 0x00000098 System.Boolean Meta.WitAi.ComponentExtensions::HasCustomAttributes(System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>)
// 0x00000099 System.Void Meta.WitAi.ComponentExtensions::.cctor()
extern void ComponentExtensions__cctor_m1F09EA8F3952DCDFE95586D0647EF99C5625F26E (void);
// 0x0000009A Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::StartCoroutine(System.Collections.IEnumerator,System.Boolean)
extern void CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8 (void);
// 0x0000009B Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.CoroutineUtility::GetPerformer()
extern void CoroutineUtility_GetPerformer_mA455E68F266B8A2DB7BDD6BDA7ACCA29E7F22C67 (void);
// 0x0000009C System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::get_IsRunning()
extern void CoroutinePerformer_get_IsRunning_m19E6CECFFAC5B06651F463FEF2C63C5394FFE227 (void);
// 0x0000009D System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::set_IsRunning(System.Boolean)
extern void CoroutinePerformer_set_IsRunning_m897C40657C00115C43D53CBEF4C3143B9A9B23A1 (void);
// 0x0000009E System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::Awake()
extern void CoroutinePerformer_Awake_m903BD197AF349AA78E509053AC670749F15E4E64 (void);
// 0x0000009F System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineBegin(System.Collections.IEnumerator,System.Boolean)
extern void CoroutinePerformer_CoroutineBegin_m168F0759DFBF0128EE9C1BB3855D5EE5C12E2F32 (void);
// 0x000000A0 System.Collections.IEnumerator Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineIterateEnumerator()
extern void CoroutinePerformer_CoroutineIterateEnumerator_m110D9685700AD6EA9D7FD07C9D87CFF46F6772D0 (void);
// 0x000000A1 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::Update()
extern void CoroutinePerformer_Update_mF318B1FD0CA4DF28A2AE2F05A3D78461EDE43B5F (void);
// 0x000000A2 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineIterateUpdate()
extern void CoroutinePerformer_CoroutineIterateUpdate_m6E65F4FACA2E969CC66A5FF3BC6A7FADC5C1F944 (void);
// 0x000000A3 System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer::MoveNext(System.Collections.IEnumerator)
extern void CoroutinePerformer_MoveNext_m79ADEA3A1DFA04FCB54C5812BD0BF230052C4A49 (void);
// 0x000000A4 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::OnDestroy()
extern void CoroutinePerformer_OnDestroy_m51550C2552E781808BB4A6ED7CC3D5C241B248B7 (void);
// 0x000000A5 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineCancel()
extern void CoroutinePerformer_CoroutineCancel_m51E365ADABD833BDC0ED8020BF6400F3D87A3E14 (void);
// 0x000000A6 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineComplete()
extern void CoroutinePerformer_CoroutineComplete_mAD804B2B7CCCF5FD9B27548D3AE9A03DC6589E12 (void);
// 0x000000A7 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::CoroutineUnload()
extern void CoroutinePerformer_CoroutineUnload_mB36A94A478413E587602AEF7801242E27CC57041 (void);
// 0x000000A8 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer::.ctor()
extern void CoroutinePerformer__ctor_m38757CB7375B7289938A5B9381AEB2321E4794E9 (void);
// 0x000000A9 System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::.ctor(System.Int32)
extern void U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m004DE712531EB1CC04344B1CF1FC4D087B69560F (void);
// 0x000000AA System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.IDisposable.Dispose()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_mADE839050C9C4523150F56B0A6D34D437A44BA21 (void);
// 0x000000AB System.Boolean Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::MoveNext()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m4389ECBDACF6356F0675DDC17FBBF3ACA9BE2BE6 (void);
// 0x000000AC System.Object Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFEED8F504F0EB8227AB65BC8FA0D346D86CA6B2 (void);
// 0x000000AD System.Void Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.Reset()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_mF0CD85E8E99747845372CCE5C8A0399A09401B10 (void);
// 0x000000AE System.Object Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_m32F9100BB3E02E28735715AB1CA4C656A43E8C84 (void);
// 0x000000AF System.Boolean Meta.WitAi.EnumerableExtensions::Equivalent(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x000000B0 Meta.WitAi.ThreadUtility/ThreadPerformer`1<T> Meta.WitAi.ThreadUtility::PerformInBackground(System.Func`1<T>,System.Action`2<T,System.String>,System.Single)
// 0x000000B1 System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1::get_IsRunning()
// 0x000000B2 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::set_IsRunning(System.Boolean)
// 0x000000B3 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::.ctor(System.Func`1<T>,System.Action`2<T,System.String>,System.Single)
// 0x000000B4 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::Work()
// 0x000000B5 System.Collections.IEnumerator Meta.WitAi.ThreadUtility/ThreadPerformer`1::WaitForCompletion()
// 0x000000B6 System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1::IsTimedOut(System.DateTime)
// 0x000000B7 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1::Quit()
// 0x000000B8 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::.ctor(System.Int32)
// 0x000000B9 System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.IDisposable.Dispose()
// 0x000000BA System.Boolean Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::MoveNext()
// 0x000000BB System.Object Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
// 0x000000BC System.Void Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.IEnumerator.Reset()
// 0x000000BD System.Object Meta.WitAi.ThreadUtility/ThreadPerformer`1/<WaitForCompletion>d__13::System.Collections.IEnumerator.get_Current()
// 0x000000BE System.Void Meta.WitAi.UnityObjectExtensions::DestroySafely(UnityEngine.Object)
extern void UnityObjectExtensions_DestroySafely_mDAF3E679953C30C8D918FF456CD8C896C4B530D6 (void);
// 0x000000BF System.Void Meta.WitAi.VLog::add_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,UnityEngine.LogType>)
extern void VLog_add_OnPreLog_m80E921053B5B27C2C94B805E2102598E6D702A94 (void);
// 0x000000C0 System.Void Meta.WitAi.VLog::remove_OnPreLog(System.Action`3<System.Text.StringBuilder,System.String,UnityEngine.LogType>)
extern void VLog_remove_OnPreLog_m4D59F8243A80F8F713C89C481C133C79864647C6 (void);
// 0x000000C1 System.Void Meta.WitAi.VLog::D(System.Object)
extern void VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37 (void);
// 0x000000C2 System.Void Meta.WitAi.VLog::D(System.String,System.Object)
extern void VLog_D_m133AFAEBCDE1687214E2E4C38905D6690105F9E4 (void);
// 0x000000C3 System.Void Meta.WitAi.VLog::W(System.Object)
extern void VLog_W_m7943297ED32FD0E92544C324E6793089056A2344 (void);
// 0x000000C4 System.Void Meta.WitAi.VLog::W(System.String,System.Object)
extern void VLog_W_m97F796A4C02E724416AFDB19E1B91C1C9F284575 (void);
// 0x000000C5 System.Void Meta.WitAi.VLog::E(System.Object)
extern void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (void);
// 0x000000C6 System.Void Meta.WitAi.VLog::E(System.String,System.Object)
extern void VLog_E_m407BD08603D66FB6F1173E8E2F172395E461334C (void);
// 0x000000C7 System.Void Meta.WitAi.VLog::Log(UnityEngine.LogType,System.String,System.Object)
extern void VLog_Log_m77583BC27FFECD24FBCD8BCCC77D29253E1C5DA6 (void);
// 0x000000C8 System.String Meta.WitAi.VLog::GetCallingCategory()
extern void VLog_GetCallingCategory_mD8F04E537A19B1E7E38B26B71869A5523567F3AE (void);
// 0x000000C9 System.Void Meta.WitAi.VLog::WrapWithCallingLink(System.Text.StringBuilder,System.Int32)
extern void VLog_WrapWithCallingLink_mB3F632BBAF9E033A864DCB1A04E19A3D0091DB67 (void);
// 0x000000CA System.Void Meta.WitAi.VLog::WrapWithLogColor(System.Text.StringBuilder,System.Int32,UnityEngine.LogType)
extern void VLog_WrapWithLogColor_m099596C358459A020271465417A1CDA6CB0B6FB5 (void);
// 0x000000CB Meta.WitAi.Requests.AudioStreamData Meta.WitAi.Requests.AudioStreamHandler::get_StreamData()
extern void AudioStreamHandler_get_StreamData_m05385F86B841B86A5E710F2D6E2E6FE666CF10C1 (void);
// 0x000000CC System.Void Meta.WitAi.Requests.AudioStreamHandler::set_StreamData(Meta.WitAi.Requests.AudioStreamData)
extern void AudioStreamHandler_set_StreamData_m4ECEF787242E960E19BE9B8FB0FB9AB35674C00E (void);
// 0x000000CD UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::get_Clip()
extern void AudioStreamHandler_get_Clip_m7F2C3806F9004F76D39C437B8CA05B20D151EDF1 (void);
// 0x000000CE System.Void Meta.WitAi.Requests.AudioStreamHandler::set_Clip(UnityEngine.AudioClip)
extern void AudioStreamHandler_set_Clip_m90270DBCFE048A54EF84F1E52E20AAF37841B61A (void);
// 0x000000CF System.Boolean Meta.WitAi.Requests.AudioStreamHandler::get_IsStreamReady()
extern void AudioStreamHandler_get_IsStreamReady_mFD9B02008ABEB7BF1837157D604F45FFAA127AA8 (void);
// 0x000000D0 System.Void Meta.WitAi.Requests.AudioStreamHandler::set_IsStreamReady(System.Boolean)
extern void AudioStreamHandler_set_IsStreamReady_m350DCAE21E48AE68DF27BCB8DDFE86F813DAE095 (void);
// 0x000000D1 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::get_IsStreamComplete()
extern void AudioStreamHandler_get_IsStreamComplete_m1A099C37024126D10D8094BC3E36DA58C627B086 (void);
// 0x000000D2 System.Void Meta.WitAi.Requests.AudioStreamHandler::set_IsStreamComplete(System.Boolean)
extern void AudioStreamHandler_set_IsStreamComplete_mF41DBBC75E16C58EE528B4ACE8BFBA9B91CD922D (void);
// 0x000000D3 System.Void Meta.WitAi.Requests.AudioStreamHandler::add_OnClipUpdated(Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate)
extern void AudioStreamHandler_add_OnClipUpdated_m143393B1CB794DA46FB371C631CD3CD508138295 (void);
// 0x000000D4 System.Void Meta.WitAi.Requests.AudioStreamHandler::remove_OnClipUpdated(Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate)
extern void AudioStreamHandler_remove_OnClipUpdated_m88648D019D1BE2CAA9A240B45DDEB7D344860E83 (void);
// 0x000000D5 System.Void Meta.WitAi.Requests.AudioStreamHandler::add_OnStreamComplete(System.Action`1<UnityEngine.AudioClip>)
extern void AudioStreamHandler_add_OnStreamComplete_m8A87A91B4F52D7960094A2BC4D041D25F567EB52 (void);
// 0x000000D6 System.Void Meta.WitAi.Requests.AudioStreamHandler::remove_OnStreamComplete(System.Action`1<UnityEngine.AudioClip>)
extern void AudioStreamHandler_remove_OnStreamComplete_m447A451DE23A272F9B169CCA703170982C68DF88 (void);
// 0x000000D7 System.Void Meta.WitAi.Requests.AudioStreamHandler::.ctor(Meta.WitAi.Requests.AudioStreamData)
extern void AudioStreamHandler__ctor_mE168DB64DBD98947866A9A33496C1435C8427BA5 (void);
// 0x000000D8 System.Void Meta.WitAi.Requests.AudioStreamHandler::ReceiveContentLengthHeader(System.UInt64)
extern void AudioStreamHandler_ReceiveContentLengthHeader_m7E8E3C8E3FAC43D6E4406911BE5A3BB43379FBE2 (void);
// 0x000000D9 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::ReceiveData(System.Byte[],System.Int32)
extern void AudioStreamHandler_ReceiveData_mA88E9D02BBCDDBB4228BD7A80218D507D01B2F66 (void);
// 0x000000DA System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeData(System.Byte[],System.Int32)
extern void AudioStreamHandler_DecodeData_mE0DE760485C5464BD53DDC7DB6FEC0575D874499 (void);
// 0x000000DB System.Void Meta.WitAi.Requests.AudioStreamHandler::OnDecodeComplete(System.Single[],System.String)
extern void AudioStreamHandler_OnDecodeComplete_mDD5A5DFDACAFADB45BEE75698B22DFF478A081EC (void);
// 0x000000DC System.Void Meta.WitAi.Requests.AudioStreamHandler::CompleteContent()
extern void AudioStreamHandler_CompleteContent_mCDF44FC48EBAFF5CAD189271196AF3556658425F (void);
// 0x000000DD System.Void Meta.WitAi.Requests.AudioStreamHandler::TryToFinalize()
extern void AudioStreamHandler_TryToFinalize_m426998AB8F44729E43EBEE0E8059F95FEB8977A4 (void);
// 0x000000DE System.Void Meta.WitAi.Requests.AudioStreamHandler::CleanUp()
extern void AudioStreamHandler_CleanUp_m7A0E7E65A342223E16CD572779EADE88CE6D0D6D (void);
// 0x000000DF System.Void Meta.WitAi.Requests.AudioStreamHandler::GenerateClip(System.Int32)
extern void AudioStreamHandler_GenerateClip_mEC4697B4B1F3BC7AD35A03895ED5F99B470C3812 (void);
// 0x000000E0 System.Void Meta.WitAi.Requests.AudioStreamHandler::PreloadCachedClips(System.Int32,System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_PreloadCachedClips_mC82A9B5E6767864297D16AEBE419434E875FAD20 (void);
// 0x000000E1 System.Void Meta.WitAi.Requests.AudioStreamHandler::GenerateCacheClip(System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_GenerateCacheClip_m8D516FC6879FDB56C33AF5CD0E5FCB23D8AA54DC (void);
// 0x000000E2 UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetCachedClip(System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_GetCachedClip_mFF39CF53A3D02BED7D6211BE1DE9CE2D5FF0B1BD (void);
// 0x000000E3 System.Boolean Meta.WitAi.Requests.AudioStreamHandler::DoesClipMatch(UnityEngine.AudioClip,System.Int32,System.Int32,System.Int32)
extern void AudioStreamHandler_DoesClipMatch_m7FCC92DB8A9F26799F5D265EC4BD8823AA0DCF9B (void);
// 0x000000E4 System.Void Meta.WitAi.Requests.AudioStreamHandler::ReuseCachedClip(UnityEngine.AudioClip)
extern void AudioStreamHandler_ReuseCachedClip_mCDD13473F6FF3589AB98CD159F0CC57905BB531C (void);
// 0x000000E5 System.Void Meta.WitAi.Requests.AudioStreamHandler::DestroyCachedClips()
extern void AudioStreamHandler_DestroyCachedClips_m0BC852D7B875A777554806B8AA457B9350D88416 (void);
// 0x000000E6 System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeAudio(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_DecodeAudio_m78E6D76FA8D0074AEA6B9266A9053D7CDE4F6D30 (void);
// 0x000000E7 UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetClipFromSamples(System.Single[],System.String,System.Int32,System.Int32)
extern void AudioStreamHandler_GetClipFromSamples_mFA847D55EF9748483934ADD7EF21D4A8029FDF52 (void);
// 0x000000E8 UnityEngine.AudioClip Meta.WitAi.Requests.AudioStreamHandler::GetClipFromRawData(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType,System.String,System.Int32,System.Int32)
extern void AudioStreamHandler_GetClipFromRawData_m80DFC1732549EB09976AE4A41A63A2DFADD570E6 (void);
// 0x000000E9 System.Void Meta.WitAi.Requests.AudioStreamHandler::GetClipFromRawDataAsync(System.Byte[],Meta.WitAi.Requests.AudioStreamDecodeType,System.String,System.Int32,System.Int32,System.Action`2<UnityEngine.AudioClip,System.String>)
extern void AudioStreamHandler_GetClipFromRawDataAsync_m6C955016B5EEA39C26AC306D304560CB5FFADE02 (void);
// 0x000000EA System.Int32 Meta.WitAi.Requests.AudioStreamHandler::GetClipSamplesFromContentLength(System.UInt64,Meta.WitAi.Requests.AudioStreamDecodeType)
extern void AudioStreamHandler_GetClipSamplesFromContentLength_m7445B7D3AE38A51D13D15F18731F05D36B2F568E (void);
// 0x000000EB System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodePCM16(System.Byte[])
extern void AudioStreamHandler_DecodePCM16_m67FF34FCB9CDE419980655ABA7D0B8ADCFDA5AC8 (void);
// 0x000000EC System.Single[] Meta.WitAi.Requests.AudioStreamHandler::DecodeChunkPCM16(System.Byte[],System.Int32,System.Boolean&,System.Byte[]&)
extern void AudioStreamHandler_DecodeChunkPCM16_m0DE6943F08024AE02A2B172165C588A0C5B94662 (void);
// 0x000000ED System.Single Meta.WitAi.Requests.AudioStreamHandler::DecodeSamplePCM16(System.Byte[],System.Int32)
extern void AudioStreamHandler_DecodeSamplePCM16_m018E1DD0D23AE3FD0941C5CD13DC8A187136A5DF (void);
// 0x000000EE System.Void Meta.WitAi.Requests.AudioStreamHandler::.cctor()
extern void AudioStreamHandler__cctor_m2124F5CFC75BFBE27C16ECADCE2F57A269578CDC (void);
// 0x000000EF System.Void Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::.ctor(System.Object,System.IntPtr)
extern void AudioStreamClipUpdateDelegate__ctor_mCAF0B7B4216B64E773E2F2319ADD3E7445AF49C0 (void);
// 0x000000F0 System.Void Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::Invoke(UnityEngine.AudioClip,UnityEngine.AudioClip)
extern void AudioStreamClipUpdateDelegate_Invoke_mC5F99F715850F4CE72022F6F480E3A9B40C220A0 (void);
// 0x000000F1 System.IAsyncResult Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::BeginInvoke(UnityEngine.AudioClip,UnityEngine.AudioClip,System.AsyncCallback,System.Object)
extern void AudioStreamClipUpdateDelegate_BeginInvoke_m27D53D5E8520A79DD3A89D2285B5AB37F666493C (void);
// 0x000000F2 System.Void Meta.WitAi.Requests.AudioStreamHandler/AudioStreamClipUpdateDelegate::EndInvoke(System.IAsyncResult)
extern void AudioStreamClipUpdateDelegate_EndInvoke_m1A071E8721A9BFA52DCFD969541E47961524AF1D (void);
// 0x000000F3 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass31_0::.ctor()
extern void U3CU3Ec__DisplayClass31_0__ctor_mA519FDA0BD2D0A3532B40A8AA890779185D841F8 (void);
// 0x000000F4 System.Single[] Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass31_0::<ReceiveData>b__0()
extern void U3CU3Ec__DisplayClass31_0_U3CReceiveDataU3Eb__0_mBC238CF4CEEB07C14D076BF437E5D7F5E9F8313F (void);
// 0x000000F5 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass42_0::.ctor()
extern void U3CU3Ec__DisplayClass42_0__ctor_m1085269BE6D8FF10922862C28286A9B343C569A0 (void);
// 0x000000F6 System.Boolean Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass42_0::<GetCachedClip>b__0(UnityEngine.AudioClip)
extern void U3CU3Ec__DisplayClass42_0_U3CGetCachedClipU3Eb__0_mDD5AFEACE53608C52E493A5592C068D5F3442008 (void);
// 0x000000F7 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass49_0::.ctor()
extern void U3CU3Ec__DisplayClass49_0__ctor_mA8609047733E7CC3AD4447E5FCBF8B5B635C60AC (void);
// 0x000000F8 System.Single[] Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass49_0::<GetClipFromRawDataAsync>b__0()
extern void U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__0_m698DABC12D8D7458F585763793AC5D9C5C44D59C (void);
// 0x000000F9 System.Void Meta.WitAi.Requests.AudioStreamHandler/<>c__DisplayClass49_0::<GetClipFromRawDataAsync>b__1(System.Single[],System.String)
extern void U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__1_m4AB461D4F65740DEFA987E9630655207EAA13796 (void);
// 0x000000FA System.Boolean Meta.WitAi.Requests.IVRequestStreamable::get_IsStreamReady()
// 0x000000FB System.Boolean Meta.WitAi.Requests.IVRequestStreamable::get_IsStreamComplete()
// 0x000000FC System.Int32 Meta.WitAi.Requests.VRequest::get_Timeout()
extern void VRequest_get_Timeout_m0C2A0B6850A5377DF0439A1BE30E3FCD98FCD225 (void);
// 0x000000FD System.Void Meta.WitAi.Requests.VRequest::set_Timeout(System.Int32)
extern void VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B (void);
// 0x000000FE System.Boolean Meta.WitAi.Requests.VRequest::get_IsPerforming()
extern void VRequest_get_IsPerforming_mB8C0D61A2D99A3CE2D4CF74C89D82827BD239393 (void);
// 0x000000FF System.Void Meta.WitAi.Requests.VRequest::set_IsPerforming(System.Boolean)
extern void VRequest_set_IsPerforming_m8A46B5029B49226F342D87B99C5818AFA83E2137 (void);
// 0x00000100 System.Boolean Meta.WitAi.Requests.VRequest::get_IsComplete()
extern void VRequest_get_IsComplete_m81474D77CDD9BDFEDDF752B12A81D0794FB1BE0C (void);
// 0x00000101 System.Void Meta.WitAi.Requests.VRequest::set_IsComplete(System.Boolean)
extern void VRequest_set_IsComplete_mC5583B96C76FD15B52AE82B4D055B26783B9B9B1 (void);
// 0x00000102 System.Single Meta.WitAi.Requests.VRequest::get_UploadProgress()
extern void VRequest_get_UploadProgress_m571C4B1E0791B34CE19F3462639D4E60973B441A (void);
// 0x00000103 System.Void Meta.WitAi.Requests.VRequest::set_UploadProgress(System.Single)
extern void VRequest_set_UploadProgress_m5AB82D06DF9B536B91AFFA6CC51450FC850EB633 (void);
// 0x00000104 System.Single Meta.WitAi.Requests.VRequest::get_DownloadProgress()
extern void VRequest_get_DownloadProgress_mD1CEE1319E3DDD8138561CC86A419B1EEFF5409E (void);
// 0x00000105 System.Void Meta.WitAi.Requests.VRequest::set_DownloadProgress(System.Single)
extern void VRequest_set_DownloadProgress_mB370255DF8D2CFE146898455AEB0F3007BF35427 (void);
// 0x00000106 System.Boolean Meta.WitAi.Requests.VRequest::Request(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_Request_m684F5A0DF9F66FAC7A2B53EDE5E7D11634014893 (void);
// 0x00000107 System.String Meta.WitAi.Requests.VRequest::CleanUrl(System.String)
extern void VRequest_CleanUrl_m5876C13024534312528195DB22E81CD8C06D7430 (void);
// 0x00000108 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VRequest::GetHeaders()
extern void VRequest_GetHeaders_m5DE012C50EDAA025BCE7EB3839E3147642D055A0 (void);
// 0x00000109 System.Collections.IEnumerator Meta.WitAi.Requests.VRequest::PerformUpdate()
extern void VRequest_PerformUpdate_mAC5A928ACD1D56ECF2FB316E604A6A0381927567 (void);
// 0x0000010A System.Void Meta.WitAi.Requests.VRequest::Begin()
extern void VRequest_Begin_m3863AA40526B8AD5F9222AEBE286772BF2833075 (void);
// 0x0000010B System.Void Meta.WitAi.Requests.VRequest::Complete()
extern void VRequest_Complete_mAD054B7711A37664EB212EF1DAA32CDAA09E3287 (void);
// 0x0000010C System.Void Meta.WitAi.Requests.VRequest::Cancel()
extern void VRequest_Cancel_mC26F1718B30082B2F939CE3898AF4481F897FDB2 (void);
// 0x0000010D System.Void Meta.WitAi.Requests.VRequest::Unload()
extern void VRequest_Unload_mC59B7F890F95E41EA11D4165DF259F5CF2AF54EA (void);
// 0x0000010E System.Boolean Meta.WitAi.Requests.VRequest::RequestFileHeaders(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void VRequest_RequestFileHeaders_m11ECE714308E5E494427593E2C70E18217114844 (void);
// 0x0000010F System.Boolean Meta.WitAi.Requests.VRequest::RequestFile(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Byte[]>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestFile_m1E29DDF0B87DC09A7DBA6C27A08554CB643A4A07 (void);
// 0x00000110 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileDownload(System.String,UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestFileDownload_m2E5FBE78A57283210AF091B14F5756B3CECE1B70 (void);
// 0x00000111 System.Boolean Meta.WitAi.Requests.VRequest::RequestFileExists(System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>)
extern void VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778 (void);
// 0x00000112 System.Boolean Meta.WitAi.Requests.VRequest::RequestText(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.String>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestText_mF65A05F3294E36C3C5C058144580DD657D21B272 (void);
// 0x00000113 System.Boolean Meta.WitAi.Requests.VRequest::RequestJson(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000114 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonGet(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000115 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPost(System.Uri,System.Byte[],Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000116 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPost(System.Uri,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000117 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPut(System.Uri,System.Byte[],Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000118 System.Boolean Meta.WitAi.Requests.VRequest::RequestJsonPut(System.Uri,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000119 System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioClip(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,UnityEngine.AudioType,System.Boolean,System.Single,System.Single,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestAudioClip_m8D2299F0F18BC226DC287AF76757C49547215829 (void);
// 0x0000011A System.Void Meta.WitAi.Requests.VRequest::OnRequestAudioReady(UnityEngine.Networking.UnityWebRequest,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>)
extern void VRequest_OnRequestAudioReady_mFD68ECD1F5308036FB95812C9D3F73363DED0AC5 (void);
// 0x0000011B System.Void Meta.WitAi.Requests.VRequest::OnRequestAudioDecoded(UnityEngine.AudioClip,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>)
extern void VRequest_OnRequestAudioDecoded_mE16892BDF6B65B4D538F45BDAADA0B190EC3DFE4 (void);
// 0x0000011C System.Boolean Meta.WitAi.Requests.VRequest::RequestAudioClip(System.Uri,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,UnityEngine.AudioType,System.Boolean,System.Single,System.Single,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void VRequest_RequestAudioClip_mE90CE218A5131281B90E806FAD91E8E84DBB409E (void);
// 0x0000011D System.Void Meta.WitAi.Requests.VRequest::.ctor()
extern void VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537 (void);
// 0x0000011E System.Void Meta.WitAi.Requests.VRequest::.cctor()
extern void VRequest__cctor_m3A9D35BF41950AE968FB9F11758C217790220A3E (void);
// 0x0000011F System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F (void);
// 0x00000120 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::Invoke(System.Single)
extern void RequestProgressDelegate_Invoke_m26170A39DD5E2DBC99E324679C632FDE0AFEE46C (void);
// 0x00000121 System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void RequestProgressDelegate_BeginInvoke_m384DB7AB3E11756EFC97B3AB16D850BC3D5BCE97 (void);
// 0x00000122 System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::EndInvoke(System.IAsyncResult)
extern void RequestProgressDelegate_EndInvoke_m1041D2E110074E4C4B527C17CFC53D015A0FB882 (void);
// 0x00000123 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::.ctor(System.Object,System.IntPtr)
// 0x00000124 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::Invoke(TResult,System.String)
// 0x00000125 System.IAsyncResult Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::BeginInvoke(TResult,System.String,System.AsyncCallback,System.Object)
// 0x00000126 System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1::EndInvoke(System.IAsyncResult)
// 0x00000127 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::.ctor(System.Int32)
extern void U3CPerformUpdateU3Ed__32__ctor_mBBF525C6F16663B29BF54C32FDB549B2982E17A9 (void);
// 0x00000128 System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.IDisposable.Dispose()
extern void U3CPerformUpdateU3Ed__32_System_IDisposable_Dispose_mD782800651EA3D7AF15348B520436F61805B9A18 (void);
// 0x00000129 System.Boolean Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::MoveNext()
extern void U3CPerformUpdateU3Ed__32_MoveNext_m471B722230519F1B169A55F918713541E85FE0D4 (void);
// 0x0000012A System.Object Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CPerformUpdateU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8180BC9837D582693C1864B2265A4764E10BF50A (void);
// 0x0000012B System.Void Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.Collections.IEnumerator.Reset()
extern void U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_Reset_m28D6BF2A97244A1AB462A72AE5F1B5CBF8E495B5 (void);
// 0x0000012C System.Object Meta.WitAi.Requests.VRequest/<PerformUpdate>d__32::System.Collections.IEnumerator.get_Current()
extern void U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_get_Current_m5237D31D7F31322F33DB11053D28BA8E9B27FCA3 (void);
// 0x0000012D System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_m5DC2A46CC2F56CE5B8042FC75D93881997454372 (void);
// 0x0000012E System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass37_0::<RequestFileHeaders>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass37_0_U3CRequestFileHeadersU3Eb__0_mE0D79C99919D114ED5AC0308FA957B0D51E63376 (void);
// 0x0000012F System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_m7647427FD3ECAE4E1A37838AB286E88CEEE44479 (void);
// 0x00000130 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass38_0::<RequestFile>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass38_0_U3CRequestFileU3Eb__0_m7C8346831B6D739264BD34F119BF8C2E6AA7A015 (void);
// 0x00000131 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass39_0::.ctor()
extern void U3CU3Ec__DisplayClass39_0__ctor_m55BB22935245E4527D3FCAD0227E0F7FF09347FD (void);
// 0x00000132 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass39_0::<RequestFileDownload>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass39_0_U3CRequestFileDownloadU3Eb__0_m2D39E665274A99737B869FCD15DD5FEF4F98CBD7 (void);
// 0x00000133 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::.ctor()
extern void U3CU3Ec__DisplayClass40_0__ctor_m2840E881AD97DFDA0A7BD75190F2848F6B373FF8 (void);
// 0x00000134 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::<RequestFileExists>b__0(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
extern void U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__0_m82D9C0EED34B3078BD16F949354DDA13AAF7DCC4 (void);
// 0x00000135 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::<RequestFileExists>b__1(System.Byte[],System.String)
extern void U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__1_mD1CE38D7554CC03858CC21F2DFDB938B6769D26D (void);
// 0x00000136 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass40_0::<RequestFileExists>b__2(System.Single)
extern void U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__2_m7D3BFEADF197218B7DFCA3DF53C0176FB287C9B1 (void);
// 0x00000137 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass41_0::.ctor()
extern void U3CU3Ec__DisplayClass41_0__ctor_m5B8B14FF033935A447335DC31FC78106313B5341 (void);
// 0x00000138 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass41_0::<RequestText>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass41_0_U3CRequestTextU3Eb__0_m52AAB2953E13B6F702354FB74C64AC395269D542 (void);
// 0x00000139 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_0`1::.ctor()
// 0x0000013A System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_0`1::<RequestJson>b__0(System.String,System.String)
// 0x0000013B System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_1`1::.ctor()
// 0x0000013C System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass42_1`1::<RequestJson>b__1(TData,System.Boolean)
// 0x0000013D System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_m5AADCC155C32A110B95DE9CFCA3D6B8CB7FA1EED (void);
// 0x0000013E System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass48_0::<RequestAudioClip>b__0(UnityEngine.Networking.UnityWebRequest,System.String)
extern void U3CU3Ec__DisplayClass48_0_U3CRequestAudioClipU3Eb__0_m9660C2D99869A526F73944B64FB2C3AEAAAB4B12 (void);
// 0x0000013F System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass49_0::.ctor()
extern void U3CU3Ec__DisplayClass49_0__ctor_m3A082C4F50DDE27AC5F409D2CAE40F3989575CE1 (void);
// 0x00000140 System.Void Meta.WitAi.Requests.VRequest/<>c__DisplayClass49_0::<OnRequestAudioReady>b__0(UnityEngine.AudioClip,System.String)
extern void U3CU3Ec__DisplayClass49_0_U3COnRequestAudioReadyU3Eb__0_m8F289F1CC7FC693977CD542DE95D5CF5F54AA9E5 (void);
// 0x00000141 System.Void Meta.WitAi.Requests.WitMessageVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String)
extern void WitMessageVRequest__ctor_mE31024BCE3DA5F193F91DF6AE16A50E8113D4382 (void);
// 0x00000142 System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitMessageVRequest_MessageRequest_m7F7D4E1340FA9B343627F56242862CFC9395A068 (void);
// 0x00000143 System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Boolean,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitMessageVRequest_MessageRequest_m18D702CFCCDE7A9BEA7D8690A93C6B6EB6ABDC2D (void);
// 0x00000144 System.Void Meta.WitAi.Requests.WitTTSVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration)
extern void WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6 (void);
// 0x00000145 UnityEngine.AudioType Meta.WitAi.Requests.WitTTSVRequest::GetAudioType(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioType_m55FCFCDF7B7FB48A1661C1375845584DFA5979D0 (void);
// 0x00000146 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioMimeType(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioMimeType_mEA589192C732C34AD57FECB98139F0EB2433EC70 (void);
// 0x00000147 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioExtension(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_GetAudioExtension_m77E5F80D01DED8DFB6DAC4FDFC3BA903DCB43394 (void);
// 0x00000148 System.String Meta.WitAi.Requests.WitTTSVRequest::GetAudioExtension(UnityEngine.AudioType)
extern void WitTTSVRequest_GetAudioExtension_mBFA12281092A7EDA6DF95EB3A9AE0F07A8B2E67A (void);
// 0x00000149 System.Boolean Meta.WitAi.Requests.WitTTSVRequest::CanStreamAudio(Meta.WitAi.Requests.TTSWitAudioType)
extern void WitTTSVRequest_CanStreamAudio_m108E5F1006098AE1AAC20BEF8208D5646B2FD129 (void);
// 0x0000014A System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestStream(System.String,Meta.WitAi.Requests.TTSWitAudioType,System.Boolean,System.Single,System.Single,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.AudioClip>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitTTSVRequest_RequestStream_m4FE7B27FB6865D054213BEB93BCCB03E81424197 (void);
// 0x0000014B System.Boolean Meta.WitAi.Requests.WitTTSVRequest::RequestDownload(System.String,System.String,Meta.WitAi.Requests.TTSWitAudioType,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Boolean>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitTTSVRequest_RequestDownload_mED222F34102243380708B51316C3D467923B0047 (void);
// 0x0000014C System.Void Meta.WitAi.Requests.WitTTSVRequest::EncodePostBytesAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<System.Byte[]>)
extern void WitTTSVRequest_EncodePostBytesAsync_m3B6D887932B4E8BBFFF2C3B891309F8DC0771EB6 (void);
// 0x0000014D System.Byte[] Meta.WitAi.Requests.WitTTSVRequest::EncodePostData(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitTTSVRequest_EncodePostData_m60D2943144682CCAB3E04C9FA4B8043EED960C6F (void);
// 0x0000014E UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.WitTTSVRequest::GetUnityRequest(Meta.WitAi.Requests.TTSWitAudioType,System.Byte[])
extern void WitTTSVRequest_GetUnityRequest_m6154E4AF121B5AED7D4CBBB5FE05CD535CB432D3 (void);
// 0x0000014F System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m2287D31323E8FB9CBD54028E63284C307665387D (void);
// 0x00000150 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass6_0::<RequestStream>b__0(System.Byte[])
extern void U3CU3Ec__DisplayClass6_0_U3CRequestStreamU3Eb__0_m8F72993CEB7B103C5D2E2760DCBBFB3D9B417C25 (void);
// 0x00000151 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m52DD1AF6498BD99C734D50922D31208A471E75D4 (void);
// 0x00000152 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass7_0::<RequestDownload>b__0(System.Byte[])
extern void U3CU3Ec__DisplayClass7_0_U3CRequestDownloadU3Eb__0_mFCF8D72BDC72C5E131778A578424A9EC0E09C275 (void);
// 0x00000153 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m736EDEB82BEE3A1D554689CFDFE1BF2B4086E79F (void);
// 0x00000154 System.Byte[] Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass8_0::<EncodePostBytesAsync>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__0_m0EB175DCD4B99CC03DF3662E97E5C1F1C6FB94D5 (void);
// 0x00000155 System.Void Meta.WitAi.Requests.WitTTSVRequest/<>c__DisplayClass8_0::<EncodePostBytesAsync>b__1(System.Byte[],System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__1_m24F5EB845F29BA8C4BCE302ACCB4B8631B9B12A7 (void);
// 0x00000156 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder>)
extern void WitVRequest_add_OnProvideCustomUri_m7062C8D682C2A1E1E69B2DA8A7D237632BE97D38 (void);
// 0x00000157 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomUri(System.Func`2<System.UriBuilder,System.UriBuilder>)
extern void WitVRequest_remove_OnProvideCustomUri_m6F4F92E9BC3CC9D48FCE1B847A9DA02ED88F7341 (void);
// 0x00000158 System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void WitVRequest_add_OnProvideCustomHeaders_mA252E19E936B0DFDE47D63DF259CD44363AF86A4 (void);
// 0x00000159 System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomHeaders(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
extern void WitVRequest_remove_OnProvideCustomHeaders_mC7531AEA066356C3FB022E2FBE6431856E57FFB2 (void);
// 0x0000015A System.Void Meta.WitAi.Requests.WitVRequest::add_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
extern void WitVRequest_add_OnProvideCustomUserAgent_m0ADDFB64122A96484E3714F6C73F60B9E120175F (void);
// 0x0000015B System.Void Meta.WitAi.Requests.WitVRequest::remove_OnProvideCustomUserAgent(System.Action`1<System.Text.StringBuilder>)
extern void WitVRequest_remove_OnProvideCustomUserAgent_m226B1C965F1A3279806A45939F7C92091271553B (void);
// 0x0000015C System.String Meta.WitAi.Requests.WitVRequest::get_RequestId()
extern void WitVRequest_get_RequestId_m806FACDF98460F4D0F759421BF47AF325725B6B9 (void);
// 0x0000015D System.Void Meta.WitAi.Requests.WitVRequest::set_RequestId(System.String)
extern void WitVRequest_set_RequestId_mE52FF96D3BE05BB2865B7D380AAC1560EBD0A720 (void);
// 0x0000015E Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::get_Configuration()
extern void WitVRequest_get_Configuration_m249A5C4BF1B892702955A74A30BBFA082E5F124F (void);
// 0x0000015F System.Void Meta.WitAi.Requests.WitVRequest::set_Configuration(Meta.WitAi.IWitRequestConfiguration)
extern void WitVRequest_set_Configuration_mD1B49FF89AD9A4539458E07E1525AAE293A0DCFB (void);
// 0x00000160 System.Void Meta.WitAi.Requests.WitVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,System.Boolean)
extern void WitVRequest__ctor_m5EFDD8AC3EF1EA694C79962446FF75ED26C08A17 (void);
// 0x00000161 System.Uri Meta.WitAi.Requests.WitVRequest::GetUri(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitVRequest_GetUri_m2B02986E00CD6AB6903AA77A2418494D1494B468 (void);
// 0x00000162 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitVRequest::GetHeaders()
extern void WitVRequest_GetHeaders_m9E469964828B68DB649BE59D9E53A3C06E68DE05 (void);
// 0x00000163 System.Boolean Meta.WitAi.Requests.WitVRequest::Request(UnityEngine.Networking.UnityWebRequest,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
extern void WitVRequest_Request_mA56EBEE3E3EB8F4C8D0C29B1CE5C60C4289FEB65 (void);
// 0x00000164 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitGet(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000165 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitPost(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000166 System.Boolean Meta.WitAi.Requests.WitVRequest::RequestWitPut(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<TData>,Meta.WitAi.Requests.VRequest/RequestProgressDelegate)
// 0x00000167 System.Uri Meta.WitAi.Requests.WitVRequest::GetWitUri(Meta.WitAi.IWitRequestConfiguration,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void WitVRequest_GetWitUri_m2AAB406E20FA195917B5754ACFDCA1EDD7364622 (void);
// 0x00000168 System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.WitVRequest::GetWitHeaders(Meta.WitAi.IWitRequestConfiguration,System.String,System.Boolean)
extern void WitVRequest_GetWitHeaders_m6AF2ECF4CB9C7B56C98CA3047CDA5A221D56FFF2 (void);
// 0x00000169 System.String Meta.WitAi.Requests.WitVRequest::GetAuthorizationHeader(Meta.WitAi.IWitRequestConfiguration,System.Boolean)
extern void WitVRequest_GetAuthorizationHeader_m1E4D1D86D4B3E55CB44909166197B1C2A7F68E74 (void);
// 0x0000016A System.String Meta.WitAi.Requests.WitVRequest::GetUserAgentHeader(Meta.WitAi.IWitRequestConfiguration)
extern void WitVRequest_GetUserAgentHeader_m58439F7735F03A0F871AE4F6B626817814735464 (void);
// 0x0000016B System.Boolean Meta.WitAi.Json.ColorConverter::get_CanRead()
extern void ColorConverter_get_CanRead_m6BA7E1A33F289174197CDC9472504788516030AC (void);
// 0x0000016C System.Boolean Meta.WitAi.Json.ColorConverter::get_CanWrite()
extern void ColorConverter_get_CanWrite_m2882801C1832AA3433F8862734DFDB2D11F0A8CA (void);
// 0x0000016D System.Boolean Meta.WitAi.Json.ColorConverter::CanConvert(System.Type)
extern void ColorConverter_CanConvert_mF6A94F71611BBCF9ADDCB1D5B7996CD1EF1BE1F8 (void);
// 0x0000016E System.Object Meta.WitAi.Json.ColorConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void ColorConverter_ReadJson_m56167EE71B1F42659EAA4BAED37155C59EA764E5 (void);
// 0x0000016F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.ColorConverter::WriteJson(System.Object)
extern void ColorConverter_WriteJson_m04D2BEB8964E516512AD8205C500D00DB638ADD0 (void);
// 0x00000170 System.Void Meta.WitAi.Json.ColorConverter::.ctor()
extern void ColorConverter__ctor_m806E5A48DA7D9E1508D2CC8230CB169A38943731 (void);
// 0x00000171 System.Boolean Meta.WitAi.Json.DateTimeConverter::get_CanRead()
extern void DateTimeConverter_get_CanRead_m9E90F893D1E98AD77631006DF2338944A1C03670 (void);
// 0x00000172 System.Boolean Meta.WitAi.Json.DateTimeConverter::get_CanWrite()
extern void DateTimeConverter_get_CanWrite_mBB56A0BF211282AE3DB9BBD34C199BE213982861 (void);
// 0x00000173 System.Boolean Meta.WitAi.Json.DateTimeConverter::CanConvert(System.Type)
extern void DateTimeConverter_CanConvert_m4C07AB765E9C480554C43C75DB48BA41AB36D742 (void);
// 0x00000174 System.Object Meta.WitAi.Json.DateTimeConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void DateTimeConverter_ReadJson_mD8AFB276D86DDAA360E639895AAB31207823489E (void);
// 0x00000175 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.DateTimeConverter::WriteJson(System.Object)
extern void DateTimeConverter_WriteJson_m5C0BAB79CADD5E5F832057C4E6A9787B86B6622F (void);
// 0x00000176 System.Void Meta.WitAi.Json.DateTimeConverter::.ctor()
extern void DateTimeConverter__ctor_m2EFD9B80003DA80056F01787FB0F697F141DABDD (void);
// 0x00000177 System.Boolean Meta.WitAi.Json.HashSetConverter`1::get_CanRead()
// 0x00000178 System.Boolean Meta.WitAi.Json.HashSetConverter`1::get_CanWrite()
// 0x00000179 System.Boolean Meta.WitAi.Json.HashSetConverter`1::CanConvert(System.Type)
// 0x0000017A System.Object Meta.WitAi.Json.HashSetConverter`1::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
// 0x0000017B Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.HashSetConverter`1::WriteJson(System.Object)
// 0x0000017C System.Void Meta.WitAi.Json.HashSetConverter`1::.ctor()
// 0x0000017D System.Boolean Meta.WitAi.Json.IJsonDeserializer::DeserializeObject(Meta.WitAi.Json.WitResponseClass)
// 0x0000017E System.Boolean Meta.WitAi.Json.IJsonSerializer::SerializeObject(Meta.WitAi.Json.WitResponseClass)
// 0x0000017F Meta.WitAi.Json.JsonConverter[] Meta.WitAi.Json.JsonConvert::get_DefaultConverters()
extern void JsonConvert_get_DefaultConverters_m7B0032C6B68BCA96DED146985811DA84A4AFF216 (void);
// 0x00000180 System.Object Meta.WitAi.Json.JsonConvert::EnsureExists(System.Type,System.Object)
extern void JsonConvert_EnsureExists_m34B862CAA75A4DC8A0E4863A154F99483E6ADA9E (void);
// 0x00000181 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::DeserializeToken(System.String)
extern void JsonConvert_DeserializeToken_m1B7AF67114FB4FFEC5BFCADBB6820DBE3D7F8666 (void);
// 0x00000182 System.Void Meta.WitAi.Json.JsonConvert::DeserializeObjectAsync(System.String,System.Action`2<IN_TYPE,System.Boolean>,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000183 System.Void Meta.WitAi.Json.JsonConvert::DeserializeObjectAsync(Meta.WitAi.Json.WitResponseNode,System.Action`2<IN_TYPE,System.Boolean>,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000184 IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject(System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000185 IN_TYPE Meta.WitAi.Json.JsonConvert::DeserializeObject(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000186 System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject(IN_TYPE&,System.String,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000187 System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x00000188 System.Object Meta.WitAi.Json.JsonConvert::DeserializeToken(System.Type,System.Object,Meta.WitAi.Json.WitResponseNode,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeToken_mB12EA997DD32B3ACE6656B65A0287DDEE4204C4D (void);
// 0x00000189 System.Object Meta.WitAi.Json.JsonConvert::DeserializeEnum(System.Type,System.Object,System.String,System.Text.StringBuilder)
extern void JsonConvert_DeserializeEnum_m2D6D337E8500810C18824336374A420FFFE8A558 (void);
// 0x0000018A ITEM_TYPE[] Meta.WitAi.Json.JsonConvert::DeserializeArray(System.Object,Meta.WitAi.Json.WitResponseNode,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
// 0x0000018B System.Object Meta.WitAi.Json.JsonConvert::DeserializeClass(System.Type,System.Object,Meta.WitAi.Json.WitResponseClass,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeClass_m24309A50B11D8C4FE0BA0C29E07B885C8F2D250D (void);
// 0x0000018C System.Object Meta.WitAi.Json.JsonConvert::DeserializeDictionary(System.Type,System.Object,Meta.WitAi.Json.WitResponseClass,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_DeserializeDictionary_mA7E4F44E2ACDAA268D06F84E1DC102C0E55FF3D6 (void);
// 0x0000018D System.String Meta.WitAi.Json.JsonConvert::SerializeObject(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x0000018E Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
// 0x0000018F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken(System.Type,System.Object,System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_SerializeToken_m499F2E95B66CA5D5A475E39F246FDF7B38F76E2C (void);
// 0x00000190 System.Void Meta.WitAi.Json.JsonConvert::SerializeProperty(Meta.WitAi.Json.WitResponseClass,System.Type,System.String,System.Object,Meta.WitAi.Json.JsonPropertyAttribute[],System.Text.StringBuilder,Meta.WitAi.Json.JsonConverter[])
extern void JsonConvert_SerializeProperty_m3ABE204F19E486C086047C7BF81F57CF83DAEA75 (void);
// 0x00000191 System.Void Meta.WitAi.Json.JsonConvert::.cctor()
extern void JsonConvert__cctor_m6D4C1F52D3F436CC44218A44E41B9B8C90180487 (void);
// 0x00000192 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::.ctor()
// 0x00000193 System.Boolean Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::<DeserializeObjectAsync>b__0()
// 0x00000194 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass6_0`1::<DeserializeObjectAsync>b__1(System.Boolean,System.String)
// 0x00000195 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::.ctor()
// 0x00000196 System.Boolean Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::<DeserializeObjectAsync>b__0()
// 0x00000197 System.Void Meta.WitAi.Json.JsonConvert/<>c__DisplayClass7_0`1::<DeserializeObjectAsync>b__1(System.Boolean,System.String)
// 0x00000198 System.Void Meta.WitAi.Json.JsonConvert/<>c::.cctor()
extern void U3CU3Ec__cctor_m18BB15DA8C7F86F1036DF10049A047FF13949A78 (void);
// 0x00000199 System.Void Meta.WitAi.Json.JsonConvert/<>c::.ctor()
extern void U3CU3Ec__ctor_mEF36652F13BCFC1EC3AE5783EE338870E2F79AE9 (void);
// 0x0000019A System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeEnum>b__14_0(System.Reflection.MethodInfo)
extern void U3CU3Ec_U3CDeserializeEnumU3Eb__14_0_m60DF2C4DC62E88858ABC926EAE01C06A425115C9 (void);
// 0x0000019B System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeClass>b__16_0(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CDeserializeClassU3Eb__16_0_mCE6A239BE0087BE70D131DE1473A3DC22FF63A4E (void);
// 0x0000019C System.Boolean Meta.WitAi.Json.JsonConvert/<>c::<DeserializeClass>b__16_1(System.Reflection.PropertyInfo)
extern void U3CU3Ec_U3CDeserializeClassU3Eb__16_1_mB6DAB0BC584FA4777AC92B2DFF8056CF69BA3FA6 (void);
// 0x0000019D System.Boolean Meta.WitAi.Json.JsonConverter::get_CanRead()
extern void JsonConverter_get_CanRead_m0D0337361BBA3C6ABA3D3F1A3199347F433F6781 (void);
// 0x0000019E System.Boolean Meta.WitAi.Json.JsonConverter::get_CanWrite()
extern void JsonConverter_get_CanWrite_m5232AD00808BC3A406EFEFA603473DFE82A1AC72 (void);
// 0x0000019F System.Boolean Meta.WitAi.Json.JsonConverter::CanConvert(System.Type)
// 0x000001A0 System.Object Meta.WitAi.Json.JsonConverter::ReadJson(Meta.WitAi.Json.WitResponseNode,System.Type,System.Object)
extern void JsonConverter_ReadJson_m8F6B56995D06D9A0C05364EE37537BFD3453991F (void);
// 0x000001A1 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConverter::WriteJson(System.Object)
extern void JsonConverter_WriteJson_mDE8DB3BAD12B58DC79FC6EEDBDA2C470E2BF485E (void);
// 0x000001A2 System.Void Meta.WitAi.Json.JsonConverter::.ctor()
extern void JsonConverter__ctor_mC9121064B1F93F5E907EDF233D40EC0CBC302B25 (void);
// 0x000001A3 System.Void Meta.WitAi.Json.JsonIgnoreAttribute::.ctor()
extern void JsonIgnoreAttribute__ctor_mA5292D2E1AF12AEA492F815FD06A1BB21496F805 (void);
// 0x000001A4 System.String Meta.WitAi.Json.JsonPropertyAttribute::get_PropertyName()
extern void JsonPropertyAttribute_get_PropertyName_mEF2DC572AB5568F23749E61FF62E92A5748A0121 (void);
// 0x000001A5 System.Void Meta.WitAi.Json.JsonPropertyAttribute::set_PropertyName(System.String)
extern void JsonPropertyAttribute_set_PropertyName_mB079F70AD0296B76D4B8395B43DDC8F2CEDAFDBA (void);
// 0x000001A6 System.Object Meta.WitAi.Json.JsonPropertyAttribute::get_DefaultValue()
extern void JsonPropertyAttribute_get_DefaultValue_mD78E689C9EC517AFCA4E0F8E606062824E075FDA (void);
// 0x000001A7 System.Void Meta.WitAi.Json.JsonPropertyAttribute::set_DefaultValue(System.Object)
extern void JsonPropertyAttribute_set_DefaultValue_m51A3B98B7F4DB29DF9E1EAD8DAE8FEE346E2DF7E (void);
// 0x000001A8 System.Void Meta.WitAi.Json.JsonPropertyAttribute::.ctor(System.String)
extern void JsonPropertyAttribute__ctor_m4F66BBBF83BC759671E7923AA3E780DAA4E7E94F (void);
// 0x000001A9 System.Void Meta.WitAi.Json.JsonPropertyAttribute::.ctor(System.String,System.Object)
extern void JsonPropertyAttribute__ctor_m46B867941D1D018F5A4EEA7F14F259B229753B83 (void);
// 0x000001AA Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseJson::Parse(System.String)
extern void WitResponseJson_Parse_mE417A7A09EAD7189E912086EF8DEE9DFE4A6567B (void);
// 0x000001AB System.Void Meta.WitAi.Json.WitResponseNode::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Add_m29D8906DA4C698B7D80F1F86DB1CE904C4B6D030 (void);
// 0x000001AC Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.Int32)
extern void WitResponseNode_get_Item_mEB5205FD8A42FA9B270F1B9B96937CBF8EE184B2 (void);
// 0x000001AD System.Void Meta.WitAi.Json.WitResponseNode::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_set_Item_mECAC385EB82F5273D6B28B187693E96110155548 (void);
// 0x000001AE Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String)
extern void WitResponseNode_get_Item_m5BF8C3A148006635AB42BB486B08FAA1C26575BF (void);
// 0x000001AF System.Void Meta.WitAi.Json.WitResponseNode::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_set_Item_m0C3DDE61566EAD1E55DFF684A034A8A49DD542DD (void);
// 0x000001B0 System.String Meta.WitAi.Json.WitResponseNode::get_Value()
extern void WitResponseNode_get_Value_m40A3D728DC3D7129DB7A3152B691836F67CDCC78 (void);
// 0x000001B1 System.Void Meta.WitAi.Json.WitResponseNode::set_Value(System.String)
extern void WitResponseNode_set_Value_m580C71D577A96A750E21671793B6ED44A66716CA (void);
// 0x000001B2 System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count()
extern void WitResponseNode_get_Count_mA9EBE5B8F8170D7ED335A273E9C50A4F7B91EDFE (void);
// 0x000001B3 System.Void Meta.WitAi.Json.WitResponseNode::Add(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Add_mB8A4565AFD7F3697C8599E96DA4C00B2B372C20D (void);
// 0x000001B4 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(System.String)
extern void WitResponseNode_Remove_mF641E5E61801FAB44770E3A473CB94F2D207A15C (void);
// 0x000001B5 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(System.Int32)
extern void WitResponseNode_Remove_mA5DA9B1052B0FB5E5615A05DB1747ADAD78C0FB3 (void);
// 0x000001B6 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_Remove_m12C1A50193247D3EBD2E8B33710DA2DD9842FE30 (void);
// 0x000001B7 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_Childs()
extern void WitResponseNode_get_Childs_m717121EAB7095B6F617F93ADD6872A92674707AA (void);
// 0x000001B8 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode::get_DeepChilds()
extern void WitResponseNode_get_DeepChilds_m3C8A1D680D6D2D65025EDBD017E695EBA09FAFF5 (void);
// 0x000001B9 System.String Meta.WitAi.Json.WitResponseNode::ToString()
extern void WitResponseNode_ToString_m3D445D2CF30C85801A49605C4C6A5C1712F793B4 (void);
// 0x000001BA System.String Meta.WitAi.Json.WitResponseNode::ToString(System.String)
extern void WitResponseNode_ToString_m66D87595107D7F314691209D8B44F1203279F05C (void);
// 0x000001BB System.Int32 Meta.WitAi.Json.WitResponseNode::get_AsInt()
extern void WitResponseNode_get_AsInt_m024AA9F3EC47061E2381DFBCEBC26371C451B5CF (void);
// 0x000001BC System.Void Meta.WitAi.Json.WitResponseNode::set_AsInt(System.Int32)
extern void WitResponseNode_set_AsInt_m33831C323A76432BEABE58F8E35CEA90F5445735 (void);
// 0x000001BD System.Single Meta.WitAi.Json.WitResponseNode::get_AsFloat()
extern void WitResponseNode_get_AsFloat_m927097B265B30F942C3A6857847665FE235787B9 (void);
// 0x000001BE System.Void Meta.WitAi.Json.WitResponseNode::set_AsFloat(System.Single)
extern void WitResponseNode_set_AsFloat_mF8F2BC7C194229DFB33094BCBCF9A197F6C6C588 (void);
// 0x000001BF System.Double Meta.WitAi.Json.WitResponseNode::get_AsDouble()
extern void WitResponseNode_get_AsDouble_mE345478726534C4A90DB6A112C31A750791E88EC (void);
// 0x000001C0 System.Void Meta.WitAi.Json.WitResponseNode::set_AsDouble(System.Double)
extern void WitResponseNode_set_AsDouble_m752E687B6F5B140AB053C4FBAB0DCB27C89676D6 (void);
// 0x000001C1 System.Boolean Meta.WitAi.Json.WitResponseNode::get_AsBool()
extern void WitResponseNode_get_AsBool_m6DC15B28EDFB12DBDB8FF8E30B51DC7A6AAC5F28 (void);
// 0x000001C2 System.Void Meta.WitAi.Json.WitResponseNode::set_AsBool(System.Boolean)
extern void WitResponseNode_set_AsBool_m0DD7E58848900E2EEDD53A49D0681B089913CF39 (void);
// 0x000001C3 Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseNode::get_AsArray()
extern void WitResponseNode_get_AsArray_m784676147F5A1FCE06852FA64F7734238B336CEF (void);
// 0x000001C4 System.String[] Meta.WitAi.Json.WitResponseNode::get_AsStringArray()
extern void WitResponseNode_get_AsStringArray_m1929B213720A7A709E34179350673BE6C4F98472 (void);
// 0x000001C5 Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseNode::get_AsObject()
extern void WitResponseNode_get_AsObject_m75B873A53748CE15CDD14FE1C68EAE8586D752C9 (void);
// 0x000001C6 T Meta.WitAi.Json.WitResponseNode::Cast(T)
// 0x000001C7 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::op_Implicit(System.String)
extern void WitResponseNode_op_Implicit_mB8EA8AF87370B2ED8C8D42BD96FFCF7734294FAC (void);
// 0x000001C8 System.String Meta.WitAi.Json.WitResponseNode::op_Implicit(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseNode_op_Implicit_m7AC5695C8699C246F516A32BB3654EED5A6D8911 (void);
// 0x000001C9 System.Boolean Meta.WitAi.Json.WitResponseNode::op_Equality(Meta.WitAi.Json.WitResponseNode,System.Object)
extern void WitResponseNode_op_Equality_m556CA10A38D4323CB11BF6BD64A0A22FA5055366 (void);
// 0x000001CA System.Boolean Meta.WitAi.Json.WitResponseNode::op_Inequality(Meta.WitAi.Json.WitResponseNode,System.Object)
extern void WitResponseNode_op_Inequality_mB890519AF1C832EC1EEB1644A5B0E1D0F4C324F9 (void);
// 0x000001CB System.Boolean Meta.WitAi.Json.WitResponseNode::Equals(System.Object)
extern void WitResponseNode_Equals_mFF70A626804C0712E4D98F3937EF5E3CC69B32A8 (void);
// 0x000001CC System.Int32 Meta.WitAi.Json.WitResponseNode::GetHashCode()
extern void WitResponseNode_GetHashCode_mAC54EE6F975835618C3E065D237A5D106CFAAC41 (void);
// 0x000001CD System.String Meta.WitAi.Json.WitResponseNode::Escape(System.String)
extern void WitResponseNode_Escape_m03F6DE13A95DD1A8C2B25E414A12A22FC14A1B4B (void);
// 0x000001CE Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Parse(System.String)
extern void WitResponseNode_Parse_m7FC8CFF3EFB9D3B0F1BD5F6F0757035F86252542 (void);
// 0x000001CF System.Void Meta.WitAi.Json.WitResponseNode::Serialize(System.IO.BinaryWriter)
extern void WitResponseNode_Serialize_m230A781CE376919326F281846377306B8057A875 (void);
// 0x000001D0 System.Void Meta.WitAi.Json.WitResponseNode::SaveToStream(System.IO.Stream)
extern void WitResponseNode_SaveToStream_m6C31F731D7150456EEB45235903258F26837C0D9 (void);
// 0x000001D1 System.Void Meta.WitAi.Json.WitResponseNode::SaveToCompressedStream(System.IO.Stream)
extern void WitResponseNode_SaveToCompressedStream_m86FA6AEB787FB004374E62C0127DFF0A0F611C3E (void);
// 0x000001D2 System.Void Meta.WitAi.Json.WitResponseNode::SaveToCompressedFile(System.String)
extern void WitResponseNode_SaveToCompressedFile_m7B619C8603B7F32454D68231DC19B618E6C0BEFB (void);
// 0x000001D3 System.String Meta.WitAi.Json.WitResponseNode::SaveToCompressedBase64()
extern void WitResponseNode_SaveToCompressedBase64_m773829A70940A5D40CA31E08EB826FDA126890FA (void);
// 0x000001D4 System.Void Meta.WitAi.Json.WitResponseNode::SaveToFile(System.String)
extern void WitResponseNode_SaveToFile_m77E5FD343DAF070D7FF77345FB81C73497F704B8 (void);
// 0x000001D5 System.String Meta.WitAi.Json.WitResponseNode::SaveToBase64()
extern void WitResponseNode_SaveToBase64_mE3EB208A8BDF11697043FBA4849F29DB2A3526D8 (void);
// 0x000001D6 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::Deserialize(System.IO.BinaryReader)
extern void WitResponseNode_Deserialize_m138FA55DE68097AD00A894664114EB24A80E9CE0 (void);
// 0x000001D7 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedFile(System.String)
extern void WitResponseNode_LoadFromCompressedFile_mCA796D8F6202FE12C5F1290BAF702BC312AEDC4E (void);
// 0x000001D8 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedStream(System.IO.Stream)
extern void WitResponseNode_LoadFromCompressedStream_m2320AA646A68CC5EE0757B20EB328EA31DFB83C8 (void);
// 0x000001D9 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromCompressedBase64(System.String)
extern void WitResponseNode_LoadFromCompressedBase64_m549D1E7330369806CE3E33DC840A11D633D4DB22 (void);
// 0x000001DA Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromStream(System.IO.Stream)
extern void WitResponseNode_LoadFromStream_m13BB986ADE0374D27FD1629B1B90D72E23C10C6A (void);
// 0x000001DB Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromFile(System.String)
extern void WitResponseNode_LoadFromFile_m4CC0694987F0E8F7C86FC979466A248D5E18B32E (void);
// 0x000001DC Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::LoadFromBase64(System.String)
extern void WitResponseNode_LoadFromBase64_mBE7314EAE256D8CB3AD615BD03649410041AA556 (void);
// 0x000001DD System.Void Meta.WitAi.Json.WitResponseNode::.ctor()
extern void WitResponseNode__ctor_mC4FB7662DDD3350001A2B6B50931748A05953B7B (void);
// 0x000001DE System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__17__ctor_m7A92E3693E17CE7E6D1E5692F8C4959A9A711C2A (void);
// 0x000001DF System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m6DDF83606276C09F26793524996CFCB0A7D9897C (void);
// 0x000001E0 System.Boolean Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::MoveNext()
extern void U3Cget_ChildsU3Ed__17_MoveNext_m5516806BD78EDD680ED67BD5D9CBF1B8FCDA79B4 (void);
// 0x000001E1 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m826F96A6640F68D994863FA335F1AB2719B4A9E8 (void);
// 0x000001E2 System.Void Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mC9F5BF2729285825E48FFD4D56AB280FF9AE20C0 (void);
// 0x000001E3 System.Object Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m9684938739FB25877D5A1B6376ACFF90702617AE (void);
// 0x000001E4 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m638574D9566D546CE1FA8156C49E622271A69E04 (void);
// 0x000001E5 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseNode/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m55CF60E5AAC2740B8806D8798993F4307585B275 (void);
// 0x000001E6 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::.ctor(System.Int32)
extern void U3Cget_DeepChildsU3Ed__19__ctor_m1ECA6AF267714944E0D88CC844C3024481B0C6F9 (void);
// 0x000001E7 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.IDisposable.Dispose()
extern void U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m057C39F716CCFCB6EC09EB570622F3283AFC99A6 (void);
// 0x000001E8 System.Boolean Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::MoveNext()
extern void U3Cget_DeepChildsU3Ed__19_MoveNext_mD05A17730B6D957244157C241083B484C0DDDE01 (void);
// 0x000001E9 System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally1()
extern void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m34EAF3C3EC3B5B50FBF66D3443C53572CAE2AFC9 (void);
// 0x000001EA System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::<>m__Finally2()
extern void U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m734B4CEBA5FDA07D95296334838EF75AC796F34E (void);
// 0x000001EB Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m82AA5AA38BCD89F425BFF1EA4553BFADFED80E61 (void);
// 0x000001EC System.Void Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.Reset()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_mFA4A0BF498C57BA45D789E929AFC71BF61DAC90B (void);
// 0x000001ED System.Object Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerator.get_Current()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_m7A12CA35475E08BE8DC3ABB2DA8E7F4CC1E6E13F (void);
// 0x000001EE System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m974C9CD69CAC6CC231D47EF095087FB6AE3A3657 (void);
// 0x000001EF System.Collections.IEnumerator Meta.WitAi.Json.WitResponseNode/<get_DeepChilds>d__19::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_mE964ED7F36A034A941050E850DB5B296CCB36389 (void);
// 0x000001F0 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::get_Item(System.Int32)
extern void WitResponseArray_get_Item_m927FFFE46DFDC0803F897C7396D30221080C61A7 (void);
// 0x000001F1 System.Void Meta.WitAi.Json.WitResponseArray::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_set_Item_m27C3BAB5EA3B1BB4FEDCE88FA6873663982991BB (void);
// 0x000001F2 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::get_Item(System.String)
extern void WitResponseArray_get_Item_m7B53C8F8BD9A22A65F68218727330CFC8F3AF58D (void);
// 0x000001F3 System.Void Meta.WitAi.Json.WitResponseArray::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_set_Item_mCDBFCE84ADABB704F25DBBF960E27DCA38294465 (void);
// 0x000001F4 System.Int32 Meta.WitAi.Json.WitResponseArray::get_Count()
extern void WitResponseArray_get_Count_m3C0846E5646C8FDDBBCCEF276B524D13AAB658DA (void);
// 0x000001F5 System.Void Meta.WitAi.Json.WitResponseArray::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_Add_mDC72A2B60BF5E3C870CBD364F9E10FD0B46BF5D8 (void);
// 0x000001F6 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::Remove(System.Int32)
extern void WitResponseArray_Remove_m9D56D4CF28E1912CE311E2BF41042219C2869CF4 (void);
// 0x000001F7 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseArray_Remove_mF9D743830FBFE9B3722661915ABB3E6013C9D69A (void);
// 0x000001F8 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray::get_Childs()
extern void WitResponseArray_get_Childs_m574A7FD2693EA36AFFD83098FEF5A8302C04272D (void);
// 0x000001F9 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseArray::GetEnumerator()
extern void WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026 (void);
// 0x000001FA System.String Meta.WitAi.Json.WitResponseArray::ToString()
extern void WitResponseArray_ToString_mDA58401450439B53B96BCA568DEEA801743A22AD (void);
// 0x000001FB System.String Meta.WitAi.Json.WitResponseArray::ToString(System.String)
extern void WitResponseArray_ToString_m9E2A94668564EF25411A7BD98961CD4E4B05F6A1 (void);
// 0x000001FC System.Void Meta.WitAi.Json.WitResponseArray::Serialize(System.IO.BinaryWriter)
extern void WitResponseArray_Serialize_mD50F05A3ADB0F34EA23332AA32FC54254AEF5589 (void);
// 0x000001FD System.Void Meta.WitAi.Json.WitResponseArray::.ctor()
extern void WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55 (void);
// 0x000001FE System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__13__ctor_m429A0436140CAAC11D1FEC5AE457F973E5CBCE81 (void);
// 0x000001FF System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m77150F5238147EF1A1123553B144D32384FDF041 (void);
// 0x00000200 System.Boolean Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::MoveNext()
extern void U3Cget_ChildsU3Ed__13_MoveNext_mED66E2F0C7AC042B0DDA325CE0A625CCE9F84629 (void);
// 0x00000201 System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::<>m__Finally1()
extern void U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mC36DE4425B467C1530E7B63FAFF3953BCB0F5A4A (void);
// 0x00000202 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mCCA6C7443157D72D027788498250E4190F7588BB (void);
// 0x00000203 System.Void Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m951018C550B587C6BC6EB1028EA39DD11B9BFDF3 (void);
// 0x00000204 System.Object Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_m15D840D5299CA52E41DFC537BBCA8114DFF3340B (void);
// 0x00000205 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m5F25DA4843C4E27A1832287B6A8C0E97E2E900C6 (void);
// 0x00000206 System.Collections.IEnumerator Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m0D4D4A2C8508D22357D51157A1DD0865F7562297 (void);
// 0x00000207 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_m3E2ECECCB821D8BC7EC4F6AC5AA5266317FB0363 (void);
// 0x00000208 System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m8B46DC03D65B315AF464114378C6E71C2268AFD7 (void);
// 0x00000209 System.Boolean Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_m3ACEEE39EBBE063061A2E69B85883B999B0BAA78 (void);
// 0x0000020A System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::<>m__Finally1()
extern void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mE7D3B2D552B46B7CE8FC72BF74533B5957F988E7 (void);
// 0x0000020B System.Object Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7CE42F21A88CC604C4EE5C5F806AB3D537F3438 (void);
// 0x0000020C System.Void Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m630CFD8E7B2F011E087BBD24EDA563AC94B3D181 (void);
// 0x0000020D System.Object Meta.WitAi.Json.WitResponseArray/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_mBB676A0A25E054C8115154F7F3BA5FE44EDF1CE3 (void);
// 0x0000020E System.String[] Meta.WitAi.Json.WitResponseClass::get_ChildNodeNames()
extern void WitResponseClass_get_ChildNodeNames_m17643A6B0646BB4C0432A7ABE39A0EEE0FFA09FC (void);
// 0x0000020F System.Boolean Meta.WitAi.Json.WitResponseClass::HasChild(System.String)
extern void WitResponseClass_HasChild_mA300E73E9D4346D21FEDDC071B2D52538625A3FB (void);
// 0x00000210 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::get_Item(System.String)
extern void WitResponseClass_get_Item_m46C1E02FA07F165B10C5E55B22329F77C83F66CB (void);
// 0x00000211 System.Void Meta.WitAi.Json.WitResponseClass::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_set_Item_mB95FE232445471A1C68C8FF19CC1C361F9619E68 (void);
// 0x00000212 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::get_Item(System.Int32)
extern void WitResponseClass_get_Item_m789E7BBCFB8C73602AEE9B3DA54628A03B15A74B (void);
// 0x00000213 System.Void Meta.WitAi.Json.WitResponseClass::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_set_Item_m559D8991F4C5F4F3830D9CB5267DCEE5006A3504 (void);
// 0x00000214 System.Int32 Meta.WitAi.Json.WitResponseClass::get_Count()
extern void WitResponseClass_get_Count_m04014274AF6AFFDB69D92A954D5666387C67A8F1 (void);
// 0x00000215 System.Void Meta.WitAi.Json.WitResponseClass::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_Add_m6561A55FFA76C268F5261E171853D5AB24FCBFB4 (void);
// 0x00000216 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(System.String)
extern void WitResponseClass_Remove_m33C6F72D72F766ACF1081F8074C03F93409AE943 (void);
// 0x00000217 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(System.Int32)
extern void WitResponseClass_Remove_mE01845757C9328C5CE82EE0F80899EE2483B6D76 (void);
// 0x00000218 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass::Remove(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseClass_Remove_m9BACA15EB93394E290B3854D2966110EA189F5FE (void);
// 0x00000219 System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::get_Childs()
extern void WitResponseClass_get_Childs_mBF1BBBEFE5A4FB7B1D05B526034C9EC7372C1A27 (void);
// 0x0000021A System.Collections.IEnumerator Meta.WitAi.Json.WitResponseClass::GetEnumerator()
extern void WitResponseClass_GetEnumerator_m50FF38C23BACEA00930A2BE4E5789E20DDA5F3FB (void);
// 0x0000021B T Meta.WitAi.Json.WitResponseClass::GetChild(System.String,T)
// 0x0000021C System.String Meta.WitAi.Json.WitResponseClass::ToString()
extern void WitResponseClass_ToString_m88D914030920CBA87C43C06976D5FF9539718486 (void);
// 0x0000021D System.String Meta.WitAi.Json.WitResponseClass::ToString(System.String)
extern void WitResponseClass_ToString_m00C5C60A74D446F1FA202ABBEA9A9D754D4EDD8F (void);
// 0x0000021E System.Void Meta.WitAi.Json.WitResponseClass::Serialize(System.IO.BinaryWriter)
extern void WitResponseClass_Serialize_mBA795A5A5945066A8BE18B572B5D781FE932434D (void);
// 0x0000021F System.Void Meta.WitAi.Json.WitResponseClass::.ctor()
extern void WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47 (void);
// 0x00000220 System.Void Meta.WitAi.Json.WitResponseClass/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m70566E35212CD98AC59D425A2CF4832FEC0F9F94 (void);
// 0x00000221 System.Boolean Meta.WitAi.Json.WitResponseClass/<>c__DisplayClass15_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Meta.WitAi.Json.WitResponseNode>)
extern void U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_mAD41BE11BCE3E900BFC3DCF57DF0CDCEB67618BB (void);
// 0x00000222 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::.ctor(System.Int32)
extern void U3Cget_ChildsU3Ed__17__ctor_m12B9ABD0288987CD61E2BA7D036767AE1BF4D0BE (void);
// 0x00000223 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.IDisposable.Dispose()
extern void U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m251435C763D9BD1F83DA693B60652B15C0D6412B (void);
// 0x00000224 System.Boolean Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::MoveNext()
extern void U3Cget_ChildsU3Ed__17_MoveNext_m6EDCA79501326B1ABA3BAC7D4CA09CCC28CE5F58 (void);
// 0x00000225 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::<>m__Finally1()
extern void U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_m0CEC896D7B08ACC1EE2FD7E652B9E7F0C034A3CC (void);
// 0x00000226 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mB3A70175F3C17A89A9797E27574A99B95C0D7B6D (void);
// 0x00000227 System.Void Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.Reset()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mE1C1598BCB643AE91F487DFDC674CCB620D50099 (void);
// 0x00000228 System.Object Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerator.get_Current()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_mCD4D28D5213447AC15E46908877BDCBDFEF0FE41 (void);
// 0x00000229 System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mB45B52244BD5D55A8882EEDEEA2537D9CDF73038 (void);
// 0x0000022A System.Collections.IEnumerator Meta.WitAi.Json.WitResponseClass/<get_Childs>d__17::System.Collections.IEnumerable.GetEnumerator()
extern void U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mA94336900DAAE3CBBBB867857026C11EEDED92BC (void);
// 0x0000022B System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__18__ctor_m76216DA4E7DA7307BEAD2051640156E3FF114BAC (void);
// 0x0000022C System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4C26F7E170E59A2FFB51CC5EA1C9E4B3FAB74013 (void);
// 0x0000022D System.Boolean Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::MoveNext()
extern void U3CGetEnumeratorU3Ed__18_MoveNext_m924931A590B530D38EE346F596B85484107A43A2 (void);
// 0x0000022E System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::<>m__Finally1()
extern void U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_m8E677E16C3DA39A359DDD922234114FD8FE583CF (void);
// 0x0000022F System.Object Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2BDB5B90BCC1F22D345F711D64DD290BC239A7D (void);
// 0x00000230 System.Void Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m04F4FC789272FD7A8ABE9AD024086B4594C2594A (void);
// 0x00000231 System.Object Meta.WitAi.Json.WitResponseClass/<GetEnumerator>d__18::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m79C6A5ACEEAB2BB4A1DF627A2D8AF060A24B5BAE (void);
// 0x00000232 System.String Meta.WitAi.Json.WitResponseData::get_Value()
extern void WitResponseData_get_Value_m0975849486729B3D273D4E37707F857C5D6FFC02 (void);
// 0x00000233 System.Void Meta.WitAi.Json.WitResponseData::set_Value(System.String)
extern void WitResponseData_set_Value_m95872341BCA728770E707806BD3E27AC58B4F8A4 (void);
// 0x00000234 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.String)
extern void WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD (void);
// 0x00000235 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Single)
extern void WitResponseData__ctor_mF2E1CC4ECA3A729D104130CCB5CCB873C75F86C2 (void);
// 0x00000236 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Double)
extern void WitResponseData__ctor_mC9CE8379EAC42B7F85910B573447E05117CE2A81 (void);
// 0x00000237 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Boolean)
extern void WitResponseData__ctor_m61443D4A59044E96DC07C970FD2C03C7F9F7F782 (void);
// 0x00000238 System.Void Meta.WitAi.Json.WitResponseData::.ctor(System.Int32)
extern void WitResponseData__ctor_m0A2E4A8270DB755B5D7172F178890C323FB22290 (void);
// 0x00000239 System.String Meta.WitAi.Json.WitResponseData::ToString()
extern void WitResponseData_ToString_m7093EC5D51B180ECA77D88196C00FB4FCE9BE5D2 (void);
// 0x0000023A System.String Meta.WitAi.Json.WitResponseData::ToString(System.String)
extern void WitResponseData_ToString_m8E4076FBB7CE6838EA2F55F39E6740929581967E (void);
// 0x0000023B System.Void Meta.WitAi.Json.WitResponseData::Serialize(System.IO.BinaryWriter)
extern void WitResponseData_Serialize_m96CF5AC981F31FD000115E5BCE1CB79737369BA0 (void);
// 0x0000023C System.Void Meta.WitAi.Json.WitResponseLazyCreator::.ctor(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator__ctor_mDABB3CE3048D2FB3FC72597DF35ABD46824DC7B6 (void);
// 0x0000023D System.Void Meta.WitAi.Json.WitResponseLazyCreator::.ctor(Meta.WitAi.Json.WitResponseNode,System.String)
extern void WitResponseLazyCreator__ctor_m806225C5DE01971257BC07EEFBD8D5FCD2522175 (void);
// 0x0000023E System.Void Meta.WitAi.Json.WitResponseLazyCreator::Set(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Set_mE5ED8C6DDB40D47373E29A6F3CE3FD453FA21458 (void);
// 0x0000023F Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseLazyCreator::get_Item(System.Int32)
extern void WitResponseLazyCreator_get_Item_m10F2D23CB786080CCE534BAC1527D7AB606C71CB (void);
// 0x00000240 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_Item(System.Int32,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_set_Item_m79594FDE487845703B9B7F79323FC6310C11620D (void);
// 0x00000241 Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseLazyCreator::get_Item(System.String)
extern void WitResponseLazyCreator_get_Item_m0FFB198C00D3D5EC389B69C30AE09AF06586C631 (void);
// 0x00000242 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_Item(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_set_Item_m725459A2CE4DFABF6820B5363B6C436A0F84DE10 (void);
// 0x00000243 System.Void Meta.WitAi.Json.WitResponseLazyCreator::Add(Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Add_m9FF2438CD8A3F7C63F039757C9DC452AEB349D7B (void);
// 0x00000244 System.Void Meta.WitAi.Json.WitResponseLazyCreator::Add(System.String,Meta.WitAi.Json.WitResponseNode)
extern void WitResponseLazyCreator_Add_mCEF57F8B2B20499AA785B8368B76CA34057DCC37 (void);
// 0x00000245 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::op_Equality(Meta.WitAi.Json.WitResponseLazyCreator,System.Object)
extern void WitResponseLazyCreator_op_Equality_m33785B9091FDDFD763DC36859F395F6125DC484F (void);
// 0x00000246 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::op_Inequality(Meta.WitAi.Json.WitResponseLazyCreator,System.Object)
extern void WitResponseLazyCreator_op_Inequality_mE9C843DDFCFE39CBF1CA64595685E78EA4C2853D (void);
// 0x00000247 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::Equals(System.Object)
extern void WitResponseLazyCreator_Equals_m3F855190140F333CE7DE73AF8F7D0416C9565C2E (void);
// 0x00000248 System.Int32 Meta.WitAi.Json.WitResponseLazyCreator::GetHashCode()
extern void WitResponseLazyCreator_GetHashCode_m5BFA3A0F74348EB2EA8CBA562560EB7E59BDC14E (void);
// 0x00000249 System.String Meta.WitAi.Json.WitResponseLazyCreator::ToString()
extern void WitResponseLazyCreator_ToString_m50E84D2603E3FCA2E03780E40B4470B946EAB6A6 (void);
// 0x0000024A System.String Meta.WitAi.Json.WitResponseLazyCreator::ToString(System.String)
extern void WitResponseLazyCreator_ToString_mBA8C042FD615F473466BE9FF11DA64E1D32F6A54 (void);
// 0x0000024B System.Int32 Meta.WitAi.Json.WitResponseLazyCreator::get_AsInt()
extern void WitResponseLazyCreator_get_AsInt_m9832160B8EDDE9DA685242FF3E95CABCDF9CD292 (void);
// 0x0000024C System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsInt(System.Int32)
extern void WitResponseLazyCreator_set_AsInt_m4DADF35E8FF2BE8C29A1D500FF06EFDF0547562C (void);
// 0x0000024D System.Single Meta.WitAi.Json.WitResponseLazyCreator::get_AsFloat()
extern void WitResponseLazyCreator_get_AsFloat_m29FE6CE3C5010431FB4FE58D5BCC3231846F327D (void);
// 0x0000024E System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsFloat(System.Single)
extern void WitResponseLazyCreator_set_AsFloat_mA3DF95778AEED4EC889F60C5712E376B446AB86B (void);
// 0x0000024F System.Double Meta.WitAi.Json.WitResponseLazyCreator::get_AsDouble()
extern void WitResponseLazyCreator_get_AsDouble_m586C0C0F3E95273F6FEA3E6089B8004817EF0C4A (void);
// 0x00000250 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsDouble(System.Double)
extern void WitResponseLazyCreator_set_AsDouble_m60421A9649FE75462BD9ABA38670B256FB11BF93 (void);
// 0x00000251 System.Boolean Meta.WitAi.Json.WitResponseLazyCreator::get_AsBool()
extern void WitResponseLazyCreator_get_AsBool_m050753D7DD79B6E7A7CC22F47CD18D30CBF31274 (void);
// 0x00000252 System.Void Meta.WitAi.Json.WitResponseLazyCreator::set_AsBool(System.Boolean)
extern void WitResponseLazyCreator_set_AsBool_m302B40878819EE83ECEA42F6B38C9B39516A10EF (void);
// 0x00000253 Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseLazyCreator::get_AsArray()
extern void WitResponseLazyCreator_get_AsArray_m0E5FC1BCF1EF029788E36B6555CCDE23E202DDDA (void);
// 0x00000254 Meta.WitAi.Json.WitResponseClass Meta.WitAi.Json.WitResponseLazyCreator::get_AsObject()
extern void WitResponseLazyCreator_get_AsObject_m5ED9930AD5553B2C3682A44DC592AE0CD87F978B (void);
// 0x00000255 System.Void Meta.WitAi.Json.JSONParseException::.ctor(System.String)
extern void JSONParseException__ctor_mBFCD4AD2D31AB830D846E482EDBD04B6BE05F55B (void);
// 0x00000256 System.Boolean Meta.WitAi.Data.Info.WitEntityInfo::Equals(System.Object)
extern void WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212 (void);
// 0x00000257 System.Boolean Meta.WitAi.Data.Info.WitEntityInfo::Equals(Meta.WitAi.Data.Info.WitEntityInfo)
extern void WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889 (void);
// 0x00000258 System.Int32 Meta.WitAi.Data.Info.WitEntityInfo::GetHashCode()
extern void WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0 (void);
// 0x00000259 System.Void Meta.WitAi.Data.Info.WitEntityKeywordInfo::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
extern void WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7 (void);
// 0x0000025A System.Boolean Meta.WitAi.Data.Info.WitEntityKeywordInfo::Equals(System.Object)
extern void WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6 (void);
// 0x0000025B System.Boolean Meta.WitAi.Data.Info.WitEntityKeywordInfo::Equals(Meta.WitAi.Data.Info.WitEntityKeywordInfo)
extern void WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8 (void);
// 0x0000025C System.Int32 Meta.WitAi.Data.Info.WitEntityKeywordInfo::GetHashCode()
extern void WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427 (void);
// 0x0000025D System.Void Meta.WitAi.Data.Info.WitTraitInfo::.ctor()
extern void WitTraitInfo__ctor_m55F786DE2C051C2BC4320576E0D96316417F62CA (void);
static Il2CppMethodPointer s_methodPointers[605] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NLPRequestResponseEvent__ctor_m5DAADB236F720F195FFABA26B94C8E97FE8CCA48,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TranscriptionRequestEvent__ctor_m79205A4049FAC31DE5F80B8115C267A27B7586DE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ComponentExtensions_IsObsolete_m26BAC93041AFBA2F1DD54E5319DEDCA9E85C8BD2,
	NULL,
	ComponentExtensions__cctor_m1F09EA8F3952DCDFE95586D0647EF99C5625F26E,
	CoroutineUtility_StartCoroutine_m5680A02AF835BAFFC3A54F57446E7594EEB832B8,
	CoroutineUtility_GetPerformer_mA455E68F266B8A2DB7BDD6BDA7ACCA29E7F22C67,
	CoroutinePerformer_get_IsRunning_m19E6CECFFAC5B06651F463FEF2C63C5394FFE227,
	CoroutinePerformer_set_IsRunning_m897C40657C00115C43D53CBEF4C3143B9A9B23A1,
	CoroutinePerformer_Awake_m903BD197AF349AA78E509053AC670749F15E4E64,
	CoroutinePerformer_CoroutineBegin_m168F0759DFBF0128EE9C1BB3855D5EE5C12E2F32,
	CoroutinePerformer_CoroutineIterateEnumerator_m110D9685700AD6EA9D7FD07C9D87CFF46F6772D0,
	CoroutinePerformer_Update_mF318B1FD0CA4DF28A2AE2F05A3D78461EDE43B5F,
	CoroutinePerformer_CoroutineIterateUpdate_m6E65F4FACA2E969CC66A5FF3BC6A7FADC5C1F944,
	CoroutinePerformer_MoveNext_m79ADEA3A1DFA04FCB54C5812BD0BF230052C4A49,
	CoroutinePerformer_OnDestroy_m51550C2552E781808BB4A6ED7CC3D5C241B248B7,
	CoroutinePerformer_CoroutineCancel_m51E365ADABD833BDC0ED8020BF6400F3D87A3E14,
	CoroutinePerformer_CoroutineComplete_mAD804B2B7CCCF5FD9B27548D3AE9A03DC6589E12,
	CoroutinePerformer_CoroutineUnload_mB36A94A478413E587602AEF7801242E27CC57041,
	CoroutinePerformer__ctor_m38757CB7375B7289938A5B9381AEB2321E4794E9,
	U3CCoroutineIterateEnumeratorU3Ed__9__ctor_m004DE712531EB1CC04344B1CF1FC4D087B69560F,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_IDisposable_Dispose_mADE839050C9C4523150F56B0A6D34D437A44BA21,
	U3CCoroutineIterateEnumeratorU3Ed__9_MoveNext_m4389ECBDACF6356F0675DDC17FBBF3ACA9BE2BE6,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFEED8F504F0EB8227AB65BC8FA0D346D86CA6B2,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_Reset_mF0CD85E8E99747845372CCE5C8A0399A09401B10,
	U3CCoroutineIterateEnumeratorU3Ed__9_System_Collections_IEnumerator_get_Current_m32F9100BB3E02E28735715AB1CA4C656A43E8C84,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnityObjectExtensions_DestroySafely_mDAF3E679953C30C8D918FF456CD8C896C4B530D6,
	VLog_add_OnPreLog_m80E921053B5B27C2C94B805E2102598E6D702A94,
	VLog_remove_OnPreLog_m4D59F8243A80F8F713C89C481C133C79864647C6,
	VLog_D_mB02A9F04675FF3F84DC071AC2427B6933782AD37,
	VLog_D_m133AFAEBCDE1687214E2E4C38905D6690105F9E4,
	VLog_W_m7943297ED32FD0E92544C324E6793089056A2344,
	VLog_W_m97F796A4C02E724416AFDB19E1B91C1C9F284575,
	VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1,
	VLog_E_m407BD08603D66FB6F1173E8E2F172395E461334C,
	VLog_Log_m77583BC27FFECD24FBCD8BCCC77D29253E1C5DA6,
	VLog_GetCallingCategory_mD8F04E537A19B1E7E38B26B71869A5523567F3AE,
	VLog_WrapWithCallingLink_mB3F632BBAF9E033A864DCB1A04E19A3D0091DB67,
	VLog_WrapWithLogColor_m099596C358459A020271465417A1CDA6CB0B6FB5,
	AudioStreamHandler_get_StreamData_m05385F86B841B86A5E710F2D6E2E6FE666CF10C1,
	AudioStreamHandler_set_StreamData_m4ECEF787242E960E19BE9B8FB0FB9AB35674C00E,
	AudioStreamHandler_get_Clip_m7F2C3806F9004F76D39C437B8CA05B20D151EDF1,
	AudioStreamHandler_set_Clip_m90270DBCFE048A54EF84F1E52E20AAF37841B61A,
	AudioStreamHandler_get_IsStreamReady_mFD9B02008ABEB7BF1837157D604F45FFAA127AA8,
	AudioStreamHandler_set_IsStreamReady_m350DCAE21E48AE68DF27BCB8DDFE86F813DAE095,
	AudioStreamHandler_get_IsStreamComplete_m1A099C37024126D10D8094BC3E36DA58C627B086,
	AudioStreamHandler_set_IsStreamComplete_mF41DBBC75E16C58EE528B4ACE8BFBA9B91CD922D,
	AudioStreamHandler_add_OnClipUpdated_m143393B1CB794DA46FB371C631CD3CD508138295,
	AudioStreamHandler_remove_OnClipUpdated_m88648D019D1BE2CAA9A240B45DDEB7D344860E83,
	AudioStreamHandler_add_OnStreamComplete_m8A87A91B4F52D7960094A2BC4D041D25F567EB52,
	AudioStreamHandler_remove_OnStreamComplete_m447A451DE23A272F9B169CCA703170982C68DF88,
	AudioStreamHandler__ctor_mE168DB64DBD98947866A9A33496C1435C8427BA5,
	AudioStreamHandler_ReceiveContentLengthHeader_m7E8E3C8E3FAC43D6E4406911BE5A3BB43379FBE2,
	AudioStreamHandler_ReceiveData_mA88E9D02BBCDDBB4228BD7A80218D507D01B2F66,
	AudioStreamHandler_DecodeData_mE0DE760485C5464BD53DDC7DB6FEC0575D874499,
	AudioStreamHandler_OnDecodeComplete_mDD5A5DFDACAFADB45BEE75698B22DFF478A081EC,
	AudioStreamHandler_CompleteContent_mCDF44FC48EBAFF5CAD189271196AF3556658425F,
	AudioStreamHandler_TryToFinalize_m426998AB8F44729E43EBEE0E8059F95FEB8977A4,
	AudioStreamHandler_CleanUp_m7A0E7E65A342223E16CD572779EADE88CE6D0D6D,
	AudioStreamHandler_GenerateClip_mEC4697B4B1F3BC7AD35A03895ED5F99B470C3812,
	AudioStreamHandler_PreloadCachedClips_mC82A9B5E6767864297D16AEBE419434E875FAD20,
	AudioStreamHandler_GenerateCacheClip_m8D516FC6879FDB56C33AF5CD0E5FCB23D8AA54DC,
	AudioStreamHandler_GetCachedClip_mFF39CF53A3D02BED7D6211BE1DE9CE2D5FF0B1BD,
	AudioStreamHandler_DoesClipMatch_m7FCC92DB8A9F26799F5D265EC4BD8823AA0DCF9B,
	AudioStreamHandler_ReuseCachedClip_mCDD13473F6FF3589AB98CD159F0CC57905BB531C,
	AudioStreamHandler_DestroyCachedClips_m0BC852D7B875A777554806B8AA457B9350D88416,
	AudioStreamHandler_DecodeAudio_m78E6D76FA8D0074AEA6B9266A9053D7CDE4F6D30,
	AudioStreamHandler_GetClipFromSamples_mFA847D55EF9748483934ADD7EF21D4A8029FDF52,
	AudioStreamHandler_GetClipFromRawData_m80DFC1732549EB09976AE4A41A63A2DFADD570E6,
	AudioStreamHandler_GetClipFromRawDataAsync_m6C955016B5EEA39C26AC306D304560CB5FFADE02,
	AudioStreamHandler_GetClipSamplesFromContentLength_m7445B7D3AE38A51D13D15F18731F05D36B2F568E,
	AudioStreamHandler_DecodePCM16_m67FF34FCB9CDE419980655ABA7D0B8ADCFDA5AC8,
	AudioStreamHandler_DecodeChunkPCM16_m0DE6943F08024AE02A2B172165C588A0C5B94662,
	AudioStreamHandler_DecodeSamplePCM16_m018E1DD0D23AE3FD0941C5CD13DC8A187136A5DF,
	AudioStreamHandler__cctor_m2124F5CFC75BFBE27C16ECADCE2F57A269578CDC,
	AudioStreamClipUpdateDelegate__ctor_mCAF0B7B4216B64E773E2F2319ADD3E7445AF49C0,
	AudioStreamClipUpdateDelegate_Invoke_mC5F99F715850F4CE72022F6F480E3A9B40C220A0,
	AudioStreamClipUpdateDelegate_BeginInvoke_m27D53D5E8520A79DD3A89D2285B5AB37F666493C,
	AudioStreamClipUpdateDelegate_EndInvoke_m1A071E8721A9BFA52DCFD969541E47961524AF1D,
	U3CU3Ec__DisplayClass31_0__ctor_mA519FDA0BD2D0A3532B40A8AA890779185D841F8,
	U3CU3Ec__DisplayClass31_0_U3CReceiveDataU3Eb__0_mBC238CF4CEEB07C14D076BF437E5D7F5E9F8313F,
	U3CU3Ec__DisplayClass42_0__ctor_m1085269BE6D8FF10922862C28286A9B343C569A0,
	U3CU3Ec__DisplayClass42_0_U3CGetCachedClipU3Eb__0_mDD5AFEACE53608C52E493A5592C068D5F3442008,
	U3CU3Ec__DisplayClass49_0__ctor_mA8609047733E7CC3AD4447E5FCBF8B5B635C60AC,
	U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__0_m698DABC12D8D7458F585763793AC5D9C5C44D59C,
	U3CU3Ec__DisplayClass49_0_U3CGetClipFromRawDataAsyncU3Eb__1_m4AB461D4F65740DEFA987E9630655207EAA13796,
	NULL,
	NULL,
	VRequest_get_Timeout_m0C2A0B6850A5377DF0439A1BE30E3FCD98FCD225,
	VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B,
	VRequest_get_IsPerforming_mB8C0D61A2D99A3CE2D4CF74C89D82827BD239393,
	VRequest_set_IsPerforming_m8A46B5029B49226F342D87B99C5818AFA83E2137,
	VRequest_get_IsComplete_m81474D77CDD9BDFEDDF752B12A81D0794FB1BE0C,
	VRequest_set_IsComplete_mC5583B96C76FD15B52AE82B4D055B26783B9B9B1,
	VRequest_get_UploadProgress_m571C4B1E0791B34CE19F3462639D4E60973B441A,
	VRequest_set_UploadProgress_m5AB82D06DF9B536B91AFFA6CC51450FC850EB633,
	VRequest_get_DownloadProgress_mD1CEE1319E3DDD8138561CC86A419B1EEFF5409E,
	VRequest_set_DownloadProgress_mB370255DF8D2CFE146898455AEB0F3007BF35427,
	VRequest_Request_m684F5A0DF9F66FAC7A2B53EDE5E7D11634014893,
	VRequest_CleanUrl_m5876C13024534312528195DB22E81CD8C06D7430,
	VRequest_GetHeaders_m5DE012C50EDAA025BCE7EB3839E3147642D055A0,
	VRequest_PerformUpdate_mAC5A928ACD1D56ECF2FB316E604A6A0381927567,
	VRequest_Begin_m3863AA40526B8AD5F9222AEBE286772BF2833075,
	VRequest_Complete_mAD054B7711A37664EB212EF1DAA32CDAA09E3287,
	VRequest_Cancel_mC26F1718B30082B2F939CE3898AF4481F897FDB2,
	VRequest_Unload_mC59B7F890F95E41EA11D4165DF259F5CF2AF54EA,
	VRequest_RequestFileHeaders_m11ECE714308E5E494427593E2C70E18217114844,
	VRequest_RequestFile_m1E29DDF0B87DC09A7DBA6C27A08554CB643A4A07,
	VRequest_RequestFileDownload_m2E5FBE78A57283210AF091B14F5756B3CECE1B70,
	VRequest_RequestFileExists_m10362277B1273A6C217E9BABAC916476D0E24778,
	VRequest_RequestText_mF65A05F3294E36C3C5C058144580DD657D21B272,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VRequest_RequestAudioClip_m8D2299F0F18BC226DC287AF76757C49547215829,
	VRequest_OnRequestAudioReady_mFD68ECD1F5308036FB95812C9D3F73363DED0AC5,
	VRequest_OnRequestAudioDecoded_mE16892BDF6B65B4D538F45BDAADA0B190EC3DFE4,
	VRequest_RequestAudioClip_mE90CE218A5131281B90E806FAD91E8E84DBB409E,
	VRequest__ctor_m2CBEC55394F069C557B77F74AEC80508F65C8537,
	VRequest__cctor_m3A9D35BF41950AE968FB9F11758C217790220A3E,
	RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F,
	RequestProgressDelegate_Invoke_m26170A39DD5E2DBC99E324679C632FDE0AFEE46C,
	RequestProgressDelegate_BeginInvoke_m384DB7AB3E11756EFC97B3AB16D850BC3D5BCE97,
	RequestProgressDelegate_EndInvoke_m1041D2E110074E4C4B527C17CFC53D015A0FB882,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CPerformUpdateU3Ed__32__ctor_mBBF525C6F16663B29BF54C32FDB549B2982E17A9,
	U3CPerformUpdateU3Ed__32_System_IDisposable_Dispose_mD782800651EA3D7AF15348B520436F61805B9A18,
	U3CPerformUpdateU3Ed__32_MoveNext_m471B722230519F1B169A55F918713541E85FE0D4,
	U3CPerformUpdateU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8180BC9837D582693C1864B2265A4764E10BF50A,
	U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_Reset_m28D6BF2A97244A1AB462A72AE5F1B5CBF8E495B5,
	U3CPerformUpdateU3Ed__32_System_Collections_IEnumerator_get_Current_m5237D31D7F31322F33DB11053D28BA8E9B27FCA3,
	U3CU3Ec__DisplayClass37_0__ctor_m5DC2A46CC2F56CE5B8042FC75D93881997454372,
	U3CU3Ec__DisplayClass37_0_U3CRequestFileHeadersU3Eb__0_mE0D79C99919D114ED5AC0308FA957B0D51E63376,
	U3CU3Ec__DisplayClass38_0__ctor_m7647427FD3ECAE4E1A37838AB286E88CEEE44479,
	U3CU3Ec__DisplayClass38_0_U3CRequestFileU3Eb__0_m7C8346831B6D739264BD34F119BF8C2E6AA7A015,
	U3CU3Ec__DisplayClass39_0__ctor_m55BB22935245E4527D3FCAD0227E0F7FF09347FD,
	U3CU3Ec__DisplayClass39_0_U3CRequestFileDownloadU3Eb__0_m2D39E665274A99737B869FCD15DD5FEF4F98CBD7,
	U3CU3Ec__DisplayClass40_0__ctor_m2840E881AD97DFDA0A7BD75190F2848F6B373FF8,
	U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__0_m82D9C0EED34B3078BD16F949354DDA13AAF7DCC4,
	U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__1_mD1CE38D7554CC03858CC21F2DFDB938B6769D26D,
	U3CU3Ec__DisplayClass40_0_U3CRequestFileExistsU3Eb__2_m7D3BFEADF197218B7DFCA3DF53C0176FB287C9B1,
	U3CU3Ec__DisplayClass41_0__ctor_m5B8B14FF033935A447335DC31FC78106313B5341,
	U3CU3Ec__DisplayClass41_0_U3CRequestTextU3Eb__0_m52AAB2953E13B6F702354FB74C64AC395269D542,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass48_0__ctor_m5AADCC155C32A110B95DE9CFCA3D6B8CB7FA1EED,
	U3CU3Ec__DisplayClass48_0_U3CRequestAudioClipU3Eb__0_m9660C2D99869A526F73944B64FB2C3AEAAAB4B12,
	U3CU3Ec__DisplayClass49_0__ctor_m3A082C4F50DDE27AC5F409D2CAE40F3989575CE1,
	U3CU3Ec__DisplayClass49_0_U3COnRequestAudioReadyU3Eb__0_m8F289F1CC7FC693977CD542DE95D5CF5F54AA9E5,
	WitMessageVRequest__ctor_mE31024BCE3DA5F193F91DF6AE16A50E8113D4382,
	WitMessageVRequest_MessageRequest_m7F7D4E1340FA9B343627F56242862CFC9395A068,
	WitMessageVRequest_MessageRequest_m18D702CFCCDE7A9BEA7D8690A93C6B6EB6ABDC2D,
	WitTTSVRequest__ctor_mE43EC29E3525BEC8516493C873894135017E6FB6,
	WitTTSVRequest_GetAudioType_m55FCFCDF7B7FB48A1661C1375845584DFA5979D0,
	WitTTSVRequest_GetAudioMimeType_mEA589192C732C34AD57FECB98139F0EB2433EC70,
	WitTTSVRequest_GetAudioExtension_m77E5F80D01DED8DFB6DAC4FDFC3BA903DCB43394,
	WitTTSVRequest_GetAudioExtension_mBFA12281092A7EDA6DF95EB3A9AE0F07A8B2E67A,
	WitTTSVRequest_CanStreamAudio_m108E5F1006098AE1AAC20BEF8208D5646B2FD129,
	WitTTSVRequest_RequestStream_m4FE7B27FB6865D054213BEB93BCCB03E81424197,
	WitTTSVRequest_RequestDownload_mED222F34102243380708B51316C3D467923B0047,
	WitTTSVRequest_EncodePostBytesAsync_m3B6D887932B4E8BBFFF2C3B891309F8DC0771EB6,
	WitTTSVRequest_EncodePostData_m60D2943144682CCAB3E04C9FA4B8043EED960C6F,
	WitTTSVRequest_GetUnityRequest_m6154E4AF121B5AED7D4CBBB5FE05CD535CB432D3,
	U3CU3Ec__DisplayClass6_0__ctor_m2287D31323E8FB9CBD54028E63284C307665387D,
	U3CU3Ec__DisplayClass6_0_U3CRequestStreamU3Eb__0_m8F72993CEB7B103C5D2E2760DCBBFB3D9B417C25,
	U3CU3Ec__DisplayClass7_0__ctor_m52DD1AF6498BD99C734D50922D31208A471E75D4,
	U3CU3Ec__DisplayClass7_0_U3CRequestDownloadU3Eb__0_mFCF8D72BDC72C5E131778A578424A9EC0E09C275,
	U3CU3Ec__DisplayClass8_0__ctor_m736EDEB82BEE3A1D554689CFDFE1BF2B4086E79F,
	U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__0_m0EB175DCD4B99CC03DF3662E97E5C1F1C6FB94D5,
	U3CU3Ec__DisplayClass8_0_U3CEncodePostBytesAsyncU3Eb__1_m24F5EB845F29BA8C4BCE302ACCB4B8631B9B12A7,
	WitVRequest_add_OnProvideCustomUri_m7062C8D682C2A1E1E69B2DA8A7D237632BE97D38,
	WitVRequest_remove_OnProvideCustomUri_m6F4F92E9BC3CC9D48FCE1B847A9DA02ED88F7341,
	WitVRequest_add_OnProvideCustomHeaders_mA252E19E936B0DFDE47D63DF259CD44363AF86A4,
	WitVRequest_remove_OnProvideCustomHeaders_mC7531AEA066356C3FB022E2FBE6431856E57FFB2,
	WitVRequest_add_OnProvideCustomUserAgent_m0ADDFB64122A96484E3714F6C73F60B9E120175F,
	WitVRequest_remove_OnProvideCustomUserAgent_m226B1C965F1A3279806A45939F7C92091271553B,
	WitVRequest_get_RequestId_m806FACDF98460F4D0F759421BF47AF325725B6B9,
	WitVRequest_set_RequestId_mE52FF96D3BE05BB2865B7D380AAC1560EBD0A720,
	WitVRequest_get_Configuration_m249A5C4BF1B892702955A74A30BBFA082E5F124F,
	WitVRequest_set_Configuration_mD1B49FF89AD9A4539458E07E1525AAE293A0DCFB,
	WitVRequest__ctor_m5EFDD8AC3EF1EA694C79962446FF75ED26C08A17,
	WitVRequest_GetUri_m2B02986E00CD6AB6903AA77A2418494D1494B468,
	WitVRequest_GetHeaders_m9E469964828B68DB649BE59D9E53A3C06E68DE05,
	WitVRequest_Request_mA56EBEE3E3EB8F4C8D0C29B1CE5C60C4289FEB65,
	NULL,
	NULL,
	NULL,
	WitVRequest_GetWitUri_m2AAB406E20FA195917B5754ACFDCA1EDD7364622,
	WitVRequest_GetWitHeaders_m6AF2ECF4CB9C7B56C98CA3047CDA5A221D56FFF2,
	WitVRequest_GetAuthorizationHeader_m1E4D1D86D4B3E55CB44909166197B1C2A7F68E74,
	WitVRequest_GetUserAgentHeader_m58439F7735F03A0F871AE4F6B626817814735464,
	ColorConverter_get_CanRead_m6BA7E1A33F289174197CDC9472504788516030AC,
	ColorConverter_get_CanWrite_m2882801C1832AA3433F8862734DFDB2D11F0A8CA,
	ColorConverter_CanConvert_mF6A94F71611BBCF9ADDCB1D5B7996CD1EF1BE1F8,
	ColorConverter_ReadJson_m56167EE71B1F42659EAA4BAED37155C59EA764E5,
	ColorConverter_WriteJson_m04D2BEB8964E516512AD8205C500D00DB638ADD0,
	ColorConverter__ctor_m806E5A48DA7D9E1508D2CC8230CB169A38943731,
	DateTimeConverter_get_CanRead_m9E90F893D1E98AD77631006DF2338944A1C03670,
	DateTimeConverter_get_CanWrite_mBB56A0BF211282AE3DB9BBD34C199BE213982861,
	DateTimeConverter_CanConvert_m4C07AB765E9C480554C43C75DB48BA41AB36D742,
	DateTimeConverter_ReadJson_mD8AFB276D86DDAA360E639895AAB31207823489E,
	DateTimeConverter_WriteJson_m5C0BAB79CADD5E5F832057C4E6A9787B86B6622F,
	DateTimeConverter__ctor_m2EFD9B80003DA80056F01787FB0F697F141DABDD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonConvert_get_DefaultConverters_m7B0032C6B68BCA96DED146985811DA84A4AFF216,
	JsonConvert_EnsureExists_m34B862CAA75A4DC8A0E4863A154F99483E6ADA9E,
	JsonConvert_DeserializeToken_m1B7AF67114FB4FFEC5BFCADBB6820DBE3D7F8666,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonConvert_DeserializeToken_mB12EA997DD32B3ACE6656B65A0287DDEE4204C4D,
	JsonConvert_DeserializeEnum_m2D6D337E8500810C18824336374A420FFFE8A558,
	NULL,
	JsonConvert_DeserializeClass_m24309A50B11D8C4FE0BA0C29E07B885C8F2D250D,
	JsonConvert_DeserializeDictionary_mA7E4F44E2ACDAA268D06F84E1DC102C0E55FF3D6,
	NULL,
	NULL,
	JsonConvert_SerializeToken_m499F2E95B66CA5D5A475E39F246FDF7B38F76E2C,
	JsonConvert_SerializeProperty_m3ABE204F19E486C086047C7BF81F57CF83DAEA75,
	JsonConvert__cctor_m6D4C1F52D3F436CC44218A44E41B9B8C90180487,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__cctor_m18BB15DA8C7F86F1036DF10049A047FF13949A78,
	U3CU3Ec__ctor_mEF36652F13BCFC1EC3AE5783EE338870E2F79AE9,
	U3CU3Ec_U3CDeserializeEnumU3Eb__14_0_m60DF2C4DC62E88858ABC926EAE01C06A425115C9,
	U3CU3Ec_U3CDeserializeClassU3Eb__16_0_mCE6A239BE0087BE70D131DE1473A3DC22FF63A4E,
	U3CU3Ec_U3CDeserializeClassU3Eb__16_1_mB6DAB0BC584FA4777AC92B2DFF8056CF69BA3FA6,
	JsonConverter_get_CanRead_m0D0337361BBA3C6ABA3D3F1A3199347F433F6781,
	JsonConverter_get_CanWrite_m5232AD00808BC3A406EFEFA603473DFE82A1AC72,
	NULL,
	JsonConverter_ReadJson_m8F6B56995D06D9A0C05364EE37537BFD3453991F,
	JsonConverter_WriteJson_mDE8DB3BAD12B58DC79FC6EEDBDA2C470E2BF485E,
	JsonConverter__ctor_mC9121064B1F93F5E907EDF233D40EC0CBC302B25,
	JsonIgnoreAttribute__ctor_mA5292D2E1AF12AEA492F815FD06A1BB21496F805,
	JsonPropertyAttribute_get_PropertyName_mEF2DC572AB5568F23749E61FF62E92A5748A0121,
	JsonPropertyAttribute_set_PropertyName_mB079F70AD0296B76D4B8395B43DDC8F2CEDAFDBA,
	JsonPropertyAttribute_get_DefaultValue_mD78E689C9EC517AFCA4E0F8E606062824E075FDA,
	JsonPropertyAttribute_set_DefaultValue_m51A3B98B7F4DB29DF9E1EAD8DAE8FEE346E2DF7E,
	JsonPropertyAttribute__ctor_m4F66BBBF83BC759671E7923AA3E780DAA4E7E94F,
	JsonPropertyAttribute__ctor_m46B867941D1D018F5A4EEA7F14F259B229753B83,
	WitResponseJson_Parse_mE417A7A09EAD7189E912086EF8DEE9DFE4A6567B,
	WitResponseNode_Add_m29D8906DA4C698B7D80F1F86DB1CE904C4B6D030,
	WitResponseNode_get_Item_mEB5205FD8A42FA9B270F1B9B96937CBF8EE184B2,
	WitResponseNode_set_Item_mECAC385EB82F5273D6B28B187693E96110155548,
	WitResponseNode_get_Item_m5BF8C3A148006635AB42BB486B08FAA1C26575BF,
	WitResponseNode_set_Item_m0C3DDE61566EAD1E55DFF684A034A8A49DD542DD,
	WitResponseNode_get_Value_m40A3D728DC3D7129DB7A3152B691836F67CDCC78,
	WitResponseNode_set_Value_m580C71D577A96A750E21671793B6ED44A66716CA,
	WitResponseNode_get_Count_mA9EBE5B8F8170D7ED335A273E9C50A4F7B91EDFE,
	WitResponseNode_Add_mB8A4565AFD7F3697C8599E96DA4C00B2B372C20D,
	WitResponseNode_Remove_mF641E5E61801FAB44770E3A473CB94F2D207A15C,
	WitResponseNode_Remove_mA5DA9B1052B0FB5E5615A05DB1747ADAD78C0FB3,
	WitResponseNode_Remove_m12C1A50193247D3EBD2E8B33710DA2DD9842FE30,
	WitResponseNode_get_Childs_m717121EAB7095B6F617F93ADD6872A92674707AA,
	WitResponseNode_get_DeepChilds_m3C8A1D680D6D2D65025EDBD017E695EBA09FAFF5,
	WitResponseNode_ToString_m3D445D2CF30C85801A49605C4C6A5C1712F793B4,
	WitResponseNode_ToString_m66D87595107D7F314691209D8B44F1203279F05C,
	WitResponseNode_get_AsInt_m024AA9F3EC47061E2381DFBCEBC26371C451B5CF,
	WitResponseNode_set_AsInt_m33831C323A76432BEABE58F8E35CEA90F5445735,
	WitResponseNode_get_AsFloat_m927097B265B30F942C3A6857847665FE235787B9,
	WitResponseNode_set_AsFloat_mF8F2BC7C194229DFB33094BCBCF9A197F6C6C588,
	WitResponseNode_get_AsDouble_mE345478726534C4A90DB6A112C31A750791E88EC,
	WitResponseNode_set_AsDouble_m752E687B6F5B140AB053C4FBAB0DCB27C89676D6,
	WitResponseNode_get_AsBool_m6DC15B28EDFB12DBDB8FF8E30B51DC7A6AAC5F28,
	WitResponseNode_set_AsBool_m0DD7E58848900E2EEDD53A49D0681B089913CF39,
	WitResponseNode_get_AsArray_m784676147F5A1FCE06852FA64F7734238B336CEF,
	WitResponseNode_get_AsStringArray_m1929B213720A7A709E34179350673BE6C4F98472,
	WitResponseNode_get_AsObject_m75B873A53748CE15CDD14FE1C68EAE8586D752C9,
	NULL,
	WitResponseNode_op_Implicit_mB8EA8AF87370B2ED8C8D42BD96FFCF7734294FAC,
	WitResponseNode_op_Implicit_m7AC5695C8699C246F516A32BB3654EED5A6D8911,
	WitResponseNode_op_Equality_m556CA10A38D4323CB11BF6BD64A0A22FA5055366,
	WitResponseNode_op_Inequality_mB890519AF1C832EC1EEB1644A5B0E1D0F4C324F9,
	WitResponseNode_Equals_mFF70A626804C0712E4D98F3937EF5E3CC69B32A8,
	WitResponseNode_GetHashCode_mAC54EE6F975835618C3E065D237A5D106CFAAC41,
	WitResponseNode_Escape_m03F6DE13A95DD1A8C2B25E414A12A22FC14A1B4B,
	WitResponseNode_Parse_m7FC8CFF3EFB9D3B0F1BD5F6F0757035F86252542,
	WitResponseNode_Serialize_m230A781CE376919326F281846377306B8057A875,
	WitResponseNode_SaveToStream_m6C31F731D7150456EEB45235903258F26837C0D9,
	WitResponseNode_SaveToCompressedStream_m86FA6AEB787FB004374E62C0127DFF0A0F611C3E,
	WitResponseNode_SaveToCompressedFile_m7B619C8603B7F32454D68231DC19B618E6C0BEFB,
	WitResponseNode_SaveToCompressedBase64_m773829A70940A5D40CA31E08EB826FDA126890FA,
	WitResponseNode_SaveToFile_m77E5FD343DAF070D7FF77345FB81C73497F704B8,
	WitResponseNode_SaveToBase64_mE3EB208A8BDF11697043FBA4849F29DB2A3526D8,
	WitResponseNode_Deserialize_m138FA55DE68097AD00A894664114EB24A80E9CE0,
	WitResponseNode_LoadFromCompressedFile_mCA796D8F6202FE12C5F1290BAF702BC312AEDC4E,
	WitResponseNode_LoadFromCompressedStream_m2320AA646A68CC5EE0757B20EB328EA31DFB83C8,
	WitResponseNode_LoadFromCompressedBase64_m549D1E7330369806CE3E33DC840A11D633D4DB22,
	WitResponseNode_LoadFromStream_m13BB986ADE0374D27FD1629B1B90D72E23C10C6A,
	WitResponseNode_LoadFromFile_m4CC0694987F0E8F7C86FC979466A248D5E18B32E,
	WitResponseNode_LoadFromBase64_mBE7314EAE256D8CB3AD615BD03649410041AA556,
	WitResponseNode__ctor_mC4FB7662DDD3350001A2B6B50931748A05953B7B,
	U3Cget_ChildsU3Ed__17__ctor_m7A92E3693E17CE7E6D1E5692F8C4959A9A711C2A,
	U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m6DDF83606276C09F26793524996CFCB0A7D9897C,
	U3Cget_ChildsU3Ed__17_MoveNext_m5516806BD78EDD680ED67BD5D9CBF1B8FCDA79B4,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m826F96A6640F68D994863FA335F1AB2719B4A9E8,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mC9F5BF2729285825E48FFD4D56AB280FF9AE20C0,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_m9684938739FB25877D5A1B6376ACFF90702617AE,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m638574D9566D546CE1FA8156C49E622271A69E04,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_m55CF60E5AAC2740B8806D8798993F4307585B275,
	U3Cget_DeepChildsU3Ed__19__ctor_m1ECA6AF267714944E0D88CC844C3024481B0C6F9,
	U3Cget_DeepChildsU3Ed__19_System_IDisposable_Dispose_m057C39F716CCFCB6EC09EB570622F3283AFC99A6,
	U3Cget_DeepChildsU3Ed__19_MoveNext_mD05A17730B6D957244157C241083B484C0DDDE01,
	U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally1_m34EAF3C3EC3B5B50FBF66D3443C53572CAE2AFC9,
	U3Cget_DeepChildsU3Ed__19_U3CU3Em__Finally2_m734B4CEBA5FDA07D95296334838EF75AC796F34E,
	U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_m82AA5AA38BCD89F425BFF1EA4553BFADFED80E61,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_Reset_mFA4A0BF498C57BA45D789E929AFC71BF61DAC90B,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerator_get_Current_m7A12CA35475E08BE8DC3ABB2DA8E7F4CC1E6E13F,
	U3Cget_DeepChildsU3Ed__19_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m974C9CD69CAC6CC231D47EF095087FB6AE3A3657,
	U3Cget_DeepChildsU3Ed__19_System_Collections_IEnumerable_GetEnumerator_mE964ED7F36A034A941050E850DB5B296CCB36389,
	WitResponseArray_get_Item_m927FFFE46DFDC0803F897C7396D30221080C61A7,
	WitResponseArray_set_Item_m27C3BAB5EA3B1BB4FEDCE88FA6873663982991BB,
	WitResponseArray_get_Item_m7B53C8F8BD9A22A65F68218727330CFC8F3AF58D,
	WitResponseArray_set_Item_mCDBFCE84ADABB704F25DBBF960E27DCA38294465,
	WitResponseArray_get_Count_m3C0846E5646C8FDDBBCCEF276B524D13AAB658DA,
	WitResponseArray_Add_mDC72A2B60BF5E3C870CBD364F9E10FD0B46BF5D8,
	WitResponseArray_Remove_m9D56D4CF28E1912CE311E2BF41042219C2869CF4,
	WitResponseArray_Remove_mF9D743830FBFE9B3722661915ABB3E6013C9D69A,
	WitResponseArray_get_Childs_m574A7FD2693EA36AFFD83098FEF5A8302C04272D,
	WitResponseArray_GetEnumerator_mE3D7CAB439F65B7778D55123748DFC6C515D6026,
	WitResponseArray_ToString_mDA58401450439B53B96BCA568DEEA801743A22AD,
	WitResponseArray_ToString_m9E2A94668564EF25411A7BD98961CD4E4B05F6A1,
	WitResponseArray_Serialize_mD50F05A3ADB0F34EA23332AA32FC54254AEF5589,
	WitResponseArray__ctor_m721A235EE997F78DFEBD437510486DE59A685F55,
	U3Cget_ChildsU3Ed__13__ctor_m429A0436140CAAC11D1FEC5AE457F973E5CBCE81,
	U3Cget_ChildsU3Ed__13_System_IDisposable_Dispose_m77150F5238147EF1A1123553B144D32384FDF041,
	U3Cget_ChildsU3Ed__13_MoveNext_mED66E2F0C7AC042B0DDA325CE0A625CCE9F84629,
	U3Cget_ChildsU3Ed__13_U3CU3Em__Finally1_mC36DE4425B467C1530E7B63FAFF3953BCB0F5A4A,
	U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mCCA6C7443157D72D027788498250E4190F7588BB,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_Reset_m951018C550B587C6BC6EB1028EA39DD11B9BFDF3,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerator_get_Current_m15D840D5299CA52E41DFC537BBCA8114DFF3340B,
	U3Cget_ChildsU3Ed__13_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_m5F25DA4843C4E27A1832287B6A8C0E97E2E900C6,
	U3Cget_ChildsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m0D4D4A2C8508D22357D51157A1DD0865F7562297,
	U3CGetEnumeratorU3Ed__14__ctor_m3E2ECECCB821D8BC7EC4F6AC5AA5266317FB0363,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_m8B46DC03D65B315AF464114378C6E71C2268AFD7,
	U3CGetEnumeratorU3Ed__14_MoveNext_m3ACEEE39EBBE063061A2E69B85883B999B0BAA78,
	U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mE7D3B2D552B46B7CE8FC72BF74533B5957F988E7,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7CE42F21A88CC604C4EE5C5F806AB3D537F3438,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m630CFD8E7B2F011E087BBD24EDA563AC94B3D181,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_mBB676A0A25E054C8115154F7F3BA5FE44EDF1CE3,
	WitResponseClass_get_ChildNodeNames_m17643A6B0646BB4C0432A7ABE39A0EEE0FFA09FC,
	WitResponseClass_HasChild_mA300E73E9D4346D21FEDDC071B2D52538625A3FB,
	WitResponseClass_get_Item_m46C1E02FA07F165B10C5E55B22329F77C83F66CB,
	WitResponseClass_set_Item_mB95FE232445471A1C68C8FF19CC1C361F9619E68,
	WitResponseClass_get_Item_m789E7BBCFB8C73602AEE9B3DA54628A03B15A74B,
	WitResponseClass_set_Item_m559D8991F4C5F4F3830D9CB5267DCEE5006A3504,
	WitResponseClass_get_Count_m04014274AF6AFFDB69D92A954D5666387C67A8F1,
	WitResponseClass_Add_m6561A55FFA76C268F5261E171853D5AB24FCBFB4,
	WitResponseClass_Remove_m33C6F72D72F766ACF1081F8074C03F93409AE943,
	WitResponseClass_Remove_mE01845757C9328C5CE82EE0F80899EE2483B6D76,
	WitResponseClass_Remove_m9BACA15EB93394E290B3854D2966110EA189F5FE,
	WitResponseClass_get_Childs_mBF1BBBEFE5A4FB7B1D05B526034C9EC7372C1A27,
	WitResponseClass_GetEnumerator_m50FF38C23BACEA00930A2BE4E5789E20DDA5F3FB,
	NULL,
	WitResponseClass_ToString_m88D914030920CBA87C43C06976D5FF9539718486,
	WitResponseClass_ToString_m00C5C60A74D446F1FA202ABBEA9A9D754D4EDD8F,
	WitResponseClass_Serialize_mBA795A5A5945066A8BE18B572B5D781FE932434D,
	WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47,
	U3CU3Ec__DisplayClass15_0__ctor_m70566E35212CD98AC59D425A2CF4832FEC0F9F94,
	U3CU3Ec__DisplayClass15_0_U3CRemoveU3Eb__0_mAD41BE11BCE3E900BFC3DCF57DF0CDCEB67618BB,
	U3Cget_ChildsU3Ed__17__ctor_m12B9ABD0288987CD61E2BA7D036767AE1BF4D0BE,
	U3Cget_ChildsU3Ed__17_System_IDisposable_Dispose_m251435C763D9BD1F83DA693B60652B15C0D6412B,
	U3Cget_ChildsU3Ed__17_MoveNext_m6EDCA79501326B1ABA3BAC7D4CA09CCC28CE5F58,
	U3Cget_ChildsU3Ed__17_U3CU3Em__Finally1_m0CEC896D7B08ACC1EE2FD7E652B9E7F0C034A3CC,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumeratorU3CMeta_WitAi_Json_WitResponseNodeU3E_get_Current_mB3A70175F3C17A89A9797E27574A99B95C0D7B6D,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_Reset_mE1C1598BCB643AE91F487DFDC674CCB620D50099,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerator_get_Current_mCD4D28D5213447AC15E46908877BDCBDFEF0FE41,
	U3Cget_ChildsU3Ed__17_System_Collections_Generic_IEnumerableU3CMeta_WitAi_Json_WitResponseNodeU3E_GetEnumerator_mB45B52244BD5D55A8882EEDEEA2537D9CDF73038,
	U3Cget_ChildsU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mA94336900DAAE3CBBBB867857026C11EEDED92BC,
	U3CGetEnumeratorU3Ed__18__ctor_m76216DA4E7DA7307BEAD2051640156E3FF114BAC,
	U3CGetEnumeratorU3Ed__18_System_IDisposable_Dispose_m4C26F7E170E59A2FFB51CC5EA1C9E4B3FAB74013,
	U3CGetEnumeratorU3Ed__18_MoveNext_m924931A590B530D38EE346F596B85484107A43A2,
	U3CGetEnumeratorU3Ed__18_U3CU3Em__Finally1_m8E677E16C3DA39A359DDD922234114FD8FE583CF,
	U3CGetEnumeratorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC2BDB5B90BCC1F22D345F711D64DD290BC239A7D,
	U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_Reset_m04F4FC789272FD7A8ABE9AD024086B4594C2594A,
	U3CGetEnumeratorU3Ed__18_System_Collections_IEnumerator_get_Current_m79C6A5ACEEAB2BB4A1DF627A2D8AF060A24B5BAE,
	WitResponseData_get_Value_m0975849486729B3D273D4E37707F857C5D6FFC02,
	WitResponseData_set_Value_m95872341BCA728770E707806BD3E27AC58B4F8A4,
	WitResponseData__ctor_mC5CAD7423156DB2AFA917797D3C239BDF94A0BAD,
	WitResponseData__ctor_mF2E1CC4ECA3A729D104130CCB5CCB873C75F86C2,
	WitResponseData__ctor_mC9CE8379EAC42B7F85910B573447E05117CE2A81,
	WitResponseData__ctor_m61443D4A59044E96DC07C970FD2C03C7F9F7F782,
	WitResponseData__ctor_m0A2E4A8270DB755B5D7172F178890C323FB22290,
	WitResponseData_ToString_m7093EC5D51B180ECA77D88196C00FB4FCE9BE5D2,
	WitResponseData_ToString_m8E4076FBB7CE6838EA2F55F39E6740929581967E,
	WitResponseData_Serialize_m96CF5AC981F31FD000115E5BCE1CB79737369BA0,
	WitResponseLazyCreator__ctor_mDABB3CE3048D2FB3FC72597DF35ABD46824DC7B6,
	WitResponseLazyCreator__ctor_m806225C5DE01971257BC07EEFBD8D5FCD2522175,
	WitResponseLazyCreator_Set_mE5ED8C6DDB40D47373E29A6F3CE3FD453FA21458,
	WitResponseLazyCreator_get_Item_m10F2D23CB786080CCE534BAC1527D7AB606C71CB,
	WitResponseLazyCreator_set_Item_m79594FDE487845703B9B7F79323FC6310C11620D,
	WitResponseLazyCreator_get_Item_m0FFB198C00D3D5EC389B69C30AE09AF06586C631,
	WitResponseLazyCreator_set_Item_m725459A2CE4DFABF6820B5363B6C436A0F84DE10,
	WitResponseLazyCreator_Add_m9FF2438CD8A3F7C63F039757C9DC452AEB349D7B,
	WitResponseLazyCreator_Add_mCEF57F8B2B20499AA785B8368B76CA34057DCC37,
	WitResponseLazyCreator_op_Equality_m33785B9091FDDFD763DC36859F395F6125DC484F,
	WitResponseLazyCreator_op_Inequality_mE9C843DDFCFE39CBF1CA64595685E78EA4C2853D,
	WitResponseLazyCreator_Equals_m3F855190140F333CE7DE73AF8F7D0416C9565C2E,
	WitResponseLazyCreator_GetHashCode_m5BFA3A0F74348EB2EA8CBA562560EB7E59BDC14E,
	WitResponseLazyCreator_ToString_m50E84D2603E3FCA2E03780E40B4470B946EAB6A6,
	WitResponseLazyCreator_ToString_mBA8C042FD615F473466BE9FF11DA64E1D32F6A54,
	WitResponseLazyCreator_get_AsInt_m9832160B8EDDE9DA685242FF3E95CABCDF9CD292,
	WitResponseLazyCreator_set_AsInt_m4DADF35E8FF2BE8C29A1D500FF06EFDF0547562C,
	WitResponseLazyCreator_get_AsFloat_m29FE6CE3C5010431FB4FE58D5BCC3231846F327D,
	WitResponseLazyCreator_set_AsFloat_mA3DF95778AEED4EC889F60C5712E376B446AB86B,
	WitResponseLazyCreator_get_AsDouble_m586C0C0F3E95273F6FEA3E6089B8004817EF0C4A,
	WitResponseLazyCreator_set_AsDouble_m60421A9649FE75462BD9ABA38670B256FB11BF93,
	WitResponseLazyCreator_get_AsBool_m050753D7DD79B6E7A7CC22F47CD18D30CBF31274,
	WitResponseLazyCreator_set_AsBool_m302B40878819EE83ECEA42F6B38C9B39516A10EF,
	WitResponseLazyCreator_get_AsArray_m0E5FC1BCF1EF029788E36B6555CCDE23E202DDDA,
	WitResponseLazyCreator_get_AsObject_m5ED9930AD5553B2C3682A44DC592AE0CD87F978B,
	JSONParseException__ctor_mBFCD4AD2D31AB830D846E482EDBD04B6BE05F55B,
	WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212,
	WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889,
	WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0,
	WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7,
	WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6,
	WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8,
	WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427,
	WitTraitInfo__ctor_m55F786DE2C051C2BC4320576E0D96316417F62CA,
};
extern void WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212_AdjustorThunk (void);
extern void WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889_AdjustorThunk (void);
extern void WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0_AdjustorThunk (void);
extern void WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7_AdjustorThunk (void);
extern void WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6_AdjustorThunk (void);
extern void WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8_AdjustorThunk (void);
extern void WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[7] = 
{
	{ 0x06000256, WitEntityInfo_Equals_m4CE8855D9523C6F2B2B5718A63E3E4C2AE580212_AdjustorThunk },
	{ 0x06000257, WitEntityInfo_Equals_mC9768DC406175E7301DAFC503ABC99D906F6D889_AdjustorThunk },
	{ 0x06000258, WitEntityInfo_GetHashCode_m4DDA6D7DE01355529D97A269415B2171924475A0_AdjustorThunk },
	{ 0x06000259, WitEntityKeywordInfo__ctor_mA93926A5D99F4E5286B81F04B19A5723780BBEB7_AdjustorThunk },
	{ 0x0600025A, WitEntityKeywordInfo_Equals_mE64ACAA27AC5ECB36A5C85BF91F96B72689EDAC6_AdjustorThunk },
	{ 0x0600025B, WitEntityKeywordInfo_Equals_m52AD825EB33298C78E5B95757F12815F616AB0F8_AdjustorThunk },
	{ 0x0600025C, WitEntityKeywordInfo_GetHashCode_m0B3B41449D60F7253E3B66634C39320F09320427_AdjustorThunk },
};
static const int32_t s_InvokerIndices[605] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8939,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8939,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	12517,
	0,
	13280,
	11893,
	13235,
	8679,
	6972,
	8939,
	3948,
	8805,
	8939,
	8939,
	5077,
	8939,
	8939,
	8939,
	8939,
	8939,
	7050,
	8939,
	8679,
	8805,
	8939,
	8805,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	13034,
	13034,
	13034,
	13034,
	12243,
	13034,
	12243,
	13034,
	12243,
	11257,
	13235,
	12236,
	11309,
	8668,
	6962,
	8805,
	7096,
	8679,
	6972,
	8679,
	6972,
	13034,
	13034,
	13034,
	13034,
	6962,
	7199,
	2445,
	3090,
	3969,
	8939,
	8939,
	8939,
	7050,
	10519,
	11250,
	10935,
	10046,
	13034,
	13280,
	11900,
	10404,
	9759,
	9471,
	11803,
	12785,
	10390,
	11990,
	13280,
	3963,
	3969,
	1301,
	7096,
	8939,
	8805,
	8939,
	5077,
	8939,
	8805,
	3969,
	0,
	0,
	8756,
	7050,
	8679,
	6972,
	8679,
	6972,
	8859,
	7146,
	8859,
	7146,
	1704,
	6316,
	8805,
	8805,
	8939,
	8939,
	8939,
	8939,
	2448,
	1704,
	831,
	2448,
	1704,
	0,
	0,
	0,
	0,
	0,
	0,
	144,
	2145,
	2145,
	144,
	8939,
	13280,
	3963,
	7146,
	1895,
	7096,
	0,
	0,
	0,
	0,
	7050,
	8939,
	8679,
	8805,
	8939,
	8805,
	8939,
	3969,
	8939,
	3969,
	8939,
	3969,
	8939,
	3969,
	3969,
	7146,
	8939,
	3969,
	0,
	0,
	0,
	0,
	8939,
	3969,
	8939,
	3969,
	3969,
	831,
	244,
	7096,
	12639,
	12781,
	12781,
	12781,
	12514,
	62,
	249,
	2145,
	3092,
	3075,
	8939,
	7096,
	8939,
	7096,
	8939,
	8805,
	3969,
	13034,
	13034,
	13034,
	13034,
	13034,
	13034,
	8805,
	7096,
	8805,
	7096,
	2140,
	3092,
	8805,
	1704,
	0,
	0,
	0,
	10969,
	10967,
	11893,
	12785,
	8679,
	8679,
	5077,
	1886,
	6316,
	8939,
	8679,
	8679,
	5077,
	1886,
	6316,
	8939,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	13235,
	11905,
	12785,
	0,
	0,
	0,
	0,
	0,
	0,
	9779,
	10411,
	0,
	9779,
	9779,
	0,
	0,
	10411,
	9339,
	13280,
	0,
	0,
	0,
	0,
	0,
	0,
	13280,
	8939,
	5077,
	5077,
	5077,
	8679,
	8679,
	0,
	1886,
	6316,
	8939,
	8939,
	8805,
	7096,
	8805,
	7096,
	7096,
	3969,
	12785,
	3969,
	6306,
	3658,
	6316,
	3969,
	8805,
	7096,
	8756,
	7096,
	6316,
	6306,
	6316,
	8805,
	8805,
	8805,
	6316,
	8756,
	7050,
	8859,
	7146,
	8701,
	6999,
	8679,
	6972,
	8805,
	8805,
	8805,
	0,
	12785,
	12785,
	11592,
	11592,
	5077,
	8756,
	12785,
	12785,
	7096,
	7096,
	7096,
	7096,
	8805,
	7096,
	8805,
	12785,
	12785,
	12785,
	12785,
	12785,
	12785,
	12785,
	8939,
	7050,
	8939,
	8679,
	8805,
	8939,
	8805,
	8805,
	8805,
	7050,
	8939,
	8679,
	8939,
	8939,
	8805,
	8939,
	8805,
	8805,
	8805,
	6306,
	3658,
	6316,
	3969,
	8756,
	3969,
	6306,
	6316,
	8805,
	8805,
	8805,
	6316,
	7096,
	8939,
	7050,
	8939,
	8679,
	8939,
	8805,
	8939,
	8805,
	8805,
	8805,
	7050,
	8939,
	8679,
	8939,
	8805,
	8939,
	8805,
	8805,
	5077,
	6316,
	3969,
	6306,
	3658,
	8756,
	3969,
	6316,
	6306,
	6316,
	8805,
	8805,
	0,
	8805,
	6316,
	7096,
	8939,
	8939,
	4769,
	7050,
	8939,
	8679,
	8939,
	8805,
	8939,
	8805,
	8805,
	8805,
	7050,
	8939,
	8679,
	8939,
	8805,
	8939,
	8805,
	8805,
	7096,
	7096,
	7146,
	6999,
	6972,
	7050,
	8805,
	6316,
	7096,
	7096,
	3969,
	7096,
	6306,
	3658,
	6316,
	3969,
	7096,
	3969,
	11592,
	11592,
	5077,
	8756,
	8805,
	6316,
	8756,
	7050,
	8859,
	7146,
	8701,
	6999,
	8679,
	6972,
	8805,
	8805,
	7096,
	5077,
	5205,
	8756,
	3969,
	5077,
	5206,
	8756,
	8939,
};
static const Il2CppTokenRangePair s_rgctxIndices[41] = 
{
	{ 0x02000012, { 0, 19 } },
	{ 0x02000013, { 19, 3 } },
	{ 0x02000015, { 22, 17 } },
	{ 0x02000016, { 39, 4 } },
	{ 0x0200001C, { 43, 44 } },
	{ 0x0200001D, { 87, 3 } },
	{ 0x0200001F, { 90, 50 } },
	{ 0x02000020, { 140, 1 } },
	{ 0x0200002B, { 149, 8 } },
	{ 0x0200002C, { 157, 5 } },
	{ 0x02000041, { 170, 8 } },
	{ 0x02000042, { 178, 2 } },
	{ 0x0200004E, { 183, 12 } },
	{ 0x02000052, { 223, 3 } },
	{ 0x02000053, { 226, 3 } },
	{ 0x06000094, { 141, 2 } },
	{ 0x06000095, { 143, 1 } },
	{ 0x06000096, { 144, 1 } },
	{ 0x06000098, { 145, 1 } },
	{ 0x060000AF, { 146, 1 } },
	{ 0x060000B0, { 147, 2 } },
	{ 0x06000113, { 162, 3 } },
	{ 0x06000114, { 165, 1 } },
	{ 0x06000115, { 166, 1 } },
	{ 0x06000116, { 167, 1 } },
	{ 0x06000117, { 168, 1 } },
	{ 0x06000118, { 169, 1 } },
	{ 0x06000164, { 180, 1 } },
	{ 0x06000165, { 181, 1 } },
	{ 0x06000166, { 182, 1 } },
	{ 0x06000182, { 195, 6 } },
	{ 0x06000183, { 201, 6 } },
	{ 0x06000184, { 207, 3 } },
	{ 0x06000185, { 210, 3 } },
	{ 0x06000186, { 213, 1 } },
	{ 0x06000187, { 214, 2 } },
	{ 0x0600018A, { 216, 4 } },
	{ 0x0600018D, { 220, 1 } },
	{ 0x0600018E, { 221, 2 } },
	{ 0x060001C6, { 229, 2 } },
	{ 0x0600021B, { 231, 1 } },
};
extern const uint32_t g_rgctx_TranscriptionRequest_4__ctor_m57091F2E672A10E8B5A0421BA90286EBD48405B4;
extern const uint32_t g_rgctx_TranscriptionRequest_4_tB9A0C67A8519A599FA2A43EFC011A5031E706FAB;
extern const uint32_t g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Results_m04C92D21A6FD697D59C83F8BD168C808111CB80F;
extern const uint32_t g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB_INLPRequestResults_get_ResponseData_mEF8D42C8E4C712517C2ED95F7F9FD232E7A8E3FA;
extern const uint32_t g_rgctx_NLPAudioRequest_4_t9AECAE8AB7D8C674963F3FC612F64A881028AE0E;
extern const uint32_t g_rgctx_NLPAudioRequest_4_ApplyResultResponseData_m05F43A2D61B472E59F72D5307354607BE4485BE1;
extern const uint32_t g_rgctx_NLPAudioRequest_4_OnResponseDataChanged_mE36E876FC4E0BD8A91B563C4653F8A056D5087E4;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Events_mCFCEA8A72A177D7AD66107D7F166F8AD52AA81DF;
extern const uint32_t g_rgctx_TEvents_t3267A536B8F24A35526A7B4C5845B03AD695DEFF;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_t62DCC88A22B2FB7176EDDB426B1370741F4E367E;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_get_OnPartialResponse_m4D023E807341EC1024BEE3256680C6E6D178BB7D;
extern const uint32_t g_rgctx_NLPAudioRequest_4_get_ResponseData_m9467BC7A0B2D6CBE84CA9AEFBE6B02F9E94B2C29;
extern const uint32_t g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_m7AB11634FD8839E45C90C8F74EB3BA85A1794692;
extern const uint32_t g_rgctx_NLPAudioRequest_4_set_ResponseData_mAF71AFC54915203334187135AC73B83857288927;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_get_OnFullResponse_m2EF1510F1BD686382E5D7CD78956E98EDF9C9B05;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleSuccess_mA3427B739B52ECAA87287F337B3C600795A5A380;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1__ctor_mA095782C8FA50E880195BC71CBD8CD5CC4328BD4;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_t643535CCD09C1915DB1D39B3B0D44ABD9CAD0DC9;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t514B0F3631DC5E67F5118AB39B98AA2BB67AC6CD;
extern const uint32_t g_rgctx_NLPAudioRequest_4__ctor_m362252244572AD2E63FC529C9AC932365709F4E6;
extern const uint32_t g_rgctx_NLPAudioRequest_4_t8C3541EAA464EE5379030243FE19E54CBE328774;
extern const uint32_t g_rgctx_TranscriptionRequest_4_tD22A4AA7BC7FC72442BFC4B9A3A748B30BFC192A;
extern const uint32_t g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B;
extern const uint32_t g_rgctx_NLPRequest_4_set_InputType_mFB9ABE4710A76F5F9CD83D44697C5708ACF3FA7C;
extern const uint32_t g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B;
extern const uint32_t g_rgctx_VoiceRequest_4_SetState_m5BA8666C220E0CCB7EC42C7C41282F379A0CECE6;
extern const uint32_t g_rgctx_TranscriptionRequest_4_AppendLogData_mAD8616AEE2ECE0F14E1043739FB006DD78E299C7;
extern const uint32_t g_rgctx_NLPRequest_4_get_InputType_m4E3CD37F73A702798C62C7AE3A9EA1ED81354D66;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mF2C9836323891A27DABDCCFBFCF9600417FC4EB5;
extern const uint32_t g_rgctx_VoiceRequest_4_GetSendError_mB44144FD1F8B32319409BA9CDA12EFD605863CBE;
extern const uint32_t g_rgctx_VoiceRequest_4_LogW_mEE681A17DEE2D815D893C9435C15272BB56A887F;
extern const uint32_t g_rgctx_VoiceRequest_4_get_CanSend_mBEED91EC5C0C44752670B6756ADD311A2011C0EA;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Options_m9171B5F246DFCCB0E83A8F6650F6200FA3B58C95;
extern const uint32_t g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485;
extern const Il2CppRGCTXConstrainedData g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485_INLPTextRequestOptions_set_Text_m355D9E7020858855DA2B6A22770A031F486194E4;
extern const uint32_t g_rgctx_VoiceRequest_4_Send_m8F1D9AF5CEA91C7FAD969D0116D8BE929CB83C5D;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1__ctor_mC33C0DA105E4B8ED521B473C3D4B11ECFFE5A9D9;
extern const uint32_t g_rgctx_NLPAudioRequestEvents_1_t0296A90F89F354D801B05E207B73D59E2F65C636;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_t40105BD8A5D6B58AF13573DF6EBA12E74DC9613B;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t6B5D092CA735A8B5483B265983CF35694C5CAF1D;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_AudioInputState_m2BAD47423D53BDE6F53A3FD54C8F458BAC9364BE;
extern const uint32_t g_rgctx_TranscriptionRequest_4_t5483B8B0C88C85BC3EB4741A31FD8123053506D0;
extern const uint32_t g_rgctx_TranscriptionRequest_4_GetActivateAudioError_mBBC69A03F365B3CB07813538442C04F4D8F38092;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mC3C7219D141A016C4D2D28501E92547AD1286A5C;
extern const uint32_t g_rgctx_VoiceRequest_4__ctor_mCC4AA7DF3044E123ACDFE77BEC6911A927AAC04E;
extern const uint32_t g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A;
extern const uint32_t g_rgctx_TranscriptionRequest_4_set_AudioInputState_m7380282C011978D4C2C0E07A4BE7C6B312F1B753;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Events_mEE59D9BDC50AB161017850643826E880917C994F;
extern const uint32_t g_rgctx_TEvents_t93F02A5CC92B88BE1CC9E9D55E9540F13AC69EA0;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_tB04F307AD89894E4C10B7E94D367EE743DAEA3FE;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m1C4AE28668968701FBBB537D1EA2A75A61BDEDCC;
extern const uint32_t g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A;
extern const uint32_t g_rgctx_VoiceRequest_4_RaiseEvent_m76C121760DE7CE4BA72A11FE56E6A885C871D660;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnAudioActivation_mFFD302FBDCB5808E2D42BB5B3D8AE9355C369DCD;
extern const uint32_t g_rgctx_TranscriptionRequest_4_HandleAudioActivation_m2E76B76021CCA5AC2581B36DEAF49D9B3FF7E7A7;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnStartListening_m8FA3240FAB45FCA9892F6C8A407D502716FDA5C9;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnAudioDeactivation_m9E72ED033FB4161A4003A804EFA83E6B8F0585AE;
extern const uint32_t g_rgctx_TranscriptionRequest_4_HandleAudioDeactivation_m4F100586114EBFCB3E30D722D342595374040B87;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnStopListening_m646C85A815857EBD72705F9C431F0E83A1665920;
extern const uint32_t g_rgctx_VoiceRequest_4_AppendLogData_m10F6E77E3B83A1B842CF947FB5D3FFBCF6BD049B;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Results_m2FA99DDFB3E72B401E10BE825267EA90A9BEDEAC;
extern const uint32_t g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_Transcription_mBD53AFF1ADB285E2FAE4184F901B348307C74FA1;
extern const uint32_t g_rgctx_TranscriptionRequest_4_ApplyResultTranscription_m6CFF5C46E762DBD6426E0900C546F573A97A3B0E;
extern const uint32_t g_rgctx_TranscriptionRequest_4_OnTranscriptionChanged_mC8052259F1F390BC26C3082A051B78D202799A55;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnPartialTranscription_m3915EC53BB22616DC27F6A47243DAA31C4EA23B1;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_Transcription_mE222854F665D814FF74159BB0405EBC93C37D002;
extern const uint32_t g_rgctx_VoiceRequest_4_LogW_m36176C5A7334740E79E4096528043D1F1B5FBB75;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_mCF1A5E958B881AD78BEC5E369E3BF9A547A8E4B9;
extern const uint32_t g_rgctx_TranscriptionRequest_4_SetAudioInputState_mCE91FE33F2D9EE8E0D03EC1F0A2E3CCB5C804670;
extern const uint32_t g_rgctx_VoiceRequest_4_Log_mF969E97A210F467E74B310DA46B8A9E152CF2A4B;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnAudioActivation_m34B216E599FCC8889EC88273096511282A51AFDD;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnStartListening_mC9244620871CE3716D510971ACF979CADA98867C;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnAudioDeactivation_m61FCCC18C7D9BD25DF2B41A6E714404FA3EC3BAE;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnStopListening_m3248769F53092F989B77B6A0BAF96EDF0B86AD03;
extern const uint32_t g_rgctx_VoiceRequest_4_get_State_m67A915A6F243750D4ACB31FD23455BDAD725025E;
extern const uint32_t g_rgctx_VoiceRequest_4_Cancel_m1169AD3F0603A3A94BB53122C8ACE7DB4E91DE9F;
extern const uint32_t g_rgctx_TranscriptionRequest_4_get_CanActivateAudio_mF18B726D0BA154502078878282DA9FE7C94B740C;
extern const uint32_t g_rgctx_VoiceRequest_4_get_CanSend_mD6ACA42F5EB85A18DA51871042AC1855EFC6584D;
extern const uint32_t g_rgctx_TranscriptionRequest_4_ActivateAudio_m46575F418F254C03F388B2ABF4B60238CEFFA485;
extern const uint32_t g_rgctx_VoiceRequest_4_Send_m26D8F471B0CF7E8BB9022D4210F0A91ACD6A438A;
extern const uint32_t g_rgctx_TranscriptionRequestEvents_1_get_OnFullTranscription_m5521F5F2371EB22B4FBCB9FDB023EF2FD5C3D407;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSuccess_m323961356BC3D29B3731993D3907069A24640CFE;
extern const uint32_t g_rgctx_TranscriptionRequest_4_DeactivateAudio_m72CF55883C369AF9DBE327DE2B1F5C1F03B62EB2;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTUnityEvent_t20516CF0061B6300B1FAD4AC46DCF5EA05754550_mFB58F86087497B41F6F3076EA699159D82F77A3C;
extern const uint32_t g_rgctx_VoiceRequestEvents_1__ctor_m101810392D3DA15FF168EE92964F3DECC51B4DBB;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t0931AAD0EBFB0C8A527EC22B6F9225F89E6DBE8B;
extern const uint32_t g_rgctx_VoiceRequest_4_get_State_m26840ABF9F42D6D006AFF787E67923C394CA4EDB;
extern const uint32_t g_rgctx_VoiceRequest_4_t14A62AFB967B0C4CE5036D4B66AC6B62E4660390;
extern const uint32_t g_rgctx_VoiceRequest_4_GetSendError_m9C1DB46029CE5D3C0201D8FAFD93B6758AC25DC4;
extern const uint32_t g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTOptions_t298F856044F04D2D1523F12653371DB3DD74D673_m22776D2693FA79E6EFB8F1CCBE84D8DBB118C5B9;
extern const uint32_t g_rgctx_VoiceRequest_4_set_Options_mAF3CB2D81D57D815C92AFBDB597A6C4E9C976F85;
extern const uint32_t g_rgctx_TEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8_mB874F3090B8EF37E7951C815615D15DA93B16158;
extern const uint32_t g_rgctx_VoiceRequest_4_set_Events_m9E37ADC83A1DBE40B85F484F92371D9772DA1FAF;
extern const uint32_t g_rgctx_VoiceRequest_4_SetState_m9D58634DE73E2B602B38EEAB78752FECCCE619BA;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Events_m53BF9894A415F70F60A642DFF16BFEEE3FEF4B0C;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_t35E96E5210D5A5A6C91982A2505990A6A430356C;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnInit_m574BCB1CF48F4E417B6F00CEE1F5094FFF3B849E;
extern const uint32_t g_rgctx_VoiceRequest_4_RaiseEvent_mA50F80ABB55FF23E0F4835CE73158F8B9B2541C0;
extern const uint32_t g_rgctx_VoiceRequest_4_SetUploadProgress_mA329F7EEB525700470438E7A1E52170D443BD3D4;
extern const uint32_t g_rgctx_VoiceRequest_4_SetDownloadProgress_mFBB7965B9C2E406CD68B501A11B2DB3D6962890B;
extern const uint32_t g_rgctx_VoiceRequest_4_set_State_m66652474D128AEAE8649FCCF657522E080092B2B;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnStateChange_mDEA128BF25D6BE235909A8B9DF721AB0D4066123;
extern const uint32_t g_rgctx_VoiceRequest_4_OnInit_m7D6305EB317DE79B03D4284B634AFC163A114C45;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSend_mAD5FC09D6BB7AD3B1579CD14DBC4CEB8E0B8251A;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleSend_m99F90A4BF167C0F1789733B1332C1506F5DB202E;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleCancel_mA7DEADFD81B4F8F31B8CDB78CFFECDD34BAB13A6;
extern const uint32_t g_rgctx_VoiceRequest_4_OnCancel_mD8D8B058324CC165A7467C7D123CE5BE4053CD49;
extern const uint32_t g_rgctx_VoiceRequest_4_OnComplete_m2A4BEBCD86DC469F4E43B42080B35CA1A7C89E52;
extern const uint32_t g_rgctx_VoiceRequest_4_OnFailed_m0E1623D1A8D4F163B5D5262793BAB76FA6414AD5;
extern const uint32_t g_rgctx_VoiceRequest_4_OnSuccess_m740E02195BDBDF373241584EDCCB0537F70C9A62;
extern const uint32_t g_rgctx_VoiceRequest_4_get_DownloadProgress_m79E39329E70329B3558D11A57FAB13FF99EB229B;
extern const uint32_t g_rgctx_VoiceRequest_4_set_DownloadProgress_mC14EFF32477E525FEAA841170E5DE506E0BDD4D2;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnDownloadProgressChange_m84468637A5190C443F297FD33D8FD992D9E5F264;
extern const uint32_t g_rgctx_VoiceRequest_4_get_UploadProgress_m50D60A790A0089459F512028FFF6B1B8F480C3C4;
extern const uint32_t g_rgctx_VoiceRequest_4_set_UploadProgress_m77A05D82D3C8D3B2D5850F3692E75F5D8FD0023B;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnUploadProgressChange_m8449FE2CC8572F7B9B8024347596C714C0ADFF23;
extern const uint32_t g_rgctx_VoiceRequest_4_AppendLogData_m41741F795DEE8A71FCD09696C88E0303962BEA22;
extern const uint32_t g_rgctx_VoiceRequest_4_Log_m4F6358377D188B02217EC33CB0A8C6B074EAA4A6;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Options_mBB35D08F9771FBDE259DAE8CE6DACBACEE0BAB45;
extern const Il2CppRGCTXConstrainedData g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673_IVoiceRequestOptions_get_RequestId_mE079DF0329C3C6500E208E03FF6E3DC87C14B3A3;
extern const uint32_t g_rgctx_VoiceRequest_4_LogW_m234FBE33E21E8449EB420A7ADB2B70418CB182A0;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_m205095A8419ED2412803C7C10034639E6C44646E;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnSend_m6D0ADC6F9C0796FDE46BF5C37748214F4210427F;
extern const uint32_t g_rgctx_VoiceRequest_4_GetResultsWithMessage_mFD2C98BA1CB59E6FB2A98F619C2ECBA2F82FD93D;
extern const uint32_t g_rgctx_VoiceRequest_4_HandleFailure_m78646C1CA9AF9688B106B1A3D65FA55556CFB7F4;
extern const uint32_t g_rgctx_VoiceRequest_4_set_Results_mDCC3356053910CA58D28060979B709A645CF1B64;
extern const uint32_t g_rgctx_VoiceRequest_4_get_Results_m158D3ED4F14E380199FE37372760F42508E02F25;
extern const uint32_t g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4;
extern const Il2CppRGCTXConstrainedData g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_IVoiceRequestResults_get_Message_m25FC16EC19AEE6AA0EB0341C85F7E3526B5124D1;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnFailed_mD3B0A85E2186DA8B329C51907C2098E2EF9CA457;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_m3C58181435AEFC374BC49B13534E062E73B0E70A;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnSuccess_mE125E4129309D13F6DE13E2CCB45BAC83516DFD2;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnCancel_m7B6D7E400A0004A83AD5962B9C99DA5EDA224BB8;
extern const uint32_t g_rgctx_VoiceRequestEvents_1_get_OnComplete_m77651DB7AE3FB5C4A6518475B1ABAA6065A12946;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTUnityEvent_t9034BC3B79C7203C9A18F3DF1F4330B7A142D7F2_m836C7314D8EBF18290D53BE2426264A900A4F7D8;
extern const uint32_t g_rgctx_T_tBF65BBA75B0846867DFF9903296DFF2C21AE0641;
extern const uint32_t g_rgctx_ComponentExtensions_GetCopyData_TisT_tBF65BBA75B0846867DFF9903296DFF2C21AE0641_m0CD38BFC95149CDB5AF74E05FE2EC6633A4110A0;
extern const uint32_t g_rgctx_ComponentExtensions_GetCopyData_TisT_t22966D3D56136646E3B2CA28252A4BC4FE15DBEC_mEA9B4DCBE5ECB89B903B6CF6A8B1C4219BA44CDA;
extern const uint32_t g_rgctx_T_t8BD7FE794073F840E8041221B6F2776FBD132295;
extern const uint32_t g_rgctx_TAttribute_t54DB0F8E421C8CC0D724E9EA98D3ED74C8DF9565;
extern const uint32_t g_rgctx_Enumerable_SequenceEqual_TisTSource_tFA0327F5BD4FB1BDABD580592A8059CF88E4D586_m2F95819DFAC24093EEA0476A9ABE8FCD250B60D5;
extern const uint32_t g_rgctx_ThreadPerformer_1_t1C7197200F5900698C776C9A776ED54437AD4DDE;
extern const uint32_t g_rgctx_ThreadPerformer_1__ctor_mA4CCF714AC766DB70BDD3F8B02E3036E8CF56FB3;
extern const uint32_t g_rgctx_ThreadPerformer_1_set_IsRunning_m2343870A4A276C3A3B1259B14FF361ED3A4CAC0F;
extern const uint32_t g_rgctx_ThreadPerformer_1_WaitForCompletion_mAD9CFB763B383290AD7648BCCBB5D268E64A7CE2;
extern const uint32_t g_rgctx_ThreadPerformer_1_Work_m1DC2519BCA5EB0D3DF52D346075793EF82315B05;
extern const uint32_t g_rgctx_Func_1_tBE286A5318281FC7BE8CDE7C7A9A7470F95AD157;
extern const uint32_t g_rgctx_Func_1_Invoke_mE2D1C3B7435C065E9DE075B8DE7AB09092C9173C;
extern const uint32_t g_rgctx_U3CWaitForCompletionU3Ed__13_tC015CF9A147C42EFDC0BD40C5980D18CB8376F17;
extern const uint32_t g_rgctx_U3CWaitForCompletionU3Ed__13__ctor_mFE549F36F2E2B79992435BEE3F187A71CEDDAD2D;
extern const uint32_t g_rgctx_ThreadPerformer_1_get_IsRunning_mCA85D8A2562A6AEEEC027164131304B5A035ED8A;
extern const uint32_t g_rgctx_ThreadPerformer_1_get_IsRunning_mCBF188654377B945EA94969C06876722AD75C457;
extern const uint32_t g_rgctx_ThreadPerformer_1_IsTimedOut_mAF59E532D0AD7372ECDDC7C7D7826047800F0880;
extern const uint32_t g_rgctx_Action_2_t9E9085DE4E81A280D53621B3EF8493328946ECB5;
extern const uint32_t g_rgctx_Action_2_Invoke_m2F06EFF5811750B1E7C11465D8BDDE5A12D35342;
extern const uint32_t g_rgctx_ThreadPerformer_1_Quit_m35858F0D64C34F867CE0DCB219FA8A1FD7A8898F;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass42_0_1_t6D82AD2907D53AFDBE785B7EB25F223B4BFF2690;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass42_0_1__ctor_m13977080FC7CD0DAEB435EE45BADFE5112B2EFDA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass42_0_1_U3CRequestJsonU3Eb__0_m7036EFA6640991253ED905A772DD940873F29E51;
extern const uint32_t g_rgctx_VRequest_RequestJson_TisTData_t3CA7AF46188ECFFF98E3A48F920DF66E2DD35A16_m807CEA0636AD1078DAB820EF2FD18C9C9DCDB117;
extern const uint32_t g_rgctx_VRequest_RequestJson_TisTData_t57D15891ECFDE77E492B9E1E84049776BAE68A45_mDDB2E3F11538A09041787D7AB301F99B1D7439F5;
extern const uint32_t g_rgctx_VRequest_RequestJsonPost_TisTData_tC2D1F5A79636471AAADB9BE95F737758ABEE6B50_m3968EDBF93B7F58D4E121BDAD3A3863EF4E96E76;
extern const uint32_t g_rgctx_VRequest_RequestJson_TisTData_t541BED0B9959C9B6FCD8EA113EDD0E263D43DEF0_m53BF398A2B40F327196BA526EF9D726FB005BF08;
extern const uint32_t g_rgctx_VRequest_RequestJsonPut_TisTData_t9F25235F5AC68501F0FD19F7AAFE2BCB9D284BD3_m541F66EC509004A899EA775B749F7904FB8841D6;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass42_1_1_t8B49CD39E381A24A31CE64AC219A469E5C9996CE;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass42_1_1__ctor_m66557A4F1F780029C2E4845BEE349A3B5B3EDEA2;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_tBEF16635EB7E30D80722F06834017856468EA8A0;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_Invoke_m82A2DDB461645BA697F0B5F83715845C4F40ECB5;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass42_1_1_U3CRequestJsonU3Eb__1_m45F43EEFE0A5F5CACBD74FF89CD99D984F4BF84D;
extern const uint32_t g_rgctx_Action_2_tC10FF4EAA4F188898E8BDA0BD8AEFA683AC7EF2E;
extern const uint32_t g_rgctx_Action_2__ctor_m24E5E0C7DF26FF003B55F986E648EFE173366E0B;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObjectAsync_TisTData_tC2BAB5D3372840263B43E3E7362DCD11E4C1025C_m7B93325D43BB660D0231211DF070D62B40671240;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_t6988AFF3DAA4AA7554E55BDF53EE0E1B4FE37AD4;
extern const uint32_t g_rgctx_RequestCompleteDelegate_1_Invoke_m634108F6873C95630774DBC5AB13500016590796;
extern const uint32_t g_rgctx_VRequest_RequestJsonGet_TisTData_tDC1CDAD1DF3ADC9F2E05850010BD1EDA02B41A1E_m0E794BE2E7459DE11D6BE31D8DB94AB7B35BE3C2;
extern const uint32_t g_rgctx_VRequest_RequestJsonPost_TisTData_t2DE003BBF40EE6B8DEF0A551ED31C905FE977B37_mA722032359A227E20E54E604E5B61824F2AC00DC;
extern const uint32_t g_rgctx_VRequest_RequestJsonPut_TisTData_t62100B7EDCB5F5ADA14D46C319495FD9EE256B4D_m0183C24A20A6AD1CB43B4D671ABCB14EF6EA2340;
extern const uint32_t g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4;
extern const uint32_t g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4;
extern const uint32_t g_rgctx_HashSet_1__ctor_m8446056EA2DE7FA08CBAE5450924C5ACBFBD4B5A;
extern const uint32_t g_rgctx_WitResponseNode_Cast_TisT_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_mCB665F44B26A12C1BFADE07B38387A3CF15DB231;
extern const uint32_t g_rgctx_HashSet_1_Add_m0D2491EE7549BA8B4CF7594236D9BAB615945DC7;
extern const uint32_t g_rgctx_HashSet_1_GetEnumerator_m3B78092878D414DAAB1493BFD9E8A63503994452;
extern const uint32_t g_rgctx_Enumerator_get_Current_m84CB662CC9C87417F628A5CF06E3C220AC41BD3A;
extern const uint32_t g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mFE5A57DA3AF156373825C42345019029FC8D1F7C;
extern const uint32_t g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_t4D75B0825DD31C19B9DEB161491176BCD5A70CFE;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m9046C27ECEA709747DA3AD94A722712AF10030F3;
extern const uint32_t g_rgctx_IN_TYPE_tA1BB8C99DF416BCDFC9EEF273C08997D1DE35578;
extern const uint32_t g_rgctx_IN_TYPE_tA1BB8C99DF416BCDFC9EEF273C08997D1DE35578;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__0_mAEFD93A5882E41A169AD405D05B10E38779D1361;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__1_mF858998D4080E1E48743DAF345023742B47D0876;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_tE36AAB134FACBF14DF23EA50DF6A21CD7F549D3B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1__ctor_m88BD3C6F07BEDF95FD3AB40E6B82A6985FB3C3B0;
extern const uint32_t g_rgctx_IN_TYPE_t613047B73F6AFF520EC22629102959B656AE67C4;
extern const uint32_t g_rgctx_IN_TYPE_t613047B73F6AFF520EC22629102959B656AE67C4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__0_m5571B272E76E94B91CC058601C35DE1E8F993AEC;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__1_m35DD67C36CEC42478A0437A2DBD09B49D118387C;
extern const uint32_t g_rgctx_IN_TYPE_tCADA9F4A6922E181EEC7A43F03E3418F45965694;
extern const uint32_t g_rgctx_IN_TYPE_tCADA9F4A6922E181EEC7A43F03E3418F45965694;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_tCADA9F4A6922E181EEC7A43F03E3418F45965694_m890F6315F72A06FCFAA1B4CC172867016CD2653F;
extern const uint32_t g_rgctx_IN_TYPE_t99EF7A64B46B3B2691799684FAF3A839C2B585D8;
extern const uint32_t g_rgctx_IN_TYPE_t99EF7A64B46B3B2691799684FAF3A839C2B585D8;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t99EF7A64B46B3B2691799684FAF3A839C2B585D8_mD612EC4BE0668855E36B3238F2F787DEDC3EF110;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t5F1E40CE377B6E150A6D0CAE1B21038B9BA03479_m1838A68FADD341A5215AA8FCCBB153A02561A395;
extern const uint32_t g_rgctx_IN_TYPE_t7FF10A0D68DCC01D64C31AAA2B6FE2CD30E7A9EB;
extern const uint32_t g_rgctx_IN_TYPE_t7FF10A0D68DCC01D64C31AAA2B6FE2CD30E7A9EB;
extern const uint32_t g_rgctx_ITEM_TYPEU5BU5D_t62AA8F456903FB8998BC3CF39CB8C24B26CC6F2C;
extern const uint32_t g_rgctx_ITEM_TYPEU5BU5D_t62AA8F456903FB8998BC3CF39CB8C24B26CC6F2C;
extern const uint32_t g_rgctx_ITEM_TYPE_t93DF867F5BF8B8DFABB7E16C3C6006CAE626ECC9;
extern const uint32_t g_rgctx_ITEM_TYPE_t93DF867F5BF8B8DFABB7E16C3C6006CAE626ECC9;
extern const uint32_t g_rgctx_JsonConvert_SerializeToken_TisFROM_TYPE_tEF75AE75077ECFA50C23CD6C1315D7185DEE560E_m8EF04021123A840035440AADAE344F8A5CED1D49;
extern const uint32_t g_rgctx_FROM_TYPE_tAB099A76BFA739D27BF0DB6CA52E7D89E9CF9235;
extern const uint32_t g_rgctx_FROM_TYPE_tAB099A76BFA739D27BF0DB6CA52E7D89E9CF9235;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_tFAFAD028A21C8AC6113128B6072F114AD3F49092_mD9D36A51A30E87443700FB2995328A3C6DE52B18;
extern const uint32_t g_rgctx_Action_2_t09D1FBAA199EE3A5C3D05F8EE2938218D0B7F3EB;
extern const uint32_t g_rgctx_Action_2_Invoke_m4E232944FF87A89CA8A23DFD63EDD5C8CEB45706;
extern const uint32_t g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t7B18BDEA13918DE234C07526B55E8EC61FF01DA4_mA65B9A5FE10A95AC68D228E4B9F71E9C44000068;
extern const uint32_t g_rgctx_Action_2_t5134859EA1D179A65306CC08560420CB76382E60;
extern const uint32_t g_rgctx_Action_2_Invoke_m4CEBA72C411996B24E317BC10A43D633A91AFE10;
extern const uint32_t g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975;
extern const uint32_t g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975;
extern const uint32_t g_rgctx_WitResponseNode_Cast_TisT_t433BE44C793E00A0BE12BF38A035B538AF82195D_m73AEE2DA09907B081A6C7E3E9313A6B2528CDED4;
static const Il2CppRGCTXDefinition s_rgctxValues[232] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4__ctor_m57091F2E672A10E8B5A0421BA90286EBD48405B4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequest_4_tB9A0C67A8519A599FA2A43EFC011A5031E706FAB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Results_m04C92D21A6FD697D59C83F8BD168C808111CB80F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_tF147F89992470A3FAE802C61AE65122DC41E40EB_INLPRequestResults_get_ResponseData_mEF8D42C8E4C712517C2ED95F7F9FD232E7A8E3FA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequest_4_t9AECAE8AB7D8C674963F3FC612F64A881028AE0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_ApplyResultResponseData_m05F43A2D61B472E59F72D5307354607BE4485BE1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_OnResponseDataChanged_mE36E876FC4E0BD8A91B563C4653F8A056D5087E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Events_mCFCEA8A72A177D7AD66107D7F166F8AD52AA81DF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvents_t3267A536B8F24A35526A7B4C5845B03AD695DEFF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequestEvents_1_t62DCC88A22B2FB7176EDDB426B1370741F4E367E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequestEvents_1_get_OnPartialResponse_m4D023E807341EC1024BEE3256680C6E6D178BB7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_get_ResponseData_m9467BC7A0B2D6CBE84CA9AEFBE6B02F9E94B2C29 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t1CE74BF3BAB7C466EF7B49BEA53A5C22054084FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_m7AB11634FD8839E45C90C8F74EB3BA85A1794692 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4_set_ResponseData_mAF71AFC54915203334187135AC73B83857288927 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequestEvents_1_get_OnFullResponse_m2EF1510F1BD686382E5D7CD78956E98EDF9C9B05 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleSuccess_mA3427B739B52ECAA87287F337B3C600795A5A380 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1__ctor_mA095782C8FA50E880195BC71CBD8CD5CC4328BD4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequestEvents_1_t643535CCD09C1915DB1D39B3B0D44ABD9CAD0DC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t514B0F3631DC5E67F5118AB39B98AA2BB67AC6CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequest_4__ctor_m362252244572AD2E63FC529C9AC932365709F4E6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequest_4_t8C3541EAA464EE5379030243FE19E54CBE328774 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequest_4_tD22A4AA7BC7FC72442BFC4B9A3A748B30BFC192A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPRequest_4_set_InputType_mFB9ABE4710A76F5F9CD83D44697C5708ACF3FA7C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t23D0D20691BBACEA2C74F91BCDAD0A3B416C1C2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetState_m5BA8666C220E0CCB7EC42C7C41282F379A0CECE6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_AppendLogData_mAD8616AEE2ECE0F14E1043739FB006DD78E299C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPRequest_4_get_InputType_m4E3CD37F73A702798C62C7AE3A9EA1ED81354D66 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mF2C9836323891A27DABDCCFBFCF9600417FC4EB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_GetSendError_mB44144FD1F8B32319409BA9CDA12EFD605863CBE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_LogW_mEE681A17DEE2D815D893C9435C15272BB56A887F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_CanSend_mBEED91EC5C0C44752670B6756ADD311A2011C0EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Options_m9171B5F246DFCCB0E83A8F6650F6200FA3B58C95 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TOptions_tF1CD80C28E5EF3FD24AB67D992FCB878650BC485_INLPTextRequestOptions_set_Text_m355D9E7020858855DA2B6A22770A031F486194E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Send_m8F1D9AF5CEA91C7FAD969D0116D8BE929CB83C5D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NLPAudioRequestEvents_1__ctor_mC33C0DA105E4B8ED521B473C3D4B11ECFFE5A9D9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_NLPAudioRequestEvents_1_t0296A90F89F354D801B05E207B73D59E2F65C636 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequestEvents_1_t40105BD8A5D6B58AF13573DF6EBA12E74DC9613B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t6B5D092CA735A8B5483B265983CF35694C5CAF1D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_AudioInputState_m2BAD47423D53BDE6F53A3FD54C8F458BAC9364BE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequest_4_t5483B8B0C88C85BC3EB4741A31FD8123053506D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_GetActivateAudioError_mBBC69A03F365B3CB07813538442C04F4D8F38092 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_IsAudioInputActivated_mC3C7219D141A016C4D2D28501E92547AD1286A5C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4__ctor_mCC4AA7DF3044E123ACDFE77BEC6911A927AAC04E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_set_AudioInputState_m7380282C011978D4C2C0E07A4BE7C6B312F1B753 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Events_mEE59D9BDC50AB161017850643826E880917C994F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvents_t93F02A5CC92B88BE1CC9E9D55E9540F13AC69EA0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TranscriptionRequestEvents_1_tB04F307AD89894E4C10B7E94D367EE743DAEA3FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnAudioInputStateChange_m1C4AE28668968701FBBB537D1EA2A75A61BDEDCC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t6844B9EFD46431E7105A9AC0249495F3246DB21A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_RaiseEvent_m76C121760DE7CE4BA72A11FE56E6A885C871D660 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnAudioActivation_mFFD302FBDCB5808E2D42BB5B3D8AE9355C369DCD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_HandleAudioActivation_m2E76B76021CCA5AC2581B36DEAF49D9B3FF7E7A7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnStartListening_m8FA3240FAB45FCA9892F6C8A407D502716FDA5C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnAudioDeactivation_m9E72ED033FB4161A4003A804EFA83E6B8F0585AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_HandleAudioDeactivation_m4F100586114EBFCB3E30D722D342595374040B87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnStopListening_m646C85A815857EBD72705F9C431F0E83A1665920 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_AppendLogData_m10F6E77E3B83A1B842CF947FB5D3FFBCF6BD049B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Results_m2FA99DDFB3E72B401E10BE825267EA90A9BEDEAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_tC051C2FD9803FE22962FF1D487E09B523FA8CDCB_ITranscriptionRequestResults_get_Transcription_mBD53AFF1ADB285E2FAE4184F901B348307C74FA1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_ApplyResultTranscription_m6CFF5C46E762DBD6426E0900C546F573A97A3B0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_OnTranscriptionChanged_mC8052259F1F390BC26C3082A051B78D202799A55 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnPartialTranscription_m3915EC53BB22616DC27F6A47243DAA31C4EA23B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_Transcription_mE222854F665D814FF74159BB0405EBC93C37D002 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_LogW_m36176C5A7334740E79E4096528043D1F1B5FBB75 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_mCF1A5E958B881AD78BEC5E369E3BF9A547A8E4B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_SetAudioInputState_mCE91FE33F2D9EE8E0D03EC1F0A2E3CCB5C804670 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Log_mF969E97A210F467E74B310DA46B8A9E152CF2A4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnAudioActivation_m34B216E599FCC8889EC88273096511282A51AFDD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnStartListening_mC9244620871CE3716D510971ACF979CADA98867C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnAudioDeactivation_m61FCCC18C7D9BD25DF2B41A6E714404FA3EC3BAE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnStopListening_m3248769F53092F989B77B6A0BAF96EDF0B86AD03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_State_m67A915A6F243750D4ACB31FD23455BDAD725025E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Cancel_m1169AD3F0603A3A94BB53122C8ACE7DB4E91DE9F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_get_CanActivateAudio_mF18B726D0BA154502078878282DA9FE7C94B740C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_CanSend_mD6ACA42F5EB85A18DA51871042AC1855EFC6584D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_ActivateAudio_m46575F418F254C03F388B2ABF4B60238CEFFA485 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Send_m26D8F471B0CF7E8BB9022D4210F0A91ACD6A438A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequestEvents_1_get_OnFullTranscription_m5521F5F2371EB22B4FBCB9FDB023EF2FD5C3D407 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSuccess_m323961356BC3D29B3731993D3907069A24640CFE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TranscriptionRequest_4_DeactivateAudio_m72CF55883C369AF9DBE327DE2B1F5C1F03B62EB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTUnityEvent_t20516CF0061B6300B1FAD4AC46DCF5EA05754550_mFB58F86087497B41F6F3076EA699159D82F77A3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1__ctor_m101810392D3DA15FF168EE92964F3DECC51B4DBB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t0931AAD0EBFB0C8A527EC22B6F9225F89E6DBE8B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_State_m26840ABF9F42D6D006AFF787E67923C394CA4EDB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequest_4_t14A62AFB967B0C4CE5036D4B66AC6B62E4660390 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_GetSendError_m9C1DB46029CE5D3C0201D8FAFD93B6758AC25DC4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTOptions_t298F856044F04D2D1523F12653371DB3DD74D673_m22776D2693FA79E6EFB8F1CCBE84D8DBB118C5B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_Options_mAF3CB2D81D57D815C92AFBDB597A6C4E9C976F85 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTEvents_t89F35FEA279F2186CEAFC587DD8BC7896B829BF8_mB874F3090B8EF37E7951C815615D15DA93B16158 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_Events_m9E37ADC83A1DBE40B85F484F92371D9772DA1FAF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetState_m9D58634DE73E2B602B38EEAB78752FECCCE619BA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Events_m53BF9894A415F70F60A642DFF16BFEEE3FEF4B0C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceRequestEvents_1_t35E96E5210D5A5A6C91982A2505990A6A430356C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnInit_m574BCB1CF48F4E417B6F00CEE1F5094FFF3B849E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_RaiseEvent_mA50F80ABB55FF23E0F4835CE73158F8B9B2541C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetUploadProgress_mA329F7EEB525700470438E7A1E52170D443BD3D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_SetDownloadProgress_mFBB7965B9C2E406CD68B501A11B2DB3D6962890B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_State_m66652474D128AEAE8649FCCF657522E080092B2B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnStateChange_mDEA128BF25D6BE235909A8B9DF721AB0D4066123 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnInit_m7D6305EB317DE79B03D4284B634AFC163A114C45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSend_mAD5FC09D6BB7AD3B1579CD14DBC4CEB8E0B8251A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleSend_m99F90A4BF167C0F1789733B1332C1506F5DB202E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleCancel_mA7DEADFD81B4F8F31B8CDB78CFFECDD34BAB13A6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnCancel_mD8D8B058324CC165A7467C7D123CE5BE4053CD49 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnComplete_m2A4BEBCD86DC469F4E43B42080B35CA1A7C89E52 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnFailed_m0E1623D1A8D4F163B5D5262793BAB76FA6414AD5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_OnSuccess_m740E02195BDBDF373241584EDCCB0537F70C9A62 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_DownloadProgress_m79E39329E70329B3558D11A57FAB13FF99EB229B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_DownloadProgress_mC14EFF32477E525FEAA841170E5DE506E0BDD4D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnDownloadProgressChange_m84468637A5190C443F297FD33D8FD992D9E5F264 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_UploadProgress_m50D60A790A0089459F512028FFF6B1B8F480C3C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_UploadProgress_m77A05D82D3C8D3B2D5850F3692E75F5D8FD0023B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnUploadProgressChange_m8449FE2CC8572F7B9B8024347596C714C0ADFF23 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_AppendLogData_m41741F795DEE8A71FCD09696C88E0303962BEA22 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_Log_m4F6358377D188B02217EC33CB0A8C6B074EAA4A6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Options_mBB35D08F9771FBDE259DAE8CE6DACBACEE0BAB45 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TOptions_t298F856044F04D2D1523F12653371DB3DD74D673_IVoiceRequestOptions_get_RequestId_mE079DF0329C3C6500E208E03FF6E3DC87C14B3A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_LogW_m234FBE33E21E8449EB420A7ADB2B70418CB182A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_m205095A8419ED2412803C7C10034639E6C44646E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnSend_m6D0ADC6F9C0796FDE46BF5C37748214F4210427F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_GetResultsWithMessage_mFD2C98BA1CB59E6FB2A98F619C2ECBA2F82FD93D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_HandleFailure_m78646C1CA9AF9688B106B1A3D65FA55556CFB7F4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_set_Results_mDCC3356053910CA58D28060979B709A645CF1B64 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequest_4_get_Results_m158D3ED4F14E380199FE37372760F42508E02F25 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_IVoiceRequestResults_get_Message_m25FC16EC19AEE6AA0EB0341C85F7E3526B5124D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnFailed_mD3B0A85E2186DA8B329C51907C2098E2EF9CA457 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTResults_t9602D2B752CD90D4D2DC7B5A091899D5DE0DF6C4_m3C58181435AEFC374BC49B13534E062E73B0E70A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnSuccess_mE125E4129309D13F6DE13E2CCB45BAC83516DFD2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnCancel_m7B6D7E400A0004A83AD5962B9C99DA5EDA224BB8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceRequestEvents_1_get_OnComplete_m77651DB7AE3FB5C4A6518475B1ABAA6065A12946 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTUnityEvent_t9034BC3B79C7203C9A18F3DF1F4330B7A142D7F2_m836C7314D8EBF18290D53BE2426264A900A4F7D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBF65BBA75B0846867DFF9903296DFF2C21AE0641 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentExtensions_GetCopyData_TisT_tBF65BBA75B0846867DFF9903296DFF2C21AE0641_m0CD38BFC95149CDB5AF74E05FE2EC6633A4110A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentExtensions_GetCopyData_TisT_t22966D3D56136646E3B2CA28252A4BC4FE15DBEC_mEA9B4DCBE5ECB89B903B6CF6A8B1C4219BA44CDA },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t8BD7FE794073F840E8041221B6F2776FBD132295 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TAttribute_t54DB0F8E421C8CC0D724E9EA98D3ED74C8DF9565 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_SequenceEqual_TisTSource_tFA0327F5BD4FB1BDABD580592A8059CF88E4D586_m2F95819DFAC24093EEA0476A9ABE8FCD250B60D5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ThreadPerformer_1_t1C7197200F5900698C776C9A776ED54437AD4DDE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1__ctor_mA4CCF714AC766DB70BDD3F8B02E3036E8CF56FB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_set_IsRunning_m2343870A4A276C3A3B1259B14FF361ED3A4CAC0F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_WaitForCompletion_mAD9CFB763B383290AD7648BCCBB5D268E64A7CE2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_Work_m1DC2519BCA5EB0D3DF52D346075793EF82315B05 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tBE286A5318281FC7BE8CDE7C7A9A7470F95AD157 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_mE2D1C3B7435C065E9DE075B8DE7AB09092C9173C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CWaitForCompletionU3Ed__13_tC015CF9A147C42EFDC0BD40C5980D18CB8376F17 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CWaitForCompletionU3Ed__13__ctor_mFE549F36F2E2B79992435BEE3F187A71CEDDAD2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_get_IsRunning_mCA85D8A2562A6AEEEC027164131304B5A035ED8A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_get_IsRunning_mCBF188654377B945EA94969C06876722AD75C457 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_IsTimedOut_mAF59E532D0AD7372ECDDC7C7D7826047800F0880 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t9E9085DE4E81A280D53621B3EF8493328946ECB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m2F06EFF5811750B1E7C11465D8BDDE5A12D35342 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ThreadPerformer_1_Quit_m35858F0D64C34F867CE0DCB219FA8A1FD7A8898F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass42_0_1_t6D82AD2907D53AFDBE785B7EB25F223B4BFF2690 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass42_0_1__ctor_m13977080FC7CD0DAEB435EE45BADFE5112B2EFDA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass42_0_1_U3CRequestJsonU3Eb__0_m7036EFA6640991253ED905A772DD940873F29E51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJson_TisTData_t3CA7AF46188ECFFF98E3A48F920DF66E2DD35A16_m807CEA0636AD1078DAB820EF2FD18C9C9DCDB117 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJson_TisTData_t57D15891ECFDE77E492B9E1E84049776BAE68A45_mDDB2E3F11538A09041787D7AB301F99B1D7439F5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPost_TisTData_tC2D1F5A79636471AAADB9BE95F737758ABEE6B50_m3968EDBF93B7F58D4E121BDAD3A3863EF4E96E76 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJson_TisTData_t541BED0B9959C9B6FCD8EA113EDD0E263D43DEF0_m53BF398A2B40F327196BA526EF9D726FB005BF08 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPut_TisTData_t9F25235F5AC68501F0FD19F7AAFE2BCB9D284BD3_m541F66EC509004A899EA775B749F7904FB8841D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass42_1_1_t8B49CD39E381A24A31CE64AC219A469E5C9996CE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass42_1_1__ctor_m66557A4F1F780029C2E4845BEE349A3B5B3EDEA2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RequestCompleteDelegate_1_tBEF16635EB7E30D80722F06834017856468EA8A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestCompleteDelegate_1_Invoke_m82A2DDB461645BA697F0B5F83715845C4F40ECB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass42_1_1_U3CRequestJsonU3Eb__1_m45F43EEFE0A5F5CACBD74FF89CD99D984F4BF84D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_tC10FF4EAA4F188898E8BDA0BD8AEFA683AC7EF2E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2__ctor_m24E5E0C7DF26FF003B55F986E648EFE173366E0B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObjectAsync_TisTData_tC2BAB5D3372840263B43E3E7362DCD11E4C1025C_m7B93325D43BB660D0231211DF070D62B40671240 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RequestCompleteDelegate_1_t6988AFF3DAA4AA7554E55BDF53EE0E1B4FE37AD4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestCompleteDelegate_1_Invoke_m634108F6873C95630774DBC5AB13500016590796 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonGet_TisTData_tDC1CDAD1DF3ADC9F2E05850010BD1EDA02B41A1E_m0E794BE2E7459DE11D6BE31D8DB94AB7B35BE3C2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPost_TisTData_t2DE003BBF40EE6B8DEF0A551ED31C905FE977B37_mA722032359A227E20E54E604E5B61824F2AC00DC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VRequest_RequestJsonPut_TisTData_t62100B7EDCB5F5ADA14D46C319495FD9EE256B4D_m0183C24A20A6AD1CB43B4D671ABCB14EF6EA2340 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_t2DD5B136BE5B9CE42224D9456D738812CCC0EDA4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_m8446056EA2DE7FA08CBAE5450924C5ACBFBD4B5A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WitResponseNode_Cast_TisT_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_mCB665F44B26A12C1BFADE07B38387A3CF15DB231 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_m0D2491EE7549BA8B4CF7594236D9BAB615945DC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_GetEnumerator_m3B78092878D414DAAB1493BFD9E8A63503994452 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m84CB662CC9C87417F628A5CF06E3C220AC41BD3A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t2D42AF85191E0191B37DF6DFF6669395FECEE81B_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mFE5A57DA3AF156373825C42345019029FC8D1F7C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t3B40F6C27CB62299453425DE5720583E98E54E3D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_t4D75B0825DD31C19B9DEB161491176BCD5A70CFE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m9046C27ECEA709747DA3AD94A722712AF10030F3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_tA1BB8C99DF416BCDFC9EEF273C08997D1DE35578 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_tA1BB8C99DF416BCDFC9EEF273C08997D1DE35578 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__0_mAEFD93A5882E41A169AD405D05B10E38779D1361 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CDeserializeObjectAsyncU3Eb__1_mF858998D4080E1E48743DAF345023742B47D0876 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_tE36AAB134FACBF14DF23EA50DF6A21CD7F549D3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1__ctor_m88BD3C6F07BEDF95FD3AB40E6B82A6985FB3C3B0 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t613047B73F6AFF520EC22629102959B656AE67C4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t613047B73F6AFF520EC22629102959B656AE67C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__0_m5571B272E76E94B91CC058601C35DE1E8F993AEC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass7_0_1_U3CDeserializeObjectAsyncU3Eb__1_m35DD67C36CEC42478A0437A2DBD09B49D118387C },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_tCADA9F4A6922E181EEC7A43F03E3418F45965694 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_tCADA9F4A6922E181EEC7A43F03E3418F45965694 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_tCADA9F4A6922E181EEC7A43F03E3418F45965694_m890F6315F72A06FCFAA1B4CC172867016CD2653F },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t99EF7A64B46B3B2691799684FAF3A839C2B585D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t99EF7A64B46B3B2691799684FAF3A839C2B585D8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t99EF7A64B46B3B2691799684FAF3A839C2B585D8_mD612EC4BE0668855E36B3238F2F787DEDC3EF110 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t5F1E40CE377B6E150A6D0CAE1B21038B9BA03479_m1838A68FADD341A5215AA8FCCBB153A02561A395 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_IN_TYPE_t7FF10A0D68DCC01D64C31AAA2B6FE2CD30E7A9EB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IN_TYPE_t7FF10A0D68DCC01D64C31AAA2B6FE2CD30E7A9EB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ITEM_TYPEU5BU5D_t62AA8F456903FB8998BC3CF39CB8C24B26CC6F2C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ITEM_TYPEU5BU5D_t62AA8F456903FB8998BC3CF39CB8C24B26CC6F2C },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_ITEM_TYPE_t93DF867F5BF8B8DFABB7E16C3C6006CAE626ECC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ITEM_TYPE_t93DF867F5BF8B8DFABB7E16C3C6006CAE626ECC9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_SerializeToken_TisFROM_TYPE_tEF75AE75077ECFA50C23CD6C1315D7185DEE560E_m8EF04021123A840035440AADAE344F8A5CED1D49 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_FROM_TYPE_tAB099A76BFA739D27BF0DB6CA52E7D89E9CF9235 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FROM_TYPE_tAB099A76BFA739D27BF0DB6CA52E7D89E9CF9235 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_tFAFAD028A21C8AC6113128B6072F114AD3F49092_mD9D36A51A30E87443700FB2995328A3C6DE52B18 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t09D1FBAA199EE3A5C3D05F8EE2938218D0B7F3EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m4E232944FF87A89CA8A23DFD63EDD5C8CEB45706 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeIntoObject_TisIN_TYPE_t7B18BDEA13918DE234C07526B55E8EC61FF01DA4_mA65B9A5FE10A95AC68D228E4B9F71E9C44000068 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t5134859EA1D179A65306CC08560420CB76382E60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m4CEBA72C411996B24E317BC10A43D633A91AFE10 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tFF2C78A98D5471F414ECE0284899758B10749975 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WitResponseNode_Cast_TisT_t433BE44C793E00A0BE12BF38A035B538AF82195D_m73AEE2DA09907B081A6C7E3E9313A6B2528CDED4 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Meta_WitAi_Lib_CodeGenModule;
const Il2CppCodeGenModule g_Meta_WitAi_Lib_CodeGenModule = 
{
	"Meta.WitAi.Lib.dll",
	605,
	s_methodPointers,
	7,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	41,
	s_rgctxIndices,
	232,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
