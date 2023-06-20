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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1, T2*, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { &p1, p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3*, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, &p2, p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t99645769CE679BC507C0D8F0C572B4E324C834D9;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Drawing.Imaging.EncoderParameter[]
struct EncoderParameterU5BU5D_tDCFC2CFB031D112C7B8A6717182AAAF8F0919964;
// System.Drawing.Imaging.ImageCodecInfo[]
struct ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Drawing.Bitmap
struct Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818;
// System.Runtime.InteropServices.COMException
struct COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Drawing.ComIStreamMarshaler
struct ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353;
// System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Drawing.Imaging.EncoderParameter
struct EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947;
// System.Drawing.Imaging.EncoderParameters
struct EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// System.Drawing.Graphics
struct Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Runtime.InteropServices.ICustomMarshaler
struct ICustomMarshaler_t6D46EF4FA72FD9690553E779A7E65CA1734ED5D2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Drawing.IMacContext
struct IMacContext_t32FF2484A664B809047926489D8CBC997651E492;
// System.Runtime.InteropServices.ComTypes.IStream
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t514D0B45A781ED18AB6A0DC6673A95B8359443F4;
// System.Drawing.Image
struct Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE;
// System.Drawing.Imaging.ImageCodecInfo
struct ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753;
// System.Drawing.Imaging.ImageCodecInfoPrivate
struct ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483;
// System.Drawing.ImageConverter
struct ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5;
// System.Drawing.Imaging.ImageFormat
struct ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68;
// System.Drawing.ImageFormatConverter
struct ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805;
// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5;
// System.IO.InternalBufferOverflowException
struct InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.LocalDataStoreSlot
struct LocalDataStoreSlot_tEE8D2C2A87B7336B3C04BFCF3963F1307EAA2499;
// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE;
// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Drawing.Imaging.Metafile
struct Metafile_t362C07807C6865534F34AD779F90A62993BBC514;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoLimitationAttribute
struct MonoLimitationAttribute_tF668DF964955B10DDD15E2BD0D654400F61CA420;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t843C50C4726516ABDF9DA3EE9D83F8E7F3361F3E;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Drawing.ToolboxBitmapAttribute
struct ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Drawing.ComIStreamMarshaler/AddRefDelegate
struct AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70;
// System.Drawing.ComIStreamMarshaler/CloneDelegate
struct CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E;
// System.Drawing.ComIStreamMarshaler/CommitDelegate
struct CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B;
// System.Drawing.ComIStreamMarshaler/CopyToDelegate
struct CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31;
// System.Drawing.ComIStreamMarshaler/IStreamInterface
struct IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78;
// System.Drawing.ComIStreamMarshaler/IStreamVtbl
struct IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E;
// System.Drawing.ComIStreamMarshaler/LockRegionDelegate
struct LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED;
// System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper
struct ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF;
// System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C;
// System.Drawing.ComIStreamMarshaler/QueryInterfaceDelegate
struct QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3;
// System.Drawing.ComIStreamMarshaler/ReadDelegate
struct ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20;
// System.Drawing.ComIStreamMarshaler/ReleaseDelegate
struct ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA;
// System.Drawing.ComIStreamMarshaler/RevertDelegate
struct RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD;
// System.Drawing.ComIStreamMarshaler/SeekDelegate
struct SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559;
// System.Drawing.ComIStreamMarshaler/SetSizeDelegate
struct SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE;
// System.Drawing.ComIStreamMarshaler/StatDelegate
struct StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453;
// System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate
struct UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6;
// System.Drawing.ComIStreamMarshaler/WriteDelegate
struct WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF;
// System.Drawing.GDIPlus/GdiPlusStreamHelper
struct GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989;
// System.Drawing.GDIPlus/StreamCloseDelegate
struct StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0;
// System.Drawing.GDIPlus/StreamGetBytesDelegate
struct StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0;
// System.Drawing.GDIPlus/StreamGetHeaderDelegate
struct StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B;
// System.Drawing.GDIPlus/StreamPutBytesDelegate
struct StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD;
// System.Drawing.GDIPlus/StreamSeekDelegate
struct StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3;
// System.Drawing.GDIPlus/StreamSizeDelegate
struct StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA;
// System.Drawing.Imaging.Metafile/MetafileHolder
struct MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3;

IL2CPP_EXTERN_C RuntimeClass* AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMacContext_t32FF2484A664B809047926489D8CBC997651E492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeDescriptor_tC36C76617F823DE4F887E1D17846077CE7B0C3D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeInitializationException_t4AC643E420681E6E92054934A1CB34CCA7C739A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02C235A23635A7A3E364118C13B56EF0FF0DCF3B;
IL2CPP_EXTERN_C String_t* _stringLiteral084B06C5EFE15CCE08C428F91621CC3869ADEB02;
IL2CPP_EXTERN_C String_t* _stringLiteral09A277DDF9548987D11011C6C97A7575497DCF88;
IL2CPP_EXTERN_C String_t* _stringLiteral0C316819BBF81B49A7CED59667D17E515450FAE8;
IL2CPP_EXTERN_C String_t* _stringLiteral0DAC15030F09F0806C5C607F0D4EFEA2E04AE593;
IL2CPP_EXTERN_C String_t* _stringLiteral0E02AEEB7817F5D5E5CEA7C7536011E9A6AAB185;
IL2CPP_EXTERN_C String_t* _stringLiteral0F2AB7AA4BA4C3B934929798F99ECB15F855090B;
IL2CPP_EXTERN_C String_t* _stringLiteral104B2BF97BF8700D6E3FD0393F91EE30FF19AA60;
IL2CPP_EXTERN_C String_t* _stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1;
IL2CPP_EXTERN_C String_t* _stringLiteral11679713B5E757DBB75F49E47FA67951A82A28F2;
IL2CPP_EXTERN_C String_t* _stringLiteral13A4D85D0CFE99844130B92E643058A0A13C75B6;
IL2CPP_EXTERN_C String_t* _stringLiteral16FACA4C782EB3F9F84305BDD0E9EC9B51FF0E61;
IL2CPP_EXTERN_C String_t* _stringLiteral16FC26AF1D5BB1B015014C18551A623693645E4D;
IL2CPP_EXTERN_C String_t* _stringLiteral1AA16DC4312E8DF629111D29C214BFCC9D25D25F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E4057D2ED3F59C91FEDE6B61FF759D4D33DE755;
IL2CPP_EXTERN_C String_t* _stringLiteral20E45B9AF94B60B9B2766AD6C3FAD4A7EDF566DB;
IL2CPP_EXTERN_C String_t* _stringLiteral214460584C0A7BBBA886334BDDC2EB6DD884D597;
IL2CPP_EXTERN_C String_t* _stringLiteral216BD1B219465997307A6644C66A0F9B82B445DF;
IL2CPP_EXTERN_C String_t* _stringLiteral21F75311F32CC1CC9DAE416D735F2DAC33296D63;
IL2CPP_EXTERN_C String_t* _stringLiteral24502739C12CE118459523371A9C649D953C1C96;
IL2CPP_EXTERN_C String_t* _stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB;
IL2CPP_EXTERN_C String_t* _stringLiteral26B038DCE7707119A50184B5A1FBD1194795D999;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA600376D9993247538794EC7CC6CB88410764F;
IL2CPP_EXTERN_C String_t* _stringLiteral304D7FECE6EA33036CBD5DDA14F1D5CB8A5B8E35;
IL2CPP_EXTERN_C String_t* _stringLiteral4102524D4315007127332E9642B2556F511C97BF;
IL2CPP_EXTERN_C String_t* _stringLiteral44055C491501B7E10D2CB80FC027949A27E74AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral4547321023A083AF14AB11B7FD10665C080C0150;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5211B9B0AB07C4444B8CF27FAD3754A067A96DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7;
IL2CPP_EXTERN_C String_t* _stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E;
IL2CPP_EXTERN_C String_t* _stringLiteral57B8F799F135EDD9846551886F96CF90033FEB73;
IL2CPP_EXTERN_C String_t* _stringLiteral5AFE9F291997515BCB8FC1F7933F0661E2BD8731;
IL2CPP_EXTERN_C String_t* _stringLiteral5E08617F25F836A10B34B6D51F697077F2D62C21;
IL2CPP_EXTERN_C String_t* _stringLiteral6ADB486296498A12076525C3B8966B1010F9F883;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB765E1A4CFA7431F0AEE357550B75206DCA244;
IL2CPP_EXTERN_C String_t* _stringLiteral719C3BD25886371F722A3FFD2C879F7A44629385;
IL2CPP_EXTERN_C String_t* _stringLiteral7296F67C31E30BD54B397080D09378518DA0B9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral753C0D3B903C24222E977BA5B941519CF82A8369;
IL2CPP_EXTERN_C String_t* _stringLiteral75BEBAFFE4BB25651CCA765BCA8B8F08E786BC1D;
IL2CPP_EXTERN_C String_t* _stringLiteral79E8E14C3E99BC99472C9201D231EA1D50599469;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE4890951AE9B2504E282153DE4DD019AAB0CC0;
IL2CPP_EXTERN_C String_t* _stringLiteral8051B86DDE7A61ACA1900B33CCB6BAADCB9E2A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral80B47E1EA640BD26EC692645AFF14AEF8B74E85D;
IL2CPP_EXTERN_C String_t* _stringLiteral829159308D0C1F60077E91E46D164501C168C399;
IL2CPP_EXTERN_C String_t* _stringLiteral862CAA0C64F1764E370EFC2E77881E05FAF16890;
IL2CPP_EXTERN_C String_t* _stringLiteral88EAC4C8110C4B7987C48478501596C60BB4B31D;
IL2CPP_EXTERN_C String_t* _stringLiteral89347F4E63C981471A31391F229824EB4C8531B7;
IL2CPP_EXTERN_C String_t* _stringLiteral89390FD6960B2A2E3106A59A2A03A7D35EDA7DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral9687D1FADE9E9D106AE460B3ED97160014D646FC;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC41786E774BB06538291027A8223CDF522916D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF3AA6DF5C1527C81E176ED8EEE7C804302CD83;
IL2CPP_EXTERN_C String_t* _stringLiteralA35856EA4BA27AB5EF41309A35A521140063943B;
IL2CPP_EXTERN_C String_t* _stringLiteralA9973C05FD673C2E344086E2DCAA23CFABA31718;
IL2CPP_EXTERN_C String_t* _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9438ABFACCD6F9AA2282F2B8A08FDBAC6C0B77;
IL2CPP_EXTERN_C String_t* _stringLiteralADB0CC63730DEF6485BBDCA1720E41E2B1F345DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0106A6491E69BC32C2E5D2100CF4F189A3C0F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB497C32287A00283EBE4BEA4C84AF6874AE5FB93;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D123B98CED46C8A93EB5109272E39C2E749A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05;
IL2CPP_EXTERN_C String_t* _stringLiteralBA82CAE6C5921BD66448C0734C22EB4A5D37F473;
IL2CPP_EXTERN_C String_t* _stringLiteralBB7FAB03836B2ED134B574DAD6481FBCA06A9936;
IL2CPP_EXTERN_C String_t* _stringLiteralC2AD36180E3360ABFC6D85451CCA7A8CA90834E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC309B44D06CC2114839905FBAA27DF2F7E8CCA6D;
IL2CPP_EXTERN_C String_t* _stringLiteralC3B3B7ACBC0F8F50E84C2570A76A848F78D95D56;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FEB1C53F6F0259781CA9B3C675187C34D3841D;
IL2CPP_EXTERN_C String_t* _stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralC70C70FAA8610CACC01D6EE43555D63260B9B6E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD102034CE0EBCE26F34CE52CF3359AB05696438D;
IL2CPP_EXTERN_C String_t* _stringLiteralD336651B9F15AD88BEA1ED1ECE724B1207325622;
IL2CPP_EXTERN_C String_t* _stringLiteralDCFC07C50E4128E902272D429272F65379145FF9;
IL2CPP_EXTERN_C String_t* _stringLiteralDEC9CEF3FE10F0CFF3049232BBE98B40A23119F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE0010C15408C6FFBCC8330E91AA558F5D5584347;
IL2CPP_EXTERN_C String_t* _stringLiteralE0350518DF49FA686EACE65EEC648E2CAF5EFE07;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE672AD32D384231C3946F0490A14E45FCDB678DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE6A063F3DB1F09543074B18398AAE27033446AFC;
IL2CPP_EXTERN_C String_t* _stringLiteralE8597F81660C1622A74C2F68C4CB7D8C69797D19;
IL2CPP_EXTERN_C String_t* _stringLiteralEB769CC5B1CE3FFB9133E0ECB36DDB03B09C923D;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE4381E1AF59B93A4E6B8412247118F5A4F20D5;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF9E8FB06C8B2DF8BA0D26FBFBA38F99D52BA2D0E;
IL2CPP_EXTERN_C String_t* _stringLiteralF9EC46EDAA5536671917F5822F6CA4AA34F7BE8C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GDIPlus_ProcessExit_m012C4709DC7575571F5E3AFE9CA6DD68F8079B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GdiPlusStreamHelper_StreamCloseImpl_m1549446A89AA72BB3C94DE5DDF7EBF3E19A24E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GdiPlusStreamHelper_StreamGetBytesImpl_m5158363D99DCD88FE4CCFDE8725545B00680CE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GdiPlusStreamHelper_StreamGetHeaderImpl_mCC4B8877CC61AF361233014E6573B7D7847A5B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GdiPlusStreamHelper_StreamPutBytesImpl_m9A8C520F6283606201CB042FA5D23CE8D22B6910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GdiPlusStreamHelper_StreamSeekImpl_m735D30896ADD1817532560DCAABA61E77446E127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GdiPlusStreamHelper_StreamSizeImpl_m6DC78D2C76A037DBF6DDE9D29CD5B7ED2CF8D4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Graphics_DrawImage_m58AF19E1658A6B8871FC5741E5F43A5544BD6744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Graphics_FromImage_m8D37CA5760E8C1A55AC19A64DDB953C7F480D406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageCodecInfo_GetImageEncoders_mFC7AEE9C5ED1F8FCC46520B37A8B1A8B24605D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageConverter_ConvertTo_mC14B42F9CDE5207A0653D3A90AAAF8D59514396E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Image_CloneFromStream_m6FCDB2D742E8D1BEF2844A0D83D14C6A6D8917EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Image_CreateFromHandle_m3BF3B0CA74BA848750D1C39F94C5FB6F632058F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Image_LoadFromStream_m1A279EF017B47602EF088E2AF2B208638A1CB455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_AddRef_mBB6F6BE5394D6B37FCDC544E7CAF723499943D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Clone_m474B079FEDB136C2E0B29C716A1DE192517507AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Commit_m4F1B88077F0C74CBE5241E44D05DEB28E1F2FBE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_CopyTo_m7B3E95442011430670AE612EE20297A39B3A85F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_LockRegion_mEE06CB112FB97FD62C0CDE533D9C171F612D4887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_OnShutdown_m5A3AFECAF2DC5B0D16ACC433ABF3871D4D565C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_QueryInterface_mF978DFBB321B67E156326F50E16E79DCD9A9D822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Read_m9B4C64BF0D12A02FADFF40D8D520379066CE7435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Revert_m8C5C986C22976DE4329AF008FD8C9B1723F3E17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Seek_m702D19EEBB3CDC61F0B6F992493B0CC4859FDBCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_SetSize_m6EFF1CDAE03F0FC8D26972FE7930D97223C3BF47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Stat_m28EDEEAE0A20304D59267457D339013F03A68681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_UnlockRegion_m13FF5B840F34AF1B31CBC2D24FCDD53348ABE4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ManagedToNativeWrapper_Write_m84C741B580561516EC4FCF30D63757513A516FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_m89F083A91B6ADF26D07E1C0BC69684A29065E0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisEncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_m72ACCB8E3BD9C2ACF68EC2030CD762B087423864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisIStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_mD79248D6BF4BB5DA24D3B0E5A3A43D0EBF578434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisIStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_m57C6D370F96257D3F07AD6B4E3EC0CAB790EFAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntPtr_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeArray_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UITypeEditor_t8E430CF4286C9E6364D79F9205E6125C920205E1_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke;;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EncoderParameterU5BU5D_tDCFC2CFB031D112C7B8A6717182AAAF8F0919964;
struct ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36;
struct ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1A31CCF034A606D5F05DD70B687FD5261E546C42 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Drawing.ComIStreamMarshaler
struct ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353  : public RuntimeObject
{
};

struct ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_StaticFields
{
	// System.Drawing.ComIStreamMarshaler System.Drawing.ComIStreamMarshaler::defaultInstance
	ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* ___defaultInstance_0;
};

// System.Drawing.ComIStreamWrapper
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E  : public RuntimeObject
{
	// System.IO.Stream System.Drawing.ComIStreamWrapper::baseStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseStream_0;
	// System.Int64 System.Drawing.ComIStreamWrapper::position
	int64_t ___position_1;
};

// System.Console
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E  : public RuntimeObject
{
};

struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields
{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053* ___cancel_event_5;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Drawing.Imaging.EncoderParameters
struct EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207  : public RuntimeObject
{
	// System.Drawing.Imaging.EncoderParameter[] System.Drawing.Imaging.EncoderParameters::_param
	EncoderParameterU5BU5D_tDCFC2CFB031D112C7B8A6717182AAAF8F0919964* ____param_0;
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

// System.Numerics.Hashing.HashHelpers
struct HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770  : public RuntimeObject
{
};

struct HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_StaticFields
{
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5  : public RuntimeObject
{
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::<Arguments>k__BackingField
	RuntimeObject* ___U3CArgumentsU3Ek__BackingField_0;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_1;
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::<MemberInfo>k__BackingField
	MemberInfo_t* ___U3CMemberInfoU3Ek__BackingField_2;
};

// System.LocalDataStoreSlot
struct LocalDataStoreSlot_tEE8D2C2A87B7336B3C04BFCF3963F1307EAA2499  : public RuntimeObject
{
	// System.LocalDataStoreMgr System.LocalDataStoreSlot::m_mgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___m_mgr_0;
	// System.Int32 System.LocalDataStoreSlot::m_slot
	int32_t ___m_slot_1;
	// System.Int64 System.LocalDataStoreSlot::m_cookie
	int64_t ___m_cookie_2;
};

// Locale
struct Locale_t39B562924FF1EE65E415C231A68FFA4CC806F085  : public RuntimeObject
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557  : public RuntimeObject
{
	// System.Version System.OperatingSystem::_version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_0;
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;
	// System.String System.OperatingSystem::_versionString
	String_t* ____versionString_3;
};

// SR
struct SR_tFBFE67B60CFBE1AD966E33559782764AFDDF7989  : public RuntimeObject
{
};

// System.Drawing.SafeNativeMethods
struct SafeNativeMethods_t8BC623BE5D8EFDD0FCA843161637B16DB2A9AB6B  : public RuntimeObject
{
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

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
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

// System.Diagnostics.Switch
struct Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412  : public RuntimeObject
{
	// System.Object System.Diagnostics.Switch::switchSettings
	RuntimeObject* ___switchSettings_0;
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_1;
	// System.String System.Diagnostics.Switch::displayName
	String_t* ___displayName_2;
	// System.Int32 System.Diagnostics.Switch::switchSetting
	int32_t ___switchSetting_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::initialized
	bool ___initialized_4;
	// System.Boolean System.Diagnostics.Switch::initializing
	bool ___initializing_5;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::switchValueString
	String_t* ___switchValueString_6;
	// System.String System.Diagnostics.Switch::defaultValue
	String_t* ___defaultValue_7;
	// System.Object System.Diagnostics.Switch::m_intializedLock
	RuntimeObject* ___m_intializedLock_8;
};

struct Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412_StaticFields
{
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.Switch::switches
	List_1_t99645769CE679BC507C0D8F0C572B4E324C834D9* ___switches_9;
	// System.Int32 System.Diagnostics.Switch::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_10;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// System.Drawing.Design.UITypeEditor
struct UITypeEditor_t8E430CF4286C9E6364D79F9205E6125C920205E1  : public RuntimeObject
{
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

// System.Drawing.ComIStreamMarshaler/IStreamVtbl
struct IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E  : public RuntimeObject
{
	// System.Drawing.ComIStreamMarshaler/QueryInterfaceDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::QueryInterface
	QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* ___QueryInterface_0;
	// System.Drawing.ComIStreamMarshaler/AddRefDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::AddRef
	AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* ___AddRef_1;
	// System.Drawing.ComIStreamMarshaler/ReleaseDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Release
	ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* ___Release_2;
	// System.Drawing.ComIStreamMarshaler/ReadDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Read
	ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* ___Read_3;
	// System.Drawing.ComIStreamMarshaler/WriteDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Write
	WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* ___Write_4;
	// System.Drawing.ComIStreamMarshaler/SeekDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Seek
	SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* ___Seek_5;
	// System.Drawing.ComIStreamMarshaler/SetSizeDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::SetSize
	SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* ___SetSize_6;
	// System.Drawing.ComIStreamMarshaler/CopyToDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::CopyTo
	CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* ___CopyTo_7;
	// System.Drawing.ComIStreamMarshaler/CommitDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Commit
	CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* ___Commit_8;
	// System.Drawing.ComIStreamMarshaler/RevertDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Revert
	RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* ___Revert_9;
	// System.Drawing.ComIStreamMarshaler/LockRegionDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::LockRegion
	LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* ___LockRegion_10;
	// System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::UnlockRegion
	UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* ___UnlockRegion_11;
	// System.Drawing.ComIStreamMarshaler/StatDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Stat
	StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* ___Stat_12;
	// System.Drawing.ComIStreamMarshaler/CloneDelegate System.Drawing.ComIStreamMarshaler/IStreamVtbl::Clone
	CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* ___Clone_13;
};
// Native definition for P/Invoke marshalling of System.Drawing.ComIStreamMarshaler/IStreamVtbl
struct IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
	Il2CppMethodPointer ___Read_3;
	Il2CppMethodPointer ___Write_4;
	Il2CppMethodPointer ___Seek_5;
	Il2CppMethodPointer ___SetSize_6;
	Il2CppMethodPointer ___CopyTo_7;
	Il2CppMethodPointer ___Commit_8;
	Il2CppMethodPointer ___Revert_9;
	Il2CppMethodPointer ___LockRegion_10;
	Il2CppMethodPointer ___UnlockRegion_11;
	Il2CppMethodPointer ___Stat_12;
	Il2CppMethodPointer ___Clone_13;
};
// Native definition for COM marshalling of System.Drawing.ComIStreamMarshaler/IStreamVtbl
struct IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
	Il2CppMethodPointer ___Read_3;
	Il2CppMethodPointer ___Write_4;
	Il2CppMethodPointer ___Seek_5;
	Il2CppMethodPointer ___SetSize_6;
	Il2CppMethodPointer ___CopyTo_7;
	Il2CppMethodPointer ___Commit_8;
	Il2CppMethodPointer ___Revert_9;
	Il2CppMethodPointer ___LockRegion_10;
	Il2CppMethodPointer ___UnlockRegion_11;
	Il2CppMethodPointer ___Stat_12;
	Il2CppMethodPointer ___Clone_13;
};

// System.Drawing.GDIPlus/GdiPlusStreamHelper
struct GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989  : public RuntimeObject
{
	// System.IO.Stream System.Drawing.GDIPlus/GdiPlusStreamHelper::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_0;
	// System.Drawing.GDIPlus/StreamGetHeaderDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::sghd
	StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* ___sghd_1;
	// System.Drawing.GDIPlus/StreamGetBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::sgbd
	StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* ___sgbd_2;
	// System.Drawing.GDIPlus/StreamSeekDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::skd
	StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* ___skd_3;
	// System.Drawing.GDIPlus/StreamPutBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::spbd
	StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* ___spbd_4;
	// System.Drawing.GDIPlus/StreamCloseDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::scd
	StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* ___scd_5;
	// System.Drawing.GDIPlus/StreamSizeDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::ssd
	StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* ___ssd_6;
	// System.Byte[] System.Drawing.GDIPlus/GdiPlusStreamHelper::start_buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___start_buf_7;
	// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::start_buf_pos
	int32_t ___start_buf_pos_8;
	// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::start_buf_len
	int32_t ___start_buf_len_9;
	// System.Byte[] System.Drawing.GDIPlus/GdiPlusStreamHelper::managedBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___managedBuf_10;
};

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3  : public RuntimeObject
{
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;
	// System.Array System.ComponentModel.TypeConverter/StandardValuesCollection::valueArray
	RuntimeArray* ___valueArray_1;
};

// System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
struct ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308  : public RuntimeObject
{
	// System.Drawing.ComIStreamMarshaler/ReleaseDelegate System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot::Release
	ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* ___Release_0;
};
// Native definition for P/Invoke marshalling of System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
struct ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_pinvoke
{
	Il2CppMethodPointer ___Release_0;
};
// Native definition for COM marshalling of System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
struct ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_com
{
	Il2CppMethodPointer ___Release_0;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Drawing.ImageConverter
struct ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Drawing.ImageFormatConverter
struct ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.MonoTODOAttribute
struct MonoTODOAttribute_t843C50C4726516ABDF9DA3EE9D83F8E7F3361F3E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Drawing.Rectangle
struct Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 
{
	// System.Int32 System.Drawing.Rectangle::x
	int32_t ___x_0;
	// System.Int32 System.Drawing.Rectangle::y
	int32_t ___y_1;
	// System.Int32 System.Drawing.Rectangle::width
	int32_t ___width_2;
	// System.Int32 System.Drawing.Rectangle::height
	int32_t ___height_3;
};

// System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 
{
	// System.String System.Runtime.Serialization.SerializationEntry::_name
	String_t* ____name_0;
	// System.Object System.Runtime.Serialization.SerializationEntry::_value
	RuntimeObject* ____value_1;
	// System.Type System.Runtime.Serialization.SerializationEntry::_type
	Type_t* ____type_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshaled_pinvoke
{
	char* ____name_0;
	Il2CppIUnknown* ____value_1;
	Type_t* ____type_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshaled_com
{
	Il2CppChar* ____name_0;
	Il2CppIUnknown* ____value_1;
	Type_t* ____type_2;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.Drawing.ToolboxBitmapAttribute
struct ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Drawing.Image System.Drawing.ToolboxBitmapAttribute::smallImage
	Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___smallImage_0;
	// System.Drawing.Image System.Drawing.ToolboxBitmapAttribute::bigImage
	Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___bigImage_1;
};

struct ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_StaticFields
{
	// System.Drawing.ToolboxBitmapAttribute System.Drawing.ToolboxBitmapAttribute::Default
	ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* ___Default_2;
};

// System.Diagnostics.TraceSwitch
struct TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4  : public Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_10;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_11;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_12;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_13;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_14;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_15;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_16;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_17;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_18;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_19;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_20;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_21;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_22;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* ___default_domain_9;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_10;
	Il2CppMethodPointer ___AssemblyResolve_11;
	Il2CppMethodPointer ___DomainUnload_12;
	Il2CppMethodPointer ___ProcessExit_13;
	Il2CppMethodPointer ___ResourceResolve_14;
	Il2CppMethodPointer ___TypeResolve_15;
	Il2CppMethodPointer ___UnhandledException_16;
	Il2CppMethodPointer ___FirstChanceException_17;
	Il2CppIUnknown* ____domain_manager_18;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_19;
	Il2CppIUnknown* ____activation_20;
	Il2CppIUnknown* ____applicationIdentity_21;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_22;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_10;
	Il2CppMethodPointer ___AssemblyResolve_11;
	Il2CppMethodPointer ___DomainUnload_12;
	Il2CppMethodPointer ___ProcessExit_13;
	Il2CppMethodPointer ___ResourceResolve_14;
	Il2CppMethodPointer ___TypeResolve_15;
	Il2CppMethodPointer ___UnhandledException_16;
	Il2CppMethodPointer ___FirstChanceException_17;
	Il2CppIUnknown* ____domain_manager_18;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_19;
	Il2CppIUnknown* ____activation_20;
	Il2CppIUnknown* ____applicationIdentity_21;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_22;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
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

// System.Drawing.Imaging.EncoderParameter
struct EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947  : public RuntimeObject
{
	// System.Guid System.Drawing.Imaging.EncoderParameter::_parameterGuid
	Guid_t ____parameterGuid_0;
	// System.Int32 System.Drawing.Imaging.EncoderParameter::_numberOfValues
	int32_t ____numberOfValues_1;
	// System.Drawing.Imaging.EncoderParameterValueType System.Drawing.Imaging.EncoderParameter::_parameterValueType
	int32_t ____parameterValueType_2;
	// System.IntPtr System.Drawing.Imaging.EncoderParameter::_parameterValue
	intptr_t ____parameterValue_3;
};
// Native definition for P/Invoke marshalling of System.Drawing.Imaging.EncoderParameter
struct EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_pinvoke
{
	Guid_t ____parameterGuid_0;
	int32_t ____numberOfValues_1;
	int32_t ____parameterValueType_2;
	intptr_t ____parameterValue_3;
};
// Native definition for COM marshalling of System.Drawing.Imaging.EncoderParameter
struct EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_com
{
	Guid_t ____parameterGuid_0;
	int32_t ____numberOfValues_1;
	int32_t ____parameterValueType_2;
	intptr_t ____parameterValue_3;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Drawing.GDIPlus
struct GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1  : public RuntimeObject
{
};

struct GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields
{
	// System.IntPtr System.Drawing.GDIPlus::Display
	intptr_t ___Display_0;
	// System.Boolean System.Drawing.GDIPlus::UseX11Drawable
	bool ___UseX11Drawable_1;
	// System.Boolean System.Drawing.GDIPlus::UseCarbonDrawable
	bool ___UseCarbonDrawable_2;
	// System.Boolean System.Drawing.GDIPlus::UseCocoaDrawable
	bool ___UseCocoaDrawable_3;
	// System.UInt64 System.Drawing.GDIPlus::GdiPlusToken
	uint64_t ___GdiPlusToken_4;
};

// System.Drawing.GdiplusStartupInput
struct GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 
{
	// System.UInt32 System.Drawing.GdiplusStartupInput::GdiplusVersion
	uint32_t ___GdiplusVersion_0;
	// System.IntPtr System.Drawing.GdiplusStartupInput::DebugEventCallback
	intptr_t ___DebugEventCallback_1;
	// System.Int32 System.Drawing.GdiplusStartupInput::SuppressBackgroundThread
	int32_t ___SuppressBackgroundThread_2;
	// System.Int32 System.Drawing.GdiplusStartupInput::SuppressExternalCodecs
	int32_t ___SuppressExternalCodecs_3;
};

// System.Drawing.GdiplusStartupOutput
struct GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE 
{
	// System.IntPtr System.Drawing.GdiplusStartupOutput::NotificationHook
	intptr_t ___NotificationHook_0;
	// System.IntPtr System.Drawing.GdiplusStartupOutput::NotificationUnhook
	intptr_t ___NotificationUnhook_1;
};

// System.Drawing.Graphics
struct Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Drawing.Graphics::nativeObject
	intptr_t ___nativeObject_1;
	// System.Drawing.IMacContext System.Drawing.Graphics::maccontext
	RuntimeObject* ___maccontext_2;
	// System.Boolean System.Drawing.Graphics::disposed
	bool ___disposed_3;
	// System.IntPtr System.Drawing.Graphics::deviceContextHdc
	intptr_t ___deviceContextHdc_4;
	// System.Drawing.Imaging.Metafile/MetafileHolder System.Drawing.Graphics::_metafileHolder
	MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* ____metafileHolder_5;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
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

// System.Drawing.Image
struct Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Drawing.Image::nativeObject
	intptr_t ___nativeObject_1;
	// System.IO.Stream System.Drawing.Image::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_2;
};

// System.Drawing.Imaging.ImageCodecInfo
struct ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753  : public RuntimeObject
{
	// System.Guid System.Drawing.Imaging.ImageCodecInfo::_clsid
	Guid_t ____clsid_0;
	// System.Guid System.Drawing.Imaging.ImageCodecInfo::_formatID
	Guid_t ____formatID_1;
	// System.String System.Drawing.Imaging.ImageCodecInfo::_codecName
	String_t* ____codecName_2;
	// System.String System.Drawing.Imaging.ImageCodecInfo::_dllName
	String_t* ____dllName_3;
	// System.String System.Drawing.Imaging.ImageCodecInfo::_formatDescription
	String_t* ____formatDescription_4;
	// System.String System.Drawing.Imaging.ImageCodecInfo::_filenameExtension
	String_t* ____filenameExtension_5;
	// System.String System.Drawing.Imaging.ImageCodecInfo::_mimeType
	String_t* ____mimeType_6;
	// System.Drawing.Imaging.ImageCodecFlags System.Drawing.Imaging.ImageCodecInfo::_flags
	int32_t ____flags_7;
	// System.Int32 System.Drawing.Imaging.ImageCodecInfo::_version
	int32_t ____version_8;
	// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::_signaturePatterns
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____signaturePatterns_9;
	// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::_signatureMasks
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____signatureMasks_10;
};

// System.Drawing.Imaging.ImageCodecInfoPrivate
#pragma pack(push, tp, 8)
struct ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483  : public RuntimeObject
{
	// System.Guid System.Drawing.Imaging.ImageCodecInfoPrivate::Clsid
	Guid_t ___Clsid_0;
	// System.Guid System.Drawing.Imaging.ImageCodecInfoPrivate::FormatID
	Guid_t ___FormatID_1;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::CodecName
	intptr_t ___CodecName_2;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::DllName
	intptr_t ___DllName_3;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::FormatDescription
	intptr_t ___FormatDescription_4;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::FilenameExtension
	intptr_t ___FilenameExtension_5;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::MimeType
	intptr_t ___MimeType_6;
	// System.Int32 System.Drawing.Imaging.ImageCodecInfoPrivate::Flags
	int32_t ___Flags_7;
	// System.Int32 System.Drawing.Imaging.ImageCodecInfoPrivate::Version
	int32_t ___Version_8;
	// System.Int32 System.Drawing.Imaging.ImageCodecInfoPrivate::SigCount
	int32_t ___SigCount_9;
	// System.Int32 System.Drawing.Imaging.ImageCodecInfoPrivate::SigSize
	int32_t ___SigSize_10;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::SigPattern
	intptr_t ___SigPattern_11;
	// System.IntPtr System.Drawing.Imaging.ImageCodecInfoPrivate::SigMask
	intptr_t ___SigMask_12;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of System.Drawing.Imaging.ImageCodecInfoPrivate
#pragma pack(push, tp, 8)
struct ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_pinvoke
{
	Guid_t ___Clsid_0;
	Guid_t ___FormatID_1;
	intptr_t ___CodecName_2;
	intptr_t ___DllName_3;
	intptr_t ___FormatDescription_4;
	intptr_t ___FilenameExtension_5;
	intptr_t ___MimeType_6;
	int32_t ___Flags_7;
	int32_t ___Version_8;
	int32_t ___SigCount_9;
	int32_t ___SigSize_10;
	intptr_t ___SigPattern_11;
	intptr_t ___SigMask_12;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of System.Drawing.Imaging.ImageCodecInfoPrivate
#pragma pack(push, tp, 8)
struct ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_com
{
	Guid_t ___Clsid_0;
	Guid_t ___FormatID_1;
	intptr_t ___CodecName_2;
	intptr_t ___DllName_3;
	intptr_t ___FormatDescription_4;
	intptr_t ___FilenameExtension_5;
	intptr_t ___MimeType_6;
	int32_t ___Flags_7;
	int32_t ___Version_8;
	int32_t ___SigCount_9;
	int32_t ___SigSize_10;
	intptr_t ___SigPattern_11;
	intptr_t ___SigMask_12;
};
#pragma pack(pop, tp)

// System.Drawing.Imaging.ImageFormat
struct ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68  : public RuntimeObject
{
	// System.Guid System.Drawing.Imaging.ImageFormat::guid
	Guid_t ___guid_0;
	// System.String System.Drawing.Imaging.ImageFormat::name
	String_t* ___name_1;
};

struct ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields
{
	// System.Object System.Drawing.Imaging.ImageFormat::locker
	RuntimeObject* ___locker_2;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::BmpImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___BmpImageFormat_3;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::EmfImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___EmfImageFormat_4;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::ExifImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___ExifImageFormat_5;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::GifImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___GifImageFormat_6;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::TiffImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___TiffImageFormat_7;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::PngImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___PngImageFormat_8;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::MemoryBmpImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___MemoryBmpImageFormat_9;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::IconImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___IconImageFormat_10;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::JpegImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___JpegImageFormat_11;
	// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::WmfImageFormat
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___WmfImageFormat_12;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.MonoLimitationAttribute
struct MonoLimitationAttribute_tF668DF964955B10DDD15E2BD0D654400F61CA420  : public MonoTODOAttribute_t843C50C4726516ABDF9DA3EE9D83F8E7F3361F3E
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Drawing.ComIStreamMarshaler/IStreamInterface
struct IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78  : public RuntimeObject
{
	// System.IntPtr System.Drawing.ComIStreamMarshaler/IStreamInterface::lpVtbl
	intptr_t ___lpVtbl_0;
	// System.IntPtr System.Drawing.ComIStreamMarshaler/IStreamInterface::gcHandle
	intptr_t ___gcHandle_1;
};
// Native definition for P/Invoke marshalling of System.Drawing.ComIStreamMarshaler/IStreamInterface
struct IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_pinvoke
{
	intptr_t ___lpVtbl_0;
	intptr_t ___gcHandle_1;
};
// Native definition for COM marshalling of System.Drawing.ComIStreamMarshaler/IStreamInterface
struct IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_com
{
	intptr_t ___lpVtbl_0;
	intptr_t ___gcHandle_1;
};

// System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C  : public RuntimeObject
{
	// System.IntPtr System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::comInterface
	intptr_t ___comInterface_0;
	// System.Drawing.ComIStreamMarshaler/IStreamVtbl System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::managedVtable
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* ___managedVtable_1;
};

// System.Drawing.Imaging.Metafile/MetafileHolder
struct MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3  : public RuntimeObject
{
	// System.Boolean System.Drawing.Imaging.Metafile/MetafileHolder::_disposed
	bool ____disposed_0;
	// System.IntPtr System.Drawing.Imaging.Metafile/MetafileHolder::_nativeImage
	intptr_t ____nativeImage_1;
};

// System.Drawing.Bitmap
struct Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818  : public Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE
{
};

// System.Drawing.Imaging.Metafile
struct Metafile_t362C07807C6865534F34AD779F90A62993BBC514  : public Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE
{
	// System.Drawing.Imaging.Metafile/MetafileHolder System.Drawing.Imaging.Metafile::_metafileHolder
	MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* ____metafileHolder_3;
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

// System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper
struct ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF  : public RuntimeObject
{
	// System.Runtime.InteropServices.ComTypes.IStream System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::managedInterface
	RuntimeObject* ___managedInterface_6;
	// System.IntPtr System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::comInterface
	intptr_t ___comInterface_7;
	// System.Runtime.InteropServices.GCHandle System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_8;
	// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::refCount
	int32_t ___refCount_9;
};

struct ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields
{
	// System.Guid System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::IID_IUnknown
	Guid_t ___IID_IUnknown_0;
	// System.Guid System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::IID_IStream
	Guid_t ___IID_IStream_1;
	// System.Reflection.MethodInfo System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::exceptionGetHResult
	MethodInfo_t* ___exceptionGetHResult_2;
	// System.Drawing.ComIStreamMarshaler/IStreamVtbl System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::managedVtable
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* ___managedVtable_3;
	// System.IntPtr System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::comVtable
	intptr_t ___comVtable_4;
	// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::vtableRefCount
	int32_t ___vtableRefCount_5;
};

// System.Drawing.SafeNativeMethods/Gdip
struct Gdip_t6FE648B549CEF8972069FA844859A40B36F95419  : public GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1
{
};

struct Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_StaticFields
{
	// System.Diagnostics.TraceSwitch System.Drawing.SafeNativeMethods/Gdip::s_gdiPlusInitialization
	TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4* ___s_gdiPlusInitialization_5;
	// System.IntPtr System.Drawing.SafeNativeMethods/Gdip::s_initToken
	intptr_t ___s_initToken_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.InternalBufferOverflowException
struct InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.TypeInitializationException
struct TypeInitializationException_t4AC643E420681E6E92054934A1CB34CCA7C739A1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeInitializationException::_typeName
	String_t* ____typeName_18;
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Drawing.ComIStreamMarshaler/AddRefDelegate
struct AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/CloneDelegate
struct CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/CommitDelegate
struct CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/CopyToDelegate
struct CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/LockRegionDelegate
struct LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/QueryInterfaceDelegate
struct QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/ReadDelegate
struct ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/ReleaseDelegate
struct ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/RevertDelegate
struct RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/SeekDelegate
struct SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/SetSizeDelegate
struct SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/StatDelegate
struct StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate
struct UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6  : public MulticastDelegate_t
{
};

// System.Drawing.ComIStreamMarshaler/WriteDelegate
struct WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF  : public MulticastDelegate_t
{
};

// System.Drawing.GDIPlus/StreamCloseDelegate
struct StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0  : public MulticastDelegate_t
{
};

// System.Drawing.GDIPlus/StreamGetBytesDelegate
struct StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0  : public MulticastDelegate_t
{
};

// System.Drawing.GDIPlus/StreamGetHeaderDelegate
struct StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B  : public MulticastDelegate_t
{
};

// System.Drawing.GDIPlus/StreamPutBytesDelegate
struct StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD  : public MulticastDelegate_t
{
};

// System.Drawing.GDIPlus/StreamSeekDelegate
struct StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3  : public MulticastDelegate_t
{
};

// System.Drawing.GDIPlus/StreamSizeDelegate
struct StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.Runtime.InteropServices.COMException
struct COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Drawing.Imaging.ImageCodecInfo[]
struct ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36  : public RuntimeArray
{
	ALIGN_FIELD (8) ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* m_Items[1];

	inline ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Drawing.Imaging.ImageFormat[]
struct ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E  : public RuntimeArray
{
	ALIGN_FIELD (8) ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* m_Items[1];

	inline ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Drawing.Imaging.EncoderParameter[]
struct EncoderParameterU5BU5D_tDCFC2CFB031D112C7B8A6717182AAAF8F0919964  : public RuntimeArray
{
	ALIGN_FIELD (8) EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* m_Items[1];

	inline EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_back(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke& marshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_cleanup(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke& marshaled);

// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Object>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisRuntimeObject_m85ECE039641C278A93C1CED59482821C3F44DF79_gshared (RuntimeObject* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::PtrToStructure<System.Object>(System.IntPtr,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_PtrToStructure_TisRuntimeObject_mC771601E3B60F1B7CFCD41548AF50DC5B4EBF975_gshared (intptr_t ___ptr0, RuntimeObject* ___structure1, const RuntimeMethod* method) ;

// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.MonoTODOAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_mED3EFB328E64CEADF9764E50BC9BC0E3DC526E50 (MonoTODOAttribute_t843C50C4726516ABDF9DA3EE9D83F8E7F3361F3E* __this, String_t* ___comment0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.TraceSwitch::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceSwitch__ctor_m775278D7946F29D7A7939D2048CA72DBCB0A5ABF (TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4* __this, String_t* ___displayName0, String_t* ___description1, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_ProcessExit(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_ProcessExit_m4B9FF3A7D5703882E1383D0DC2D8410B1D113333 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.AppDomain::IsDefaultAppDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppDomain_IsDefaultAppDomain_m77949196D162B4B3C5DF70214BFC0004693876F0 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_DomainUnload(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_DomainUnload_mC24E729ABD7550A0A1F018EBF215FDF03AA1064F (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.LocalDataStoreSlot System.Threading.Thread::GetNamedDataSlot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalDataStoreSlot_tEE8D2C2A87B7336B3C04BFCF3963F1307EAA2499* Thread_GetNamedDataSlot_m91D81D3E6E138228FAA9948022BE6F6BE43E579C (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::SetData(System.LocalDataStoreSlot,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_SetData_m5A8ACCC8D35E2E85EC81383A08FD69FD823D12FC (LocalDataStoreSlot_tEE8D2C2A87B7336B3C04BFCF3963F1307EAA2499* ___slot0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.SafeNativeMethods/Gdip::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gdip_get_Initialized_mD097123D3DC3700649360B388C34061EA301988E (const RuntimeMethod* method) ;
// System.Void System.Drawing.SafeNativeMethods/Gdip::ClearThreadData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Gdip_ClearThreadData_mB1307AEC461B1606931393C1036F16EA746BBD77 (const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_ProcessExit(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_ProcessExit_m656FEAFE4D0F34096A3AE3AE7C0A6D7F38BBE305 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_DomainUnload(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_DomainUnload_mCF2BC3E86CFB37871A9A4B797E64D7D4A425AE94 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.SafeNativeMethods/Gdip::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gdip_Shutdown_m24C188C5CCDA13D38E372FF9A24EE6483E6470C9 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String SR::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559 (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, String_t* ___message0, int32_t ___errorCode1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Rectangle::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m3FB90CAD0ECE9EA19BE7EFEDCC973808070497A7 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Rectangle::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Rectangle::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Rectangle::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Rectangle::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.Rectangle::Equals(System.Drawing.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Equals_mC876A9A25614D79581F23875D17F80D1C78910FD (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.Rectangle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Equals_m5B125B9AE09AE711F2218BB7BF9BFE97F054A250 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.Rectangle::op_Equality(System.Drawing.Rectangle,System.Drawing.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_op_Equality_m502490E5E78505CE41D65FF3B66339074464B0B2 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___left0, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mB8E75AA81F7543BB0B05069416C485A4B8E692D8 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Rectangle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_GetHashCode_m3B1DDBEEFEF70E4EEB5145960DED4C1A4574D574 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.Drawing.Rectangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rectangle_ToString_m20252CB5611CF6E9F46C82F7D8068FF76AB6C508 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Image::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.GDIPlus::RunningOnWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC (const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipCreateBitmapFromScan0(System.Int32,System.Int32,System.Int32,System.Drawing.Imaging.PixelFormat,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipCreateBitmapFromScan0_mB7998A79D6BF30C692AE8D051CCD4760759D98CD (int32_t ___width0, int32_t ___height1, int32_t ___stride2, int32_t ___format3, intptr_t ___scan04, intptr_t* ___bmp5, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus::CheckStatus(System.Drawing.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055 (int32_t ___status0, const RuntimeMethod* method) ;
// System.IntPtr System.Drawing.Image::InitFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Bitmap::.ctor(System.Int32,System.Int32,System.Drawing.Imaging.PixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m77483AD63F33C5EC9FD46ADFE7CE0439337D946E (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method) ;
// System.Drawing.Graphics System.Drawing.Graphics::FromImage(System.Drawing.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* Graphics_FromImage_m8D37CA5760E8C1A55AC19A64DDB953C7F480D406 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___image0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::DrawImage(System.Drawing.Image,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawImage_m58AF19E1658A6B8871FC5741E5F43A5544BD6744 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___image0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Dispose_m4C3EB694BF4DA33150724E6B3CA2B469383E350B (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Image::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_m2A14F8899FBEB3FEA9D31BC70611759F36F71BAA (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetInterface(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ManagedToNativeWrapper_GetInterface_m7C74F84F28FE7859AD4D02B0ECD06B8326429AE0 (RuntimeObject* ___managedInterface0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::ReleaseInterface(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_ReleaseInterface_mE237AF25A5B1B3F6803F14B482B2952947EFD48E (intptr_t ___comInterface0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.ComTypes.IStream System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::GetInterface(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeToManagedWrapper_GetInterface_m535C881DF137D0012EA03EEF5759A0233244EA93 (intptr_t ___comInterface0, bool ___outParam1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::ReleaseInterface(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_ReleaseInterface_m97353DD01B183A3D25D0C312CCE94DDD76A3A29E (RuntimeObject* ___managedInterface0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamMarshaler__ctor_m0CDD3B6F24F4F227C416C9B9D6013D760CAAAA65 (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_m56B512B27B74B56735C0BC4973B3E3C3BE817C68 (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, Type_t* ___returnType3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types4, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___modifiers5, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/IStreamVtbl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamVtbl__ctor_m78628BA5D767F1983997DA04A25FA7039A25A80A (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/QueryInterfaceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryInterfaceDelegate__ctor_m2BB1B484FCC82D82162D3F195AC393C118EECD5C (QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/AddRefDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddRefDelegate__ctor_m87857458CB755836DAB57483CF33257B5F3965DF (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/ReleaseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDelegate__ctor_mAF9DE93D06D3B2C957BD05FF8E8D83933091BC5E (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/ReadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadDelegate__ctor_mE35489D87E7C81EA9578ED3EF687E53F5D61525E (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/WriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m7F430000DBF129A640274F98DC3256182EFDEF29 (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/SeekDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeekDelegate__ctor_m65E3640CB8740F8EE7A09E351FC5F234709D8F98 (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/SetSizeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSizeDelegate__ctor_m4563575D151256F4B308DA88FE0E07BDE707132F (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/CopyToDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyToDelegate__ctor_m1B3BD4A6D074BF82F2F7A6DD583601DF497D89ED (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/CommitDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitDelegate__ctor_mACCD67FCE1D41BCE3C67AA5C40DACF6DFE2C2361 (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/RevertDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevertDelegate__ctor_mA447BE9B3F7F8F8CEE048BA13BDBAABC3C384AF7 (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/LockRegionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockRegionDelegate__ctor_mA9C98E32773055DE02EE17A3D74105BEF25FA987 (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockRegionDelegate__ctor_mE49816E213F56B09279297FCF5D2255C82885B83 (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/StatDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDelegate__ctor_m0ECE5FEA2F43DDC9E11C3CBB8CBFCD99FFAC3846 (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/CloneDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneDelegate__ctor_m989A5F60AB7C33DA7E30F67E9E95AD9E114972A5 (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::CreateVtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_CreateVtable_mC28C59EDADEFEA44FA4FE0948C24FD7377605296 (const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/IStreamInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamInterface__ctor_m9DAD8855D253AFE0F5A8F720F6E926E949CC4FEF (IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Drawing.ComIStreamMarshaler/IStreamInterface>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisIStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_mD79248D6BF4BB5DA24D3B0E5A3A43D0EBF578434 (IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78*, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisRuntimeObject_m85ECE039641C278A93C1CED59482821C3F44DF79_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_Dispose_m57151DF9AAFC79F9E2268F88C15030322F5E51DB (ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9 (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Boolean System.Environment::get_HasShutdownStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Environment_get_HasShutdownStarted_m1C31268C20C079988F412BC629BF3F6133CED761 (const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::DisposeVtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_DisposeVtable_m0ADA603CA4717542301838D199F6C5AF8FF5E176 (const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Drawing.ComIStreamMarshaler/IStreamVtbl>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisIStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_m57C6D370F96257D3F07AD6B4E3EC0CAB790EFAA0 (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E*, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisRuntimeObject_m85ECE039641C278A93C1CED59482821C3F44DF79_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Runtime.InteropServices.Marshal::DestroyStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_DestroyStructure_mF018860370A0B6267ED44F655211ECE8A2BB75F7 (intptr_t ___ptr0, Type_t* ___structuretype1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB (intptr_t ___this0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2 (intptr_t ___this0, const RuntimeMethod* method) ;
// System.IntPtr System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::GetUnderlyingInterface(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeToManagedWrapper_GetUnderlyingInterface_m6550CF3903D06C28E8BCF8DAD3A9AC0F0E71A541 (RuntimeObject* ___managedInterface0, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::.ctor(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper__ctor_m3AB08E1C20A5FF8A7657D0EED3547FE1D63C07B6 (ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* __this, RuntimeObject* ___managedInterface0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/ReleaseDelegate::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_inline (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___g0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteIntPtr(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteIntPtr_m3AA18248A64282B1CFB4FF0B13678B2E08DADA36 (intptr_t ___ptr0, intptr_t ___val1, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_AddRef_mBB6F6BE5394D6B37FCDC544E7CAF723499943D99 (intptr_t ___this0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetHRForException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4 (Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/AddRefDelegate::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_inline (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Dispose_m011D5262A8F6D5A1D8D4E2F98EA8AE662E0EBB51 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.ComTypes.IStream System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetUnderlyingInterface(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManagedToNativeWrapper_GetUnderlyingInterface_mF62E71F3146835F6F057BC68EB0B52FC0700BD30 (intptr_t ___comInterface0, bool ___outParam1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper__ctor_m523C445506389156DD24E858736BE3B68C671F21 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, intptr_t ___comInterface0, bool ___outParam1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.COMException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void COMException__ctor_mE33718BF000802BEF35486F1B49C349AE9A0545A (COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64* __this, String_t* ___message0, int32_t ___errorCode1, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/ReadDelegate::Invoke(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_inline (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC (int32_t ___result0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/WriteDelegate::Invoke(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_inline (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/SeekDelegate::Invoke(System.IntPtr,System.Int64,System.Int32,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_inline (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/SetSizeDelegate::Invoke(System.IntPtr,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_inline (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/CopyToDelegate::Invoke(System.IntPtr,System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_inline (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/CommitDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_inline (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/RevertDelegate::Invoke(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_inline (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/LockRegionDelegate::Invoke(System.IntPtr,System.Int64,System.Int64,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_inline (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate::Invoke(System.IntPtr,System.Int64,System.Int64,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_inline (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/StatDelegate::Invoke(System.IntPtr,System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_inline (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.ComIStreamMarshaler/CloneDelegate::Invoke(System.IntPtr,System.IntPtr&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_inline (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::SetSizeToPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_SetSizeToPosition_m7E749F5E2E6224C9A4F94C8E448C76B4789F9984 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt32(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED (intptr_t ___ptr0, int32_t ___val1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt64(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteInt64_m8B6CF74FD0EA67EED0F6D8A70FA5614036776E9B (intptr_t ___ptr0, int64_t ___val1, const RuntimeMethod* method) ;
// System.Void System.MarshalByRefObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538 (MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics__ctor_m8751B21EBD6D5770AF4C1A0E4D40BD319290D6ED (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, intptr_t ___nativeGraphics0, const RuntimeMethod* method) ;
// System.Drawing.Imaging.Metafile/MetafileHolder System.Drawing.Imaging.Metafile::AddMetafileHolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* Metafile_AddMetafileHolder_m7E209B7D853929C938D2B7BB5B02BC6178BC1010 (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::ReleaseHdc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ReleaseHdc_mEADCEDD175C56D736C46B76C1516C236BCF07D0C (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Flush_m00A055F63B67CB0BFEBF37394A82B79203F1CA38 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipDeleteGraphics(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipDeleteGraphics_mCF2B488FD6EC86B07796C1FC8A1AE0718EE82845 (intptr_t ___graphics0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::GraphicsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_GraphicsDisposed_m3FB3B887CC4814A2E47D685A1B936E08155F2396 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipDrawImageRectI(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipDrawImageRectI_m250D3B0DBA7459CB793519606E1EEC393D273855 (intptr_t ___graphics0, intptr_t ___image1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::Flush(System.Drawing.Drawing2D.FlushIntention)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Flush_m693FE85E23EC0BEB404AC130C623D47101383125 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, int32_t ___intention0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipFlush(System.IntPtr,System.Drawing.Drawing2D.FlushIntention)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipFlush_m171C6C81C218C8AE8C47E034D238725343AAAC49 (intptr_t ___graphics0, int32_t ___intention1, const RuntimeMethod* method) ;
// System.Drawing.Imaging.PixelFormat System.Drawing.Image::get_PixelFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_PixelFormat_mA200A8BEACEE8C00E652DF448FE95CA74231C65D (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m557C0E0FDBE23EE2270326E7A98328906830D43E (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageGraphicsContext(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageGraphicsContext_m1BB2456D11899DADC58586D400B30CD474578B95 (intptr_t ___image0, intptr_t* ___graphics1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::.ctor(System.IntPtr,System.Drawing.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics__ctor_mF8B63F2E788DA93AD679C7173684B6D6DD339DD2 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, intptr_t ___nativeGraphics0, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___image1, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.GDIPlus::RunningOnUnix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDIPlus_RunningOnUnix_m585A9B010A804CAA1ADA2AD203DD7569B69B0F70 (const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Image::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_Width_m3D9CC78692761DA6FC6422DA4C76D13A8AA0131A (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.Image::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_Height_mE57F164E7CCED4E4A5FF5312EA85888D08CBB442 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Drawing.Graphics::get_NativeObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Graphics_get_NativeObject_m93C84FBD86D236CEA21E4FC0475A5FB6AE9E18B2_inline (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipSetVisibleClip_linux(System.IntPtr,System.Drawing.Rectangle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipSetVisibleClip_linux_m9B6E33A033A836E83C5D3005906390D0097E92D0 (intptr_t ___graphics0, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* ___rect1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Graphics::ReleaseHdcInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ReleaseHdcInternal_m90F058CDD70D261332FF03166F715C518ABD0B06 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, intptr_t ___hdc0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipReleaseDC(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipReleaseDC_mEF1193E957D5508D5BAE8D19495DE0AC454E102F (intptr_t ___graphics0, intptr_t ___hdc1, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 SerializationInfoEnumerator_get_Current_m820863174CF73089751ACC36BC34DD3188A1929B (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Image::get_RawFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* Image_get_RawFormat_mDAC5F17B38A78F38CD7322835AD4D3342FE05818 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7 (const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Png()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA (const RuntimeMethod* method) ;
// System.Void System.Drawing.Image::Save(System.IO.Stream,System.Drawing.Imaging.ImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___format1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Drawing.Image System.Drawing.Image::LoadFromStream(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* Image_LoadFromStream_m1A279EF017B47602EF088E2AF2B208638A1CB455 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___keepAlive1, const RuntimeMethod* method) ;
// System.Drawing.Image System.Drawing.Image::CreateFromHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* Image_CreateFromHandle_m3BF3B0CA74BA848750D1C39F94C5FB6F632058F1 (intptr_t ___handle0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageType(System.IntPtr,System.Drawing.ImageType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageType_m79C4045AE19886B095EE887B0D481CCA76170ECF (intptr_t ___image0, int32_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Bitmap::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m7820E627830016DCC5D2DBAC39458764693A001C (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metafile__ctor_mDBBBDB08277EA2A22D2BC63D2B6020B74EC087F7 (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/GdiPlusStreamHelper::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GdiPlusStreamHelper__ctor_mFA010382BFA2FA3FCCA5FB7057DB866C92DD9FE8 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___s0, bool ___seekToOrigin1, const RuntimeMethod* method) ;
// System.Drawing.GDIPlus/StreamGetHeaderDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_GetHeaderDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* GdiPlusStreamHelper_get_GetHeaderDelegate_m9BF6D8161DA94429C1DC67B7851EB0B39B7F7374 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) ;
// System.Drawing.GDIPlus/StreamGetBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_GetBytesDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* GdiPlusStreamHelper_get_GetBytesDelegate_m0DEDE4119EED81AB00E69B11AD854971EB141886 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) ;
// System.Drawing.GDIPlus/StreamPutBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_PutBytesDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* GdiPlusStreamHelper_get_PutBytesDelegate_m26858076A600792D8ADB422C970A0F7E52813E98 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) ;
// System.Drawing.GDIPlus/StreamSeekDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_SeekDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* GdiPlusStreamHelper_get_SeekDelegate_mB27C48C626F0E3C3EAECBF88427080E2CE1102BB (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) ;
// System.Drawing.GDIPlus/StreamCloseDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_CloseDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* GdiPlusStreamHelper_get_CloseDelegate_m775A4C5523A4ADD0237F8E5E8DDF52881B04F8BF (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) ;
// System.Drawing.GDIPlus/StreamSizeDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_SizeDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* GdiPlusStreamHelper_get_SizeDelegate_m543318ED5776EB5D393FD1C9E5CF21EC670ACA3B (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipLoadImageFromDelegate_linux(System.Drawing.GDIPlus/StreamGetHeaderDelegate,System.Drawing.GDIPlus/StreamGetBytesDelegate,System.Drawing.GDIPlus/StreamPutBytesDelegate,System.Drawing.GDIPlus/StreamSeekDelegate,System.Drawing.GDIPlus/StreamCloseDelegate,System.Drawing.GDIPlus/StreamSizeDelegate,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipLoadImageFromDelegate_linux_m2F9AD7F666107D831721E3A4960D230BB7B4182D (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* ___getHeader0, StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* ___getBytes1, StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* ___putBytes2, StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* ___doSeek3, StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* ___close4, StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* ___size5, intptr_t* ___image6, const RuntimeMethod* method) ;
// System.Void System.Drawing.ComIStreamWrapper::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper__ctor_mC4D561E66F1C3CEE54DFD4629C68C3B26B47D0EC (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipLoadImageFromStream(System.Runtime.InteropServices.ComTypes.IStream,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipLoadImageFromStream_m5CF974C5CACD6EE4719B900528DFBDBD0C78172B (RuntimeObject* ___stream0, intptr_t* ___image1, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageCodecInfo[] System.Drawing.Imaging.ImageCodecInfo::GetImageEncoders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* ImageCodecInfo_GetImageEncoders_mFC7AEE9C5ED1F8FCC46520B37A8B1A8B24605D76 (const RuntimeMethod* method) ;
// System.Guid System.Drawing.Imaging.ImageFormat::get_Guid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_MemoryBmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F (const RuntimeMethod* method) ;
// System.Guid System.Drawing.Imaging.ImageCodecInfo::get_FormatID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ImageCodecInfo_get_FormatID_mAA66FAF124BEF7AF3CE6E785AB414C448D7FCDDB_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageCodecInfo System.Drawing.Image::findEncoderForFormat(System.Drawing.Imaging.ImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* Image_findEncoderForFormat_m3A04B80F8AF57B74009B50DDF6310EA2176139A9 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___format0, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Drawing.Image::Save(System.IO.Stream,System.Drawing.Imaging.ImageCodecInfo,System.Drawing.Imaging.EncoderParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Save_mE286F474C88B4142BFD91D8EBC3BB3720EFA2590 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* ___encoder1, EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* ___encoderParams2, const RuntimeMethod* method) ;
// System.Guid System.Drawing.Imaging.ImageCodecInfo::get_Clsid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ImageCodecInfo_get_Clsid_m0B4302897900CA76E4CBC75092352668BDD1F899_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Drawing.Imaging.EncoderParameters::ConvertToMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB (EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* __this, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipSaveImageToDelegate_linux(System.IntPtr,System.Drawing.GDIPlus/StreamGetBytesDelegate,System.Drawing.GDIPlus/StreamPutBytesDelegate,System.Drawing.GDIPlus/StreamSeekDelegate,System.Drawing.GDIPlus/StreamCloseDelegate,System.Drawing.GDIPlus/StreamSizeDelegate,System.Guid&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipSaveImageToDelegate_linux_m3853E297A0550CD7EC4DEB58EB6AF5F16DACFD20 (intptr_t ___image0, StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* ___getBytes1, StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* ___putBytes2, StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* ___doSeek3, StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* ___close4, StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* ___size5, Guid_t* ___encoderClsID6, intptr_t ___encoderParameters7, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipSaveImageToStream(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.ComTypes.IStream,System.Guid&,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipSaveImageToStream_m7A20EEA4E21C7D7BEAC6F1BEB71BC09D3D2077D4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___image0, RuntimeObject* ___stream1, Guid_t* ___clsidEncoder2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___encoderParams3, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageHeight(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageHeight_mFCA648FBB995DAC51A2F9D55D5A85DFFC61853DE (intptr_t ___image0, uint32_t* ___height1, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImagePixelFormat(System.IntPtr,System.Drawing.Imaging.PixelFormat&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImagePixelFormat_m7F933DD50BBE97ECEAB4F331DFC5E144C841D176 (intptr_t ___image0, int32_t* ___format1, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageRawFormat(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageRawFormat_mD3F028410935AF1DEC46A100AD68DBFEAFE8C3B2 (intptr_t ___image0, Guid_t* ___format1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageFormat::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFormat__ctor_m4C8FEA14886E078A2993BF64DEC24A740FB0AA31 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, Guid_t ___guid0, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageWidth(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageWidth_mD547696BE4DD53ADD0104B834A34B2618DB3EFDF (intptr_t ___image0, uint32_t* ___width1, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipDisposeImage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipDisposeImage_mD4A43CCBD9933778B73B5AA371CF5E7CF5CACC64 (intptr_t ___image0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Object System.Drawing.Image::CloneFromStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Image_CloneFromStream_m6FCDB2D742E8D1BEF2844A0D83D14C6A6D8917EB (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Drawing.Image::get_NativeObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Image_get_NativeObject_m7B065018E0ADD1DFD25346A728A586F2667AFC76_inline (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdipCloneImage(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipCloneImage_m74D35B0CE164CABA8C28353F61E0C94620A99554 (intptr_t ___image0, intptr_t* ___imageclone1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Bitmap::.ctor(System.IntPtr,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_mFABBA6E70AE4F310CAB91F431029B92B6D54EB6E (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, intptr_t ___ptr0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile::.ctor(System.IntPtr,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metafile__ctor_m6313C8851025E8502761E9663EFE28A829FF1C3B (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, intptr_t ___ptr0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, const RuntimeMethod* method) ;
// System.Drawing.Image System.Drawing.Image::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* Image_FromStream_mAF25E27B987F204F82141462B314BCA7220FFB31 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverter_CanConvertFrom_m5E04D8BFD5D73042127767BD65B6434DAAEC2E53 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, RuntimeObject* ___context0, Type_t* ___sourceType1, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverter_CanConvertTo_m959B290C863DDFBDD575AF3236B0A17E02E44013 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, RuntimeObject* ___context0, Type_t* ___destinationType1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Bmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Emf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204 (const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Exif()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA (const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Gif()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF (const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Jpeg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4 (const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Tiff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B (const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Wmf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C (const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009 (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceDescriptor__ctor_m4A88597D681C8A8A9551AB318F8CBB47D49BEC57 (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* __this, MemberInfo_t* ___member0, RuntimeObject* ___arguments1, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types0, const RuntimeMethod* method) ;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ConvertTo_m5D4785A320B7ED351B677E28B77171F70E389B96 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, Type_t* ___destinationType3, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter/StandardValuesCollection::.ctor(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardValuesCollection__ctor_m9049046DA81FD7B6FE279E063A43DC9B1D3B26B0 (StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// System.Drawing.Image System.Drawing.ToolboxBitmapAttribute::GetImageFromResource(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ToolboxBitmapAttribute_GetImageFromResource_mAABD8D76A88B096C5C3277C9703BFA7E7BBEC5B8 (Type_t* ___t0, String_t* ___imageName1, bool ___large2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Drawing.Bitmap::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m7A68C2F22E77C511C24EE1713A25A73098403BD7 (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___useIcm1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Bitmap::.ctor(System.Drawing.Image,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_mF914CA5523FC0FC1A364198FEE6227A06E3BA5E1 (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___original0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) ;
// System.Void System.Drawing.ToolboxBitmapAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolboxBitmapAttribute__ctor_mE35FE31C94D0EC258644619586FC0F9C7D3FFD0A (ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* __this, const RuntimeMethod* method) ;
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7 (const RuntimeMethod* method) ;
// System.Void System.GC::WaitForPendingFinalizers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_WaitForPendingFinalizers_mDA0CDDC02AA32D50A9EB3752FA50B981C40787FB (const RuntimeMethod* method) ;
// System.OperatingSystem System.Environment::get_OSVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66 (const RuntimeMethod* method) ;
// System.PlatformID System.OperatingSystem::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) ;
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A (String_t* ___variable0, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.GDIPlus::uname(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_uname_m6151FCC8883944AF1454BFA45B0412F2D46977D0 (intptr_t ___buf0, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Drawing.GdiplusStartupInput System.Drawing.GdiplusStartupInput::MakeGdiplusStartupInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 GdiplusStartupInput_MakeGdiplusStartupInput_m68EAE8860755C2CC5024D7E61E495A5C7872B95D (const RuntimeMethod* method) ;
// System.Drawing.GdiplusStartupOutput System.Drawing.GdiplusStartupOutput::MakeGdiplusStartupOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE GdiplusStartupOutput_MakeGdiplusStartupOutput_m6F87218343D25FF34AE01141D0E8A959FD2E356E (const RuntimeMethod* method) ;
// System.Drawing.Status System.Drawing.GDIPlus::GdiplusStartup(System.UInt64&,System.Drawing.GdiplusStartupInput&,System.Drawing.GdiplusStartupOutput&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdiplusStartup_m2F23E9377A3A8E3AAAF3ECA4D362CA252F95456B (uint64_t* ___token0, GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1* ___input1, GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE* ___output2, const RuntimeMethod* method) ;
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline (const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Void System.MemberAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAccessException__ctor_mC0B4A3FB8F14C8E93326AFF606A96CFBC5661E5C (MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.InternalBufferOverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalBufferOverflowException__ctor_m2A29F6DBAF343AEBAA64563A4095822AA0B56BF8 (InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6 (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/StreamGetHeaderDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamGetHeaderDelegate__ctor_m4D7BAE2630A0F07F62921DE8E7715404FE86C80D (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/StreamGetBytesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamGetBytesDelegate__ctor_m28D518D40F24508FAD68BBA29F2046D7C0FC7C79 (StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/StreamSeekDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSeekDelegate__ctor_mC6347CA1F79F865457829E43FBE4AEBDD9126228 (StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/StreamPutBytesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamPutBytesDelegate__ctor_mB60957EE64990B8F2B824D18599103956B45F126 (StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/StreamCloseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamCloseDelegate__ctor_mEA042E304AC2B2D4F9AF6CA9680F08232AB4A181 (StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.GDIPlus/StreamSizeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSizeDelegate__ctor_m251E6C303DAF5DFEAA03758D2ADBFBF3A72A8E87 (StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.EncoderParameter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderParameter_Dispose_m225C95324E8FE4663E1868F1C0A2F0693BA22E69 (EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Exception System.Drawing.SafeNativeMethods/Gdip::StatusException(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Gdip_StatusException_mD30EC7E61042064F8969D20703423D558395BEE8 (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Drawing.Imaging.EncoderParameter>(T,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisEncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_m72ACCB8E3BD9C2ACF68EC2030CD762B087423864 (EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947*, intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisRuntimeObject_m85ECE039641C278A93C1CED59482821C3F44DF79_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Int32 System.Drawing.GDIPlus::GdipGetImageEncodersSize(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageEncodersSize_m77E87222F25EC6A77F48E764FEA15B14ECB0B303 (int32_t* ___encoderNums0, int32_t* ___arraySize1, const RuntimeMethod* method) ;
// System.Int32 System.Drawing.GDIPlus::GdipGetImageEncoders(System.Int32,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageEncoders_m0651ACCFDBD76A70FF047478B0E7723CDCF46F9B (int32_t ___encoderNums0, int32_t ___arraySize1, intptr_t ___encoders2, const RuntimeMethod* method) ;
// System.Drawing.Imaging.ImageCodecInfo[] System.Drawing.Imaging.ImageCodecInfo::ConvertFromMemory(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* ImageCodecInfo_ConvertFromMemory_m4013F65FAE9902F17558E52330BDB52FEAEDB822 (intptr_t ___memoryStart0, int32_t ___numCodecs1, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfoPrivate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfoPrivate__ctor_m58580204C69F19254EA093269B73919A595AF55E (ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::PtrToStructure<System.Drawing.Imaging.ImageCodecInfoPrivate>(System.IntPtr,T)
inline void Marshal_PtrToStructure_TisImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_m89F083A91B6ADF26D07E1C0BC69684A29065E0C5 (intptr_t ___ptr0, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* ___structure1, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483*, const RuntimeMethod*))Marshal_PtrToStructure_TisRuntimeObject_mC771601E3B60F1B7CFCD41548AF50DC5B4EBF975_gshared)(___ptr0, ___structure1, method);
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo__ctor_mAAF1B20938221422F58BEC01C7A492C0C75FEAAF (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_Clsid(System.Guid)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Clsid_mC16320A24C90BEF23972A1BACD81C0915B9AAB92_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_FormatID(System.Guid)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FormatID_m97551D59F457D48FFEFBB6B4DCA13BF72DB91D23_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_CodecName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_CodecName_m39279E9CC908B7CDCDD683044394C4A8B6536FF4_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_DllName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_DllName_mDE0AD63F9DBC28EAFD3A4A52104D8669AA126FC3_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_FormatDescription(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FormatDescription_mC861A45BE4602C80AFD764E628CA86DF66F273CD_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_FilenameExtension(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FilenameExtension_mAAE81EA232FDE144E4E51A75D7B9B58F83800E23_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_MimeType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_MimeType_m201C83D753E6DC95F455407BCCDB6D3F23DE1FE8_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_Flags(System.Drawing.Imaging.ImageCodecFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Flags_m3697AA16CD1E226F62092D653A61C8A502498109_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_Version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Version_m39108B3C7AB3AF6FFB70A5A7FC82F54FE7A146C9_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_SignaturePatterns(System.Byte[][])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_SignaturePatterns_mE337F44D5265F54CF0E8CA6EC5EB3BC323585798_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_SignatureMasks(System.Byte[][])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_SignatureMasks_m4798FDA3C4ECF33969C9F4C2C154C2FEAA6B466A_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) ;
// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::get_SignaturePatterns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ImageCodecInfo_get_SignaturePatterns_mEAB0E0EA776A5374B558717EB6BFDAA6F6404F9F_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) ;
// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::get_SignatureMasks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ImageCodecInfo_get_SignatureMasks_m645BE10A6D750E7C58FFE4CB7CBAB59D741DB982_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.ImageFormat::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, String_t* ___name0, String_t* ___guid1, const RuntimeMethod* method) ;
// System.Boolean System.Drawing.Imaging.Metafile/MetafileHolder::get_Disposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MetafileHolder_get_Disposed_m30CF8FD2131AFD089C40230D322E40B46991C597_inline (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder__ctor_m2F0E8BA0F314544C7E0BD1DFAAE96163320C108E (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::MetafileDisposed(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetafileHolder_MetafileDisposed_m585BC97DDE55AB7C5D09352A58E4E736498B9008_inline (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, intptr_t ___nativeImage0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Image::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Dispose_mE0CB2A3C3CDE7AF58B7616FA3F177CFB1595DEFD (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_Dispose_m85434BF533B16B8B718844CBF325318D2C1D99A2 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_Dispose_mFC00C73656D163CB8675CBCE9C9058DE8C9F4B87 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeDescriptor::AddEditorTable(System.Type,System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptor_AddEditorTable_m98A7C2CD0FFF377C169891B82F91C1A084E27D72 (Type_t* ___editorBaseType0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___table1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdiplusStartup(uint64_t*, GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1*, GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipDeleteGraphics(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipReleaseDC(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipDrawImageRectI(intptr_t, intptr_t, int32_t, int32_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipFlush(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipCreateBitmapFromScan0(int32_t, int32_t, int32_t, int32_t, intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipLoadImageFromStream(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipSaveImageToStream(void*, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*, Guid_t*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipCloneImage(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipDisposeImage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageType(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageHeight(intptr_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImagePixelFormat(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageRawFormat(intptr_t, Guid_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageWidth(intptr_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageGraphicsContext(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageEncodersSize(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipGetImageEncoders(int32_t, int32_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipSetVisibleClip_linux(intptr_t, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipLoadImageFromDelegate_linux(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GdipSaveImageToDelegate_linux(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Guid_t*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL uname(intptr_t);
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
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m557C0E0FDBE23EE2270326E7A98328906830D43E (String_t* ___msg0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___msg0;
		return L_0;
	}
}
// System.String Locale::GetText(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364 (String_t* ___fmt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
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
// System.String SR::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
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
// System.Void System.MonoTODOAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_mED3EFB328E64CEADF9764E50BC9BC0E3DC526E50 (MonoTODOAttribute_t843C50C4726516ABDF9DA3EE9D83F8E7F3361F3E* __this, String_t* ___comment0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___comment0;
		__this->___comment_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comment_0), (void*)L_0);
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
// System.Void System.MonoLimitationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoLimitationAttribute__ctor_m27C330A33C2B61DD429F521CC913B3504AC53507 (MonoLimitationAttribute_tF668DF964955B10DDD15E2BD0D654400F61CA420* __this, String_t* ___comment0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___comment0;
		MonoTODOAttribute__ctor_mED3EFB328E64CEADF9764E50BC9BC0E3DC526E50(__this, L_0, NULL);
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
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mB8E75AA81F7543BB0B05069416C485A4B8E692D8 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___h10;
		int32_t L_1 = ___h10;
		int32_t L_2 = ___h10;
		int32_t L_3 = ___h21;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(L_0<<5))|((int32_t)((uint32_t)L_1>>((int32_t)27))))), L_2))^L_3));
	}
}
// System.Void System.Numerics.Hashing.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_mA1680F8D1B4E1C62B6660FF8F4CB5852ED393F99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&V_0), NULL);
		((HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_il2cpp_TypeInfo_var))->___RandomSeed_0 = L_1;
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
// System.Void System.Drawing.SafeNativeMethods/Gdip::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gdip__cctor_mB10136A6BD2D49A7BBBD89F5DB30FC793E9410FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2AD36180E3360ABFC6D85451CCA7A8CA90834E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE4381E1AF59B93A4E6B8412247118F5A4F20D5);
		s_Il2CppMethodInitialized = true;
	}
	AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* V_0 = NULL;
	{
		TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4* L_0 = (TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4*)il2cpp_codegen_object_new(TraceSwitch_t199A0DB240149B5CDCF2754FC0E11CCBF51224B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TraceSwitch__ctor_m775278D7946F29D7A7939D2048CA72DBCB0A5ABF(L_0, _stringLiteralC2AD36180E3360ABFC6D85451CCA7A8CA90834E0, _stringLiteralEBE4381E1AF59B93A4E6B8412247118F5A4F20D5, NULL);
		((Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_StaticFields*)il2cpp_codegen_static_fields_for(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var))->___s_gdiPlusInitialization_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_StaticFields*)il2cpp_codegen_static_fields_for(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var))->___s_gdiPlusInitialization_5), (void*)L_0);
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(1, NULL);
		((Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_StaticFields*)il2cpp_codegen_static_fields_for(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var))->___s_initToken_6 = L_1;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		V_0 = L_2;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_3 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_4, NULL, (intptr_t)((void*)Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AppDomain_add_ProcessExit_m4B9FF3A7D5703882E1383D0DC2D8410B1D113333(L_3, L_4, NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = AppDomain_IsDefaultAppDomain_m77949196D162B4B3C5DF70214BFC0004693876F0(L_5, NULL);
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_7 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_8, NULL, (intptr_t)((void*)Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		AppDomain_add_DomainUnload_mC24E729ABD7550A0A1F018EBF215FDF03AA1064F(L_7, L_8, NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Boolean System.Drawing.SafeNativeMethods/Gdip::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gdip_get_Initialized_mD097123D3DC3700649360B388C34061EA301988E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_StaticFields*)il2cpp_codegen_static_fields_for(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var))->___s_initToken_6;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.Drawing.SafeNativeMethods/Gdip::ClearThreadData()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Gdip_ClearThreadData_mB1307AEC461B1606931393C1036F16EA746BBD77 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7296F67C31E30BD54B397080D09378518DA0B9E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocalDataStoreSlot_tEE8D2C2A87B7336B3C04BFCF3963F1307EAA2499* L_0;
		L_0 = Thread_GetNamedDataSlot_m91D81D3E6E138228FAA9948022BE6F6BE43E579C(_stringLiteral7296F67C31E30BD54B397080D09378518DA0B9E7, NULL);
		Thread_SetData_m5A8ACCC8D35E2E85EC81383A08FD69FD823D12FC(L_0, NULL, NULL);
		return;
	}
}
// System.Void System.Drawing.SafeNativeMethods/Gdip::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gdip_Shutdown_m24C188C5CCDA13D38E372FF9A24EE6483E6470C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Gdip_get_Initialized_mD097123D3DC3700649360B388C34061EA301988E(NULL);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		Gdip_ClearThreadData_mB1307AEC461B1606931393C1036F16EA746BBD77(NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		V_0 = L_1;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, NULL, (intptr_t)((void*)Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AppDomain_remove_ProcessExit_m656FEAFE4D0F34096A3AE3AE7C0A6D7F38BBE305(L_2, L_3, NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = AppDomain_IsDefaultAppDomain_m77949196D162B4B3C5DF70214BFC0004693876F0(L_4, NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_6 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, NULL, (intptr_t)((void*)Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		AppDomain_remove_DomainUnload_mCF2BC3E86CFB37871A9A4B797E64D7D4A425AE94(L_6, L_7, NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void System.Drawing.SafeNativeMethods/Gdip::OnProcessExit(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gdip_OnProcessExit_m1BC6AF2E4774309551204FCF42C66514B1F71130 (RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var);
		Gdip_Shutdown_m24C188C5CCDA13D38E372FF9A24EE6483E6470C9(NULL);
		return;
	}
}
// System.Exception System.Drawing.SafeNativeMethods/Gdip::StatusException(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Gdip_StatusException_mD30EC7E61042064F8969D20703423D558395BEE8 (int32_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C316819BBF81B49A7CED59667D17E515450FAE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E02AEEB7817F5D5E5CEA7C7536011E9A6AAB185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304D7FECE6EA33036CBD5DDA14F1D5CB8A5B8E35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5211B9B0AB07C4444B8CF27FAD3754A067A96DFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B8F799F135EDD9846551886F96CF90033FEB73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AFE9F291997515BCB8FC1F7933F0661E2BD8731);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ADB486296498A12076525C3B8966B1010F9F883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB765E1A4CFA7431F0AEE357550B75206DCA244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753C0D3B903C24222E977BA5B941519CF82A8369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75BEBAFFE4BB25651CCA765BCA8B8F08E786BC1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EE4890951AE9B2504E282153DE4DD019AAB0CC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89347F4E63C981471A31391F229824EB4C8531B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB9438ABFACCD6F9AA2282F2B8A08FDBAC6C0B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC309B44D06CC2114839905FBAA27DF2F7E8CCA6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD336651B9F15AD88BEA1ED1ECE724B1207325622);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0350518DF49FA686EACE65EEC648E2CAF5EFE07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE672AD32D384231C3946F0490A14E45FCDB678DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6A063F3DB1F09543074B18398AAE27033446AFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8597F81660C1622A74C2F68C4CB7D8C69797D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9EC46EDAA5536671917F5822F6CA4AA34F7BE8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___status0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_008c;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_00b6;
			}
			case 5:
			{
				goto IL_00cb;
			}
			case 6:
			{
				goto IL_00e0;
			}
			case 7:
			{
				goto IL_00fa;
			}
			case 8:
			{
				goto IL_010f;
			}
			case 9:
			{
				goto IL_0129;
			}
			case 10:
			{
				goto IL_013e;
			}
			case 11:
			{
				goto IL_0153;
			}
			case 12:
			{
				goto IL_016d;
			}
			case 13:
			{
				goto IL_01ac;
			}
			case 14:
			{
				goto IL_01ca;
			}
			case 15:
			{
				goto IL_01f0;
			}
			case 16:
			{
				goto IL_0205;
			}
			case 17:
			{
				goto IL_021f;
			}
			case 18:
			{
				goto IL_0182;
			}
			case 19:
			{
				goto IL_0197;
			}
		}
	}
	{
		goto IL_0239;
	}

IL_005d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_2;
		L_2 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralE0350518DF49FA686EACE65EEC648E2CAF5EFE07, L_1, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_3 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_3, L_2, ((int32_t)-2147467259), NULL);
		return L_3;
	}

IL_0077:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_5;
		L_5 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralAB9438ABFACCD6F9AA2282F2B8A08FDBAC6C0B77, L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		return L_6;
	}

IL_008c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_8;
		L_8 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralD336651B9F15AD88BEA1ED1ECE724B1207325622, L_7, NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_9 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A(L_9, L_8, NULL);
		return L_9;
	}

IL_00a1:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_11;
		L_11 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral89347F4E63C981471A31391F229824EB4C8531B7, L_10, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		return L_12;
	}

IL_00b6:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_14;
		L_14 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral57B8F799F135EDD9846551886F96CF90033FEB73, L_13, NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_15 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A(L_15, L_14, NULL);
		return L_15;
	}

IL_00cb:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16;
		L_16 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_17;
		L_17 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral6ADB486296498A12076525C3B8966B1010F9F883, L_16, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_18 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_18, L_17, NULL);
		return L_18;
	}

IL_00e0:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
		L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_20;
		L_20 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralE0350518DF49FA686EACE65EEC648E2CAF5EFE07, L_19, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_21 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_21, L_20, ((int32_t)-2147467259), NULL);
		return L_21;
	}

IL_00fa:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22;
		L_22 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_23;
		L_23 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralF9EC46EDAA5536671917F5822F6CA4AA34F7BE8C, L_22, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_24 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_24, L_23, NULL);
		return L_24;
	}

IL_010f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25;
		L_25 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_26;
		L_26 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral0E02AEEB7817F5D5E5CEA7C7536011E9A6AAB185, L_25, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_27 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_27, L_26, ((int32_t)-2147467260), NULL);
		return L_27;
	}

IL_0129:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28;
		L_28 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_29;
		L_29 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral304D7FECE6EA33036CBD5DDA14F1D5CB8A5B8E35, L_28, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_30 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_30, L_29, NULL);
		return L_30;
	}

IL_013e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31;
		L_31 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_32;
		L_32 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral6CB765E1A4CFA7431F0AEE357550B75206DCA244, L_31, NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_33 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_33, L_32, NULL);
		return L_33;
	}

IL_0153:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34;
		L_34 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_35;
		L_35 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralE6A063F3DB1F09543074B18398AAE27033446AFC, L_34, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_36 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_36, L_35, ((int32_t)-2147024891), NULL);
		return L_36;
	}

IL_016d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37;
		L_37 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_38;
		L_38 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral7EE4890951AE9B2504E282153DE4DD019AAB0CC0, L_37, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_39 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_39, L_38, NULL);
		return L_39;
	}

IL_0182:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40;
		L_40 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_41;
		L_41 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralE8597F81660C1622A74C2F68C4CB7D8C69797D19, L_40, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_42, L_41, NULL);
		return L_42;
	}

IL_0197:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43;
		L_43 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_44;
		L_44 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral753C0D3B903C24222E977BA5B941519CF82A8369, L_43, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_45 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_45, L_44, NULL);
		return L_45;
	}

IL_01ac:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		String_t* L_48;
		L_48 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral5211B9B0AB07C4444B8CF27FAD3754A067A96DFB, L_47, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_49 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_49, L_48, NULL);
		return L_49;
	}

IL_01ca:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_50;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		String_t* L_53;
		L_53 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral75BEBAFFE4BB25651CCA765BCA8B8F08E786BC1D, L_52, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_54 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_54, L_53, NULL);
		return L_54;
	}

IL_01f0:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55;
		L_55 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_56;
		L_56 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral5AFE9F291997515BCB8FC1F7933F0661E2BD8731, L_55, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_57 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_57, L_56, NULL);
		return L_57;
	}

IL_0205:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58;
		L_58 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_59;
		L_59 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralE672AD32D384231C3946F0490A14E45FCDB678DC, L_58, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_60 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_60, L_59, ((int32_t)-2147467259), NULL);
		return L_60;
	}

IL_021f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61;
		L_61 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_62;
		L_62 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteral0C316819BBF81B49A7CED59667D17E515450FAE8, L_61, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_63 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_63, L_62, ((int32_t)-2147467259), NULL);
		return L_63;
	}

IL_0239:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64;
		L_64 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_65;
		L_65 = SR_Format_m9977F23B838724F9DA04223E0762B7AEA3AA91FC(_stringLiteralC309B44D06CC2114839905FBAA27DF2F7E8CCA6D, L_64, NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_66 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_66, L_65, ((int32_t)-2147418113), NULL);
		return L_66;
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
// System.Void System.Drawing.Rectangle::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m3FB90CAD0ECE9EA19BE7EFEDCC973808070497A7 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___x_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___y_1 = L_1;
		int32_t L_2 = ___width2;
		__this->___width_2 = L_2;
		int32_t L_3 = ___height3;
		__this->___height_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Rectangle__ctor_m3FB90CAD0ECE9EA19BE7EFEDCC973808070497A7_AdjustorThunk (RuntimeObject* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	Rectangle__ctor_m3FB90CAD0ECE9EA19BE7EFEDCC973808070497A7(_thisAdjusted, ___x0, ___y1, ___width2, ___height3, method);
}
// System.Int32 System.Drawing.Rectangle::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___x_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Drawing.Rectangle::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___y_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Drawing.Rectangle::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___width_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Drawing.Rectangle::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___height_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Drawing.Rectangle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Equals_m5B125B9AE09AE711F2218BB7BF9BFE97F054A250 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Rectangle_Equals_mC876A9A25614D79581F23875D17F80D1C78910FD(__this, ((*(Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*)((Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*)(Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*)UnBox(L_1, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rectangle_Equals_m5B125B9AE09AE711F2218BB7BF9BFE97F054A250_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rectangle_Equals_m5B125B9AE09AE711F2218BB7BF9BFE97F054A250(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.Drawing.Rectangle::Equals(System.Drawing.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_Equals_mC876A9A25614D79581F23875D17F80D1C78910FD (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___other0, const RuntimeMethod* method) 
{
	{
		Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 L_0 = (*(Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*)__this);
		Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 L_1 = ___other0;
		bool L_2;
		L_2 = Rectangle_op_Equality_m502490E5E78505CE41D65FF3B66339074464B0B2(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Rectangle_Equals_mC876A9A25614D79581F23875D17F80D1C78910FD_AdjustorThunk (RuntimeObject* __this, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___other0, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rectangle_Equals_mC876A9A25614D79581F23875D17F80D1C78910FD(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.Drawing.Rectangle::op_Equality(System.Drawing.Rectangle,System.Drawing.Rectangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rectangle_op_Equality_m502490E5E78505CE41D65FF3B66339074464B0B2 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___left0, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 ___right1, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline((&___left0), NULL);
		int32_t L_1;
		L_1 = Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline((&___right1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_2;
		L_2 = Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline((&___left0), NULL);
		int32_t L_3;
		L_3 = Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline((&___right1), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_4;
		L_4 = Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline((&___left0), NULL);
		int32_t L_5;
		L_5 = Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline((&___right1), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6;
		L_6 = Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline((&___left0), NULL);
		int32_t L_7;
		L_7 = Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline((&___right1), NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Int32 System.Drawing.Rectangle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rectangle_GetHashCode_m3B1DDBEEFEF70E4EEB5145960DED4C1A4574D574 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline(__this, NULL);
		int32_t L_1;
		L_1 = Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t0F28B03B873280BF35E747F5B954C752F924A770_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = HashHelpers_Combine_mB8E75AA81F7543BB0B05069416C485A4B8E692D8(L_0, L_1, NULL);
		int32_t L_3;
		L_3 = Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline(__this, NULL);
		int32_t L_4;
		L_4 = HashHelpers_Combine_mB8E75AA81F7543BB0B05069416C485A4B8E692D8(L_2, L_3, NULL);
		int32_t L_5;
		L_5 = Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline(__this, NULL);
		int32_t L_6;
		L_6 = HashHelpers_Combine_mB8E75AA81F7543BB0B05069416C485A4B8E692D8(L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t Rectangle_GetHashCode_m3B1DDBEEFEF70E4EEB5145960DED4C1A4574D574_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rectangle_GetHashCode_m3B1DDBEEFEF70E4EEB5145960DED4C1A4574D574(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Drawing.Rectangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rectangle_ToString_m20252CB5611CF6E9F46C82F7D8068FF76AB6C508 (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral216BD1B219465997307A6644C66A0F9B82B445DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44055C491501B7E10D2CB80FC027949A27E74AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D123B98CED46C8A93EB5109272E39C2E749A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB769CC5B1CE3FFB9133E0ECB36DDB03B09C923D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral216BD1B219465997307A6644C66A0F9B82B445DF);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral216BD1B219465997307A6644C66A0F9B82B445DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t L_3;
		L_3 = Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline(__this, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral44055C491501B7E10D2CB80FC027949A27E74AA1);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral44055C491501B7E10D2CB80FC027949A27E74AA1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t L_7;
		L_7 = Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralB5D123B98CED46C8A93EB5109272E39C2E749A8F);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB5D123B98CED46C8A93EB5109272E39C2E749A8F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t L_11;
		L_11 = Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline(__this, NULL);
		V_0 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralEB769CC5B1CE3FFB9133E0ECB36DDB03B09C923D);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralEB769CC5B1CE3FFB9133E0ECB36DDB03B09C923D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t L_15;
		L_15 = Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline(__this, NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* Rectangle_ToString_m20252CB5611CF6E9F46C82F7D8068FF76AB6C508_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rectangle_ToString_m20252CB5611CF6E9F46C82F7D8068FF76AB6C508(_thisAdjusted, method);
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
// System.Void System.Drawing.Bitmap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m9FF6CBB4998C51AAAAC900C2FCFF805814388CFE (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, const RuntimeMethod* method) 
{
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.Bitmap::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m7820E627830016DCC5D2DBAC39458764693A001C (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		intptr_t L_0 = ___ptr0;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_0;
		return;
	}
}
// System.Void System.Drawing.Bitmap::.ctor(System.IntPtr,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_mFABBA6E70AE4F310CAB91F431029B92B6D54EB6E (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, intptr_t ___ptr0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC(NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream1;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___stream_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___stream_2), (void*)L_1);
	}

IL_0014:
	{
		intptr_t L_2 = ___ptr0;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_2;
		return;
	}
}
// System.Void System.Drawing.Bitmap::.ctor(System.Int32,System.Int32,System.Drawing.Imaging.PixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m77483AD63F33C5EC9FD46ADFE7CE0439337D946E (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___format2;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = GDIPlus_GdipCreateBitmapFromScan0_mB7998A79D6BF30C692AE8D051CCD4760759D98CD(L_0, L_1, 0, L_2, L_3, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_4, NULL);
		intptr_t L_5 = V_0;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_5;
		return;
	}
}
// System.Void System.Drawing.Bitmap::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m7A68C2F22E77C511C24EE1713A25A73098403BD7 (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___useIcm1, const RuntimeMethod* method) 
{
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		intptr_t L_1;
		L_1 = Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F(L_0, NULL);
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_1;
		return;
	}
}
// System.Void System.Drawing.Bitmap::.ctor(System.Drawing.Image,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_mF914CA5523FC0FC1A364198FEE6227A06E3BA5E1 (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___original0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		Bitmap__ctor_m77483AD63F33C5EC9FD46ADFE7CE0439337D946E(__this, L_0, L_1, ((int32_t)2498570), NULL);
		Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* L_2;
		L_2 = Graphics_FromImage_m8D37CA5760E8C1A55AC19A64DDB953C7F480D406(__this, NULL);
		Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* L_3 = L_2;
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_4 = ___original0;
		int32_t L_5 = ___width1;
		int32_t L_6 = ___height2;
		NullCheck(L_3);
		Graphics_DrawImage_m58AF19E1658A6B8871FC5741E5F43A5544BD6744(L_3, L_4, 0, 0, L_5, L_6, NULL);
		NullCheck(L_3);
		Graphics_Dispose_m4C3EB694BF4DA33150724E6B3CA2B469383E350B(L_3, NULL);
		return;
	}
}
// System.Void System.Drawing.Bitmap::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bitmap__ctor_m12AED256B2CF000C4DCF61D7368D71D248D13B6F (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		Image__ctor_m2A14F8899FBEB3FEA9D31BC70611759F36F71BAA(__this, L_0, L_1, NULL);
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
// System.Void System.Drawing.ComIStreamMarshaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamMarshaler__ctor_m0CDD3B6F24F4F227C416C9B9D6013D760CAAAA65 (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Runtime.InteropServices.ICustomMarshaler System.Drawing.ComIStreamMarshaler::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComIStreamMarshaler_GetInstance_m1537B7223C06468BA443965F0C95F291044FB30D (String_t* ___cookie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var);
		ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* L_0 = ((ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_StaticFields*)il2cpp_codegen_static_fields_for(ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var))->___defaultInstance_0;
		return L_0;
	}
}
// System.IntPtr System.Drawing.ComIStreamMarshaler::MarshalManagedToNative(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ComIStreamMarshaler_MarshalManagedToNative_mEC43636DDD13373A9C1AC076C520C06BFACC8C34 (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, RuntimeObject* ___managedObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___managedObj0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = ManagedToNativeWrapper_GetInterface_m7C74F84F28FE7859AD4D02B0ECD06B8326429AE0(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler::CleanUpNativeData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamMarshaler_CleanUpNativeData_m74D35E4B9FD0AF0964F6CFEBE0CA69A8AB46C7A0 (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, intptr_t ___pNativeData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___pNativeData0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_ReleaseInterface_mE237AF25A5B1B3F6803F14B482B2952947EFD48E(L_0, NULL);
		return;
	}
}
// System.Object System.Drawing.ComIStreamMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComIStreamMarshaler_MarshalNativeToManaged_mF320C5A595B5546D439F43658CFFA3E27A840ED3 (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, intptr_t ___pNativeData0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___pNativeData0;
		RuntimeObject* L_1;
		L_1 = NativeToManagedWrapper_GetInterface_m535C881DF137D0012EA03EEF5759A0233244EA93(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler::CleanUpManagedData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamMarshaler_CleanUpManagedData_m870E079D381481A5B59E738E92FF88BE8DB973FA (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, RuntimeObject* ___managedObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___managedObj0;
		NativeToManagedWrapper_ReleaseInterface_m97353DD01B183A3D25D0C312CCE94DDD76A3A29E(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler::GetNativeDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComIStreamMarshaler_GetNativeDataSize_m32DE7CFBBE56E54725B4D4C49DF15290093CEBDE (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* __this, const RuntimeMethod* method) 
{
	{
		return (-1);
	}
}
// System.Void System.Drawing.ComIStreamMarshaler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamMarshaler__cctor_m5E92636EB144190DEEE798D006C42B4591822E85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353* L_0 = (ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353*)il2cpp_codegen_object_new(ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ComIStreamMarshaler__ctor_m0CDD3B6F24F4F227C416C9B9D6013D760CAAAA65(L_0, NULL);
		((ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_StaticFields*)il2cpp_codegen_static_fields_for(ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var))->___defaultInstance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_StaticFields*)il2cpp_codegen_static_fields_for(ComIStreamMarshaler_tC69C6904D6D3293D5308FA4BBAB7D22AF69B8353_il2cpp_TypeInfo_var))->___defaultInstance_0), (void*)L_0);
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
int32_t QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_Multicast(QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* currentDelegate = reinterpret_cast<QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___riid1, ___ppvObject2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_OpenInst(QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___riid1, ___ppvObject2, method);
}
int32_t QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_OpenStatic(QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___riid1, ___ppvObject2, method);
}
int32_t QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_OpenStaticInvoker(QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, Guid_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___riid1, ___ppvObject2);
}
int32_t QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_ClosedStaticInvoker(QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, Guid_t*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___riid1, ___ppvObject2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3 (QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___riid1, ___ppvObject2);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/QueryInterfaceDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryInterfaceDelegate__ctor_m2BB1B484FCC82D82162D3F195AC393C118EECD5C (QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/QueryInterfaceDelegate::Invoke(System.IntPtr,System.Guid&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryInterfaceDelegate_Invoke_mA268611866392544D16EAE700335F18AAC4319E0 (QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* __this, intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___riid1, ___ppvObject2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_Multicast(AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* currentDelegate = reinterpret_cast<AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_OpenInst(AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, method);
}
int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_OpenStatic(AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, method);
}
int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_OpenStaticInvoker(AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0);
}
int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_ClosedStaticInvoker(AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70 (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/AddRefDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddRefDelegate__ctor_m87857458CB755836DAB57483CF33257B5F3965DF (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/AddRefDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471 (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_Multicast(ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* currentDelegate = reinterpret_cast<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_OpenInst(ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, method);
}
int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_OpenStatic(ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, method);
}
int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_OpenStaticInvoker(ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0);
}
int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_ClosedStaticInvoker(ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/ReleaseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseDelegate__ctor_mAF9DE93D06D3B2C957BD05FF8E8D83933091BC5E (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ReleaseDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582 (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_Multicast(ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* currentDelegate = reinterpret_cast<ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___pv1, ___cb2, ___pcbRead3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_OpenInst(ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pv1, ___cb2, ___pcbRead3, method);
}
int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_OpenStatic(ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pv1, ___cb2, ___pcbRead3, method);
}
int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_OpenStaticInvoker(ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___pv1, ___cb2, ___pcbRead3);
}
int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_ClosedStaticInvoker(ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___pv1, ___cb2, ___pcbRead3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20 (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint8_t*, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___pv1' to native representation
	uint8_t* ____pv1_marshaled = NULL;
	if (___pv1 != NULL)
	{
		il2cpp_array_size_t ____pv1_Length = (___pv1)->max_length;
		____pv1_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____pv1_Length);
		memset(____pv1_marshaled, 0, ____pv1_Length * sizeof(uint8_t));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ____pv1_marshaled, ___cb2, ___pcbRead3);

	// Marshaling of parameter '___pv1' back from native representation
	if (____pv1_marshaled != NULL)
	{
		il2cpp_array_size_t ____pv1_Length = (___pv1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____pv1_Length); i++)
		{
			(___pv1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____pv1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___pv1' native representation
	il2cpp_codegen_marshal_free(____pv1_marshaled);
	____pv1_marshaled = NULL;

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/ReadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadDelegate__ctor_mE35489D87E7C81EA9578ED3EF687E53F5D61525E (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ReadDelegate::Invoke(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pv1, ___cb2, ___pcbRead3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_Multicast(WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* currentDelegate = reinterpret_cast<WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___pv1, ___cb2, ___pcbWritten3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_OpenInst(WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pv1, ___cb2, ___pcbWritten3, method);
}
int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_OpenStatic(WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pv1, ___cb2, ___pcbWritten3, method);
}
int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_OpenStaticInvoker(WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___pv1, ___cb2, ___pcbWritten3);
}
int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_ClosedStaticInvoker(WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___pv1, ___cb2, ___pcbWritten3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint8_t*, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___pv1' to native representation
	uint8_t* ____pv1_marshaled = NULL;
	if (___pv1 != NULL)
	{
		____pv1_marshaled = reinterpret_cast<uint8_t*>((___pv1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ____pv1_marshaled, ___cb2, ___pcbWritten3);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/WriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m7F430000DBF129A640274F98DC3256182EFDEF29 (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/WriteDelegate::Invoke(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902 (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pv1, ___cb2, ___pcbWritten3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_Multicast(SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* currentDelegate = reinterpret_cast<SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_OpenInst(SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3, method);
}
int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_OpenStatic(SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3, method);
}
int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_OpenStaticInvoker(SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int64_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3);
}
int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_ClosedStaticInvoker(SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int64_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559 (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int64_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/SeekDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeekDelegate__ctor_m65E3640CB8740F8EE7A09E351FC5F234709D8F98 (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/SeekDelegate::Invoke(System.IntPtr,System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0 (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_Multicast(SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* currentDelegate = reinterpret_cast<SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___libNewSize1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_OpenInst(SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___libNewSize1, method);
}
int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_OpenStatic(SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___libNewSize1, method);
}
int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_OpenStaticInvoker(SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___libNewSize1);
}
int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_ClosedStaticInvoker(SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___libNewSize1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___libNewSize1);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/SetSizeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSizeDelegate__ctor_m4563575D151256F4B308DA88FE0E07BDE707132F (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/SetSizeDelegate::Invoke(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5 (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___libNewSize1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_Multicast(CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* currentDelegate = reinterpret_cast<CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_OpenInst(CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4, method);
}
int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_OpenStatic(CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4, method);
}
int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_OpenStaticInvoker(CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4);
}
int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_ClosedStaticInvoker(CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31 (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*, int64_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___pstm1' to native representation
	IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ____pstm1_marshaled = NULL;
	if (___pstm1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___pstm1))
		{
			____pstm1_marshaled = il2cpp_codegen_com_query_interface<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(static_cast<Il2CppComObject*>(___pstm1));
			(____pstm1_marshaled)->AddRef();
		}
		else
		{
			____pstm1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(___pstm1);
		}
	}
	else
	{
		____pstm1_marshaled = NULL;
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ____pstm1_marshaled, ___cb2, ___pcbRead3, ___pcbWritten4);

	// Marshaling cleanup of parameter '___pstm1' native representation
	if (____pstm1_marshaled != NULL)
	{
		(____pstm1_marshaled)->Release();
		____pstm1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/CopyToDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyToDelegate__ctor_m1B3BD4A6D074BF82F2F7A6DD583601DF497D89ED (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/CopyToDelegate::Invoke(System.IntPtr,System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8 (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_Multicast(CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* currentDelegate = reinterpret_cast<CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___grfCommitFlags1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_OpenInst(CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___grfCommitFlags1, method);
}
int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_OpenStatic(CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___grfCommitFlags1, method);
}
int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_OpenStaticInvoker(CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___grfCommitFlags1);
}
int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_ClosedStaticInvoker(CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___grfCommitFlags1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___grfCommitFlags1);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/CommitDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommitDelegate__ctor_mACCD67FCE1D41BCE3C67AA5C40DACF6DFE2C2361 (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/CommitDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619 (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___grfCommitFlags1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_Multicast(RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* currentDelegate = reinterpret_cast<RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_OpenInst(RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, method);
}
int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_OpenStatic(RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, method);
}
int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_OpenStaticInvoker(RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0);
}
int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_ClosedStaticInvoker(RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/RevertDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RevertDelegate__ctor_mA447BE9B3F7F8F8CEE048BA13BDBAABC3C384AF7 (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/RevertDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_Multicast(LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* currentDelegate = reinterpret_cast<LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___libOffset1, ___cb2, ___dwLockType3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_OpenInst(LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___libOffset1, ___cb2, ___dwLockType3, method);
}
int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_OpenStatic(LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___libOffset1, ___cb2, ___dwLockType3, method);
}
int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_OpenStaticInvoker(LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int64_t, int64_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___libOffset1, ___cb2, ___dwLockType3);
}
int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_ClosedStaticInvoker(LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int64_t, int64_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___libOffset1, ___cb2, ___dwLockType3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___libOffset1, ___cb2, ___dwLockType3);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/LockRegionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockRegionDelegate__ctor_mA9C98E32773055DE02EE17A3D74105BEF25FA987 (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/LockRegionDelegate::Invoke(System.IntPtr,System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797 (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___libOffset1, ___cb2, ___dwLockType3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_Multicast(UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* currentDelegate = reinterpret_cast<UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___libOffset1, ___cb2, ___dwLockType3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_OpenInst(UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___libOffset1, ___cb2, ___dwLockType3, method);
}
int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_OpenStatic(UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___libOffset1, ___cb2, ___dwLockType3, method);
}
int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_OpenStaticInvoker(UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int64_t, int64_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___libOffset1, ___cb2, ___dwLockType3);
}
int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_ClosedStaticInvoker(UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int64_t, int64_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___libOffset1, ___cb2, ___dwLockType3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6 (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___libOffset1, ___cb2, ___dwLockType3);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockRegionDelegate__ctor_mE49816E213F56B09279297FCF5D2255C82885B83 (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/UnlockRegionDelegate::Invoke(System.IntPtr,System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483 (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___libOffset1, ___cb2, ___dwLockType3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_Multicast(StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* currentDelegate = reinterpret_cast<StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___pstatstg1, ___grfStatFlag2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_OpenInst(StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pstatstg1, ___grfStatFlag2, method);
}
int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_OpenStatic(StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___pstatstg1, ___grfStatFlag2, method);
}
int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_OpenStaticInvoker(StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___pstatstg1, ___grfStatFlag2);
}
int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_ClosedStaticInvoker(StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___pstatstg1, ___grfStatFlag2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453 (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___pstatstg1' to native representation
	STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke ____pstatstg1_empty = {};
	STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke* ____pstatstg1_marshaled = &____pstatstg1_empty;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ____pstatstg1_marshaled, ___grfStatFlag2);

	// Marshaling of parameter '___pstatstg1' back from native representation
	STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 _____pstatstg1_marshaled_unmarshaled_dereferenced;
	memset((&_____pstatstg1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____pstatstg1_marshaled_unmarshaled_dereferenced));
	STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_back(*____pstatstg1_marshaled, _____pstatstg1_marshaled_unmarshaled_dereferenced);
	*___pstatstg1 = _____pstatstg1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___pstatstg1)->___pwcsName_0), (void*)NULL);

	// Marshaling cleanup of parameter '___pstatstg1' native representation
	STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_cleanup(*____pstatstg1_marshaled);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/StatDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatDelegate__ctor_m0ECE5FEA2F43DDC9E11C3CBB8CBFCD99FFAC3846 (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/StatDelegate::Invoke(System.IntPtr,System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618 (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pstatstg1, ___grfStatFlag2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_Multicast(CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* currentDelegate = reinterpret_cast<CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___this0, ___ppstm1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_OpenInst(CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___ppstm1, method);
}
int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_OpenStatic(CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___this0, ___ppstm1, method);
}
int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_OpenStaticInvoker(CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___this0, ___ppstm1);
}
int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_ClosedStaticInvoker(CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___this0, ___ppstm1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___this0, ___ppstm1);

	return returnValue;
}
// System.Void System.Drawing.ComIStreamMarshaler/CloneDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloneDelegate__ctor_m989A5F60AB7C33DA7E30F67E9E95AD9E114972A5 (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_Multicast;
}
// System.Int32 System.Drawing.ComIStreamMarshaler/CloneDelegate::Invoke(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___ppstm1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Drawing.ComIStreamMarshaler/IStreamInterface
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke(const IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78& unmarshaled, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_pinvoke& marshaled)
{
	marshaled.___lpVtbl_0 = unmarshaled.___lpVtbl_0;
	marshaled.___gcHandle_1 = unmarshaled.___gcHandle_1;
}
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke_back(const IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_pinvoke& marshaled, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78& unmarshaled)
{
	intptr_t unmarshaledlpVtbl_temp_0;
	memset((&unmarshaledlpVtbl_temp_0), 0, sizeof(unmarshaledlpVtbl_temp_0));
	unmarshaledlpVtbl_temp_0 = marshaled.___lpVtbl_0;
	unmarshaled.___lpVtbl_0 = unmarshaledlpVtbl_temp_0;
	intptr_t unmarshaledgcHandle_temp_1;
	memset((&unmarshaledgcHandle_temp_1), 0, sizeof(unmarshaledgcHandle_temp_1));
	unmarshaledgcHandle_temp_1 = marshaled.___gcHandle_1;
	unmarshaled.___gcHandle_1 = unmarshaledgcHandle_temp_1;
}
// Conversion method for clean up from marshalling of: System.Drawing.ComIStreamMarshaler/IStreamInterface
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke_cleanup(IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Drawing.ComIStreamMarshaler/IStreamInterface
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_com(const IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78& unmarshaled, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_com& marshaled)
{
	marshaled.___lpVtbl_0 = unmarshaled.___lpVtbl_0;
	marshaled.___gcHandle_1 = unmarshaled.___gcHandle_1;
}
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_com_back(const IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_com& marshaled, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78& unmarshaled)
{
	intptr_t unmarshaledlpVtbl_temp_0;
	memset((&unmarshaledlpVtbl_temp_0), 0, sizeof(unmarshaledlpVtbl_temp_0));
	unmarshaledlpVtbl_temp_0 = marshaled.___lpVtbl_0;
	unmarshaled.___lpVtbl_0 = unmarshaledlpVtbl_temp_0;
	intptr_t unmarshaledgcHandle_temp_1;
	memset((&unmarshaledgcHandle_temp_1), 0, sizeof(unmarshaledgcHandle_temp_1));
	unmarshaledgcHandle_temp_1 = marshaled.___gcHandle_1;
	unmarshaled.___gcHandle_1 = unmarshaledgcHandle_temp_1;
}
// Conversion method for clean up from marshalling of: System.Drawing.ComIStreamMarshaler/IStreamInterface
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_com_cleanup(IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshaled_com& marshaled)
{
}
// System.Void System.Drawing.ComIStreamMarshaler/IStreamInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamInterface__ctor_m9DAD8855D253AFE0F5A8F720F6E926E949CC4FEF (IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: System.Drawing.ComIStreamMarshaler/IStreamVtbl
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke(const IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E& unmarshaled, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueryInterface_0));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AddRef_1));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_2));
	marshaled.___Read_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Read_3));
	marshaled.___Write_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Write_4));
	marshaled.___Seek_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Seek_5));
	marshaled.___SetSize_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetSize_6));
	marshaled.___CopyTo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CopyTo_7));
	marshaled.___Commit_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Commit_8));
	marshaled.___Revert_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Revert_9));
	marshaled.___LockRegion_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___LockRegion_10));
	marshaled.___UnlockRegion_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___UnlockRegion_11));
	marshaled.___Stat_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Stat_12));
	marshaled.___Clone_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Clone_13));
}
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke_back(const IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_pinvoke& marshaled, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___QueryInterface_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3>(marshaled.___QueryInterface_0, QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueryInterface_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3>(marshaled.___QueryInterface_0, QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var));
	unmarshaled.___AddRef_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70>(marshaled.___AddRef_1, AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AddRef_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70>(marshaled.___AddRef_1, AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var));
	unmarshaled.___Release_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_2, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_2, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var));
	unmarshaled.___Read_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20>(marshaled.___Read_3, ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Read_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20>(marshaled.___Read_3, ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var));
	unmarshaled.___Write_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF>(marshaled.___Write_4, WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Write_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF>(marshaled.___Write_4, WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var));
	unmarshaled.___Seek_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559>(marshaled.___Seek_5, SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Seek_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559>(marshaled.___Seek_5, SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var));
	unmarshaled.___SetSize_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE>(marshaled.___SetSize_6, SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetSize_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE>(marshaled.___SetSize_6, SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var));
	unmarshaled.___CopyTo_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31>(marshaled.___CopyTo_7, CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CopyTo_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31>(marshaled.___CopyTo_7, CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var));
	unmarshaled.___Commit_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B>(marshaled.___Commit_8, CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Commit_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B>(marshaled.___Commit_8, CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var));
	unmarshaled.___Revert_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD>(marshaled.___Revert_9, RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Revert_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD>(marshaled.___Revert_9, RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var));
	unmarshaled.___LockRegion_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED>(marshaled.___LockRegion_10, LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___LockRegion_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED>(marshaled.___LockRegion_10, LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var));
	unmarshaled.___UnlockRegion_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6>(marshaled.___UnlockRegion_11, UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnlockRegion_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6>(marshaled.___UnlockRegion_11, UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var));
	unmarshaled.___Stat_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453>(marshaled.___Stat_12, StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Stat_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453>(marshaled.___Stat_12, StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var));
	unmarshaled.___Clone_13 = il2cpp_codegen_marshal_function_ptr_to_delegate<CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E>(marshaled.___Clone_13, CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Clone_13), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E>(marshaled.___Clone_13, CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: System.Drawing.ComIStreamMarshaler/IStreamVtbl
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke_cleanup(IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Drawing.ComIStreamMarshaler/IStreamVtbl
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_com(const IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E& unmarshaled, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueryInterface_0));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AddRef_1));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_2));
	marshaled.___Read_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Read_3));
	marshaled.___Write_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Write_4));
	marshaled.___Seek_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Seek_5));
	marshaled.___SetSize_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___SetSize_6));
	marshaled.___CopyTo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___CopyTo_7));
	marshaled.___Commit_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Commit_8));
	marshaled.___Revert_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Revert_9));
	marshaled.___LockRegion_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___LockRegion_10));
	marshaled.___UnlockRegion_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___UnlockRegion_11));
	marshaled.___Stat_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Stat_12));
	marshaled.___Clone_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Clone_13));
}
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_com_back(const IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_com& marshaled, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___QueryInterface_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3>(marshaled.___QueryInterface_0, QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueryInterface_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3>(marshaled.___QueryInterface_0, QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var));
	unmarshaled.___AddRef_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70>(marshaled.___AddRef_1, AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AddRef_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70>(marshaled.___AddRef_1, AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var));
	unmarshaled.___Release_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_2, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_2, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var));
	unmarshaled.___Read_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20>(marshaled.___Read_3, ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Read_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20>(marshaled.___Read_3, ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var));
	unmarshaled.___Write_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF>(marshaled.___Write_4, WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Write_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF>(marshaled.___Write_4, WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var));
	unmarshaled.___Seek_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559>(marshaled.___Seek_5, SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Seek_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559>(marshaled.___Seek_5, SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var));
	unmarshaled.___SetSize_6 = il2cpp_codegen_marshal_function_ptr_to_delegate<SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE>(marshaled.___SetSize_6, SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SetSize_6), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE>(marshaled.___SetSize_6, SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var));
	unmarshaled.___CopyTo_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31>(marshaled.___CopyTo_7, CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___CopyTo_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31>(marshaled.___CopyTo_7, CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var));
	unmarshaled.___Commit_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B>(marshaled.___Commit_8, CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Commit_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B>(marshaled.___Commit_8, CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var));
	unmarshaled.___Revert_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD>(marshaled.___Revert_9, RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Revert_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD>(marshaled.___Revert_9, RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var));
	unmarshaled.___LockRegion_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED>(marshaled.___LockRegion_10, LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___LockRegion_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED>(marshaled.___LockRegion_10, LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var));
	unmarshaled.___UnlockRegion_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6>(marshaled.___UnlockRegion_11, UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnlockRegion_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6>(marshaled.___UnlockRegion_11, UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var));
	unmarshaled.___Stat_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453>(marshaled.___Stat_12, StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Stat_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453>(marshaled.___Stat_12, StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var));
	unmarshaled.___Clone_13 = il2cpp_codegen_marshal_function_ptr_to_delegate<CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E>(marshaled.___Clone_13, CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Clone_13), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E>(marshaled.___Clone_13, CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: System.Drawing.ComIStreamMarshaler/IStreamVtbl
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_com_cleanup(IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshaled_com& marshaled)
{
}
// System.Void System.Drawing.ComIStreamMarshaler/IStreamVtbl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IStreamVtbl__ctor_m78628BA5D767F1983997DA04A25FA7039A25A80A (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* __this, const RuntimeMethod* method) 
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
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper__cctor_m67C323ED8CE5D9A57A0B2EEC6995EC5B8CCF877E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_AddRef_mBB6F6BE5394D6B37FCDC544E7CAF723499943D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Clone_m474B079FEDB136C2E0B29C716A1DE192517507AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Commit_m4F1B88077F0C74CBE5241E44D05DEB28E1F2FBE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_CopyTo_m7B3E95442011430670AE612EE20297A39B3A85F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_LockRegion_mEE06CB112FB97FD62C0CDE533D9C171F612D4887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_OnShutdown_m5A3AFECAF2DC5B0D16ACC433ABF3871D4D565C4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_QueryInterface_mF978DFBB321B67E156326F50E16E79DCD9A9D822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Read_m9B4C64BF0D12A02FADFF40D8D520379066CE7435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Revert_m8C5C986C22976DE4329AF008FD8C9B1723F3E17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Seek_m702D19EEBB3CDC61F0B6F992493B0CC4859FDBCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_SetSize_m6EFF1CDAE03F0FC8D26972FE7930D97223C3BF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Stat_m28EDEEAE0A20304D59267457D339013F03A68681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_UnlockRegion_m13FF5B840F34AF1B31CBC2D24FCDD53348ABE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_Write_m84C741B580561516EC4FCF30D63757513A516FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral829159308D0C1F60077E91E46D164501C168C399);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC41786E774BB06538291027A8223CDF522916D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9973C05FD673C2E344086E2DCAA23CFABA31718);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	{
		Guid_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_0), _stringLiteral829159308D0C1F60077E91E46D164501C168C399, /*hidden argument*/NULL);
		((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___IID_IUnknown_0 = L_0;
		Guid_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_1), _stringLiteralA9973C05FD673C2E344086E2DCAA23CFABA31718, /*hidden argument*/NULL);
		((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___IID_IStream_1 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_4);
		PropertyInfo_t* L_8;
		L_8 = Type_GetProperty_m56B512B27B74B56735C0BC4973B3E3C3BE817C68(L_4, _stringLiteral9AC41786E774BB06538291027A8223CDF522916D, ((int32_t)69686), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_6, L_7, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(23 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_8, (bool)1);
		((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___exceptionGetHResult_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___exceptionGetHResult_2), (void*)L_9);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_10, NULL, (intptr_t)((void*)ManagedToNativeWrapper_OnShutdown_m5A3AFECAF2DC5B0D16ACC433ABF3871D4D565C4C_RuntimeMethod_var), NULL);
		V_0 = L_10;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_11;
		L_11 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_12 = L_11;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = V_0;
		NullCheck(L_12);
		AppDomain_add_DomainUnload_mC24E729ABD7550A0A1F018EBF215FDF03AA1064F(L_12, L_13, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_14 = V_0;
		NullCheck(L_12);
		AppDomain_add_ProcessExit_m4B9FF3A7D5703882E1383D0DC2D8410B1D113333(L_12, L_14, NULL);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_15 = (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E*)il2cpp_codegen_object_new(IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		IStreamVtbl__ctor_m78628BA5D767F1983997DA04A25FA7039A25A80A(L_15, NULL);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_16 = L_15;
		QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3* L_17 = (QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3*)il2cpp_codegen_object_new(QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		QueryInterfaceDelegate__ctor_m2BB1B484FCC82D82162D3F195AC393C118EECD5C(L_17, NULL, (intptr_t)((void*)ManagedToNativeWrapper_QueryInterface_mF978DFBB321B67E156326F50E16E79DCD9A9D822_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		L_16->___QueryInterface_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___QueryInterface_0), (void*)L_17);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_18 = L_16;
		AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* L_19 = (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70*)il2cpp_codegen_object_new(AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		AddRefDelegate__ctor_m87857458CB755836DAB57483CF33257B5F3965DF(L_19, NULL, (intptr_t)((void*)ManagedToNativeWrapper_AddRef_mBB6F6BE5394D6B37FCDC544E7CAF723499943D99_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		L_18->___AddRef_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___AddRef_1), (void*)L_19);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_20 = L_18;
		ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* L_21 = (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA*)il2cpp_codegen_object_new(ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ReleaseDelegate__ctor_mAF9DE93D06D3B2C957BD05FF8E8D83933091BC5E(L_21, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		L_20->___Release_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___Release_2), (void*)L_21);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_22 = L_20;
		ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* L_23 = (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20*)il2cpp_codegen_object_new(ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		ReadDelegate__ctor_mE35489D87E7C81EA9578ED3EF687E53F5D61525E(L_23, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Read_m9B4C64BF0D12A02FADFF40D8D520379066CE7435_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		L_22->___Read_3 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___Read_3), (void*)L_23);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_24 = L_22;
		WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* L_25 = (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF*)il2cpp_codegen_object_new(WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WriteDelegate__ctor_m7F430000DBF129A640274F98DC3256182EFDEF29(L_25, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Write_m84C741B580561516EC4FCF30D63757513A516FAA_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		L_24->___Write_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___Write_4), (void*)L_25);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_26 = L_24;
		SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* L_27 = (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559*)il2cpp_codegen_object_new(SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		SeekDelegate__ctor_m65E3640CB8740F8EE7A09E351FC5F234709D8F98(L_27, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Seek_m702D19EEBB3CDC61F0B6F992493B0CC4859FDBCB_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		L_26->___Seek_5 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___Seek_5), (void*)L_27);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_28 = L_26;
		SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* L_29 = (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE*)il2cpp_codegen_object_new(SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		SetSizeDelegate__ctor_m4563575D151256F4B308DA88FE0E07BDE707132F(L_29, NULL, (intptr_t)((void*)ManagedToNativeWrapper_SetSize_m6EFF1CDAE03F0FC8D26972FE7930D97223C3BF47_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		L_28->___SetSize_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___SetSize_6), (void*)L_29);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_30 = L_28;
		CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* L_31 = (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31*)il2cpp_codegen_object_new(CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		CopyToDelegate__ctor_m1B3BD4A6D074BF82F2F7A6DD583601DF497D89ED(L_31, NULL, (intptr_t)((void*)ManagedToNativeWrapper_CopyTo_m7B3E95442011430670AE612EE20297A39B3A85F9_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		L_30->___CopyTo_7 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___CopyTo_7), (void*)L_31);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_32 = L_30;
		CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* L_33 = (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B*)il2cpp_codegen_object_new(CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		CommitDelegate__ctor_mACCD67FCE1D41BCE3C67AA5C40DACF6DFE2C2361(L_33, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Commit_m4F1B88077F0C74CBE5241E44D05DEB28E1F2FBE6_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		L_32->___Commit_8 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___Commit_8), (void*)L_33);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_34 = L_32;
		RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* L_35 = (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD*)il2cpp_codegen_object_new(RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		RevertDelegate__ctor_mA447BE9B3F7F8F8CEE048BA13BDBAABC3C384AF7(L_35, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Revert_m8C5C986C22976DE4329AF008FD8C9B1723F3E17D_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		L_34->___Revert_9 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___Revert_9), (void*)L_35);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_36 = L_34;
		LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* L_37 = (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED*)il2cpp_codegen_object_new(LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		LockRegionDelegate__ctor_mA9C98E32773055DE02EE17A3D74105BEF25FA987(L_37, NULL, (intptr_t)((void*)ManagedToNativeWrapper_LockRegion_mEE06CB112FB97FD62C0CDE533D9C171F612D4887_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		L_36->___LockRegion_10 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->___LockRegion_10), (void*)L_37);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_38 = L_36;
		UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* L_39 = (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6*)il2cpp_codegen_object_new(UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		UnlockRegionDelegate__ctor_mE49816E213F56B09279297FCF5D2255C82885B83(L_39, NULL, (intptr_t)((void*)ManagedToNativeWrapper_UnlockRegion_m13FF5B840F34AF1B31CBC2D24FCDD53348ABE4F7_RuntimeMethod_var), NULL);
		NullCheck(L_38);
		L_38->___UnlockRegion_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___UnlockRegion_11), (void*)L_39);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_40 = L_38;
		StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* L_41 = (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453*)il2cpp_codegen_object_new(StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		StatDelegate__ctor_m0ECE5FEA2F43DDC9E11C3CBB8CBFCD99FFAC3846(L_41, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Stat_m28EDEEAE0A20304D59267457D339013F03A68681_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		L_40->___Stat_12 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___Stat_12), (void*)L_41);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_42 = L_40;
		CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* L_43 = (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E*)il2cpp_codegen_object_new(CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		CloneDelegate__ctor_m989A5F60AB7C33DA7E30F67E9E95AD9E114972A5(L_43, NULL, (intptr_t)((void*)ManagedToNativeWrapper_Clone_m474B079FEDB136C2E0B29C716A1DE192517507AA_RuntimeMethod_var), NULL);
		NullCheck(L_42);
		L_42->___Clone_13 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___Clone_13), (void*)L_43);
		((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___managedVtable_3 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___managedVtable_3), (void*)L_42);
		ManagedToNativeWrapper_CreateVtable_mC28C59EDADEFEA44FA4FE0948C24FD7377605296(NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::.ctor(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper__ctor_m3AB08E1C20A5FF8A7657D0EED3547FE1D63C07B6 (ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* __this, RuntimeObject* ___managedInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisIStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_mD79248D6BF4BB5DA24D3B0E5A3A43D0EBF578434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		__this->___refCount_9 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___managedVtable_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0051;
					}
				}
				{
					IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				int32_t L_4 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___vtableRefCount_5;
				if (L_4)
				{
					goto IL_003a_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				intptr_t L_5 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_003a_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				ManagedToNativeWrapper_CreateVtable_mC28C59EDADEFEA44FA4FE0948C24FD7377605296(NULL);
			}

IL_003a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				int32_t L_8 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___vtableRefCount_5;
				((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___vtableRefCount_5 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_9 = ___managedInterface0;
		__this->___managedInterface_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedInterface_6), (void*)L_9);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_10;
		L_10 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		__this->___gcHandle_8 = L_10;
		IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78* L_11 = (IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78*)il2cpp_codegen_object_new(IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IStreamInterface__ctor_m9DAD8855D253AFE0F5A8F720F6E926E949CC4FEF(L_11, NULL);
		IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78* L_12 = L_11;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		intptr_t L_13 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
		NullCheck(L_12);
		L_12->___lpVtbl_0 = L_13;
		IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78* L_14 = L_12;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_15 = __this->___gcHandle_8;
		intptr_t L_16;
		L_16 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_15, NULL);
		NullCheck(L_14);
		L_14->___gcHandle_1 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_18, NULL);
		intptr_t L_20;
		L_20 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_19, NULL);
		__this->___comInterface_7 = L_20;
		intptr_t L_21 = __this->___comInterface_7;
		Marshal_StructureToPtr_TisIStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_mD79248D6BF4BB5DA24D3B0E5A3A43D0EBF578434(L_14, L_21, (bool)0, Marshal_StructureToPtr_TisIStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_mD79248D6BF4BB5DA24D3B0E5A3A43D0EBF578434_RuntimeMethod_var);
		goto IL_00b8;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00af;
		}
		throw e;
	}

CATCH_00af:
	{// begin catch(System.Object)
		ManagedToNativeWrapper_Dispose_m57151DF9AAFC79F9E2268F88C15030322F5E51DB(__this, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_00b8:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_Dispose_m57151DF9AAFC79F9E2268F88C15030322F5E51DB (ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* V_0 = NULL;
	bool V_1 = false;
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (&__this->___gcHandle_8);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_2 = (&__this->___gcHandle_8);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_2, NULL);
	}

IL_0018:
	{
		intptr_t L_3 = __this->___comInterface_7;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		intptr_t L_6 = __this->___comInterface_7;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_6, NULL);
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___comInterface_7 = L_7;
	}

IL_0040:
	{
		__this->___managedInterface_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedInterface_6), (void*)(RuntimeObject*)NULL);
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_8 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___managedVtable_3;
		V_0 = L_8;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_1;
					if (!L_9)
					{
						goto IL_007d;
					}
				}
				{
					IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_10 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_11 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				int32_t L_12 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___vtableRefCount_5;
				int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
				((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___vtableRefCount_5 = L_13;
				if (L_13)
				{
					goto IL_0072_1;
				}
			}
			{
				bool L_14;
				L_14 = Environment_get_HasShutdownStarted_m1C31268C20C079988F412BC629BF3F6133CED761(NULL);
				if (!L_14)
				{
					goto IL_0072_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				ManagedToNativeWrapper_DisposeVtable_m0ADA603CA4717542301838D199F6C5AF8FF5E176(NULL);
			}

IL_0072_1:
			{
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::OnShutdown(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_OnShutdown_m5A3AFECAF2DC5B0D16ACC433ABF3871D4D565C4C (RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___managedVtable_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0038;
					}
				}
				{
					IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				int32_t L_4 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___vtableRefCount_5;
				if (L_4)
				{
					goto IL_002d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				intptr_t L_5 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_002d_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
				ManagedToNativeWrapper_DisposeVtable_m0ADA603CA4717542301838D199F6C5AF8FF5E176(NULL);
			}

IL_002d_1:
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::CreateVtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_CreateVtable_mC28C59EDADEFEA44FA4FE0948C24FD7377605296 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisIStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_m57C6D370F96257D3F07AD6B4E3EC0CAB790EFAA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4 = L_3;
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_4 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___managedVtable_3;
		intptr_t L_5 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
		Marshal_StructureToPtr_TisIStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_m57C6D370F96257D3F07AD6B4E3EC0CAB790EFAA0(L_4, L_5, (bool)0, Marshal_StructureToPtr_TisIStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_m57C6D370F96257D3F07AD6B4E3EC0CAB790EFAA0_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::DisposeVtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_DisposeVtable_m0ADA603CA4717542301838D199F6C5AF8FF5E176 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_DestroyStructure_mF018860370A0B6267ED44F655211ECE8A2BB75F7(L_0, L_2, NULL);
		intptr_t L_3 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4 = L_4;
		return;
	}
}
// System.Runtime.InteropServices.ComTypes.IStream System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetUnderlyingInterface(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManagedToNativeWrapper_GetUnderlyingInterface_mF62E71F3146835F6F057BC68EB0B52FC0700BD30 (intptr_t ___comInterface0, bool ___outParam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		intptr_t L_0 = ___comInterface0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		intptr_t L_2 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_4 = ___comInterface0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_5;
		L_5 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___managedInterface_6;
		bool L_7 = ___outParam1;
		G_B2_0 = L_6;
		if (!L_7)
		{
			G_B3_0 = L_6;
			goto IL_0027;
		}
	}
	{
		intptr_t L_8 = ___comInterface0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2(L_8, NULL);
		G_B3_0 = G_B2_0;
	}

IL_0027:
	{
		return G_B3_0;
	}

IL_0028:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.IntPtr System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetInterface(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ManagedToNativeWrapper_GetInterface_m7C74F84F28FE7859AD4D02B0ECD06B8326429AE0 (RuntimeObject* ___managedInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___managedInterface0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___managedInterface0;
		intptr_t L_3;
		L_3 = NativeToManagedWrapper_GetUnderlyingInterface_m6550CF3903D06C28E8BCF8DAD3A9AC0F0E71A541(L_2, NULL);
		intptr_t L_4 = L_3;
		V_0 = L_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_7 = ___managedInterface0;
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_8 = (ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF*)il2cpp_codegen_object_new(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ManagedToNativeWrapper__ctor_m3AB08E1C20A5FF8A7657D0EED3547FE1D63C07B6(L_8, L_7, NULL);
		NullCheck(L_8);
		intptr_t L_9 = L_8->___comInterface_7;
		V_0 = L_9;
	}

IL_0029:
	{
		intptr_t L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::ReleaseInterface(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedToNativeWrapper_ReleaseInterface_mE237AF25A5B1B3F6803F14B482B2952947EFD48E (intptr_t ___comInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___comInterface0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		intptr_t L_3 = ___comInterface0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826(L_3, NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		intptr_t L_6 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___comVtable_4;
		bool L_7;
		L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		intptr_t L_8 = ___comInterface0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2(L_8, NULL);
		return;
	}

IL_0029:
	{
		intptr_t L_10 = V_0;
		int64_t L_11;
		L_11 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_10, NULL);
		int32_t L_12;
		L_12 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		intptr_t L_13;
		L_13 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(((int64_t)il2cpp_codegen_add(L_11, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_12, 2))))), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_13, L_15, NULL);
		NullCheck(((ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308*)CastclassSealed((RuntimeObject*)L_16, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_il2cpp_TypeInfo_var)));
		ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* L_17 = ((ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308*)CastclassSealed((RuntimeObject*)L_16, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_il2cpp_TypeInfo_var))->___Release_0;
		intptr_t L_18 = ___comInterface0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_inline(L_17, L_18, NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetHRForException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4 (Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		MethodInfo_t* L_0 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___exceptionGetHResult_2;
		Exception_t* L_1 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}
}
// System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::GetObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB (intptr_t ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___this0;
		int32_t L_1;
		L_1 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_ReadIntPtr_m576E200A849BE7A6BC688058AA869B12B30D970F(L_0, L_1, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4;
		L_4 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF*)CastclassSealed((RuntimeObject*)L_4, ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var));
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::QueryInterface(System.IntPtr,System.Guid&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_QueryInterface_mF978DFBB321B67E156326F50E16E79DCD9A9D822 (intptr_t ___this0, Guid_t* ___riid1, intptr_t ___ppvObject2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
			Guid_t L_0 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___IID_IUnknown_0;
			V_0 = L_0;
			Guid_t* L_1 = ___riid1;
			Guid_t L_2 = (*(Guid_t*)L_1);
			bool L_3;
			L_3 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_0), L_2, NULL);
			if (L_3)
			{
				goto IL_002a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
			Guid_t L_4 = ((ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_StaticFields*)il2cpp_codegen_static_fields_for(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var))->___IID_IStream_1;
			V_0 = L_4;
			Guid_t* L_5 = ___riid1;
			Guid_t L_6 = (*(Guid_t*)L_5);
			bool L_7;
			L_7 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_0), L_6, NULL);
			if (!L_7)
			{
				goto IL_003c_1;
			}
		}

IL_002a_1:
		{
			intptr_t L_8 = ___ppvObject2;
			intptr_t L_9 = ___this0;
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_WriteIntPtr_m3AA18248A64282B1CFB4FF0B13678B2E08DADA36(L_8, L_9, NULL);
			intptr_t L_10 = ___this0;
			il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
			int32_t L_11;
			L_11 = ManagedToNativeWrapper_AddRef_mBB6F6BE5394D6B37FCDC544E7CAF723499943D99(L_10, NULL);
			V_1 = 0;
			goto IL_0057;
		}

IL_003c_1:
		{
			intptr_t L_12 = ___ppvObject2;
			intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
			Marshal_WriteIntPtr_m3AA18248A64282B1CFB4FF0B13678B2E08DADA36(L_12, L_13, NULL);
			V_1 = ((int32_t)-2147467262);
			goto IL_0057;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004f;
		}
		throw e;
	}

CATCH_004f:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_14;
		L_14 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_1 = L_14;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0057;
	}// end catch (depth: 1)

IL_0057:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_AddRef_mBB6F6BE5394D6B37FCDC544E7CAF723499943D99 (intptr_t ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* V_0 = NULL;
	ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___this0;
			il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
			ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
			L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
			V_0 = L_1;
			ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_2 = V_0;
			V_1 = L_2;
			V_2 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0027_1:
				{// begin finally (depth: 2)
					{
						bool L_3 = V_2;
						if (!L_3)
						{
							goto IL_0030_1;
						}
					}
					{
						ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_4 = V_1;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
					}

IL_0030_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_5 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
				ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_6 = V_0;
				ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_7 = L_6;
				NullCheck(L_7);
				int32_t L_8 = L_7->___refCount_9;
				V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				int32_t L_9 = V_3;
				NullCheck(L_7);
				L_7->___refCount_9 = L_9;
				int32_t L_10 = V_3;
				V_3 = L_10;
				goto IL_0036;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{// begin catch(System.Object)
		V_3 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0036;
	}// end catch (depth: 1)

IL_0036:
	{
		int32_t L_11 = V_3;
		return L_11;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Release_m0CD30C4CF1500CF93F5F739310C20FEACF5D2BA2 (intptr_t ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* V_0 = NULL;
	ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			intptr_t L_0 = ___this0;
			il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
			ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
			L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
			V_0 = L_1;
			ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_2 = V_0;
			V_1 = L_2;
			V_2 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_003d_1:
				{// begin finally (depth: 2)
					{
						bool L_3 = V_2;
						if (!L_3)
						{
							goto IL_0046_1;
						}
					}
					{
						ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_4 = V_1;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
					}

IL_0046_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_5 = V_1;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_2), NULL);
					ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_6 = V_0;
					NullCheck(L_6);
					int32_t L_7 = L_6->___refCount_9;
					if (!L_7)
					{
						goto IL_0034_2;
					}
				}
				{
					ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_8 = V_0;
					ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___refCount_9;
					V_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					int32_t L_11 = V_3;
					NullCheck(L_9);
					L_9->___refCount_9 = L_11;
					int32_t L_12 = V_3;
					if (L_12)
					{
						goto IL_0034_2;
					}
				}
				{
					ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_13 = V_0;
					NullCheck(L_13);
					ManagedToNativeWrapper_Dispose_m57151DF9AAFC79F9E2268F88C15030322F5E51DB(L_13, NULL);
				}

IL_0034_2:
				{
					ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_14 = V_0;
					NullCheck(L_14);
					int32_t L_15 = L_14->___refCount_9;
					V_3 = L_15;
					goto IL_004c;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{// begin catch(System.Object)
		V_3 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_004c:
	{
		int32_t L_16 = V_3;
		return L_16;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Read(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Read_m9B4C64BF0D12A02FADFF40D8D520379066CE7435 (intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___pv1;
		int32_t L_4 = ___cb2;
		intptr_t L_5 = ___pcbRead3;
		NullCheck(L_2);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(0 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Read(System.Byte[],System.Int32,System.IntPtr) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_0 = 0;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_6;
		L_6 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Write(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Write_m84C741B580561516EC4FCF30D63757513A516FAA (intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___pv1;
		int32_t L_4 = ___cb2;
		intptr_t L_5 = ___pcbWritten3;
		NullCheck(L_2);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(1 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Write(System.Byte[],System.Int32,System.IntPtr) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_0 = 0;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_6;
		L_6 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Seek(System.IntPtr,System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Seek_m702D19EEBB3CDC61F0B6F992493B0CC4859FDBCB (intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		int64_t L_3 = ___dlibMove1;
		int32_t L_4 = ___dwOrigin2;
		intptr_t L_5 = ___plibNewPosition3;
		NullCheck(L_2);
		InterfaceActionInvoker3< int64_t, int32_t, intptr_t >::Invoke(2 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Seek(System.Int64,System.Int32,System.IntPtr) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_0 = 0;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_6;
		L_6 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::SetSize(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_SetSize_m6EFF1CDAE03F0FC8D26972FE7930D97223C3BF47 (intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		int64_t L_3 = ___libNewSize1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(3 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::SetSize(System.Int64) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = 0;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::CopyTo(System.IntPtr,System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_CopyTo_m7B3E95442011430670AE612EE20297A39B3A85F9 (intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		RuntimeObject* L_3 = ___pstm1;
		int64_t L_4 = ___cb2;
		intptr_t L_5 = ___pcbRead3;
		intptr_t L_6 = ___pcbWritten4;
		NullCheck(L_2);
		InterfaceActionInvoker4< RuntimeObject*, int64_t, intptr_t, intptr_t >::Invoke(4 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
		V_0 = 0;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_7;
		L_7 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	}// end catch (depth: 1)

IL_0021:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Commit(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Commit_m4F1B88077F0C74CBE5241E44D05DEB28E1F2FBE6 (intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		int32_t L_3 = ___grfCommitFlags1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Commit(System.Int32) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = 0;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Revert(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Revert_m8C5C986C22976DE4329AF008FD8C9B1723F3E17D (intptr_t ___this0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Revert() */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2);
		V_0 = 0;
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_3;
		L_3 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::LockRegion(System.IntPtr,System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_LockRegion_mEE06CB112FB97FD62C0CDE533D9C171F612D4887 (intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		int64_t L_3 = ___libOffset1;
		int64_t L_4 = ___cb2;
		int32_t L_5 = ___dwLockType3;
		NullCheck(L_2);
		InterfaceActionInvoker3< int64_t, int64_t, int32_t >::Invoke(7 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::LockRegion(System.Int64,System.Int64,System.Int32) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_0 = 0;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_6;
		L_6 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::UnlockRegion(System.IntPtr,System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_UnlockRegion_m13FF5B840F34AF1B31CBC2D24FCDD53348ABE4F7 (intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		int64_t L_3 = ___libOffset1;
		int64_t L_4 = ___cb2;
		int32_t L_5 = ___dwLockType3;
		NullCheck(L_2);
		InterfaceActionInvoker3< int64_t, int64_t, int32_t >::Invoke(8 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::UnlockRegion(System.Int64,System.Int64,System.Int32) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_0 = 0;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_6;
		L_6 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001f;
	}// end catch (depth: 1)

IL_001f:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Stat(System.IntPtr,System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Stat_m28EDEEAE0A20304D59267457D339013F03A68681 (intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_1;
		L_1 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___managedInterface_6;
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* L_3 = ___pstatstg1;
		int32_t L_4 = ___grfStatFlag2;
		NullCheck(L_2);
		InterfaceActionInvoker2< STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t >::Invoke(9 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		V_0 = 0;
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* L_5 = ___pstatstg1;
		il2cpp_codegen_initobj(L_5, sizeof(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_6;
		L_6 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0025;
	}// end catch (depth: 1)

IL_0025:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper::Clone(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManagedToNativeWrapper_Clone_m474B079FEDB136C2E0B29C716A1DE192517507AA (intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t* L_0 = ___ppstm1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		*((intptr_t*)L_0) = (intptr_t)L_1;
	}
	try
	{// begin try (depth: 1)
		intptr_t L_2 = ___this0;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF* L_3;
		L_3 = ManagedToNativeWrapper_GetObject_mB1109A4126024B31181827C7B5130DF7C7CCCABB(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___managedInterface_6;
		NullCheck(L_4);
		InterfaceActionInvoker1< RuntimeObject** >::Invoke(10 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Clone(System.Runtime.InteropServices.ComTypes.IStream&) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_4, (&V_0));
		intptr_t* L_5 = ___ppstm1;
		RuntimeObject* L_6 = V_0;
		intptr_t L_7;
		L_7 = ManagedToNativeWrapper_GetInterface_m7C74F84F28FE7859AD4D02B0ECD06B8326429AE0(L_6, NULL);
		*((intptr_t*)L_5) = (intptr_t)L_7;
		V_1 = 0;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Exception)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var)));
		int32_t L_8;
		L_8 = ManagedToNativeWrapper_GetHRForException_m9B85B7A9DE9D918F8619A62C3F1F44B7EA8307F4(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		V_1 = L_8;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		int32_t L_9 = V_1;
		return L_9;
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
// Conversion methods for marshalling of: System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke(const ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308& unmarshaled, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_pinvoke& marshaled)
{
	marshaled.___Release_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_0));
}
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke_back(const ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_pinvoke& marshaled, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Release_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_0, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_0, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke_cleanup(ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_com(const ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308& unmarshaled, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_com& marshaled)
{
	marshaled.___Release_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_0));
}
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_com_back(const ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_com& marshaled, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Release_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_0, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA>(marshaled.___Release_0, ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: System.Drawing.ComIStreamMarshaler/ManagedToNativeWrapper/ReleaseSlot
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_com_cleanup(ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper__ctor_m523C445506389156DD24E858736BE3B68C671F21 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, intptr_t ___comInterface0, bool ___outParam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___comInterface0;
		__this->___comInterface_0 = L_0;
		intptr_t L_1 = ___comInterface0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_ReadIntPtr_m6E8694E5CB4FE576B3CAE1A002B03C211D393826(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_2, L_4, NULL);
		__this->___managedVtable_1 = ((IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E*)CastclassSealed((RuntimeObject*)L_5, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedVtable_1), (void*)((IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E*)CastclassSealed((RuntimeObject*)L_5, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_il2cpp_TypeInfo_var)));
		bool L_6 = ___outParam1;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_7 = __this->___managedVtable_1;
		NullCheck(L_7);
		AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* L_8 = L_7->___AddRef_1;
		intptr_t L_9 = ___comInterface0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_inline(L_8, L_9, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Finalize_m18045FDD4057B385A351134275E1D544A10F930B (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			NativeToManagedWrapper_Dispose_m011D5262A8F6D5A1D8D4E2F98EA8AE662E0EBB51(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Dispose_m011D5262A8F6D5A1D8D4E2F98EA8AE662E0EBB51 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* L_1 = L_0->___Release_2;
		intptr_t L_2 = __this->___comInterface_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_inline(L_1, L_2, NULL);
		bool L_4 = ___disposing0;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___comInterface_0 = L_5;
		__this->___managedVtable_1 = (IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedVtable_1), (void*)(IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E*)NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.IntPtr System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::GetUnderlyingInterface(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeToManagedWrapper_GetUnderlyingInterface_m6550CF3903D06C28E8BCF8DAD3A9AC0F0E71A541 (RuntimeObject* ___managedInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___managedInterface0;
		if (!((NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)IsInstSealed((RuntimeObject*)L_0, NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_1 = ___managedInterface0;
		V_0 = ((NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)CastclassSealed((RuntimeObject*)L_1, NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var));
		NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* L_2 = V_0;
		NullCheck(L_2);
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_3 = L_2->___managedVtable_1;
		NullCheck(L_3);
		AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* L_4 = L_3->___AddRef_1;
		NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* L_5 = V_0;
		NullCheck(L_5);
		intptr_t L_6 = L_5->___comInterface_0;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_inline(L_4, L_6, NULL);
		NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* L_8 = V_0;
		NullCheck(L_8);
		intptr_t L_9 = L_8->___comInterface_0;
		return L_9;
	}

IL_002d:
	{
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_10;
	}
}
// System.Runtime.InteropServices.ComTypes.IStream System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::GetInterface(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeToManagedWrapper_GetInterface_m535C881DF137D0012EA03EEF5759A0233244EA93 (intptr_t ___comInterface0, bool ___outParam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___comInterface0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		intptr_t L_3 = ___comInterface0;
		bool L_4 = ___outParam1;
		il2cpp_codegen_runtime_class_init_inline(ManagedToNativeWrapper_t4D6F1293B056C4B7E55DC0DD64B09D340FFF16DF_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = ManagedToNativeWrapper_GetUnderlyingInterface_mF62E71F3146835F6F057BC68EB0B52FC0700BD30(L_3, L_4, NULL);
		RuntimeObject* L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_7 = ___comInterface0;
		bool L_8 = ___outParam1;
		NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* L_9 = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)il2cpp_codegen_object_new(NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NativeToManagedWrapper__ctor_m523C445506389156DD24E858736BE3B68C671F21(L_9, L_7, L_8, NULL);
		V_0 = L_9;
	}

IL_0022:
	{
		RuntimeObject* L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::ReleaseInterface(System.Runtime.InteropServices.ComTypes.IStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_ReleaseInterface_m97353DD01B183A3D25D0C312CCE94DDD76A3A29E (RuntimeObject* ___managedInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___managedInterface0;
		if (!((NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)IsInstSealed((RuntimeObject*)L_0, NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = ___managedInterface0;
		NullCheck(((NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)CastclassSealed((RuntimeObject*)L_1, NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var)));
		NativeToManagedWrapper_Dispose_m011D5262A8F6D5A1D8D4E2F98EA8AE662E0EBB51(((NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)CastclassSealed((RuntimeObject*)L_1, NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_il2cpp_TypeInfo_var)), (bool)1, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC (int32_t ___result0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___result0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___result0;
		COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64* L_2 = (COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&COMException_t5F7851B41A1B121A563AA1ACF64196EFF5FE8D64_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		COMException__ctor_mE33718BF000802BEF35486F1B49C349AE9A0545A(L_2, (String_t*)NULL, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC_RuntimeMethod_var)));
	}

IL_000c:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Read(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Read_m92D93E15422F8E7AA6FE0970A92919F39FD5E827 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* L_1 = L_0->___Read_3;
		intptr_t L_2 = __this->___comInterface_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___pv0;
		int32_t L_4 = ___cb1;
		intptr_t L_5 = ___pcbRead2;
		NullCheck(L_1);
		int32_t L_6;
		L_6 = ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_inline(L_1, L_2, L_3, L_4, L_5, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_6, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Write(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Write_m2CC6ED3BBBB91C9B2DFF9312AB5CD200D8C7A236 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* L_1 = L_0->___Write_4;
		intptr_t L_2 = __this->___comInterface_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___pv0;
		int32_t L_4 = ___cb1;
		intptr_t L_5 = ___pcbWritten2;
		NullCheck(L_1);
		int32_t L_6;
		L_6 = WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_inline(L_1, L_2, L_3, L_4, L_5, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_6, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Seek(System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Seek_m3F200D92D11803B2279B860F73A8CD6EEED1A7B3 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* L_1 = L_0->___Seek_5;
		intptr_t L_2 = __this->___comInterface_0;
		int64_t L_3 = ___dlibMove0;
		int32_t L_4 = ___dwOrigin1;
		intptr_t L_5 = ___plibNewPosition2;
		NullCheck(L_1);
		int32_t L_6;
		L_6 = SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_inline(L_1, L_2, L_3, L_4, L_5, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_6, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::SetSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_SetSize_m0A80C7C20A343A24628B4E047EA7951625C77EA8 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___libNewSize0, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* L_1 = L_0->___SetSize_6;
		intptr_t L_2 = __this->___comInterface_0;
		int64_t L_3 = ___libNewSize0;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_inline(L_1, L_2, L_3, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_4, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_CopyTo_mEA49498C9B6A02F18A1C45AACD09F3F1FD3D6539 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, RuntimeObject* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* L_1 = L_0->___CopyTo_7;
		intptr_t L_2 = __this->___comInterface_0;
		RuntimeObject* L_3 = ___pstm0;
		int64_t L_4 = ___cb1;
		intptr_t L_5 = ___pcbRead2;
		intptr_t L_6 = ___pcbWritten3;
		NullCheck(L_1);
		int32_t L_7;
		L_7 = CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_7, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Commit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Commit_m1CDDE6076066A37352EC8F2E570E59E0D63C7598 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int32_t ___grfCommitFlags0, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* L_1 = L_0->___Commit_8;
		intptr_t L_2 = __this->___comInterface_0;
		int32_t L_3 = ___grfCommitFlags0;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_inline(L_1, L_2, L_3, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_4, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Revert_m6CEE0B80317E4CEC07237902E8E81A076C2ACA49 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* L_1 = L_0->___Revert_9;
		intptr_t L_2 = __this->___comInterface_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_inline(L_1, L_2, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_3, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::LockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_LockRegion_m28C5D057ACE791F074CE96598BF713A24E07A3DB (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* L_1 = L_0->___LockRegion_10;
		intptr_t L_2 = __this->___comInterface_0;
		int64_t L_3 = ___libOffset0;
		int64_t L_4 = ___cb1;
		int32_t L_5 = ___dwLockType2;
		NullCheck(L_1);
		int32_t L_6;
		L_6 = LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_inline(L_1, L_2, L_3, L_4, L_5, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_6, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::UnlockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_UnlockRegion_m6A59115770B8DD8C4E6AA9A9838AA89C55FC0FDF (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* L_1 = L_0->___UnlockRegion_11;
		intptr_t L_2 = __this->___comInterface_0;
		int64_t L_3 = ___libOffset0;
		int64_t L_4 = ___cb1;
		int32_t L_5 = ___dwLockType2;
		NullCheck(L_1);
		int32_t L_6;
		L_6 = UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_inline(L_1, L_2, L_3, L_4, L_5, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_6, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Stat_m34C4C16D96E7CDEFDEFB505200A102037AD5959A (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg0, int32_t ___grfStatFlag1, const RuntimeMethod* method) 
{
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* L_1 = L_0->___Stat_12;
		intptr_t L_2 = __this->___comInterface_0;
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* L_3 = ___pstatstg0;
		int32_t L_4 = ___grfStatFlag1;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_inline(L_1, L_2, L_3, L_4, NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_5, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamMarshaler/NativeToManagedWrapper::Clone(System.Runtime.InteropServices.ComTypes.IStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Clone_m6D34867528FA20C62023BCE1E029E495BA408793 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, RuntimeObject** ___ppstm0, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* L_0 = __this->___managedVtable_1;
		NullCheck(L_0);
		CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* L_1 = L_0->___Clone_13;
		intptr_t L_2 = __this->___comInterface_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_inline(L_1, L_2, (&V_0), NULL);
		NativeToManagedWrapper_ThrowExceptionForHR_m034FB0837F238B13D5A43148301456BF3FA692AC(L_3, NULL);
		RuntimeObject** L_4 = ___ppstm0;
		intptr_t L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = NativeToManagedWrapper_GetInterface_m535C881DF137D0012EA03EEF5759A0233244EA93(L_5, (bool)1, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
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
// System.Void System.Drawing.ComIStreamWrapper::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper__ctor_mC4D561E66F1C3CEE54DFD4629C68C3B26B47D0EC (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		__this->___position_1 = ((int64_t)(-1));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		__this->___baseStream_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseStream_0), (void*)L_0);
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::SetSizeToPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_SetSizeToPosition_m7E749F5E2E6224C9A4F94C8E448C76B4789F9984 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___position_1;
		if ((((int64_t)L_0) == ((int64_t)((int64_t)(-1)))))
		{
			goto IL_0047;
		}
	}
	{
		int64_t L_1 = __this->___position_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___baseStream_0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		if ((((int64_t)L_1) <= ((int64_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___baseStream_0;
		int64_t L_5 = __this->___position_1;
		NullCheck(L_4);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_4, L_5);
	}

IL_002e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___baseStream_0;
		int64_t L_7 = __this->___position_1;
		NullCheck(L_6);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_6, L_7);
		__this->___position_1 = ((int64_t)(-1));
	}

IL_0047:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Read(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Read_m4C6041146285EBE4CD5F6C206CB88B5EE7BB05B1 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___cb1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ComIStreamWrapper_SetSizeToPosition_m7E749F5E2E6224C9A4F94C8E448C76B4789F9984(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___baseStream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pv0;
		int32_t L_3 = ___cb1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, L_3);
		V_0 = L_4;
	}

IL_001a:
	{
		intptr_t L_5 = ___pcbRead2;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_8 = ___pcbRead2;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_8, L_9, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Write(System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Write_m79D2E6B0354200D0C2CED397807CBBA33563DFB4 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___cb1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ComIStreamWrapper_SetSizeToPosition_m7E749F5E2E6224C9A4F94C8E448C76B4789F9984(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___baseStream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pv0;
		int32_t L_3 = ___cb1;
		NullCheck(L_1);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, L_3);
	}

IL_0017:
	{
		intptr_t L_4 = ___pcbWritten2;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_7 = ___pcbWritten2;
		int32_t L_8 = ___cb1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt32_m5905B270B90B6938250A1731EB1A18C84F516EED(L_7, L_8, NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Seek(System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		V_0 = L_1;
		int32_t L_2 = ___dwOrigin1;
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0022:
	{
		int64_t L_4 = ___dlibMove0;
		V_1 = L_4;
		goto IL_005d;
	}

IL_0026:
	{
		int64_t L_5 = __this->___position_1;
		if ((!(((uint64_t)L_5) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_0040;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___baseStream_0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		int64_t L_8 = ___dlibMove0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_7, L_8));
		goto IL_005d;
	}

IL_0040:
	{
		int64_t L_9 = __this->___position_1;
		int64_t L_10 = ___dlibMove0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_9, L_10));
		goto IL_005d;
	}

IL_004b:
	{
		int64_t L_11 = V_0;
		int64_t L_12 = ___dlibMove0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_11, L_12));
		goto IL_005d;
	}

IL_0051:
	{
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_13 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_13, (String_t*)NULL, ((int32_t)-2147287039), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED_RuntimeMethod_var)));
	}

IL_005d:
	{
		int64_t L_14 = V_1;
		int64_t L_15 = V_0;
		if ((((int64_t)L_14) <= ((int64_t)L_15)))
		{
			goto IL_006a;
		}
	}
	{
		int64_t L_16 = V_1;
		__this->___position_1 = L_16;
		goto IL_007e;
	}

IL_006a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = __this->___baseStream_0;
		int64_t L_18 = V_1;
		NullCheck(L_17);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_17, L_18);
		__this->___position_1 = ((int64_t)(-1));
	}

IL_007e:
	{
		intptr_t L_19 = ___plibNewPosition2;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_21;
		L_21 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0092;
		}
	}
	{
		intptr_t L_22 = ___plibNewPosition2;
		int64_t L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt64_m8B6CF74FD0EA67EED0F6D8A70FA5614036776E9B(L_22, L_23, NULL);
	}

IL_0092:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::SetSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_SetSize_m5963DA1AACAFECE89C0D3E6444FD8820E6B6E528 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___libNewSize0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_0;
		int64_t L_1 = ___libNewSize0;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_CopyTo_mD8F3C7CF2BD6E7D0F4F638DC677E62FA8122E1F3 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, RuntimeObject* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_1 = ((int64_t)0);
		int64_t L_0 = ___cb1;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		int64_t L_1 = ___cb1;
		if ((((int64_t)L_1) >= ((int64_t)((int64_t)((int32_t)4096)))))
		{
			goto IL_0014;
		}
	}
	{
		int64_t L_2 = ___cb1;
		V_3 = ((int32_t)L_2);
		goto IL_001a;
	}

IL_0014:
	{
		V_3 = ((int32_t)4096);
	}

IL_001a:
	{
		int32_t L_3 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		ComIStreamWrapper_SetSizeToPosition_m7E749F5E2E6224C9A4F94C8E448C76B4789F9984(__this, NULL);
	}

IL_0027:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___baseStream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		int32_t L_9 = L_8;
		V_2 = L_9;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_10 = ___pstm0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_2;
		intptr_t L_13 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		NullCheck(L_10);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t >::Invoke(1 /* System.Void System.Runtime.InteropServices.ComTypes.IStream::Write(System.Byte[],System.Int32,System.IntPtr) */, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		int64_t L_14 = V_1;
		int32_t L_15 = V_2;
		V_1 = ((int64_t)il2cpp_codegen_add(L_14, ((int64_t)L_15)));
		int64_t L_16 = V_1;
		int64_t L_17 = ___cb1;
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_0061;
		}
	}
	{
		int64_t L_18 = ___cb1;
		int64_t L_19 = V_1;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_18, L_19))) >= ((int64_t)((int64_t)((int32_t)4096)))))
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_20 = ___cb1;
		int64_t L_21 = V_1;
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_20, L_21)));
		goto IL_0027;
	}

IL_0061:
	{
		intptr_t L_22 = ___pcbRead2;
		intptr_t L_23 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_24;
		L_24 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0075;
		}
	}
	{
		intptr_t L_25 = ___pcbRead2;
		int64_t L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt64_m8B6CF74FD0EA67EED0F6D8A70FA5614036776E9B(L_25, L_26, NULL);
	}

IL_0075:
	{
		intptr_t L_27 = ___pcbWritten3;
		intptr_t L_28 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_29;
		L_29 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_008b;
		}
	}
	{
		intptr_t L_30 = ___pcbWritten3;
		int64_t L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteInt64_m8B6CF74FD0EA67EED0F6D8A70FA5614036776E9B(L_30, L_31, NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Commit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Commit_mA184C65ECC3CA08CA69F1017EA135D3F1AC3E548 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int32_t ___grfCommitFlags0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseStream_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_0);
		ComIStreamWrapper_SetSizeToPosition_m7E749F5E2E6224C9A4F94C8E448C76B4789F9984(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, const RuntimeMethod* method) 
{
	{
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_0 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_0, (String_t*)NULL, ((int32_t)-2147287039), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71_RuntimeMethod_var)));
	}
}
// System.Void System.Drawing.ComIStreamWrapper::LockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) 
{
	{
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_0 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_0, (String_t*)NULL, ((int32_t)-2147287039), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D_RuntimeMethod_var)));
	}
}
// System.Void System.Drawing.ComIStreamWrapper::UnlockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2, const RuntimeMethod* method) 
{
	{
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_0 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_0, (String_t*)NULL, ((int32_t)-2147287039), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585_RuntimeMethod_var)));
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Stat_mF4035A6DF7FE59763D440145873AC8D3FB0F7F30 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg0, int32_t ___grfStatFlag1, const RuntimeMethod* method) 
{
	{
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* L_0 = ___pstatstg0;
		il2cpp_codegen_initobj(L_0, sizeof(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0));
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* L_1 = ___pstatstg0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___baseStream_0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		L_1->___cbSize_2 = L_3;
		return;
	}
}
// System.Void System.Drawing.ComIStreamWrapper::Clone(System.Runtime.InteropServices.ComTypes.IStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, RuntimeObject** ___ppstm0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___ppstm0;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_1 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_1, (String_t*)NULL, ((int32_t)-2147287039), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3_RuntimeMethod_var)));
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
// System.Void System.Drawing.Graphics::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics__ctor_m8751B21EBD6D5770AF4C1A0E4D40BD319290D6ED (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, intptr_t ___nativeGraphics0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___nativeObject_1 = L_0;
		MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538(__this, NULL);
		intptr_t L_1 = ___nativeGraphics0;
		__this->___nativeObject_1 = L_1;
		return;
	}
}
// System.Void System.Drawing.Graphics::.ctor(System.IntPtr,System.Drawing.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics__ctor_mF8B63F2E788DA93AD679C7173684B6D6DD339DD2 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, intptr_t ___nativeGraphics0, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___image1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Metafile_t362C07807C6865534F34AD779F90A62993BBC514* V_0 = NULL;
	{
		intptr_t L_0 = ___nativeGraphics0;
		Graphics__ctor_m8751B21EBD6D5770AF4C1A0E4D40BD319290D6ED(__this, L_0, NULL);
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_1 = ___image1;
		V_0 = ((Metafile_t362C07807C6865534F34AD779F90A62993BBC514*)IsInstSealed((RuntimeObject*)L_1, Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var));
		Metafile_t362C07807C6865534F34AD779F90A62993BBC514* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Metafile_t362C07807C6865534F34AD779F90A62993BBC514* L_3 = V_0;
		NullCheck(L_3);
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_4;
		L_4 = Metafile_AddMetafileHolder_m7E209B7D853929C938D2B7BB5B02BC6178BC1010(L_3, NULL);
		__this->____metafileHolder_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metafileHolder_5), (void*)L_4);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Drawing.Graphics::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Finalize_mD4B827EF3CC5A4A41EF69F5E8B185DB6801C2B00 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Graphics_Dispose_m4C3EB694BF4DA33150724E6B3CA2B469383E350B(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.IntPtr System.Drawing.Graphics::get_NativeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Graphics_get_NativeObject_m93C84FBD86D236CEA21E4FC0475A5FB6AE9E18B2 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___nativeObject_1;
		return L_0;
	}
}
// System.Void System.Drawing.Graphics::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Dispose_m4C3EB694BF4DA33150724E6B3CA2B469383E350B (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMacContext_t32FF2484A664B809047926489D8CBC997651E492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_3;
		if (L_0)
		{
			goto IL_0083;
		}
	}
	{
		intptr_t L_1 = __this->___deviceContextHdc_4;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Graphics_ReleaseHdc_mEADCEDD175C56D736C46B76C1516C236BCF07D0C(__this, NULL);
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_4 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCarbonDrawable_2;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_5 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCocoaDrawable_3;
		if (!L_5)
		{
			goto IL_0047;
		}
	}

IL_002e:
	{
		Graphics_Flush_m00A055F63B67CB0BFEBF37394A82B79203F1CA38(__this, NULL);
		RuntimeObject* L_6 = __this->___maccontext_2;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_7 = __this->___maccontext_2;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Drawing.IMacContext::Release() */, IMacContext_t32FF2484A664B809047926489D8CBC997651E492_il2cpp_TypeInfo_var, L_7);
	}

IL_0047:
	{
		intptr_t L_8 = __this->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = GDIPlus_GdipDeleteGraphics_mCF2B488FD6EC86B07796C1FC8A1AE0718EE82845(L_8, NULL);
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___nativeObject_1 = L_10;
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_9, NULL);
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_11 = __this->____metafileHolder_5;
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_12 = __this->____metafileHolder_5;
		__this->____metafileHolder_5 = (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metafileHolder_5), (void*)(MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3*)NULL);
		NullCheck(L_12);
		MetafileHolder_GraphicsDisposed_m3FB3B887CC4814A2E47D685A1B936E08155F2396(L_12, NULL);
	}

IL_007c:
	{
		__this->___disposed_3 = (bool)1;
	}

IL_0083:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.Graphics::DrawImage(System.Drawing.Image,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawImage_m58AF19E1658A6B8871FC5741E5F43A5544BD6744 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___image0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_0 = ___image0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3B3B7ACBC0F8F50E84C2570A76A848F78D95D56)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Graphics_DrawImage_m58AF19E1658A6B8871FC5741E5F43A5544BD6744_RuntimeMethod_var)));
	}

IL_000e:
	{
		intptr_t L_2 = __this->___nativeObject_1;
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_3 = ___image0;
		NullCheck(L_3);
		intptr_t L_4 = L_3->___nativeObject_1;
		int32_t L_5 = ___x1;
		int32_t L_6 = ___y2;
		int32_t L_7 = ___width3;
		int32_t L_8 = ___height4;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = GDIPlus_GdipDrawImageRectI_m250D3B0DBA7459CB793519606E1EEC393D273855(L_2, L_4, L_5, L_6, L_7, L_8, NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_9, NULL);
		return;
	}
}
// System.Void System.Drawing.Graphics::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Flush_m00A055F63B67CB0BFEBF37394A82B79203F1CA38 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) 
{
	{
		Graphics_Flush_m693FE85E23EC0BEB404AC130C623D47101383125(__this, 0, NULL);
		return;
	}
}
// System.Void System.Drawing.Graphics::Flush(System.Drawing.Drawing2D.FlushIntention)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Flush_m693FE85E23EC0BEB404AC130C623D47101383125 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, int32_t ___intention0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMacContext_t32FF2484A664B809047926489D8CBC997651E492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___nativeObject_1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		intptr_t L_3 = __this->___nativeObject_1;
		int32_t L_4 = ___intention0;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = GDIPlus_GdipFlush_m171C6C81C218C8AE8C47E034D238725343AAAC49(L_3, L_4, NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_5, NULL);
		RuntimeObject* L_6 = __this->___maccontext_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_7 = __this->___maccontext_2;
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Drawing.IMacContext::Synchronize() */, IMacContext_t32FF2484A664B809047926489D8CBC997651E492_il2cpp_TypeInfo_var, L_7);
	}

IL_0037:
	{
		return;
	}
}
// System.Drawing.Graphics System.Drawing.Graphics::FromImage(System.Drawing.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* Graphics_FromImage_m8D37CA5760E8C1A55AC19A64DDB953C7F480D406 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ___image0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* V_1 = NULL;
	Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_0 = ___image0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3B3B7ACBC0F8F50E84C2570A76A848F78D95D56)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Graphics_FromImage_m8D37CA5760E8C1A55AC19A64DDB953C7F480D406_RuntimeMethod_var)));
	}

IL_000e:
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_2 = ___image0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Image_get_PixelFormat_mA200A8BEACEE8C00E652DF448FE95CA74231C65D(L_2, NULL);
		if (!((int32_t)((int32_t)L_3&((int32_t)65536))))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m557C0E0FDBE23EE2270326E7A98328906830D43E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89390FD6960B2A2E3106A59A2A03A7D35EDA7DAB)), NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Graphics_FromImage_m8D37CA5760E8C1A55AC19A64DDB953C7F480D406_RuntimeMethod_var)));
	}

IL_002c:
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_6 = ___image0;
		NullCheck(L_6);
		intptr_t L_7 = L_6->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = GDIPlus_GdipGetImageGraphicsContext_m1BB2456D11899DADC58586D400B30CD474578B95(L_7, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_8, NULL);
		intptr_t L_9 = V_0;
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_10 = ___image0;
		Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* L_11 = (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504*)il2cpp_codegen_object_new(Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Graphics__ctor_mF8B63F2E788DA93AD679C7173684B6D6DD339DD2(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		bool L_12;
		L_12 = GDIPlus_RunningOnUnix_m585A9B010A804CAA1ADA2AD203DD7569B69B0F70(NULL);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_13 = ___image0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Image_get_Width_m3D9CC78692761DA6FC6422DA4C76D13A8AA0131A(L_13, NULL);
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_15 = ___image0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Image_get_Height_mE57F164E7CCED4E4A5FF5312EA85888D08CBB442(L_15, NULL);
		Rectangle__ctor_m3FB90CAD0ECE9EA19BE7EFEDCC973808070497A7((&V_2), 0, 0, L_14, L_16, NULL);
		Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* L_17 = V_1;
		NullCheck(L_17);
		intptr_t L_18;
		L_18 = Graphics_get_NativeObject_m93C84FBD86D236CEA21E4FC0475A5FB6AE9E18B2_inline(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = GDIPlus_GdipSetVisibleClip_linux_m9B6E33A033A836E83C5D3005906390D0097E92D0(L_18, (&V_2), NULL);
	}

IL_0070:
	{
		Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* L_20 = V_1;
		return L_20;
	}
}
// System.Void System.Drawing.Graphics::ReleaseHdc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ReleaseHdc_mEADCEDD175C56D736C46B76C1516C236BCF07D0C (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___deviceContextHdc_4;
		Graphics_ReleaseHdcInternal_m90F058CDD70D261332FF03166F715C518ABD0B06(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Drawing.Graphics::ReleaseHdcInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ReleaseHdcInternal_m90F058CDD70D261332FF03166F715C518ABD0B06 (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, intptr_t ___hdc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 2;
		intptr_t L_0 = ___hdc0;
		intptr_t L_1 = __this->___deviceContextHdc_4;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		intptr_t L_3 = __this->___nativeObject_1;
		intptr_t L_4 = __this->___deviceContextHdc_4;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = GDIPlus_GdipReleaseDC_mEF1193E957D5508D5BAE8D19495DE0AC454E102F(L_3, L_4, NULL);
		V_0 = L_5;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___deviceContextHdc_4 = L_6;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_7, NULL);
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
// System.Void System.Drawing.Image::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___nativeObject_1 = L_0;
		MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.Image::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_m2A14F8899FBEB3FEA9D31BC70611759F36F71BAA (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_0 = NULL;
	SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___nativeObject_1 = L_0;
		MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_1);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_2;
		L_2 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_1, NULL);
		V_0 = L_2;
		goto IL_0066;
	}

IL_001a:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_3 = V_0;
		NullCheck(L_3);
		SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74 L_4;
		L_4 = SerializationInfoEnumerator_get_Current_m820863174CF73089751ACC36BC34DD3188A1929B(L_3, NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline((&V_1), NULL);
		int32_t L_6;
		L_6 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_5, _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F, (bool)1, NULL);
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline((&V_1), NULL);
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_10, L_9, NULL);
		V_3 = L_10;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_3;
		intptr_t L_12;
		L_12 = Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F(L_11, NULL);
		__this->___nativeObject_1 = L_12;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC(NULL);
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_3;
		__this->___stream_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream_2), (void*)L_14);
	}

IL_0066:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_15, NULL);
		if (L_16)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void System.Drawing.Image::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_System_Runtime_Serialization_ISerializable_GetObjectData_m739E59F258268DD26AE2908349FA83722F26671A (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___si0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_004f;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_3;
				L_3 = Image_get_RawFormat_mDAC5F17B38A78F38CD7322835AD4D3342FE05818(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4;
				L_4 = ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7(NULL);
				NullCheck(L_3);
				bool L_5;
				L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
				if (!L_5)
				{
					goto IL_0026_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7;
				L_7 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
				Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160(__this, L_6, L_7, NULL);
				goto IL_0033_1;
			}

IL_0026_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_9;
				L_9 = Image_get_RawFormat_mDAC5F17B38A78F38CD7322835AD4D3342FE05818(__this, NULL);
				Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160(__this, L_8, L_9, NULL);
			}

IL_0033_1:
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = ___si0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				NullCheck(L_11);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
				NullCheck(L_10);
				SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_10, _stringLiteralB4D8750C59CE123025990AD22F8E27C3459AF91F, (RuntimeObject*)L_12, NULL);
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		return;
	}
}
// System.Drawing.Image System.Drawing.Image::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* Image_FromStream_mAF25E27B987F204F82141462B314BCA7220FFB31 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_1;
		L_1 = Image_LoadFromStream_m1A279EF017B47602EF088E2AF2B208638A1CB455(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Drawing.Image System.Drawing.Image::LoadFromStream(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* Image_LoadFromStream_m1A279EF017B47602EF088E2AF2B208638A1CB455 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___keepAlive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* V_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Image_LoadFromStream_m1A279EF017B47602EF088E2AF2B208638A1CB455_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		intptr_t L_3;
		L_3 = Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F(L_2, NULL);
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_4;
		L_4 = Image_CreateFromHandle_m3BF3B0CA74BA848750D1C39F94C5FB6F632058F1(L_3, NULL);
		V_0 = L_4;
		bool L_5 = ___keepAlive1;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC(NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_7 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		NullCheck(L_7);
		L_7->___stream_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___stream_2), (void*)L_8);
	}

IL_002b:
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_9 = V_0;
		return L_9;
	}
}
// System.Drawing.Image System.Drawing.Image::CreateFromHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* Image_CreateFromHandle_m3BF3B0CA74BA848750D1C39F94C5FB6F632058F1 (intptr_t ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___handle0;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GDIPlus_GdipGetImageType_m79C4045AE19886B095EE887B0D481CCA76170ECF(L_0, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_1, NULL);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0025;
	}

IL_0017:
	{
		intptr_t L_4 = ___handle0;
		Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_5 = (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)il2cpp_codegen_object_new(Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Bitmap__ctor_m7820E627830016DCC5D2DBAC39458764693A001C(L_5, L_4, NULL);
		return L_5;
	}

IL_001e:
	{
		intptr_t L_6 = ___handle0;
		Metafile_t362C07807C6865534F34AD779F90A62993BBC514* L_7 = (Metafile_t362C07807C6865534F34AD779F90A62993BBC514*)il2cpp_codegen_object_new(Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Metafile__ctor_mDBBBDB08277EA2A22D2BC63D2B6020B74EC087F7(L_7, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		String_t* L_8;
		L_8 = Locale_GetText_m557C0E0FDBE23EE2270326E7A98328906830D43E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF0106A6491E69BC32C2E5D2100CF4F189A3C0F7)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Image_CreateFromHandle_m3BF3B0CA74BA848750D1C39F94C5FB6F632058F1_RuntimeMethod_var)));
	}
}
// System.IntPtr System.Drawing.Image::InitFromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* V_6 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		if (L_3)
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_2 = L_4;
		V_3 = 0;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = V_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_6, ((int32_t)256))))))
		{
			goto IL_0049;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_7)->max_length)), 2)));
		V_5 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_11);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_9, (RuntimeArray*)L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_5;
		V_2 = L_12;
	}

IL_0049:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, L_15, ((int32_t)256));
		V_4 = L_16;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int32_t L_19 = V_4;
		if (L_19)
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		int32_t L_21 = V_3;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		MemoryStream__ctor_m3ECA346D73AA420F6F484BE23BFECAF3A64F6BAC(L_22, L_20, 0, L_21, NULL);
		___stream0 = L_22;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = GDIPlus_RunningOnUnix_m585A9B010A804CAA1ADA2AD203DD7569B69B0F70(NULL);
		if (!L_23)
		{
			goto IL_00af;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___stream0;
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_25 = (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989*)il2cpp_codegen_object_new(GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		GdiPlusStreamHelper__ctor_mFA010382BFA2FA3FCCA5FB7057DB866C92DD9FE8(L_25, L_24, (bool)1, NULL);
		V_6 = L_25;
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_26 = V_6;
		NullCheck(L_26);
		StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* L_27;
		L_27 = GdiPlusStreamHelper_get_GetHeaderDelegate_m9BF6D8161DA94429C1DC67B7851EB0B39B7F7374(L_26, NULL);
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_28 = V_6;
		NullCheck(L_28);
		StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* L_29;
		L_29 = GdiPlusStreamHelper_get_GetBytesDelegate_m0DEDE4119EED81AB00E69B11AD854971EB141886(L_28, NULL);
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_30 = V_6;
		NullCheck(L_30);
		StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* L_31;
		L_31 = GdiPlusStreamHelper_get_PutBytesDelegate_m26858076A600792D8ADB422C970A0F7E52813E98(L_30, NULL);
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_32 = V_6;
		NullCheck(L_32);
		StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* L_33;
		L_33 = GdiPlusStreamHelper_get_SeekDelegate_mB27C48C626F0E3C3EAECBF88427080E2CE1102BB(L_32, NULL);
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_34 = V_6;
		NullCheck(L_34);
		StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* L_35;
		L_35 = GdiPlusStreamHelper_get_CloseDelegate_m775A4C5523A4ADD0237F8E5E8DDF52881B04F8BF(L_34, NULL);
		GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_36 = V_6;
		NullCheck(L_36);
		StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* L_37;
		L_37 = GdiPlusStreamHelper_get_SizeDelegate_m543318ED5776EB5D393FD1C9E5CF21EC670ACA3B(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = GDIPlus_GdipLoadImageFromDelegate_linux_m2F9AD7F666107D831721E3A4960D230BB7B4182D(L_27, L_29, L_31, L_33, L_35, L_37, (&V_0), NULL);
		V_1 = L_38;
		goto IL_00bd;
	}

IL_00af:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_39 = ___stream0;
		ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* L_40 = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)il2cpp_codegen_object_new(ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		ComIStreamWrapper__ctor_mC4D561E66F1C3CEE54DFD4629C68C3B26B47D0EC(L_40, L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = GDIPlus_GdipLoadImageFromStream_m5CF974C5CACD6EE4719B900528DFBDBD0C78172B(L_40, (&V_0), NULL);
		V_1 = L_41;
	}

IL_00bd:
	{
		int32_t L_42 = V_1;
		if (!L_42)
		{
			goto IL_00c6;
		}
	}
	{
		intptr_t L_43 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_43;
	}

IL_00c6:
	{
		intptr_t L_44 = V_0;
		return L_44;
	}
}
// System.Drawing.Imaging.ImageCodecInfo System.Drawing.Image::findEncoderForFormat(System.Drawing.Imaging.ImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* Image_findEncoderForFormat_m3A04B80F8AF57B74009B50DDF6310EA2176139A9 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* V_0 = NULL;
	ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* V_1 = NULL;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_0;
		L_0 = ImageCodecInfo_GetImageEncoders_mFC7AEE9C5ED1F8FCC46520B37A8B1A8B24605D76(NULL);
		V_0 = L_0;
		V_1 = (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753*)NULL;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_1 = ___format0;
		NullCheck(L_1);
		Guid_t L_2;
		L_2 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_1, NULL);
		V_2 = L_2;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_3;
		L_3 = ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F(NULL);
		NullCheck(L_3);
		Guid_t L_4;
		L_4 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_3, NULL);
		bool L_5;
		L_5 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6;
		L_6 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
		___format0 = L_6;
	}

IL_0029:
	{
		V_3 = 0;
		goto IL_004f;
	}

IL_002d:
	{
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Guid_t L_11;
		L_11 = ImageCodecInfo_get_FormatID_mAA66FAF124BEF7AF3CE6E785AB414C448D7FCDDB_inline(L_10, NULL);
		V_2 = L_11;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_12 = ___format0;
		NullCheck(L_12);
		Guid_t L_13;
		L_13 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_12, NULL);
		bool L_14;
		L_14 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_13, NULL);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		goto IL_0055;
	}

IL_004b:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004f:
	{
		int32_t L_20 = V_3;
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_002d;
		}
	}

IL_0055:
	{
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_22 = V_1;
		return L_22;
	}
}
// System.Void System.Drawing.Image::Save(System.IO.Stream,System.Drawing.Imaging.ImageFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ___format1, const RuntimeMethod* method) 
{
	ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_0 = ___format1;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_1;
		L_1 = Image_findEncoderForFormat_m3A04B80F8AF57B74009B50DDF6310EA2176139A9(__this, L_0, NULL);
		V_0 = L_1;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_3 = ___format1;
		NullCheck(L_3);
		Guid_t L_4;
		L_4 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_3, NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B47E1EA640BD26EC692645AFF14AEF8B74E85D)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160_RuntimeMethod_var)));
	}

IL_002f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_9 = V_0;
		Image_Save_mE286F474C88B4142BFD91D8EBC3BB3720EFA2590(__this, L_8, L_9, (EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207*)NULL, NULL);
		return;
	}
}
// System.Void System.Drawing.Image::Save(System.IO.Stream,System.Drawing.Imaging.ImageCodecInfo,System.Drawing.Imaging.EncoderParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Save_mE286F474C88B4142BFD91D8EBC3BB3720EFA2590 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* ___encoder1, EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* ___encoderParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* V_3 = NULL;
	{
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_0 = ___encoder1;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = ImageCodecInfo_get_Clsid_m0B4302897900CA76E4CBC75092352668BDD1F899_inline(L_0, NULL);
		V_2 = L_1;
		EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* L_2 = ___encoderParams2;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_1 = L_3;
		goto IL_0019;
	}

IL_0012:
	{
		EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* L_4 = ___encoderParams2;
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB(L_4, NULL);
		V_1 = L_5;
	}

IL_0019:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				{
					intptr_t L_6 = V_1;
					intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_8;
					L_8 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_6, L_7, NULL);
					if (!L_8)
					{
						goto IL_008e;
					}
				}
				{
					intptr_t L_9 = V_1;
					il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
					Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_9, NULL);
				}

IL_008e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = GDIPlus_RunningOnUnix_m585A9B010A804CAA1ADA2AD203DD7569B69B0F70(NULL);
				if (!L_10)
				{
					goto IL_0058_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___stream0;
				GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_12 = (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989*)il2cpp_codegen_object_new(GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				GdiPlusStreamHelper__ctor_mFA010382BFA2FA3FCCA5FB7057DB866C92DD9FE8(L_12, L_11, (bool)0, NULL);
				V_3 = L_12;
				intptr_t L_13 = __this->___nativeObject_1;
				GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_14 = V_3;
				NullCheck(L_14);
				StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* L_15;
				L_15 = GdiPlusStreamHelper_get_GetBytesDelegate_m0DEDE4119EED81AB00E69B11AD854971EB141886(L_14, NULL);
				GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_16 = V_3;
				NullCheck(L_16);
				StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* L_17;
				L_17 = GdiPlusStreamHelper_get_PutBytesDelegate_m26858076A600792D8ADB422C970A0F7E52813E98(L_16, NULL);
				GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_18 = V_3;
				NullCheck(L_18);
				StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* L_19;
				L_19 = GdiPlusStreamHelper_get_SeekDelegate_mB27C48C626F0E3C3EAECBF88427080E2CE1102BB(L_18, NULL);
				GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_20 = V_3;
				NullCheck(L_20);
				StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* L_21;
				L_21 = GdiPlusStreamHelper_get_CloseDelegate_m775A4C5523A4ADD0237F8E5E8DDF52881B04F8BF(L_20, NULL);
				GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* L_22 = V_3;
				NullCheck(L_22);
				StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* L_23;
				L_23 = GdiPlusStreamHelper_get_SizeDelegate_m543318ED5776EB5D393FD1C9E5CF21EC670ACA3B(L_22, NULL);
				intptr_t L_24 = V_1;
				il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
				int32_t L_25;
				L_25 = GDIPlus_GdipSaveImageToDelegate_linux_m3853E297A0550CD7EC4DEB58EB6AF5F16DACFD20(L_13, L_15, L_17, L_19, L_21, L_23, (&V_2), L_24, NULL);
				V_0 = L_25;
				goto IL_008f;
			}

IL_0058_1:
			{
				intptr_t L_26 = __this->___nativeObject_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_27;
				memset((&L_27), 0, sizeof(L_27));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_27), __this, L_26, /*hidden argument*/NULL);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___stream0;
				ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* L_29 = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)il2cpp_codegen_object_new(ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_il2cpp_TypeInfo_var);
				NullCheck(L_29);
				ComIStreamWrapper__ctor_mC4D561E66F1C3CEE54DFD4629C68C3B26B47D0EC(L_29, L_28, NULL);
				EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* L_30 = ___encoderParams2;
				intptr_t L_31 = V_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_32;
				memset((&L_32), 0, sizeof(L_32));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_32), L_30, L_31, /*hidden argument*/NULL);
				il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
				int32_t L_33;
				L_33 = GDIPlus_GdipSaveImageToStream_m7A20EEA4E21C7D7BEAC6F1BEB71BC09D3D2077D4(L_27, L_29, (&V_2), L_32, NULL);
				V_0 = L_33;
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		int32_t L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_34, NULL);
		return;
	}
}
// System.Int32 System.Drawing.Image::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_Height_mE57F164E7CCED4E4A5FF5312EA85888D08CBB442 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GDIPlus_GdipGetImageHeight_mFCA648FBB995DAC51A2F9D55D5A85DFFC61853DE(L_0, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_1, NULL);
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.Drawing.Imaging.PixelFormat System.Drawing.Image::get_PixelFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_PixelFormat_mA200A8BEACEE8C00E652DF448FE95CA74231C65D (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = __this->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GDIPlus_GdipGetImagePixelFormat_m7F933DD50BBE97ECEAB4F331DFC5E144C841D176(L_0, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_1, NULL);
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Image::get_RawFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* Image_get_RawFormat_mDAC5F17B38A78F38CD7322835AD4D3342FE05818 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GDIPlus_GdipGetImageRawFormat_mD3F028410935AF1DEC46A100AD68DBFEAFE8C3B2(L_0, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_1, NULL);
		Guid_t L_2 = V_0;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_3 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ImageFormat__ctor_m4C8FEA14886E078A2993BF64DEC24A740FB0AA31(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Int32 System.Drawing.Image::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_Width_m3D9CC78692761DA6FC6422DA4C76D13A8AA0131A (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GDIPlus_GdipGetImageWidth_mD547696BE4DD53ADD0104B834A34B2618DB3EFDF(L_0, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_1, NULL);
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.IntPtr System.Drawing.Image::get_NativeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Image_get_NativeObject_m7B065018E0ADD1DFD25346A728A586F2667AFC76 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___nativeObject_1;
		return L_0;
	}
}
// System.Void System.Drawing.Image::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Dispose_m7369158A6AA39D7A90AF7DC9BCE4885E443A8F38 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.Drawing.Image::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.Image::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Finalize_mA5782F29F7FAF94660260A819477DD2B0CF95A83 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.Drawing.Image::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.Drawing.Image::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_Dispose_mE0CB2A3C3CDE7AF58B7616FA3F177CFB1595DEFD (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___GdiPlusToken_4;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		intptr_t L_1 = __this->___nativeObject_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		intptr_t L_4 = __this->___nativeObject_1;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = GDIPlus_GdipDisposeImage_mD4A43CCBD9933778B73B5AA371CF5E7CF5CACC64(L_4, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___stream_2;
		G_B3_0 = L_5;
		if (!L_6)
		{
			G_B4_0 = L_5;
			goto IL_003e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___stream_2;
		NullCheck(L_7);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_7, NULL);
		__this->___stream_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		G_B4_0 = G_B3_0;
	}

IL_003e:
	{
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___nativeObject_1 = L_8;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(G_B4_0, NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Object System.Drawing.Image::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Image_Clone_mC4F3EB2719A5B711821627C016185CEC545A47F8 (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC(NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = Image_CloneFromStream_m6FCDB2D742E8D1BEF2844A0D83D14C6A6D8917EB(__this, NULL);
		return L_2;
	}

IL_0016:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_0 = L_3;
		intptr_t L_4;
		L_4 = Image_get_NativeObject_m7B065018E0ADD1DFD25346A728A586F2667AFC76_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = GDIPlus_GdipCloneImage_m74D35B0CE164CABA8C28353F61E0C94620A99554(L_4, (&V_0), NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_5, NULL);
		if (!((Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)IsInstSealed((RuntimeObject*)__this, Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var)))
		{
			goto IL_003d;
		}
	}
	{
		intptr_t L_6 = V_0;
		Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_7 = (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)il2cpp_codegen_object_new(Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Bitmap__ctor_m7820E627830016DCC5D2DBAC39458764693A001C(L_7, L_6, NULL);
		return L_7;
	}

IL_003d:
	{
		intptr_t L_8 = V_0;
		Metafile_t362C07807C6865534F34AD779F90A62993BBC514* L_9 = (Metafile_t362C07807C6865534F34AD779F90A62993BBC514*)il2cpp_codegen_object_new(Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Metafile__ctor_mDBBBDB08277EA2A22D2BC63D2B6020B74EC087F7(L_9, L_8, NULL);
		return L_9;
	}
}
// System.Object System.Drawing.Image::CloneFromStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Image_CloneFromStream_m6FCDB2D742E8D1BEF2844A0D83D14C6A6D8917EB (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_CloneFromStream_m6FCDB2D742E8D1BEF2844A0D83D14C6A6D8917EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_2;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Image_CloneFromStream_m6FCDB2D742E8D1BEF2844A0D83D14C6A6D8917EB_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_1));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_3, L_2, NULL);
		V_0 = L_3;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_2;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		if ((((int64_t)L_5) < ((int64_t)((int64_t)((int32_t)4096)))))
		{
			goto IL_0031;
		}
	}
	{
		G_B3_0 = ((int32_t)4096);
		goto IL_003d;
	}

IL_0031:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___stream_2;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		G_B3_0 = ((int32_t)L_7);
	}

IL_003d:
	{
		V_1 = G_B3_0;
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->___stream_2;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_10, ((int64_t)0));
	}

IL_0052:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___stream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, L_13);
		V_1 = L_14;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		int32_t L_17 = V_1;
		NullCheck(L_15);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, L_17);
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0052;
		}
	}
	{
		intptr_t L_19 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		V_3 = L_19;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = V_0;
		intptr_t L_21;
		L_21 = Image_InitFromStream_m9E25DDFA581B0132FF24AA794D203A6AC2F4D47F(L_20, NULL);
		V_3 = L_21;
		if (!((Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)IsInstSealed((RuntimeObject*)__this, Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		intptr_t L_22 = V_3;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_0;
		Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_24 = (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)il2cpp_codegen_object_new(Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Bitmap__ctor_mFABBA6E70AE4F310CAB91F431029B92B6D54EB6E(L_24, L_22, L_23, NULL);
		return L_24;
	}

IL_008f:
	{
		intptr_t L_25 = V_3;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_0;
		Metafile_t362C07807C6865534F34AD779F90A62993BBC514* L_27 = (Metafile_t362C07807C6865534F34AD779F90A62993BBC514*)il2cpp_codegen_object_new(Metafile_t362C07807C6865534F34AD779F90A62993BBC514_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Metafile__ctor_m6313C8851025E8502761E9663EFE28A829FF1C3B(L_27, L_25, L_26, NULL);
		return L_27;
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
// System.Void System.Drawing.ImageConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageConverter__ctor_mAA53498CE8D7371E04D91F8CAE5077E43287E26C (ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
// System.Boolean System.Drawing.ImageConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConverter_CanConvertFrom_m626A009091535AFE3300EE77E3270C0A5D69A0EA (ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5* __this, RuntimeObject* ___context0, Type_t* ___sourceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___sourceType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean System.Drawing.ImageConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConverter_CanConvertTo_mAB258504B5B52085B36A0B1D417BDF842A37E605 (ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5* __this, RuntimeObject* ___context0, Type_t* ___destinationType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___destinationType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_4 = ___destinationType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		return (bool)1;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Object System.Drawing.ImageConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageConverter_ConvertFrom_m6FCEA505AF4D528E2AD8E1E5296B8D220F558742 (ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value2;
		V_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2 = ___context0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = ___culture1;
		RuntimeObject* L_4 = ___value2;
		RuntimeObject* L_5;
		L_5 = TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774(__this, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_7, L_6, NULL);
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_8;
		L_8 = Image_FromStream_mAF25E27B987F204F82141462B314BCA7220FFB31(L_7, NULL);
		return L_8;
	}
}
// System.Object System.Drawing.ImageConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageConverter_ConvertTo_mC14B42F9CDE5207A0653D3A90AAAF8D59514396E (ImageConverter_t43D093A194A381C21C9179EF643E062A390968D5* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, Type_t* ___destinationType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___value2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B;
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value2;
		if (!((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)IsInstClass((RuntimeObject*)L_1, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var)))
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_2 = ___destinationType3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___value2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		return L_7;
	}

IL_002b:
	{
		Type_t* L_8 = ___destinationType3;
		bool L_9;
		L_9 = VirtualFuncInvoker2< bool, RuntimeObject*, Type_t* >::Invoke(5 /* System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, (RuntimeObject*)NULL, L_8);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_10, NULL);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
					if (!L_11)
					{
						goto IL_0065;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_0;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_13 = ___value2;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
			RuntimeObject* L_15 = ___value2;
			NullCheck(((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)CastclassClass((RuntimeObject*)L_15, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var)));
			ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_16;
			L_16 = Image_get_RawFormat_mDAC5F17B38A78F38CD7322835AD4D3342FE05818(((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)CastclassClass((RuntimeObject*)L_15, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var)), NULL);
			NullCheck(((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)CastclassClass((RuntimeObject*)L_13, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var)));
			Image_Save_mE964D5A7A139307E8658AC107CA70DED6624A160(((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)CastclassClass((RuntimeObject*)L_13, Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE_il2cpp_TypeInfo_var)), L_14, L_16, NULL);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
			NullCheck(L_17);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
			L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_17);
			V_1 = (RuntimeObject*)L_18;
			goto IL_0085;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		RuntimeObject* L_21 = ___value2;
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCFC07C50E4128E902272D429272F65379145FF9)), L_20, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_24 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageConverter_ConvertTo_mC14B42F9CDE5207A0653D3A90AAAF8D59514396E_RuntimeMethod_var)));
	}

IL_0085:
	{
		RuntimeObject* L_25 = V_1;
		return L_25;
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
// System.Void System.Drawing.ImageFormatConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFormatConverter__ctor_m91F80D7AE3B36C6AED6FBF413C59CF6821069D7E (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
// System.Boolean System.Drawing.ImageFormatConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageFormatConverter_CanConvertFrom_m73821CBED02EDACBE6925D2050857FAAD5CC7854 (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, RuntimeObject* ___context0, Type_t* ___sourceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___sourceType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_4 = ___context0;
		Type_t* L_5 = ___sourceType1;
		bool L_6;
		L_6 = TypeConverter_CanConvertFrom_m5E04D8BFD5D73042127767BD65B6434DAAEC2E53(__this, L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean System.Drawing.ImageFormatConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageFormatConverter_CanConvertTo_mA60B29928C729EA50A7BBFFC1C2F090592441D9F (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, RuntimeObject* ___context0, Type_t* ___destinationType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___destinationType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		Type_t* L_4 = ___destinationType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_8 = ___context0;
		Type_t* L_9 = ___destinationType1;
		bool L_10;
		L_10 = TypeConverter_CanConvertTo_m959B290C863DDFBDD575AF3236B0A17E02E44013(__this, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Object System.Drawing.ImageFormatConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageFormatConverter_ConvertFrom_mB26DBC94FB1F469AE6491C8880638C241FA8EDE3 (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E45B9AF94B60B9B2766AD6C3FAD4A7EDF566DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DA600376D9993247538794EC7CC6CB88410764F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value2;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_2 = ___context0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = ___culture1;
		RuntimeObject* L_4 = ___value2;
		RuntimeObject* L_5;
		L_5 = TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774(__this, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_9;
		L_9 = ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F(NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_8);
		bool L_11;
		L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_12;
		L_12 = ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F(NULL);
		return L_12;
	}

IL_003a:
	{
		String_t* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_14;
		L_14 = ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204(NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_13);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_17;
		L_17 = ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204(NULL);
		return L_17;
	}

IL_0052:
	{
		String_t* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_19;
		L_19 = ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA(NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_18);
		bool L_21;
		L_21 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_22;
		L_22 = ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA(NULL);
		return L_22;
	}

IL_006a:
	{
		String_t* L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_24;
		L_24 = ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF(NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		NullCheck(L_23);
		bool L_26;
		L_26 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_27;
		L_27 = ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF(NULL);
		return L_27;
	}

IL_0082:
	{
		String_t* L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_29;
		L_29 = ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7(NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		NullCheck(L_28);
		bool L_31;
		L_31 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_009a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_32;
		L_32 = ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7(NULL);
		return L_32;
	}

IL_009a:
	{
		String_t* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_34;
		L_34 = ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4(NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		NullCheck(L_33);
		bool L_36;
		L_36 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00b2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_37;
		L_37 = ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4(NULL);
		return L_37;
	}

IL_00b2:
	{
		String_t* L_38 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_39;
		L_39 = ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F(NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		NullCheck(L_38);
		bool L_41;
		L_41 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_38, L_40, NULL);
		if (!L_41)
		{
			goto IL_00ca;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_42;
		L_42 = ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F(NULL);
		return L_42;
	}

IL_00ca:
	{
		String_t* L_43 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_44;
		L_44 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		NullCheck(L_43);
		bool L_46;
		L_46 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_00e2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_47;
		L_47 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
		return L_47;
	}

IL_00e2:
	{
		String_t* L_48 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_49;
		L_49 = ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B(NULL);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		NullCheck(L_48);
		bool L_51;
		L_51 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_48, L_50, NULL);
		if (!L_51)
		{
			goto IL_00fa;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_52;
		L_52 = ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B(NULL);
		return L_52;
	}

IL_00fa:
	{
		String_t* L_53 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_54;
		L_54 = ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C(NULL);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		NullCheck(L_53);
		bool L_56;
		L_56 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_01dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_57;
		L_57 = ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C(NULL);
		return L_57;
	}

IL_0115:
	{
		String_t* L_58 = V_0;
		int32_t L_59;
		L_59 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_58, _stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7, 5, NULL);
		if (L_59)
		{
			goto IL_0129;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_60;
		L_60 = ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F(NULL);
		return L_60;
	}

IL_0129:
	{
		String_t* L_61 = V_0;
		int32_t L_62;
		L_62 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_61, _stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE, 5, NULL);
		if (L_62)
		{
			goto IL_013d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_63;
		L_63 = ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204(NULL);
		return L_63;
	}

IL_013d:
	{
		String_t* L_64 = V_0;
		int32_t L_65;
		L_65 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_64, _stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB, 5, NULL);
		if (L_65)
		{
			goto IL_0151;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_66;
		L_66 = ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA(NULL);
		return L_66;
	}

IL_0151:
	{
		String_t* L_67 = V_0;
		int32_t L_68;
		L_68 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_67, _stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05, 5, NULL);
		if (L_68)
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_69;
		L_69 = ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF(NULL);
		return L_69;
	}

IL_0165:
	{
		String_t* L_70 = V_0;
		int32_t L_71;
		L_71 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_70, _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37, 5, NULL);
		if (L_71)
		{
			goto IL_0179;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_72;
		L_72 = ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7(NULL);
		return L_72;
	}

IL_0179:
	{
		String_t* L_73 = V_0;
		int32_t L_74;
		L_74 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_73, _stringLiteral2DA600376D9993247538794EC7CC6CB88410764F, 5, NULL);
		if (L_74)
		{
			goto IL_018d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_75;
		L_75 = ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4(NULL);
		return L_75;
	}

IL_018d:
	{
		String_t* L_76 = V_0;
		int32_t L_77;
		L_77 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_76, _stringLiteral20E45B9AF94B60B9B2766AD6C3FAD4A7EDF566DB, 5, NULL);
		if (L_77)
		{
			goto IL_01a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_78;
		L_78 = ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F(NULL);
		return L_78;
	}

IL_01a1:
	{
		String_t* L_79 = V_0;
		int32_t L_80;
		L_80 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_79, _stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E, 5, NULL);
		if (L_80)
		{
			goto IL_01b5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_81;
		L_81 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
		return L_81;
	}

IL_01b5:
	{
		String_t* L_82 = V_0;
		int32_t L_83;
		L_83 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_82, _stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1, 5, NULL);
		if (L_83)
		{
			goto IL_01c9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_84;
		L_84 = ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B(NULL);
		return L_84;
	}

IL_01c9:
	{
		String_t* L_85 = V_0;
		int32_t L_86;
		L_86 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_85, _stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799, 5, NULL);
		if (L_86)
		{
			goto IL_01dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_87;
		L_87 = ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C(NULL);
		return L_87;
	}

IL_01dd:
	{
		RuntimeObject* L_88 = ___context0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_89 = ___culture1;
		RuntimeObject* L_90 = ___value2;
		RuntimeObject* L_91;
		L_91 = TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774(__this, L_88, L_89, L_90, NULL);
		return L_91;
	}
}
// System.Object System.Drawing.ImageFormatConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageFormatConverter_ConvertTo_m8AF8B7B31F28EA1B15D683D3B79D94E06637DAC4 (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, Type_t* ___destinationType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E45B9AF94B60B9B2766AD6C3FAD4A7EDF566DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DA600376D9993247538794EC7CC6CB88410764F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799);
		s_Il2CppMethodInitialized = true;
	}
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_0 = NULL;
	String_t* V_1 = NULL;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___value2;
		if (!((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)IsInstSealed((RuntimeObject*)L_0, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var)))
		{
			goto IL_020a;
		}
	}
	{
		RuntimeObject* L_1 = ___value2;
		V_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)CastclassSealed((RuntimeObject*)L_1, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var));
		V_1 = (String_t*)NULL;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_2 = V_0;
		NullCheck(L_2);
		Guid_t L_3;
		L_3 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_2, NULL);
		V_2 = L_3;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4;
		L_4 = ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F(NULL);
		NullCheck(L_4);
		Guid_t L_5;
		L_5 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_4, NULL);
		bool L_6;
		L_6 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_5, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		V_1 = _stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7;
		goto IL_0178;
	}

IL_0039:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_0;
		NullCheck(L_7);
		Guid_t L_8;
		L_8 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_7, NULL);
		V_2 = L_8;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_9;
		L_9 = ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204(NULL);
		NullCheck(L_9);
		Guid_t L_10;
		L_10 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_9, NULL);
		bool L_11;
		L_11 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_10, NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = _stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE;
		goto IL_0178;
	}

IL_005e:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_12 = V_0;
		NullCheck(L_12);
		Guid_t L_13;
		L_13 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_12, NULL);
		V_2 = L_13;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_14;
		L_14 = ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA(NULL);
		NullCheck(L_14);
		Guid_t L_15;
		L_15 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_14, NULL);
		bool L_16;
		L_16 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_15, NULL);
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		V_1 = _stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB;
		goto IL_0178;
	}

IL_0083:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_17 = V_0;
		NullCheck(L_17);
		Guid_t L_18;
		L_18 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_17, NULL);
		V_2 = L_18;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_19;
		L_19 = ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF(NULL);
		NullCheck(L_19);
		Guid_t L_20;
		L_20 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_19, NULL);
		bool L_21;
		L_21 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_20, NULL);
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		V_1 = _stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05;
		goto IL_0178;
	}

IL_00a8:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_22 = V_0;
		NullCheck(L_22);
		Guid_t L_23;
		L_23 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_22, NULL);
		V_2 = L_23;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_24;
		L_24 = ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7(NULL);
		NullCheck(L_24);
		Guid_t L_25;
		L_25 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_24, NULL);
		bool L_26;
		L_26 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_25, NULL);
		if (!L_26)
		{
			goto IL_00cd;
		}
	}
	{
		V_1 = _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37;
		goto IL_0178;
	}

IL_00cd:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_27 = V_0;
		NullCheck(L_27);
		Guid_t L_28;
		L_28 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_27, NULL);
		V_2 = L_28;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_29;
		L_29 = ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4(NULL);
		NullCheck(L_29);
		Guid_t L_30;
		L_30 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_29, NULL);
		bool L_31;
		L_31 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_30, NULL);
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		V_1 = _stringLiteral2DA600376D9993247538794EC7CC6CB88410764F;
		goto IL_0178;
	}

IL_00f2:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_32 = V_0;
		NullCheck(L_32);
		Guid_t L_33;
		L_33 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_32, NULL);
		V_2 = L_33;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_34;
		L_34 = ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F(NULL);
		NullCheck(L_34);
		Guid_t L_35;
		L_35 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_34, NULL);
		bool L_36;
		L_36 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_35, NULL);
		if (!L_36)
		{
			goto IL_0114;
		}
	}
	{
		V_1 = _stringLiteral20E45B9AF94B60B9B2766AD6C3FAD4A7EDF566DB;
		goto IL_0178;
	}

IL_0114:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_37 = V_0;
		NullCheck(L_37);
		Guid_t L_38;
		L_38 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_37, NULL);
		V_2 = L_38;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_39;
		L_39 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
		NullCheck(L_39);
		Guid_t L_40;
		L_40 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_39, NULL);
		bool L_41;
		L_41 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_40, NULL);
		if (!L_41)
		{
			goto IL_0136;
		}
	}
	{
		V_1 = _stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E;
		goto IL_0178;
	}

IL_0136:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_42 = V_0;
		NullCheck(L_42);
		Guid_t L_43;
		L_43 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_42, NULL);
		V_2 = L_43;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_44;
		L_44 = ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B(NULL);
		NullCheck(L_44);
		Guid_t L_45;
		L_45 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_44, NULL);
		bool L_46;
		L_46 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_45, NULL);
		if (!L_46)
		{
			goto IL_0158;
		}
	}
	{
		V_1 = _stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1;
		goto IL_0178;
	}

IL_0158:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_47 = V_0;
		NullCheck(L_47);
		Guid_t L_48;
		L_48 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_47, NULL);
		V_2 = L_48;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_49;
		L_49 = ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C(NULL);
		NullCheck(L_49);
		Guid_t L_50;
		L_50 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_49, NULL);
		bool L_51;
		L_51 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_2), L_50, NULL);
		if (!L_51)
		{
			goto IL_0178;
		}
	}
	{
		V_1 = _stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799;
	}

IL_0178:
	{
		Type_t* L_52 = ___destinationType3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		bool L_55;
		L_55 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_52, L_54, NULL);
		if (!L_55)
		{
			goto IL_0197;
		}
	}
	{
		String_t* L_56 = V_1;
		if (L_56)
		{
			goto IL_0195;
		}
	}
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_57 = V_0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_57);
		return L_58;
	}

IL_0195:
	{
		String_t* L_59 = V_1;
		return L_59;
	}

IL_0197:
	{
		Type_t* L_60 = ___destinationType3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_60, L_62, NULL);
		if (!L_63)
		{
			goto IL_020a;
		}
	}
	{
		String_t* L_64 = V_1;
		if (!L_64)
		{
			goto IL_01c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_67;
		L_67 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_66, NULL);
		String_t* L_68 = V_1;
		NullCheck(L_67);
		PropertyInfo_t* L_69;
		L_69 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_67, L_68, NULL);
		InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* L_70 = (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5*)il2cpp_codegen_object_new(InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		InstanceDescriptor__ctor_m4A88597D681C8A8A9551AB318F8CBB47D49BEC57(L_70, L_69, (RuntimeObject*)NULL, NULL);
		return L_70;
	}

IL_01c9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_73;
		L_73 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_72, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_74 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_75 = L_74;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_77);
		NullCheck(L_73);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_78;
		L_78 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_73, L_75, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = L_79;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_81 = V_0;
		NullCheck(L_81);
		Guid_t L_82;
		L_82 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_81, NULL);
		Guid_t L_83 = L_82;
		RuntimeObject* L_84 = Box(Guid_t_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_84);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_84);
		InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5* L_85 = (InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5*)il2cpp_codegen_object_new(InstanceDescriptor_t19684A5B2EDEBF906D50F65DC39F9B4D5E0843A5_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		InstanceDescriptor__ctor_m4A88597D681C8A8A9551AB318F8CBB47D49BEC57(L_85, L_78, (RuntimeObject*)L_80, NULL);
		return L_85;
	}

IL_020a:
	{
		RuntimeObject* L_86 = ___context0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_87 = ___culture1;
		RuntimeObject* L_88 = ___value2;
		Type_t* L_89 = ___destinationType3;
		RuntimeObject* L_90;
		L_90 = TypeConverter_ConvertTo_m5D4785A320B7ED351B677E28B77171F70E389B96(__this, L_86, L_87, L_88, L_89, NULL);
		return L_90;
	}
}
// System.ComponentModel.TypeConverter/StandardValuesCollection System.Drawing.ImageFormatConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ImageFormatConverter_GetStandardValues_mDF4FA23BDDE6B313B3CE9CFBCEDA4B29EF6D3DE3 (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, RuntimeObject* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_0 = (ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E*)(ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E*)SZArrayNew(ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_2;
		L_2 = ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F(NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_2);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_3 = L_1;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4;
		L_4 = ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_4);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_5 = L_3;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6;
		L_6 = ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_6);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_7 = L_5;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_8;
		L_8 = ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C(NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_8);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_9 = L_7;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_10;
		L_10 = ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF(NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_10);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_11 = L_9;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_12;
		L_12 = ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4(NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_12);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_13 = L_11;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_14;
		L_14 = ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA(NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_14);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_15 = L_13;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_16;
		L_16 = ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B(NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_16);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_17 = L_15;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_18;
		L_18 = ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA(NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_18);
		ImageFormatU5BU5D_t99B2B573CD3CA22397E3BD958472DBFE5416467E* L_19 = L_17;
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_20;
		L_20 = ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7(NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)L_20);
		StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* L_21 = (StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3*)il2cpp_codegen_object_new(StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StandardValuesCollection__ctor_m9049046DA81FD7B6FE279E063A43DC9B1D3B26B0(L_21, (RuntimeObject*)L_19, NULL);
		return L_21;
	}
}
// System.Boolean System.Drawing.ImageFormatConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageFormatConverter_GetStandardValuesSupported_m75085D1442D12325E25AB17E2371CC23B484C30D (ImageFormatConverter_t22F4D38ED4DC836A1897FCBFE0C0BA2102034805* __this, RuntimeObject* ___context0, const RuntimeMethod* method) 
{
	{
		return (bool)1;
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
// System.Void System.Drawing.ToolboxBitmapAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolboxBitmapAttribute__ctor_mE35FE31C94D0EC258644619586FC0F9C7D3FFD0A (ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.ToolboxBitmapAttribute::.ctor(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolboxBitmapAttribute__ctor_mC35D1CE147603CAEE986400656BAF7FAF642A2F4 (ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* __this, Type_t* ___t0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___t0;
		String_t* L_1 = ___name1;
		il2cpp_codegen_runtime_class_init_inline(ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var);
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_2;
		L_2 = ToolboxBitmapAttribute_GetImageFromResource_mAABD8D76A88B096C5C3277C9703BFA7E7BBEC5B8(L_0, L_1, (bool)0, NULL);
		__this->___smallImage_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___smallImage_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Drawing.ToolboxBitmapAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToolboxBitmapAttribute_Equals_m5DEABD576433D9403B6333ECDD164DCF896414C7 (ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (((ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A*)IsInstClass((RuntimeObject*)L_0, ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___value0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A*)__this))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___value0;
		NullCheck(((ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A*)CastclassClass((RuntimeObject*)L_2, ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var)));
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_3 = ((ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A*)CastclassClass((RuntimeObject*)L_2, ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var))->___smallImage_0;
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_4 = __this->___smallImage_0;
		return (bool)((((RuntimeObject*)(Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)L_3) == ((RuntimeObject*)(Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)L_4))? 1 : 0);
	}
}
// System.Int32 System.Drawing.ToolboxBitmapAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToolboxBitmapAttribute_GetHashCode_m568DE24185E09B73C2A8566871B6858209C4679E (ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* __this, const RuntimeMethod* method) 
{
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_0 = __this->___smallImage_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_2 = __this->___bigImage_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)(L_1^L_3));
	}
}
// System.Drawing.Image System.Drawing.ToolboxBitmapAttribute::GetImageFromResource(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* ToolboxBitmapAttribute_GetImageFromResource_mAABD8D76A88B096C5C3277C9703BFA7E7BBEC5B8 (Type_t* ___t0, String_t* ___imageName1, bool ___large2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___imageName1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t* L_1 = ___t0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		___imageName1 = L_3;
	}

IL_0015:
	{
	}
	try
	{// begin try (depth: 1)
		{
			Type_t* L_4 = ___t0;
			TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_5;
			L_5 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_4, NULL);
			NullCheck(L_5);
			Assembly_t* L_6;
			L_6 = VirtualFuncInvoker0< Assembly_t* >::Invoke(29 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
			Type_t* L_7 = ___t0;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_7);
			String_t* L_9 = ___imageName1;
			String_t* L_10;
			L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, NULL);
			NullCheck(L_6);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11;
			L_11 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(16 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_6, L_10);
			V_1 = L_11;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0049_1:
				{// begin finally (depth: 2)
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = V_1;
						if (!L_12)
						{
							goto IL_0052_1;
						}
					}
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = V_1;
						NullCheck(L_13);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
					}

IL_0052_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_1;
					if (L_14)
					{
						goto IL_003f_2;
					}
				}
				{
					V_2 = (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)NULL;
					goto IL_006c;
				}

IL_003f_2:
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = V_1;
					Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_16 = (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)il2cpp_codegen_object_new(Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					Bitmap__ctor_m7A68C2F22E77C511C24EE1713A25A73098403BD7(L_16, L_15, (bool)0, NULL);
					V_0 = L_16;
					goto IL_0053_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0053_1:
		{
			bool L_17 = ___large2;
			if (!L_17)
			{
				goto IL_0063_1;
			}
		}
		{
			Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_18 = V_0;
			Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_19 = (Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818*)il2cpp_codegen_object_new(Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			Bitmap__ctor_mF914CA5523FC0FC1A364198FEE6227A06E3BA5E1(L_19, L_18, ((int32_t)32), ((int32_t)32), NULL);
			V_2 = L_19;
			goto IL_006c;
		}

IL_0063_1:
		{
			Bitmap_tBE53CEC360133FD0FBC5FB54938B5457314AE818* L_20 = V_0;
			V_2 = L_20;
			goto IL_006c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0067;
		}
		throw e;
	}

CATCH_0067:
	{// begin catch(System.Object)
		V_2 = (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006c;
	}// end catch (depth: 1)

IL_006c:
	{
		Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* L_21 = V_2;
		return L_21;
	}
}
// System.Void System.Drawing.ToolboxBitmapAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolboxBitmapAttribute__cctor_m83E093F1A581D44114A0340A1706A2C9297D36CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A* L_0 = (ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A*)il2cpp_codegen_object_new(ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ToolboxBitmapAttribute__ctor_mE35FE31C94D0EC258644619586FC0F9C7D3FFD0A(L_0, NULL);
		((ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_StaticFields*)il2cpp_codegen_static_fields_for(ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var))->___Default_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_StaticFields*)il2cpp_codegen_static_fields_for(ToolboxBitmapAttribute_tB5D5B2F938552FBBDAA79D3C3419AB682CCF631A_il2cpp_TypeInfo_var))->___Default_2), (void*)L_0);
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
// System.Drawing.Status System.Drawing.GDIPlus::GdiplusStartup(System.UInt64&,System.Drawing.GdiplusStartupInput&,System.Drawing.GdiplusStartupOutput&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdiplusStartup_m2F23E9377A3A8E3AAAF3ECA4D362CA252F95456B (uint64_t* ___token0, GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1* ___input1, GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE* ___output2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint64_t*, GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1*, GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t*) + sizeof(GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1*) + sizeof(GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdiplusStartup", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdiplusStartup)(___token0, ___input1, ___output2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___token0, ___input1, ___output2);
	#endif

	return returnValue;
}
// System.Void System.Drawing.GDIPlus::ProcessExit(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDIPlus_ProcessExit_m012C4709DC7575571F5E3AFE9CA6DD68F8079B8D (RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7(NULL);
		GC_WaitForPendingFinalizers_mDA0CDDC02AA32D50A9EB3752FA50B981C40787FB(NULL);
		return;
	}
}
// System.Void System.Drawing.GDIPlus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDIPlus__cctor_m2DBB1AF4187C02EF5B6EE621521BD47A74951D3C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_ProcessExit_m012C4709DC7575571F5E3AFE9CA6DD68F8079B8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A4D85D0CFE99844130B92E643058A0A13C75B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E4057D2ED3F59C91FEDE6B61FF759D4D33DE755);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4FEB1C53F6F0259781CA9B3C675187C34D3841D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___Display_0 = L_0;
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseX11Drawable_1 = (bool)0;
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCarbonDrawable_2 = (bool)0;
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCocoaDrawable_3 = (bool)0;
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___GdiPlusToken_4 = ((int64_t)0);
		OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* L_1;
		L_1 = Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)128)))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 1;
	}

IL_0041:
	{
		if (!G_B4_0)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_6;
		L_6 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteral1E4057D2ED3F59C91FEDE6B61FF759D4D33DE755, NULL);
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_7;
		L_7 = Environment_GetEnvironmentVariable_mAF8CC6EC1CB916789ABB16A02C032F89E508C21A(_stringLiteralC4FEB1C53F6F0259781CA9B3C675187C34D3841D, NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}

IL_005b:
	{
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseX11Drawable_1 = (bool)1;
		goto IL_00a4;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)8192), NULL);
		V_3 = L_8;
		intptr_t L_9 = V_3;
		int32_t L_10;
		L_10 = GDIPlus_uname_m6151FCC8883944AF1454BFA45B0412F2D46977D0(L_9, NULL);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseX11Drawable_1 = (bool)1;
		goto IL_009e;
	}

IL_007e:
	{
		intptr_t L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral13A4D85D0CFE99844130B92E643058A0A13C75B6, NULL);
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCarbonDrawable_2 = (bool)1;
		goto IL_009e;
	}

IL_0098:
	{
		((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseX11Drawable_1 = (bool)1;
	}

IL_009e:
	{
		intptr_t L_14 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_14, NULL);
	}

IL_00a4:
	{
		GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 L_15;
		L_15 = GdiplusStartupInput_MakeGdiplusStartupInput_m68EAE8860755C2CC5024D7E61E495A5C7872B95D(NULL);
		V_1 = L_15;
		GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE L_16;
		L_16 = GdiplusStartupOutput_MakeGdiplusStartupOutput_m6F87218343D25FF34AE01141D0E8A959FD2E356E(NULL);
		V_2 = L_16;
	}
	try
	{// begin try (depth: 1)
		int32_t L_17;
		L_17 = GDIPlus_GdiplusStartup_m2F23E9377A3A8E3AAAF3ECA4D362CA252F95456B((&((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___GdiPlusToken_4), (&V_1), (&V_2), NULL);
		goto IL_00d8;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeInitializationException_t4AC643E420681E6E92054934A1CB34CCA7C739A1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c1;
		}
		throw e;
	}

CATCH_00c1:
	{// begin catch(System.TypeInitializationException)
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18;
		L_18 = Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline(NULL);
		String_t* L_19;
		L_19 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_18);
		VirtualActionInvoker2< String_t*, RuntimeObject* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String,System.Object) */, L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09A277DDF9548987D11011C6C97A7575497DCF88)), L_19);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d8;
	}// end catch (depth: 1)

IL_00d8:
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_20;
		L_20 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_21 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_21, NULL, (intptr_t)((void*)GDIPlus_ProcessExit_m012C4709DC7575571F5E3AFE9CA6DD68F8079B8D_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		AppDomain_add_ProcessExit_m4B9FF3A7D5703882E1383D0DC2D8410B1D113333(L_20, L_21, NULL);
		return;
	}
}
// System.Boolean System.Drawing.GDIPlus::RunningOnWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_0 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseX11Drawable_1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_1 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCarbonDrawable_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_2 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCocoaDrawable_3;
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean System.Drawing.GDIPlus::RunningOnUnix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDIPlus_RunningOnUnix_m585A9B010A804CAA1ADA2AD203DD7569B69B0F70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_0 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseX11Drawable_1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_1 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCarbonDrawable_2;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_2 = ((GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_StaticFields*)il2cpp_codegen_static_fields_for(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var))->___UseCocoaDrawable_3;
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Void System.Drawing.GDIPlus::CheckStatus(System.Drawing.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055 (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___status0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_00bd;
			}
			case 5:
			{
				goto IL_00dc;
			}
			case 6:
			{
				goto IL_0177;
			}
			case 7:
			{
				goto IL_01f3;
			}
			case 8:
			{
				goto IL_0196;
			}
			case 9:
			{
				goto IL_0212;
			}
			case 10:
			{
				goto IL_011a;
			}
			case 11:
			{
				goto IL_01d4;
			}
			case 12:
			{
				goto IL_0139;
			}
			case 13:
			{
				goto IL_0158;
			}
			case 14:
			{
				goto IL_01b5;
			}
			case 15:
			{
				goto IL_0212;
			}
			case 16:
			{
				goto IL_0212;
			}
			case 17:
			{
				goto IL_0212;
			}
			case 18:
			{
				goto IL_0212;
			}
			case 19:
			{
				goto IL_0212;
			}
			case 20:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_0212;
	}

IL_005f:
	{
		return;
	}

IL_0060:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___status0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1AA16DC4312E8DF629111D29C214BFCC9D25D25F)), L_2, NULL);
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_007f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		int32_t L_10 = ___status0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral214460584C0A7BBBA886334BDDC2EB6DD884D597)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_009e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = ___status0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9687D1FADE9E9D106AE460B3ED97160014D646FC)), L_16, NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_21 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		OutOfMemoryException__ctor_mE62C7219737CDB3698CA55D4502AE609649C701A(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_00bd:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		int32_t L_24 = ___status0;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		String_t* L_27;
		L_27 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4102524D4315007127332E9642B2556F511C97BF)), L_23, NULL);
		MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC* L_28 = (MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		MemberAccessException__ctor_mC0B4A3FB8F14C8E93326AFF606A96CFBC5661E5C(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_00dc:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
		int32_t L_31 = ___status0;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
		String_t* L_34;
		L_34 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16FACA4C782EB3F9F84305BDD0E9EC9B51FF0E61)), L_30, NULL);
		InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9* L_35 = (InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalBufferOverflowException_tE09F99DE19CF7FAB6972BAE289C032DE6254A5C9_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		InternalBufferOverflowException__ctor_m2A29F6DBAF343AEBAA64563A4095822AA0B56BF8(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_00fb:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
		int32_t L_38 = ___status0;
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_40);
		String_t* L_41;
		L_41 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26B038DCE7707119A50184B5A1FBD1194795D999)), L_37, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_42 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_42);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_011a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
		int32_t L_45 = ___status0;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_47);
		String_t* L_48;
		L_48 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02C235A23635A7A3E364118C13B56EF0FF0DCF3B)), L_44, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_49 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_49, L_48, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_0139:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = L_50;
		int32_t L_52 = ___status0;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_53);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_54);
		String_t* L_55;
		L_55 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24502739C12CE118459523371A9C649D953C1C96)), L_51, NULL);
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_56 = (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var)));
		NullCheck(L_56);
		UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(L_56, L_55, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_0158:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_57;
		int32_t L_59 = ___status0;
		int32_t L_60 = L_59;
		RuntimeObject* L_61 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_60);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_61);
		String_t* L_62;
		L_62 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralADB0CC63730DEF6485BBDCA1720E41E2B1F345DE)), L_58, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_63 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_63);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_63, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_0177:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = L_64;
		int32_t L_66 = ___status0;
		int32_t L_67 = L_66;
		RuntimeObject* L_68 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_68);
		String_t* L_69;
		L_69 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB7FAB03836B2ED134B574DAD6481FBCA06A9936)), L_65, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_70 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_70);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_70, L_69, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_0196:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_71;
		int32_t L_73 = ___status0;
		int32_t L_74 = L_73;
		RuntimeObject* L_75 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_74);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_75);
		String_t* L_76;
		L_76 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral719C3BD25886371F722A3FFD2C879F7A44629385)), L_72, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_77 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_77);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_77, L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_01b5:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_78;
		int32_t L_80 = ___status0;
		int32_t L_81 = L_80;
		RuntimeObject* L_82 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_81);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_82);
		String_t* L_83;
		L_83 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70C70FAA8610CACC01D6EE43555D63260B9B6E2)), L_79, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_84 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_84);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_84, L_83, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_01d4:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = L_85;
		int32_t L_87 = ___status0;
		int32_t L_88 = L_87;
		RuntimeObject* L_89 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_88);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_89);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_89);
		String_t* L_90;
		L_90 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88EAC4C8110C4B7987C48478501596C60BB4B31D)), L_86, NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_91 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_91);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_91, L_90, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_01f3:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = L_92;
		int32_t L_94 = ___status0;
		int32_t L_95 = L_94;
		RuntimeObject* L_96 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_95);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_96);
		String_t* L_97;
		L_97 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DF3AA6DF5C1527C81E176ED8EEE7C804302CD83)), L_93, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_98 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_98);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_98, L_97, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}

IL_0212:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_99 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_100 = L_99;
		int32_t L_101 = ___status0;
		int32_t L_102 = L_101;
		RuntimeObject* L_103 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Status_t370FFE908DD9866781C92AAA09370355A7B2845B_il2cpp_TypeInfo_var)), &L_102);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_103);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_103);
		String_t* L_104;
		L_104 = Locale_GetText_mF34C321B5E8B8901DE1B0BE6EA55E0D19B68A364(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11679713B5E757DBB75F49E47FA67951A82A28F2)), L_100, NULL);
		Exception_t* L_105 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_105);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_105, L_104, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_105, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055_RuntimeMethod_var)));
	}
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipDeleteGraphics(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipDeleteGraphics_mCF2B488FD6EC86B07796C1FC8A1AE0718EE82845 (intptr_t ___graphics0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipDeleteGraphics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipDeleteGraphics)(___graphics0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___graphics0);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipReleaseDC(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipReleaseDC_mEF1193E957D5508D5BAE8D19495DE0AC454E102F (intptr_t ___graphics0, intptr_t ___hdc1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipReleaseDC", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipReleaseDC)(___graphics0, ___hdc1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___graphics0, ___hdc1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipDrawImageRectI(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipDrawImageRectI_m250D3B0DBA7459CB793519606E1EEC393D273855 (intptr_t ___graphics0, intptr_t ___image1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipDrawImageRectI", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipDrawImageRectI)(___graphics0, ___image1, ___x2, ___y3, ___width4, ___height5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___graphics0, ___image1, ___x2, ___y3, ___width4, ___height5);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipFlush(System.IntPtr,System.Drawing.Drawing2D.FlushIntention)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipFlush_m171C6C81C218C8AE8C47E034D238725343AAAC49 (intptr_t ___graphics0, int32_t ___intention1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipFlush", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipFlush)(___graphics0, ___intention1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___graphics0, ___intention1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipCreateBitmapFromScan0(System.Int32,System.Int32,System.Int32,System.Drawing.Imaging.PixelFormat,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipCreateBitmapFromScan0_mB7998A79D6BF30C692AE8D051CCD4760759D98CD (int32_t ___width0, int32_t ___height1, int32_t ___stride2, int32_t ___format3, intptr_t ___scan04, intptr_t* ___bmp5, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipCreateBitmapFromScan0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipCreateBitmapFromScan0)(___width0, ___height1, ___stride2, ___format3, ___scan04, ___bmp5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___width0, ___height1, ___stride2, ___format3, ___scan04, ___bmp5);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipLoadImageFromStream(System.Runtime.InteropServices.ComTypes.IStream,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipLoadImageFromStream_m5CF974C5CACD6EE4719B900528DFBDBD0C78172B (RuntimeObject* ___stream0, intptr_t* ___image1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipLoadImageFromStream", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stream0' to native representation
	IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ____stream0_marshaled = NULL;
	if (___stream0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___stream0))
		{
			____stream0_marshaled = il2cpp_codegen_com_query_interface<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(static_cast<Il2CppComObject*>(___stream0));
			(____stream0_marshaled)->AddRef();
		}
		else
		{
			____stream0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(___stream0);
		}
	}
	else
	{
		____stream0_marshaled = NULL;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipLoadImageFromStream)(____stream0_marshaled, ___image1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____stream0_marshaled, ___image1);
	#endif

	// Marshaling cleanup of parameter '___stream0' native representation
	if (____stream0_marshaled != NULL)
	{
		(____stream0_marshaled)->Release();
		____stream0_marshaled = NULL;
	}

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipSaveImageToStream(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.ComTypes.IStream,System.Guid&,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipSaveImageToStream_m7A20EEA4E21C7D7BEAC6F1BEB71BC09D3D2077D4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___image0, RuntimeObject* ___stream1, Guid_t* ___clsidEncoder2, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___encoderParams3, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*, Guid_t*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(Guid_t*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipSaveImageToStream", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, true);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___image0' to native representation
	void* ____image0_marshaled = NULL;
	____image0_marshaled = (void*)___image0.____handle_1;

	// Marshaling of parameter '___stream1' to native representation
	IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ____stream1_marshaled = NULL;
	if (___stream1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___stream1))
		{
			____stream1_marshaled = il2cpp_codegen_com_query_interface<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(static_cast<Il2CppComObject*>(___stream1));
			(____stream1_marshaled)->AddRef();
		}
		else
		{
			____stream1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(___stream1);
		}
	}
	else
	{
		____stream1_marshaled = NULL;
	}

	// Marshaling of parameter '___encoderParams3' to native representation
	void* ____encoderParams3_marshaled = NULL;
	____encoderParams3_marshaled = (void*)___encoderParams3.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipSaveImageToStream)(____image0_marshaled, ____stream1_marshaled, ___clsidEncoder2, ____encoderParams3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____image0_marshaled, ____stream1_marshaled, ___clsidEncoder2, ____encoderParams3_marshaled);
	#endif

	// Marshaling cleanup of parameter '___stream1' native representation
	if (____stream1_marshaled != NULL)
	{
		(____stream1_marshaled)->Release();
		____stream1_marshaled = NULL;
	}

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipCloneImage(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipCloneImage_m74D35B0CE164CABA8C28353F61E0C94620A99554 (intptr_t ___image0, intptr_t* ___imageclone1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipCloneImage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipCloneImage)(___image0, ___imageclone1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___imageclone1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipDisposeImage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipDisposeImage_mD4A43CCBD9933778B73B5AA371CF5E7CF5CACC64 (intptr_t ___image0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipDisposeImage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipDisposeImage)(___image0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageType(System.IntPtr,System.Drawing.ImageType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageType_m79C4045AE19886B095EE887B0D481CCA76170ECF (intptr_t ___image0, int32_t* ___type1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageType)(___image0, ___type1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___type1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageHeight(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageHeight_mFCA648FBB995DAC51A2F9D55D5A85DFFC61853DE (intptr_t ___image0, uint32_t* ___height1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageHeight", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageHeight)(___image0, ___height1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___height1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImagePixelFormat(System.IntPtr,System.Drawing.Imaging.PixelFormat&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImagePixelFormat_m7F933DD50BBE97ECEAB4F331DFC5E144C841D176 (intptr_t ___image0, int32_t* ___format1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImagePixelFormat", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImagePixelFormat)(___image0, ___format1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___format1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageRawFormat(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageRawFormat_mD3F028410935AF1DEC46A100AD68DBFEAFE8C3B2 (intptr_t ___image0, Guid_t* ___format1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageRawFormat", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageRawFormat)(___image0, ___format1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___format1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageWidth(System.IntPtr,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageWidth_mD547696BE4DD53ADD0104B834A34B2618DB3EFDF (intptr_t ___image0, uint32_t* ___width1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageWidth", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageWidth)(___image0, ___width1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___width1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipGetImageGraphicsContext(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageGraphicsContext_m1BB2456D11899DADC58586D400B30CD474578B95 (intptr_t ___image0, intptr_t* ___graphics1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageGraphicsContext", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageGraphicsContext)(___image0, ___graphics1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ___graphics1);
	#endif

	return returnValue;
}
// System.Int32 System.Drawing.GDIPlus::GdipGetImageEncodersSize(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageEncodersSize_m77E87222F25EC6A77F48E764FEA15B14ECB0B303 (int32_t* ___encoderNums0, int32_t* ___arraySize1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageEncodersSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageEncodersSize)(___encoderNums0, ___arraySize1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___encoderNums0, ___arraySize1);
	#endif

	return returnValue;
}
// System.Int32 System.Drawing.GDIPlus::GdipGetImageEncoders(System.Int32,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipGetImageEncoders_m0651ACCFDBD76A70FF047478B0E7723CDCF46F9B (int32_t ___encoderNums0, int32_t ___arraySize1, intptr_t ___encoders2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipGetImageEncoders", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipGetImageEncoders)(___encoderNums0, ___arraySize1, ___encoders2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___encoderNums0, ___arraySize1, ___encoders2);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipSetVisibleClip_linux(System.IntPtr,System.Drawing.Rectangle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipSetVisibleClip_linux_m9B6E33A033A836E83C5D3005906390D0097E92D0 (intptr_t ___graphics0, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* ___rect1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipSetVisibleClip_linux", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipSetVisibleClip_linux)(___graphics0, ___rect1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___graphics0, ___rect1);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipLoadImageFromDelegate_linux(System.Drawing.GDIPlus/StreamGetHeaderDelegate,System.Drawing.GDIPlus/StreamGetBytesDelegate,System.Drawing.GDIPlus/StreamPutBytesDelegate,System.Drawing.GDIPlus/StreamSeekDelegate,System.Drawing.GDIPlus/StreamCloseDelegate,System.Drawing.GDIPlus/StreamSizeDelegate,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipLoadImageFromDelegate_linux_m2F9AD7F666107D831721E3A4960D230BB7B4182D (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* ___getHeader0, StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* ___getBytes1, StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* ___putBytes2, StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* ___doSeek3, StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* ___close4, StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* ___size5, intptr_t* ___image6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipLoadImageFromDelegate_linux", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___getHeader0' to native representation
	Il2CppMethodPointer ____getHeader0_marshaled = NULL;
	____getHeader0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___getHeader0));

	// Marshaling of parameter '___getBytes1' to native representation
	Il2CppMethodPointer ____getBytes1_marshaled = NULL;
	____getBytes1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___getBytes1));

	// Marshaling of parameter '___putBytes2' to native representation
	Il2CppMethodPointer ____putBytes2_marshaled = NULL;
	____putBytes2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___putBytes2));

	// Marshaling of parameter '___doSeek3' to native representation
	Il2CppMethodPointer ____doSeek3_marshaled = NULL;
	____doSeek3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___doSeek3));

	// Marshaling of parameter '___close4' to native representation
	Il2CppMethodPointer ____close4_marshaled = NULL;
	____close4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___close4));

	// Marshaling of parameter '___size5' to native representation
	Il2CppMethodPointer ____size5_marshaled = NULL;
	____size5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___size5));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipLoadImageFromDelegate_linux)(____getHeader0_marshaled, ____getBytes1_marshaled, ____putBytes2_marshaled, ____doSeek3_marshaled, ____close4_marshaled, ____size5_marshaled, ___image6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____getHeader0_marshaled, ____getBytes1_marshaled, ____putBytes2_marshaled, ____doSeek3_marshaled, ____close4_marshaled, ____size5_marshaled, ___image6);
	#endif

	return returnValue;
}
// System.Drawing.Status System.Drawing.GDIPlus::GdipSaveImageToDelegate_linux(System.IntPtr,System.Drawing.GDIPlus/StreamGetBytesDelegate,System.Drawing.GDIPlus/StreamPutBytesDelegate,System.Drawing.GDIPlus/StreamSeekDelegate,System.Drawing.GDIPlus/StreamCloseDelegate,System.Drawing.GDIPlus/StreamSizeDelegate,System.Guid&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_GdipSaveImageToDelegate_linux_m3853E297A0550CD7EC4DEB58EB6AF5F16DACFD20 (intptr_t ___image0, StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* ___getBytes1, StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* ___putBytes2, StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* ___doSeek3, StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* ___close4, StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* ___size5, Guid_t* ___encoderClsID6, intptr_t ___encoderParameters7, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Guid_t*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_gdiplus_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(Guid_t*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("gdiplus"), "GdipSaveImageToDelegate_linux", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___getBytes1' to native representation
	Il2CppMethodPointer ____getBytes1_marshaled = NULL;
	____getBytes1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___getBytes1));

	// Marshaling of parameter '___putBytes2' to native representation
	Il2CppMethodPointer ____putBytes2_marshaled = NULL;
	____putBytes2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___putBytes2));

	// Marshaling of parameter '___doSeek3' to native representation
	Il2CppMethodPointer ____doSeek3_marshaled = NULL;
	____doSeek3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___doSeek3));

	// Marshaling of parameter '___close4' to native representation
	Il2CppMethodPointer ____close4_marshaled = NULL;
	____close4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___close4));

	// Marshaling of parameter '___size5' to native representation
	Il2CppMethodPointer ____size5_marshaled = NULL;
	____size5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___size5));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_gdiplus_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GdipSaveImageToDelegate_linux)(___image0, ____getBytes1_marshaled, ____putBytes2_marshaled, ____doSeek3_marshaled, ____close4_marshaled, ____size5_marshaled, ___encoderClsID6, ___encoderParameters7);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___image0, ____getBytes1_marshaled, ____putBytes2_marshaled, ____doSeek3_marshaled, ____close4_marshaled, ____size5_marshaled, ___encoderClsID6, ___encoderParameters7);
	#endif

	return returnValue;
}
// System.Int32 System.Drawing.GDIPlus::uname(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDIPlus_uname_m6151FCC8883944AF1454BFA45B0412F2D46977D0 (intptr_t ___buf0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libc"), "uname", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uname)(___buf0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___buf0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_Multicast(StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* currentDelegate = reinterpret_cast<StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___bufsz1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_OpenInst(StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___bufsz1, method);
}
int32_t StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_OpenStatic(StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___bufsz1, method);
}
int32_t StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_OpenStaticInvoker(StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___bufsz1);
}
int32_t StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_ClosedStaticInvoker(StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___bufsz1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buf0, ___bufsz1);

	return returnValue;
}
// System.Void System.Drawing.GDIPlus/StreamGetHeaderDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamGetHeaderDelegate__ctor_m4D7BAE2630A0F07F62921DE8E7715404FE86C80D (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3_Multicast;
}
// System.Int32 System.Drawing.GDIPlus/StreamGetHeaderDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamGetHeaderDelegate_Invoke_m8A0C3A0F08C5AEE42090D7CE796B8375485F16A3 (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___bufsz1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_Multicast(StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* currentDelegate = reinterpret_cast<StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, bool, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___bufsz1, ___peek2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_OpenInst(StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___bufsz1, ___peek2, method);
}
int32_t StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_OpenStatic(StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___bufsz1, ___peek2, method);
}
int32_t StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_OpenStaticInvoker(StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___bufsz1, ___peek2);
}
int32_t StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_ClosedStaticInvoker(StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___bufsz1, ___peek2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0 (StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buf0, ___bufsz1, static_cast<int32_t>(___peek2));

	return returnValue;
}
// System.Void System.Drawing.GDIPlus/StreamGetBytesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamGetBytesDelegate__ctor_m28D518D40F24508FAD68BBA29F2046D7C0FC7C79 (StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7_Multicast;
}
// System.Int32 System.Drawing.GDIPlus/StreamGetBytesDelegate::Invoke(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamGetBytesDelegate_Invoke_m9F555BA0A1EE128A452FC0CDDC19792CF78903F7 (StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___bufsz1, ___peek2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int64_t StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_Multicast(StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int64_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* currentDelegate = reinterpret_cast<StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3*>(delegatesToInvoke[i]);
		typedef int64_t (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___offset0, ___whence1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int64_t StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_OpenInst(StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method)
{
	typedef int64_t (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___offset0, ___whence1, method);
}
int64_t StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_OpenStatic(StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method)
{
	typedef int64_t (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___offset0, ___whence1, method);
}
int64_t StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_OpenStaticInvoker(StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___offset0, ___whence1);
}
int64_t StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_ClosedStaticInvoker(StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int64_t, RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___offset0, ___whence1);
}
IL2CPP_EXTERN_C  int64_t DelegatePInvokeWrapper_StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3 (StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___offset0, ___whence1);

	return returnValue;
}
// System.Void System.Drawing.GDIPlus/StreamSeekDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSeekDelegate__ctor_mC6347CA1F79F865457829E43FBE4AEBDD9126228 (StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91_Multicast;
}
// System.Int64 System.Drawing.GDIPlus/StreamSeekDelegate::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamSeekDelegate_Invoke_m61DB2E269A04639EB7C0AAABC81D5687B487DC91 (StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method) 
{
	typedef int64_t (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___offset0, ___whence1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_Multicast(StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* currentDelegate = reinterpret_cast<StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___buf0, ___bufsz1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_OpenInst(StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___bufsz1, method);
}
int32_t StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_OpenStatic(StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___buf0, ___bufsz1, method);
}
int32_t StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_OpenStaticInvoker(StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___buf0, ___bufsz1);
}
int32_t StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_ClosedStaticInvoker(StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___buf0, ___bufsz1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD (StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___buf0, ___bufsz1);

	return returnValue;
}
// System.Void System.Drawing.GDIPlus/StreamPutBytesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamPutBytesDelegate__ctor_mB60957EE64990B8F2B824D18599103956B45F126 (StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947_Multicast;
}
// System.Int32 System.Drawing.GDIPlus/StreamPutBytesDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamPutBytesDelegate_Invoke_mE44B56DC0ECE6C1D81781EA595E625620A848947 (StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___buf0, ___bufsz1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_Multicast(StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* currentDelegate = reinterpret_cast<StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_OpenInst(StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_OpenStatic(StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_OpenStaticInvoker(StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_ClosedStaticInvoker(StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0 (StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void System.Drawing.GDIPlus/StreamCloseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamCloseDelegate__ctor_mEA042E304AC2B2D4F9AF6CA9680F08232AB4A181 (StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5_Multicast;
}
// System.Void System.Drawing.GDIPlus/StreamCloseDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamCloseDelegate_Invoke_m43F289EEFA4AAC63E034BC4C8A0E989846862DF5 (StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int64_t StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_Multicast(StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int64_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* currentDelegate = reinterpret_cast<StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA*>(delegatesToInvoke[i]);
		typedef int64_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int64_t StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_OpenInst(StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method)
{
	typedef int64_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
int64_t StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_OpenStatic(StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method)
{
	typedef int64_t (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
int64_t StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_OpenStaticInvoker(StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< int64_t >::Invoke(__this->___method_ptr_0, method, NULL);
}
int64_t StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_ClosedStaticInvoker(StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int64_t, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  int64_t DelegatePInvokeWrapper_StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA (StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void System.Drawing.GDIPlus/StreamSizeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSizeDelegate__ctor_m251E6C303DAF5DFEAA03758D2ADBFBF3A72A8E87 (StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D_Multicast;
}
// System.Int64 System.Drawing.GDIPlus/StreamSizeDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamSizeDelegate_Invoke_mA1B94185C997A3633F03B70F46AE155EA69D0F3D (StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* __this, const RuntimeMethod* method) 
{
	typedef int64_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Drawing.GDIPlus/GdiPlusStreamHelper::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GdiPlusStreamHelper__ctor_mFA010382BFA2FA3FCCA5FB7057DB866C92DD9FE8 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___s0, bool ___seekToOrigin1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___managedBuf_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedBuf_10), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___s0;
		__this->___stream_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream_0), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___stream_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___stream_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_3);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 0;
	}

IL_0033:
	{
		bool L_5 = ___seekToOrigin1;
		if (!((int32_t)(G_B3_0&(int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___stream_0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, ((int64_t)0), 0);
	}

IL_0046:
	{
		return;
	}
}
// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::StreamGetHeaderImpl(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GdiPlusStreamHelper_StreamGetHeaderImpl_mCC4B8877CC61AF361233014E6573B7D7847A5B8D (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___bufsz1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___start_buf_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___start_buf_7), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___stream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___start_buf_7;
		int32_t L_4 = ___bufsz1;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		V_0 = L_5;
		goto IL_0027;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.IO.IOException)
		V_1 = (-1);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_0027:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		intptr_t L_7 = ___buf0;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___start_buf_7;
		int64_t L_11;
		L_11 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___buf0), NULL);
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(L_11, NULL);
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_10, 0, L_12, L_13, NULL);
	}

IL_0051:
	{
		__this->___start_buf_pos_8 = 0;
		int32_t L_14 = V_0;
		__this->___start_buf_len_9 = L_14;
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Drawing.GDIPlus/StreamGetHeaderDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_GetHeaderDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* GdiPlusStreamHelper_get_GetHeaderDelegate_m9BF6D8161DA94429C1DC67B7851EB0B39B7F7374 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_StreamGetHeaderImpl_mCC4B8877CC61AF361233014E6573B7D7847A5B8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* L_3 = __this->___sghd_1;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* L_4 = (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B*)il2cpp_codegen_object_new(StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamGetHeaderDelegate__ctor_m4D7BAE2630A0F07F62921DE8E7715404FE86C80D(L_4, __this, (intptr_t)((void*)GdiPlusStreamHelper_StreamGetHeaderImpl_mCC4B8877CC61AF361233014E6573B7D7847A5B8D_RuntimeMethod_var), NULL);
		__this->___sghd_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sghd_1), (void*)L_4);
	}

IL_002f:
	{
		StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B* L_5 = __this->___sghd_1;
		return L_5;
	}

IL_0036:
	{
		return (StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B*)NULL;
	}
}
// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::StreamGetBytesImpl(System.IntPtr,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GdiPlusStreamHelper_StreamGetBytesImpl_m5158363D99DCD88FE4CCFDE8725545B00680CE82 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, intptr_t ___buf0, int32_t ___bufsz1, bool ___peek2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B20_0 = 0;
	{
		intptr_t L_0 = ___buf0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		bool L_3 = ___peek2;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		return (-1);
	}

IL_0011:
	{
		int32_t L_4 = ___bufsz1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___managedBuf_10;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___bufsz1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___managedBuf_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedBuf_10), (void*)L_7);
	}

IL_0028:
	{
		V_0 = 0;
		V_1 = ((int64_t)0);
		int32_t L_8 = ___bufsz1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_015a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->___stream_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_9);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___stream_0;
		NullCheck(L_11);
		int64_t L_12;
		L_12 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_11);
		V_1 = L_12;
	}

IL_004d:
	{
		int32_t L_13 = __this->___start_buf_len_9;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_14 = __this->___start_buf_len_9;
		int32_t L_15 = ___bufsz1;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_009b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___start_buf_7;
		int32_t L_17 = __this->___start_buf_pos_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___managedBuf_10;
		int32_t L_19 = ___bufsz1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, L_17, (RuntimeArray*)L_18, 0, L_19, NULL);
		int32_t L_20 = __this->___start_buf_pos_8;
		int32_t L_21 = ___bufsz1;
		__this->___start_buf_pos_8 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		int32_t L_22 = __this->___start_buf_len_9;
		int32_t L_23 = ___bufsz1;
		__this->___start_buf_len_9 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
		int32_t L_24 = ___bufsz1;
		V_0 = L_24;
		___bufsz1 = 0;
		goto IL_00d1;
	}

IL_009b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___start_buf_7;
		int32_t L_26 = __this->___start_buf_pos_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___managedBuf_10;
		int32_t L_28 = __this->___start_buf_len_9;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_25, L_26, (RuntimeArray*)L_27, 0, L_28, NULL);
		int32_t L_29 = ___bufsz1;
		int32_t L_30 = __this->___start_buf_len_9;
		___bufsz1 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		int32_t L_31 = __this->___start_buf_len_9;
		V_0 = L_31;
		__this->___start_buf_len_9 = 0;
	}

IL_00d1:
	{
		int32_t L_32 = ___bufsz1;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00f2;
		}
	}
	try
	{// begin try (depth: 1)
		int32_t L_33 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = __this->___stream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___managedBuf_10;
		int32_t L_36 = V_0;
		int32_t L_37 = ___bufsz1;
		NullCheck(L_34);
		int32_t L_38;
		L_38 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, L_36, L_37);
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, L_38));
		goto IL_00f2;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ed;
		}
		throw e;
	}

CATCH_00ed:
	{// begin catch(System.IO.IOException)
		V_2 = (-1);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015c;
	}// end catch (depth: 1)

IL_00f2:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		intptr_t L_40 = ___buf0;
		intptr_t L_41 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_42;
		L_42 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_011c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___managedBuf_10;
		int64_t L_44;
		L_44 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___buf0), NULL);
		intptr_t L_45;
		L_45 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(L_44, NULL);
		int32_t L_46 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_43, 0, L_45, L_46, NULL);
	}

IL_011c:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_47 = __this->___stream_0;
		NullCheck(L_47);
		bool L_48;
		L_48 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_47);
		if (L_48)
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_49 = ___bufsz1;
		G_B20_0 = ((((int32_t)L_49) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0131;
	}

IL_0130:
	{
		G_B20_0 = 0;
	}

IL_0131:
	{
		bool L_50 = ___peek2;
		bool L_51 = ___peek2;
		if (!L_51)
		{
			goto IL_015a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_52 = __this->___stream_0;
		NullCheck(L_52);
		bool L_53;
		L_53 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_52);
		if (!L_53)
		{
			goto IL_0154;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_54 = __this->___stream_0;
		int64_t L_55 = V_1;
		NullCheck(L_54);
		int64_t L_56;
		L_56 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_54, L_55, 0);
		goto IL_015a;
	}

IL_0154:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_57 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_57);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_57, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GdiPlusStreamHelper_StreamGetBytesImpl_m5158363D99DCD88FE4CCFDE8725545B00680CE82_RuntimeMethod_var)));
	}

IL_015a:
	{
		int32_t L_58 = V_0;
		return L_58;
	}

IL_015c:
	{
		int32_t L_59 = V_2;
		return L_59;
	}
}
// System.Drawing.GDIPlus/StreamGetBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_GetBytesDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* GdiPlusStreamHelper_get_GetBytesDelegate_m0DEDE4119EED81AB00E69B11AD854971EB141886 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_StreamGetBytesImpl_m5158363D99DCD88FE4CCFDE8725545B00680CE82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* L_3 = __this->___sgbd_2;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* L_4 = (StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0*)il2cpp_codegen_object_new(StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamGetBytesDelegate__ctor_m28D518D40F24508FAD68BBA29F2046D7C0FC7C79(L_4, __this, (intptr_t)((void*)GdiPlusStreamHelper_StreamGetBytesImpl_m5158363D99DCD88FE4CCFDE8725545B00680CE82_RuntimeMethod_var), NULL);
		__this->___sgbd_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sgbd_2), (void*)L_4);
	}

IL_002f:
	{
		StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0* L_5 = __this->___sgbd_2;
		return L_5;
	}

IL_0036:
	{
		return (StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0*)NULL;
	}
}
// System.Int64 System.Drawing.GDIPlus/GdiPlusStreamHelper::StreamSeekImpl(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GdiPlusStreamHelper_StreamSeekImpl_m735D30896ADD1817532560DCAABA61E77446E127 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, int32_t ___offset0, int32_t ___whence1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___whence1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___whence1;
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_000b;
		}
	}

IL_0008:
	{
		return ((int64_t)(-1));
	}

IL_000b:
	{
		int32_t L_2 = __this->___start_buf_pos_8;
		int32_t L_3 = __this->___start_buf_len_9;
		__this->___start_buf_pos_8 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		__this->___start_buf_len_9 = 0;
		int32_t L_4 = ___whence1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0039:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_003d:
	{
		V_0 = 1;
		goto IL_0048;
	}

IL_0041:
	{
		V_0 = 2;
		goto IL_0048;
	}

IL_0045:
	{
		return ((int64_t)(-1));
	}

IL_0048:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___stream_0;
		int32_t L_6 = ___offset0;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int64_t L_8;
		L_8 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_5, ((int64_t)L_6), L_7);
		return L_8;
	}
}
// System.Drawing.GDIPlus/StreamSeekDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_SeekDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* GdiPlusStreamHelper_get_SeekDelegate_mB27C48C626F0E3C3EAECBF88427080E2CE1102BB (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_StreamSeekImpl_m735D30896ADD1817532560DCAABA61E77446E127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* L_3 = __this->___skd_3;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* L_4 = (StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3*)il2cpp_codegen_object_new(StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamSeekDelegate__ctor_mC6347CA1F79F865457829E43FBE4AEBDD9126228(L_4, __this, (intptr_t)((void*)GdiPlusStreamHelper_StreamSeekImpl_m735D30896ADD1817532560DCAABA61E77446E127_RuntimeMethod_var), NULL);
		__this->___skd_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skd_3), (void*)L_4);
	}

IL_002f:
	{
		StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3* L_5 = __this->___skd_3;
		return L_5;
	}

IL_0036:
	{
		return (StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3*)NULL;
	}
}
// System.Int32 System.Drawing.GDIPlus/GdiPlusStreamHelper::StreamPutBytesImpl(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GdiPlusStreamHelper_StreamPutBytesImpl_m9A8C520F6283606201CB042FA5D23CE8D22B6910 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, intptr_t ___buf0, int32_t ___bufsz1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bufsz1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___managedBuf_10;
		NullCheck(L_1);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___bufsz1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___managedBuf_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___managedBuf_10), (void*)L_3);
	}

IL_0017:
	{
		intptr_t L_4 = ___buf0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___managedBuf_10;
		int32_t L_6 = ___bufsz1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_4, L_5, 0, L_6, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___stream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___managedBuf_10;
		int32_t L_9 = ___bufsz1;
		NullCheck(L_7);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
		int32_t L_10 = ___bufsz1;
		return L_10;
	}
}
// System.Drawing.GDIPlus/StreamPutBytesDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_PutBytesDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* GdiPlusStreamHelper_get_PutBytesDelegate_m26858076A600792D8ADB422C970A0F7E52813E98 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_StreamPutBytesImpl_m9A8C520F6283606201CB042FA5D23CE8D22B6910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_1);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* L_3 = __this->___spbd_4;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* L_4 = (StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD*)il2cpp_codegen_object_new(StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamPutBytesDelegate__ctor_mB60957EE64990B8F2B824D18599103956B45F126(L_4, __this, (intptr_t)((void*)GdiPlusStreamHelper_StreamPutBytesImpl_m9A8C520F6283606201CB042FA5D23CE8D22B6910_RuntimeMethod_var), NULL);
		__this->___spbd_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spbd_4), (void*)L_4);
	}

IL_002f:
	{
		StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD* L_5 = __this->___spbd_4;
		return L_5;
	}

IL_0036:
	{
		return (StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD*)NULL;
	}
}
// System.Void System.Drawing.GDIPlus/GdiPlusStreamHelper::StreamCloseImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GdiPlusStreamHelper_StreamCloseImpl_m1549446A89AA72BB3C94DE5DDF7EBF3E19A24E14 (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		NullCheck(L_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_0, NULL);
		return;
	}
}
// System.Drawing.GDIPlus/StreamCloseDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_CloseDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* GdiPlusStreamHelper_get_CloseDelegate_m775A4C5523A4ADD0237F8E5E8DDF52881B04F8BF (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_StreamCloseImpl_m1549446A89AA72BB3C94DE5DDF7EBF3E19A24E14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* L_1 = __this->___scd_5;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* L_2 = (StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0*)il2cpp_codegen_object_new(StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StreamCloseDelegate__ctor_mEA042E304AC2B2D4F9AF6CA9680F08232AB4A181(L_2, __this, (intptr_t)((void*)GdiPlusStreamHelper_StreamCloseImpl_m1549446A89AA72BB3C94DE5DDF7EBF3E19A24E14_RuntimeMethod_var), NULL);
		__this->___scd_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scd_5), (void*)L_2);
	}

IL_0022:
	{
		StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0* L_3 = __this->___scd_5;
		return L_3;
	}

IL_0029:
	{
		return (StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0*)NULL;
	}
}
// System.Int64 System.Drawing.GDIPlus/GdiPlusStreamHelper::StreamSizeImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GdiPlusStreamHelper_StreamSizeImpl_m6DC78D2C76A037DBF6DDE9D29CD5B7ED2CF8D4BB (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		V_0 = L_1;
		goto IL_0014;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		V_0 = ((int64_t)(-1));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	}// end catch (depth: 1)

IL_0014:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Drawing.GDIPlus/StreamSizeDelegate System.Drawing.GDIPlus/GdiPlusStreamHelper::get_SizeDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* GdiPlusStreamHelper_get_SizeDelegate_m543318ED5776EB5D393FD1C9E5CF21EC670ACA3B (GdiPlusStreamHelper_tFFE8DBC17EE1E054859B4A550A9661CABE0E3989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GdiPlusStreamHelper_StreamSizeImpl_m6DC78D2C76A037DBF6DDE9D29CD5B7ED2CF8D4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_0;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* L_1 = __this->___ssd_6;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* L_2 = (StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA*)il2cpp_codegen_object_new(StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StreamSizeDelegate__ctor_m251E6C303DAF5DFEAA03758D2ADBFBF3A72A8E87(L_2, __this, (intptr_t)((void*)GdiPlusStreamHelper_StreamSizeImpl_m6DC78D2C76A037DBF6DDE9D29CD5B7ED2CF8D4BB_RuntimeMethod_var), NULL);
		__this->___ssd_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ssd_6), (void*)L_2);
	}

IL_0022:
	{
		StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA* L_3 = __this->___ssd_6;
		return L_3;
	}

IL_0029:
	{
		return (StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA*)NULL;
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
// System.Drawing.GdiplusStartupInput System.Drawing.GdiplusStartupInput::MakeGdiplusStartupInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 GdiplusStartupInput_MakeGdiplusStartupInput_m68EAE8860755C2CC5024D7E61E495A5C7872B95D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1));
		(&V_0)->___GdiplusVersion_0 = 1;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		(&V_0)->___DebugEventCallback_1 = L_0;
		(&V_0)->___SuppressBackgroundThread_2 = 0;
		(&V_0)->___SuppressExternalCodecs_3 = 0;
		GdiplusStartupInput_t93EC3EE662370563586DD17E8285AEEE2A1D7BD1 L_1 = V_0;
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
// System.Drawing.GdiplusStartupOutput System.Drawing.GdiplusStartupOutput::MakeGdiplusStartupOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE GdiplusStartupOutput_MakeGdiplusStartupOutput_m6F87218343D25FF34AE01141D0E8A959FD2E356E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE));
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_1 = L_0;
		V_1 = L_1;
		(&V_0)->___NotificationUnhook_1 = L_1;
		intptr_t L_2 = V_1;
		(&V_0)->___NotificationHook_0 = L_2;
		GdiplusStartupOutput_tC2D2FE7FC5ADF7CF5022083F23CFCAB12F9AEAAE L_3 = V_0;
		return L_3;
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
// Conversion methods for marshalling of: System.Drawing.Imaging.EncoderParameter
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke(const EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947& unmarshaled, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_pinvoke& marshaled)
{
	marshaled.____parameterGuid_0 = unmarshaled.____parameterGuid_0;
	marshaled.____numberOfValues_1 = unmarshaled.____numberOfValues_1;
	marshaled.____parameterValueType_2 = unmarshaled.____parameterValueType_2;
	marshaled.____parameterValue_3 = unmarshaled.____parameterValue_3;
}
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke_back(const EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_pinvoke& marshaled, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947& unmarshaled)
{
	Guid_t unmarshaled_parameterGuid_temp_0;
	memset((&unmarshaled_parameterGuid_temp_0), 0, sizeof(unmarshaled_parameterGuid_temp_0));
	unmarshaled_parameterGuid_temp_0 = marshaled.____parameterGuid_0;
	unmarshaled.____parameterGuid_0 = unmarshaled_parameterGuid_temp_0;
	int32_t unmarshaled_numberOfValues_temp_1 = 0;
	unmarshaled_numberOfValues_temp_1 = marshaled.____numberOfValues_1;
	unmarshaled.____numberOfValues_1 = unmarshaled_numberOfValues_temp_1;
	int32_t unmarshaled_parameterValueType_temp_2 = 0;
	unmarshaled_parameterValueType_temp_2 = marshaled.____parameterValueType_2;
	unmarshaled.____parameterValueType_2 = unmarshaled_parameterValueType_temp_2;
	intptr_t unmarshaled_parameterValue_temp_3;
	memset((&unmarshaled_parameterValue_temp_3), 0, sizeof(unmarshaled_parameterValue_temp_3));
	unmarshaled_parameterValue_temp_3 = marshaled.____parameterValue_3;
	unmarshaled.____parameterValue_3 = unmarshaled_parameterValue_temp_3;
}
// Conversion method for clean up from marshalling of: System.Drawing.Imaging.EncoderParameter
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke_cleanup(EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Drawing.Imaging.EncoderParameter
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_com(const EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947& unmarshaled, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_com& marshaled)
{
	marshaled.____parameterGuid_0 = unmarshaled.____parameterGuid_0;
	marshaled.____numberOfValues_1 = unmarshaled.____numberOfValues_1;
	marshaled.____parameterValueType_2 = unmarshaled.____parameterValueType_2;
	marshaled.____parameterValue_3 = unmarshaled.____parameterValue_3;
}
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_com_back(const EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_com& marshaled, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947& unmarshaled)
{
	Guid_t unmarshaled_parameterGuid_temp_0;
	memset((&unmarshaled_parameterGuid_temp_0), 0, sizeof(unmarshaled_parameterGuid_temp_0));
	unmarshaled_parameterGuid_temp_0 = marshaled.____parameterGuid_0;
	unmarshaled.____parameterGuid_0 = unmarshaled_parameterGuid_temp_0;
	int32_t unmarshaled_numberOfValues_temp_1 = 0;
	unmarshaled_numberOfValues_temp_1 = marshaled.____numberOfValues_1;
	unmarshaled.____numberOfValues_1 = unmarshaled_numberOfValues_temp_1;
	int32_t unmarshaled_parameterValueType_temp_2 = 0;
	unmarshaled_parameterValueType_temp_2 = marshaled.____parameterValueType_2;
	unmarshaled.____parameterValueType_2 = unmarshaled_parameterValueType_temp_2;
	intptr_t unmarshaled_parameterValue_temp_3;
	memset((&unmarshaled_parameterValue_temp_3), 0, sizeof(unmarshaled_parameterValue_temp_3));
	unmarshaled_parameterValue_temp_3 = marshaled.____parameterValue_3;
	unmarshaled.____parameterValue_3 = unmarshaled_parameterValue_temp_3;
}
// Conversion method for clean up from marshalling of: System.Drawing.Imaging.EncoderParameter
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_com_cleanup(EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshaled_com& marshaled)
{
}
// System.Void System.Drawing.Imaging.EncoderParameter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderParameter_Dispose_m62227C96278BBD4D15887364AFAAF5B3034A72F2 (EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncoderParameter_Dispose_m225C95324E8FE4663E1868F1C0A2F0693BA22E69(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_KeepAlive_m53833ADCAF719294E5D1DA13B067E31472C762F9(__this, NULL);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.Imaging.EncoderParameter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderParameter_Dispose_m225C95324E8FE4663E1868F1C0A2F0693BA22E69 (EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->____parameterValue_3;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_3 = __this->____parameterValue_3;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_3, NULL);
	}

IL_001d:
	{
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____parameterValue_3 = L_4;
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
// System.IntPtr System.Drawing.Imaging.EncoderParameters::ConvertToMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB (EncoderParameters_t7C0E591716327F7993D88BE3E95ECED9178BD207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisEncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_m72ACCB8E3BD9C2ACF68EC2030CD762B087423864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		V_0 = L_2;
		EncoderParameterU5BU5D_tDCFC2CFB031D112C7B8A6717182AAAF8F0919964* L_3 = __this->____param_0;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if (((int64_t)L_4 * (int64_t)L_5 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_4 * (int64_t)L_5 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB_RuntimeMethod_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		int32_t L_8;
		L_8 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_7, NULL);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5)) + (int64_t)L_8 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_4, L_5)) + (int64_t)L_8 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB_RuntimeMethod_var);
		intptr_t L_9;
		L_9 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, L_5)), L_8)), NULL);
		V_2 = L_9;
		intptr_t L_10 = V_2;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_12;
		L_12 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var)));
		Exception_t* L_13;
		L_13 = Gdip_StatusException_mD30EC7E61042064F8969D20703423D558395BEE8(3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB_RuntimeMethod_var)));
	}

IL_0046:
	{
		intptr_t L_14 = V_2;
		int32_t L_15 = V_1;
		intptr_t L_16;
		L_16 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_WriteIntPtr_m3AA18248A64282B1CFB4FF0B13678B2E08DADA36(L_14, L_16, NULL);
		intptr_t L_17 = V_2;
		int64_t L_18;
		L_18 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (IntPtr_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		int32_t L_21;
		L_21 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_20, NULL);
		if (il2cpp_codegen_check_add_overflow((int64_t)L_18, (int64_t)((int64_t)L_21)))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), EncoderParameters_ConvertToMemory_m75E9F612D61C530D3BE778B9DB11F20108F303DB_RuntimeMethod_var);
		V_3 = ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)L_21)));
		V_4 = 0;
		goto IL_0090;
	}

IL_006f:
	{
		EncoderParameterU5BU5D_tDCFC2CFB031D112C7B8A6717182AAAF8F0919964* L_22 = __this->____param_0;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int64_t L_26 = V_3;
		int32_t L_27 = V_4;
		int32_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(((int64_t)il2cpp_codegen_add(L_26, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_27, L_28))))), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_TisEncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_m72ACCB8E3BD9C2ACF68EC2030CD762B087423864(L_25, L_29, (bool)0, Marshal_StructureToPtr_TisEncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_m72ACCB8E3BD9C2ACF68EC2030CD762B087423864_RuntimeMethod_var);
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0090:
	{
		int32_t L_31 = V_4;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_006f;
		}
	}
	{
		intptr_t L_33 = V_2;
		return L_33;
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
// System.Void System.Drawing.Imaging.ImageCodecInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo__ctor_mAAF1B20938221422F58BEC01C7A492C0C75FEAAF (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Guid System.Drawing.Imaging.ImageCodecInfo::get_Clsid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ImageCodecInfo_get_Clsid_m0B4302897900CA76E4CBC75092352668BDD1F899 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->____clsid_0;
		return L_0;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_Clsid(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Clsid_mC16320A24C90BEF23972A1BACD81C0915B9AAB92 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->____clsid_0 = L_0;
		return;
	}
}
// System.Guid System.Drawing.Imaging.ImageCodecInfo::get_FormatID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ImageCodecInfo_get_FormatID_mAA66FAF124BEF7AF3CE6E785AB414C448D7FCDDB (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->____formatID_1;
		return L_0;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_FormatID(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FormatID_m97551D59F457D48FFEFBB6B4DCA13BF72DB91D23 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->____formatID_1 = L_0;
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_CodecName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_CodecName_m39279E9CC908B7CDCDD683044394C4A8B6536FF4 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____codecName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codecName_2), (void*)L_0);
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_DllName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_DllName_mDE0AD63F9DBC28EAFD3A4A52104D8669AA126FC3 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____dllName_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dllName_3), (void*)L_0);
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_FormatDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FormatDescription_mC861A45BE4602C80AFD764E628CA86DF66F273CD (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____formatDescription_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatDescription_4), (void*)L_0);
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_FilenameExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FilenameExtension_mAAE81EA232FDE144E4E51A75D7B9B58F83800E23 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____filenameExtension_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filenameExtension_5), (void*)L_0);
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_MimeType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_MimeType_m201C83D753E6DC95F455407BCCDB6D3F23DE1FE8 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____mimeType_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mimeType_6), (void*)L_0);
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_Flags(System.Drawing.Imaging.ImageCodecFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Flags_m3697AA16CD1E226F62092D653A61C8A502498109 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____flags_7 = L_0;
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_Version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Version_m39108B3C7AB3AF6FFB70A5A7FC82F54FE7A146C9 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____version_8 = L_0;
		return;
	}
}
// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::get_SignaturePatterns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ImageCodecInfo_get_SignaturePatterns_mEAB0E0EA776A5374B558717EB6BFDAA6F6404F9F (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->____signaturePatterns_9;
		return L_0;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_SignaturePatterns(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_SignaturePatterns_mE337F44D5265F54CF0E8CA6EC5EB3BC323585798 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->____signaturePatterns_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signaturePatterns_9), (void*)L_0);
		return;
	}
}
// System.Byte[][] System.Drawing.Imaging.ImageCodecInfo::get_SignatureMasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ImageCodecInfo_get_SignatureMasks_m645BE10A6D750E7C58FFE4CB7CBAB59D741DB982 (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->____signatureMasks_10;
		return L_0;
	}
}
// System.Void System.Drawing.Imaging.ImageCodecInfo::set_SignatureMasks(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfo_set_SignatureMasks_m4798FDA3C4ECF33969C9F4C2C154C2FEAA6B466A (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->____signatureMasks_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signatureMasks_10), (void*)L_0);
		return;
	}
}
// System.Drawing.Imaging.ImageCodecInfo[] System.Drawing.Imaging.ImageCodecInfo::GetImageEncoders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* ImageCodecInfo_GetImageEncoders_mFC7AEE9C5ED1F8FCC46520B37A8B1A8B24605D76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GDIPlus_GdipGetImageEncodersSize_m77E87222F25EC6A77F48E764FEA15B14ECB0B303((&V_1), (&V_2), NULL);
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = Gdip_StatusException_mD30EC7E61042064F8969D20703423D558395BEE8(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageCodecInfo_GetImageEncoders_mFC7AEE9C5ED1F8FCC46520B37A8B1A8B24605D76_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_4 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(L_4, NULL);
		V_4 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				intptr_t L_6 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_7 = V_1;
				int32_t L_8 = V_2;
				intptr_t L_9 = V_4;
				il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
				int32_t L_10;
				L_10 = GDIPlus_GdipGetImageEncoders_m0651ACCFDBD76A70FF047478B0E7723CDCF46F9B(L_7, L_8, L_9, NULL);
				V_3 = L_10;
				int32_t L_11 = V_3;
				if (!L_11)
				{
					goto IL_0030_1;
				}
			}
			{
				int32_t L_12 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Gdip_t6FE648B549CEF8972069FA844859A40B36F95419_il2cpp_TypeInfo_var)));
				Exception_t* L_13;
				L_13 = Gdip_StatusException_mD30EC7E61042064F8969D20703423D558395BEE8(L_12, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageCodecInfo_GetImageEncoders_mFC7AEE9C5ED1F8FCC46520B37A8B1A8B24605D76_RuntimeMethod_var)));
			}

IL_0030_1:
			{
				intptr_t L_14 = V_4;
				int32_t L_15 = V_1;
				ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_16;
				L_16 = ImageCodecInfo_ConvertFromMemory_m4013F65FAE9902F17558E52330BDB52FEAEDB822(L_14, L_15, NULL);
				V_0 = L_16;
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_17 = V_0;
		return L_17;
	}
}
// System.Drawing.Imaging.ImageCodecInfo[] System.Drawing.Imaging.ImageCodecInfo::ConvertFromMemory(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* ImageCodecInfo_ConvertFromMemory_m4013F65FAE9902F17558E52330BDB52FEAEDB822 (intptr_t ___memoryStart0, int32_t ___numCodecs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_m89F083A91B6ADF26D07E1C0BC69684A29065E0C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* V_0 = NULL;
	int32_t V_1 = 0;
	ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___numCodecs1;
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_1 = (ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36*)(ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36*)SZArrayNew(ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_01a2;
	}

IL_000e:
	{
		intptr_t L_2 = ___memoryStart0;
		int64_t L_3;
		L_3 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_5, NULL);
		int32_t L_7 = V_1;
		intptr_t L_8;
		L_8 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(((int64_t)il2cpp_codegen_add(L_3, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_6, L_7))))), NULL);
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_9 = (ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483*)il2cpp_codegen_object_new(ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ImageCodecInfoPrivate__ctor_m58580204C69F19254EA093269B73919A595AF55E(L_9, NULL);
		V_2 = L_9;
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_10 = V_2;
		Marshal_PtrToStructure_TisImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_m89F083A91B6ADF26D07E1C0BC69684A29065E0C5(L_8, L_10, Marshal_PtrToStructure_TisImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_m89F083A91B6ADF26D07E1C0BC69684A29065E0C5_RuntimeMethod_var);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_11 = V_0;
		int32_t L_12 = V_1;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_13 = (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753*)il2cpp_codegen_object_new(ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ImageCodecInfo__ctor_mAAF1B20938221422F58BEC01C7A492C0C75FEAAF(L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753*)L_13);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_18 = V_2;
		NullCheck(L_18);
		Guid_t L_19 = L_18->___Clsid_0;
		NullCheck(L_17);
		ImageCodecInfo_set_Clsid_mC16320A24C90BEF23972A1BACD81C0915B9AAB92_inline(L_17, L_19, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_24 = V_2;
		NullCheck(L_24);
		Guid_t L_25 = L_24->___FormatID_1;
		NullCheck(L_23);
		ImageCodecInfo_set_FormatID_m97551D59F457D48FFEFBB6B4DCA13BF72DB91D23_inline(L_23, L_25, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_30 = V_2;
		NullCheck(L_30);
		intptr_t L_31 = L_30->___CodecName_2;
		String_t* L_32;
		L_32 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_31, NULL);
		NullCheck(L_29);
		ImageCodecInfo_set_CodecName_m39279E9CC908B7CDCDD683044394C4A8B6536FF4_inline(L_29, L_32, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_33 = V_0;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_37 = V_2;
		NullCheck(L_37);
		intptr_t L_38 = L_37->___DllName_3;
		String_t* L_39;
		L_39 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_38, NULL);
		NullCheck(L_36);
		ImageCodecInfo_set_DllName_mDE0AD63F9DBC28EAFD3A4A52104D8669AA126FC3_inline(L_36, L_39, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_44 = V_2;
		NullCheck(L_44);
		intptr_t L_45 = L_44->___FormatDescription_4;
		String_t* L_46;
		L_46 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_45, NULL);
		NullCheck(L_43);
		ImageCodecInfo_set_FormatDescription_mC861A45BE4602C80AFD764E628CA86DF66F273CD_inline(L_43, L_46, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_47 = V_0;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_51 = V_2;
		NullCheck(L_51);
		intptr_t L_52 = L_51->___FilenameExtension_5;
		String_t* L_53;
		L_53 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_52, NULL);
		NullCheck(L_50);
		ImageCodecInfo_set_FilenameExtension_mAAE81EA232FDE144E4E51A75D7B9B58F83800E23_inline(L_50, L_53, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_54 = V_0;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_58 = V_2;
		NullCheck(L_58);
		intptr_t L_59 = L_58->___MimeType_6;
		String_t* L_60;
		L_60 = Marshal_PtrToStringUni_mA30F3D8587F2E51F70DF5F30A3C2910CBDAB6F20(L_59, NULL);
		NullCheck(L_57);
		ImageCodecInfo_set_MimeType_m201C83D753E6DC95F455407BCCDB6D3F23DE1FE8_inline(L_57, L_60, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_61 = V_0;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = L_65->___Flags_7;
		NullCheck(L_64);
		ImageCodecInfo_set_Flags_m3697AA16CD1E226F62092D653A61C8A502498109_inline(L_64, L_66, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_67 = V_0;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = L_71->___Version_8;
		NullCheck(L_70);
		ImageCodecInfo_set_Version_m39108B3C7AB3AF6FFB70A5A7FC82F54FE7A146C9_inline(L_70, L_72, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_73 = V_0;
		int32_t L_74 = V_1;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_77 = V_2;
		NullCheck(L_77);
		int32_t L_78 = L_77->___SigCount_9;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_79 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_78);
		NullCheck(L_76);
		ImageCodecInfo_set_SignaturePatterns_mE337F44D5265F54CF0E8CA6EC5EB3BC323585798_inline(L_76, L_79, NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_80 = V_0;
		int32_t L_81 = V_1;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_84 = V_2;
		NullCheck(L_84);
		int32_t L_85 = L_84->___SigCount_9;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_86 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_85);
		NullCheck(L_83);
		ImageCodecInfo_set_SignatureMasks_m4798FDA3C4ECF33969C9F4C2C154C2FEAA6B466A_inline(L_83, L_86, NULL);
		V_3 = 0;
		goto IL_0192;
	}

IL_0104:
	{
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_87 = V_0;
		int32_t L_88 = V_1;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_91;
		L_91 = ImageCodecInfo_get_SignaturePatterns_mEAB0E0EA776A5374B558717EB6BFDAA6F6404F9F_inline(L_90, NULL);
		int32_t L_92 = V_3;
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_93 = V_2;
		NullCheck(L_93);
		int32_t L_94 = L_93->___SigSize_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_94);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_95);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_92), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_95);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_96 = V_0;
		int32_t L_97 = V_1;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_100;
		L_100 = ImageCodecInfo_get_SignatureMasks_m645BE10A6D750E7C58FFE4CB7CBAB59D741DB982_inline(L_99, NULL);
		int32_t L_101 = V_3;
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_102 = V_2;
		NullCheck(L_102);
		int32_t L_103 = L_102->___SigSize_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_103);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_104);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_104);
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_105 = V_2;
		NullCheck(L_105);
		intptr_t L_106 = L_105->___SigMask_12;
		int64_t L_107;
		L_107 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_106, NULL);
		int32_t L_108 = V_3;
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_109 = V_2;
		NullCheck(L_109);
		int32_t L_110 = L_109->___SigSize_10;
		intptr_t L_111;
		L_111 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(((int64_t)il2cpp_codegen_add(L_107, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_108, L_110))))), NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_112 = V_0;
		int32_t L_113 = V_1;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_116;
		L_116 = ImageCodecInfo_get_SignatureMasks_m645BE10A6D750E7C58FFE4CB7CBAB59D741DB982_inline(L_115, NULL);
		int32_t L_117 = V_3;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_120 = V_2;
		NullCheck(L_120);
		int32_t L_121 = L_120->___SigSize_10;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_111, L_119, 0, L_121, NULL);
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_122 = V_2;
		NullCheck(L_122);
		intptr_t L_123 = L_122->___SigPattern_11;
		int64_t L_124;
		L_124 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_123, NULL);
		int32_t L_125 = V_3;
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_126 = V_2;
		NullCheck(L_126);
		int32_t L_127 = L_126->___SigSize_10;
		intptr_t L_128;
		L_128 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(((int64_t)il2cpp_codegen_add(L_124, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_125, L_127))))), NULL);
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_129 = V_0;
		int32_t L_130 = V_1;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_133;
		L_133 = ImageCodecInfo_get_SignaturePatterns_mEAB0E0EA776A5374B558717EB6BFDAA6F6404F9F_inline(L_132, NULL);
		int32_t L_134 = V_3;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_137 = V_2;
		NullCheck(L_137);
		int32_t L_138 = L_137->___SigSize_10;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_128, L_136, 0, L_138, NULL);
		int32_t L_139 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_0192:
	{
		int32_t L_140 = V_3;
		ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* L_141 = V_2;
		NullCheck(L_141);
		int32_t L_142 = L_141->___SigCount_9;
		if ((((int32_t)L_140) < ((int32_t)L_142)))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_143 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_01a2:
	{
		int32_t L_144 = V_1;
		int32_t L_145 = ___numCodecs1;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_000e;
		}
	}
	{
		ImageCodecInfoU5BU5D_t2DA19209517792A18F1085F105D97380F5FB1B36* L_146 = V_0;
		return L_146;
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
// Conversion methods for marshalling of: System.Drawing.Imaging.ImageCodecInfoPrivate
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke(const ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483& unmarshaled, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_pinvoke& marshaled)
{
	marshaled.___Clsid_0 = unmarshaled.___Clsid_0;
	marshaled.___FormatID_1 = unmarshaled.___FormatID_1;
	marshaled.___CodecName_2 = unmarshaled.___CodecName_2;
	marshaled.___DllName_3 = unmarshaled.___DllName_3;
	marshaled.___FormatDescription_4 = unmarshaled.___FormatDescription_4;
	marshaled.___FilenameExtension_5 = unmarshaled.___FilenameExtension_5;
	marshaled.___MimeType_6 = unmarshaled.___MimeType_6;
	marshaled.___Flags_7 = unmarshaled.___Flags_7;
	marshaled.___Version_8 = unmarshaled.___Version_8;
	marshaled.___SigCount_9 = unmarshaled.___SigCount_9;
	marshaled.___SigSize_10 = unmarshaled.___SigSize_10;
	marshaled.___SigPattern_11 = unmarshaled.___SigPattern_11;
	marshaled.___SigMask_12 = unmarshaled.___SigMask_12;
}
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke_back(const ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_pinvoke& marshaled, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483& unmarshaled)
{
	Guid_t unmarshaledClsid_temp_0;
	memset((&unmarshaledClsid_temp_0), 0, sizeof(unmarshaledClsid_temp_0));
	unmarshaledClsid_temp_0 = marshaled.___Clsid_0;
	unmarshaled.___Clsid_0 = unmarshaledClsid_temp_0;
	Guid_t unmarshaledFormatID_temp_1;
	memset((&unmarshaledFormatID_temp_1), 0, sizeof(unmarshaledFormatID_temp_1));
	unmarshaledFormatID_temp_1 = marshaled.___FormatID_1;
	unmarshaled.___FormatID_1 = unmarshaledFormatID_temp_1;
	intptr_t unmarshaledCodecName_temp_2;
	memset((&unmarshaledCodecName_temp_2), 0, sizeof(unmarshaledCodecName_temp_2));
	unmarshaledCodecName_temp_2 = marshaled.___CodecName_2;
	unmarshaled.___CodecName_2 = unmarshaledCodecName_temp_2;
	intptr_t unmarshaledDllName_temp_3;
	memset((&unmarshaledDllName_temp_3), 0, sizeof(unmarshaledDllName_temp_3));
	unmarshaledDllName_temp_3 = marshaled.___DllName_3;
	unmarshaled.___DllName_3 = unmarshaledDllName_temp_3;
	intptr_t unmarshaledFormatDescription_temp_4;
	memset((&unmarshaledFormatDescription_temp_4), 0, sizeof(unmarshaledFormatDescription_temp_4));
	unmarshaledFormatDescription_temp_4 = marshaled.___FormatDescription_4;
	unmarshaled.___FormatDescription_4 = unmarshaledFormatDescription_temp_4;
	intptr_t unmarshaledFilenameExtension_temp_5;
	memset((&unmarshaledFilenameExtension_temp_5), 0, sizeof(unmarshaledFilenameExtension_temp_5));
	unmarshaledFilenameExtension_temp_5 = marshaled.___FilenameExtension_5;
	unmarshaled.___FilenameExtension_5 = unmarshaledFilenameExtension_temp_5;
	intptr_t unmarshaledMimeType_temp_6;
	memset((&unmarshaledMimeType_temp_6), 0, sizeof(unmarshaledMimeType_temp_6));
	unmarshaledMimeType_temp_6 = marshaled.___MimeType_6;
	unmarshaled.___MimeType_6 = unmarshaledMimeType_temp_6;
	int32_t unmarshaledFlags_temp_7 = 0;
	unmarshaledFlags_temp_7 = marshaled.___Flags_7;
	unmarshaled.___Flags_7 = unmarshaledFlags_temp_7;
	int32_t unmarshaledVersion_temp_8 = 0;
	unmarshaledVersion_temp_8 = marshaled.___Version_8;
	unmarshaled.___Version_8 = unmarshaledVersion_temp_8;
	int32_t unmarshaledSigCount_temp_9 = 0;
	unmarshaledSigCount_temp_9 = marshaled.___SigCount_9;
	unmarshaled.___SigCount_9 = unmarshaledSigCount_temp_9;
	int32_t unmarshaledSigSize_temp_10 = 0;
	unmarshaledSigSize_temp_10 = marshaled.___SigSize_10;
	unmarshaled.___SigSize_10 = unmarshaledSigSize_temp_10;
	intptr_t unmarshaledSigPattern_temp_11;
	memset((&unmarshaledSigPattern_temp_11), 0, sizeof(unmarshaledSigPattern_temp_11));
	unmarshaledSigPattern_temp_11 = marshaled.___SigPattern_11;
	unmarshaled.___SigPattern_11 = unmarshaledSigPattern_temp_11;
	intptr_t unmarshaledSigMask_temp_12;
	memset((&unmarshaledSigMask_temp_12), 0, sizeof(unmarshaledSigMask_temp_12));
	unmarshaledSigMask_temp_12 = marshaled.___SigMask_12;
	unmarshaled.___SigMask_12 = unmarshaledSigMask_temp_12;
}
// Conversion method for clean up from marshalling of: System.Drawing.Imaging.ImageCodecInfoPrivate
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke_cleanup(ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Drawing.Imaging.ImageCodecInfoPrivate
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_com(const ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483& unmarshaled, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_com& marshaled)
{
	marshaled.___Clsid_0 = unmarshaled.___Clsid_0;
	marshaled.___FormatID_1 = unmarshaled.___FormatID_1;
	marshaled.___CodecName_2 = unmarshaled.___CodecName_2;
	marshaled.___DllName_3 = unmarshaled.___DllName_3;
	marshaled.___FormatDescription_4 = unmarshaled.___FormatDescription_4;
	marshaled.___FilenameExtension_5 = unmarshaled.___FilenameExtension_5;
	marshaled.___MimeType_6 = unmarshaled.___MimeType_6;
	marshaled.___Flags_7 = unmarshaled.___Flags_7;
	marshaled.___Version_8 = unmarshaled.___Version_8;
	marshaled.___SigCount_9 = unmarshaled.___SigCount_9;
	marshaled.___SigSize_10 = unmarshaled.___SigSize_10;
	marshaled.___SigPattern_11 = unmarshaled.___SigPattern_11;
	marshaled.___SigMask_12 = unmarshaled.___SigMask_12;
}
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_com_back(const ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_com& marshaled, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483& unmarshaled)
{
	Guid_t unmarshaledClsid_temp_0;
	memset((&unmarshaledClsid_temp_0), 0, sizeof(unmarshaledClsid_temp_0));
	unmarshaledClsid_temp_0 = marshaled.___Clsid_0;
	unmarshaled.___Clsid_0 = unmarshaledClsid_temp_0;
	Guid_t unmarshaledFormatID_temp_1;
	memset((&unmarshaledFormatID_temp_1), 0, sizeof(unmarshaledFormatID_temp_1));
	unmarshaledFormatID_temp_1 = marshaled.___FormatID_1;
	unmarshaled.___FormatID_1 = unmarshaledFormatID_temp_1;
	intptr_t unmarshaledCodecName_temp_2;
	memset((&unmarshaledCodecName_temp_2), 0, sizeof(unmarshaledCodecName_temp_2));
	unmarshaledCodecName_temp_2 = marshaled.___CodecName_2;
	unmarshaled.___CodecName_2 = unmarshaledCodecName_temp_2;
	intptr_t unmarshaledDllName_temp_3;
	memset((&unmarshaledDllName_temp_3), 0, sizeof(unmarshaledDllName_temp_3));
	unmarshaledDllName_temp_3 = marshaled.___DllName_3;
	unmarshaled.___DllName_3 = unmarshaledDllName_temp_3;
	intptr_t unmarshaledFormatDescription_temp_4;
	memset((&unmarshaledFormatDescription_temp_4), 0, sizeof(unmarshaledFormatDescription_temp_4));
	unmarshaledFormatDescription_temp_4 = marshaled.___FormatDescription_4;
	unmarshaled.___FormatDescription_4 = unmarshaledFormatDescription_temp_4;
	intptr_t unmarshaledFilenameExtension_temp_5;
	memset((&unmarshaledFilenameExtension_temp_5), 0, sizeof(unmarshaledFilenameExtension_temp_5));
	unmarshaledFilenameExtension_temp_5 = marshaled.___FilenameExtension_5;
	unmarshaled.___FilenameExtension_5 = unmarshaledFilenameExtension_temp_5;
	intptr_t unmarshaledMimeType_temp_6;
	memset((&unmarshaledMimeType_temp_6), 0, sizeof(unmarshaledMimeType_temp_6));
	unmarshaledMimeType_temp_6 = marshaled.___MimeType_6;
	unmarshaled.___MimeType_6 = unmarshaledMimeType_temp_6;
	int32_t unmarshaledFlags_temp_7 = 0;
	unmarshaledFlags_temp_7 = marshaled.___Flags_7;
	unmarshaled.___Flags_7 = unmarshaledFlags_temp_7;
	int32_t unmarshaledVersion_temp_8 = 0;
	unmarshaledVersion_temp_8 = marshaled.___Version_8;
	unmarshaled.___Version_8 = unmarshaledVersion_temp_8;
	int32_t unmarshaledSigCount_temp_9 = 0;
	unmarshaledSigCount_temp_9 = marshaled.___SigCount_9;
	unmarshaled.___SigCount_9 = unmarshaledSigCount_temp_9;
	int32_t unmarshaledSigSize_temp_10 = 0;
	unmarshaledSigSize_temp_10 = marshaled.___SigSize_10;
	unmarshaled.___SigSize_10 = unmarshaledSigSize_temp_10;
	intptr_t unmarshaledSigPattern_temp_11;
	memset((&unmarshaledSigPattern_temp_11), 0, sizeof(unmarshaledSigPattern_temp_11));
	unmarshaledSigPattern_temp_11 = marshaled.___SigPattern_11;
	unmarshaled.___SigPattern_11 = unmarshaledSigPattern_temp_11;
	intptr_t unmarshaledSigMask_temp_12;
	memset((&unmarshaledSigMask_temp_12), 0, sizeof(unmarshaledSigMask_temp_12));
	unmarshaledSigMask_temp_12 = marshaled.___SigMask_12;
	unmarshaled.___SigMask_12 = unmarshaledSigMask_temp_12;
}
// Conversion method for clean up from marshalling of: System.Drawing.Imaging.ImageCodecInfoPrivate
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_com_cleanup(ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshaled_com& marshaled)
{
}
// System.Void System.Drawing.Imaging.ImageCodecInfoPrivate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageCodecInfoPrivate__ctor_m58580204C69F19254EA093269B73919A595AF55E (ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___CodecName_2 = L_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___DllName_3 = L_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___FormatDescription_4 = L_2;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___FilenameExtension_5 = L_3;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___MimeType_6 = L_4;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___SigPattern_11 = L_5;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___SigMask_12 = L_6;
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
// System.Void System.Drawing.Imaging.ImageFormat::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFormat__ctor_m4C8FEA14886E078A2993BF64DEC24A740FB0AA31 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, Guid_t ___guid0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Guid_t L_0 = ___guid0;
		__this->___guid_0 = L_0;
		return;
	}
}
// System.Void System.Drawing.Imaging.ImageFormat::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, String_t* ___name0, String_t* ___guid1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_0);
		String_t* L_1 = ___guid1;
		Guid_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_2), L_1, /*hidden argument*/NULL);
		__this->___guid_0 = L_2;
		return;
	}
}
// System.Boolean System.Drawing.Imaging.ImageFormat::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageFormat_Equals_mF68CCE128077E139A52915441CCCA2C5946B82DA (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)IsInstSealed((RuntimeObject*)L_0, ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var));
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_2 = V_0;
		NullCheck(L_2);
		Guid_t L_3;
		L_3 = ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline(L_2, NULL);
		V_1 = L_3;
		Guid_t L_4 = __this->___guid_0;
		bool L_5;
		L_5 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_1), L_4, NULL);
		return L_5;
	}
}
// System.Int32 System.Drawing.Imaging.ImageFormat::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageFormat_GetHashCode_m4093AF1BAAA71A821000793F0C8235D849D7EB32 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = (&__this->___guid_0);
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_0, NULL);
		return L_1;
	}
}
// System.String System.Drawing.Imaging.ImageFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImageFormat_ToString_mE8DAAB87989126EC8ED644A6FFE86686BEE112C6 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD102034CE0EBCE26F34CE52CF3359AB05696438D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___name_1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->___name_1;
		return L_1;
	}

IL_000f:
	{
		Guid_t* L_2 = (&__this->___guid_0);
		String_t* L_3;
		L_3 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD102034CE0EBCE26F34CE52CF3359AB05696438D, L_3, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_4;
	}
}
// System.Guid System.Drawing.Imaging.ImageFormat::get_Guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4 (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___guid_0;
		return L_0;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Bmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Bmp_m106BDA513C0A89462D2FD82716D3B81111443C5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral862CAA0C64F1764E370EFC2E77881E05FAF16890);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___BmpImageFormat_3;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteral547E744A84FD465BDBF6F5843C53A941CFF3D3B7, _stringLiteral862CAA0C64F1764E370EFC2E77881E05FAF16890, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___BmpImageFormat_3 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___BmpImageFormat_3), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___BmpImageFormat_3;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Emf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Emf_m6FE5ACC501F3843A2D628150D69B3C6AEFEBD204 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9E8FB06C8B2DF8BA0D26FBFBA38F99D52BA2D0E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___EmfImageFormat_4;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteralC6CD6C222CE9E0729EEB8A602D577888DB1F4CAE, _stringLiteralF9E8FB06C8B2DF8BA0D26FBFBA38F99D52BA2D0E, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___EmfImageFormat_4 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___EmfImageFormat_4), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___EmfImageFormat_4;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Exif()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Exif_m0D8C58373A3A977C94E90228514FFD0DFB7FD6BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16FC26AF1D5BB1B015014C18551A623693645E4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___ExifImageFormat_5;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteral2628EAC4DE0E796313A0C9DA723D4C22D9AA2FFB, _stringLiteral16FC26AF1D5BB1B015014C18551A623693645E4D, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___ExifImageFormat_5 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___ExifImageFormat_5), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___ExifImageFormat_5;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Gif()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Gif_m7CC27D1193C89CCAE6809ED68B5E70603CF23EBF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA35856EA4BA27AB5EF41309A35A521140063943B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___GifImageFormat_6;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteralB9492075A7C516C77F78283A8F2E0AB2FCA90D05, _stringLiteralA35856EA4BA27AB5EF41309A35A521140063943B, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___GifImageFormat_6 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___GifImageFormat_6), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___GifImageFormat_6;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Icon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Icon_mD53107155DEC45FA822EC59A6FBAFAFD6C77E0F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA82CAE6C5921BD66448C0734C22EB4A5D37F473);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___IconImageFormat_10;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteralAA8377C0E73B7693B2561A3D923BAA006D1A5E37, _stringLiteralBA82CAE6C5921BD66448C0734C22EB4A5D37F473, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___IconImageFormat_10 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___IconImageFormat_10), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___IconImageFormat_10;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Jpeg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Jpeg_m3520E114BEC037DDF773EC50DEC12D322F3BA9F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DA600376D9993247538794EC7CC6CB88410764F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E08617F25F836A10B34B6D51F697077F2D62C21);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___JpegImageFormat_11;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteral2DA600376D9993247538794EC7CC6CB88410764F, _stringLiteral5E08617F25F836A10B34B6D51F697077F2D62C21, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___JpegImageFormat_11 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___JpegImageFormat_11), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___JpegImageFormat_11;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_MemoryBmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_MemoryBmp_mD3A9767906D617DFF0253381D7B6B505014A3A7F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F2AB7AA4BA4C3B934929798F99ECB15F855090B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8051B86DDE7A61ACA1900B33CCB6BAADCB9E2A7E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___MemoryBmpImageFormat_9;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteral8051B86DDE7A61ACA1900B33CCB6BAADCB9E2A7E, _stringLiteral0F2AB7AA4BA4C3B934929798F99ECB15F855090B, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___MemoryBmpImageFormat_9 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___MemoryBmpImageFormat_9), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___MemoryBmpImageFormat_9;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Png()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Png_m383CFF995626AC9055AA44D94814D002A29984FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral104B2BF97BF8700D6E3FD0393F91EE30FF19AA60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___PngImageFormat_8;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteral564AD68A5E457EA042F44395B62BAA866DA63E3E, _stringLiteral104B2BF97BF8700D6E3FD0393F91EE30FF19AA60, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___PngImageFormat_8 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___PngImageFormat_8), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___PngImageFormat_8;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Tiff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Tiff_mF229F0589AA48A79859D8A950841E9B1E19EA25B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DAC15030F09F0806C5C607F0D4EFEA2E04AE593);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___TiffImageFormat_7;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteral113F3C8744ABD0E3560C478D30ECC7D9CAFD52C1, _stringLiteral0DAC15030F09F0806C5C607F0D4EFEA2E04AE593, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___TiffImageFormat_7 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___TiffImageFormat_7), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___TiffImageFormat_7;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Drawing.Imaging.ImageFormat System.Drawing.Imaging.ImageFormat::get_Wmf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* ImageFormat_get_Wmf_mE8AADAFF768448107EDFB0293D5C81380446428C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0010C15408C6FFBCC8330E91AA558F5D5584347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_4 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___WmfImageFormat_12;
				if (L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_5 = (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68*)il2cpp_codegen_object_new(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ImageFormat__ctor_m08C541362907090B44CA065C4E797B0CAD409C36(L_5, _stringLiteralEEF915629086A7A8200A9BF83F1BF133A36DA799, _stringLiteralE0010C15408C6FFBCC8330E91AA558F5D5584347, NULL);
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___WmfImageFormat_12 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___WmfImageFormat_12), (void*)L_5);
			}

IL_002b_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
				ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_6 = ((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___WmfImageFormat_12;
				V_2 = L_6;
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* L_7 = V_2;
		return L_7;
	}
}
// System.Void System.Drawing.Imaging.ImageFormat::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFormat__cctor_mC454B7284860A62287438ACCFE0D9C253613F157 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_StaticFields*)il2cpp_codegen_static_fields_for(ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68_il2cpp_TypeInfo_var))->___locker_2), (void*)L_0);
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
// System.Drawing.Imaging.Metafile/MetafileHolder System.Drawing.Imaging.Metafile::AddMetafileHolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* Metafile_AddMetafileHolder_m7E209B7D853929C938D2B7BB5B02BC6178BC1010 (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_0 = __this->____metafileHolder_3;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_1 = __this->____metafileHolder_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = MetafileHolder_get_Disposed_m30CF8FD2131AFD089C40230D322E40B46991C597_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3*)NULL;
	}

IL_0017:
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_3 = (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3*)il2cpp_codegen_object_new(MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MetafileHolder__ctor_m2F0E8BA0F314544C7E0BD1DFAAE96163320C108E(L_3, NULL);
		__this->____metafileHolder_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metafileHolder_3), (void*)L_3);
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_4 = __this->____metafileHolder_3;
		return L_4;
	}
}
// System.Void System.Drawing.Imaging.Metafile::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metafile__ctor_mDBBBDB08277EA2A22D2BC63D2B6020B74EC087F7 (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		intptr_t L_0 = ___ptr0;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_0;
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile::.ctor(System.IntPtr,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metafile__ctor_m6313C8851025E8502761E9663EFE28A829FF1C3B (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, intptr_t ___ptr0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image__ctor_mB70D540DF0B5CC02FBE9753FF3845456BD772132(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GDIPlus_RunningOnWindows_m30B375220E469DF062B62C4347EFF27CB8AB2EAC(NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream1;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___stream_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___stream_2), (void*)L_1);
	}

IL_0014:
	{
		intptr_t L_2 = ___ptr0;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_2;
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metafile_Dispose_m5B260807A4321E952F0F9F275B73F9C7916F8AE7 (Metafile_t362C07807C6865534F34AD779F90A62993BBC514* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_0 = __this->____metafileHolder_3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_1 = __this->____metafileHolder_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = MetafileHolder_get_Disposed_m30CF8FD2131AFD089C40230D322E40B46991C597_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* L_3 = __this->____metafileHolder_3;
		intptr_t L_4 = ((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1;
		NullCheck(L_3);
		MetafileHolder_MetafileDisposed_m585BC97DDE55AB7C5D09352A58E4E736498B9008_inline(L_3, L_4, NULL);
		__this->____metafileHolder_3 = (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____metafileHolder_3), (void*)(MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3*)NULL);
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE*)__this)->___nativeObject_1 = L_5;
	}

IL_0038:
	{
		bool L_6 = ___disposing0;
		Image_Dispose_mE0CB2A3C3CDE7AF58B7616FA3F177CFB1595DEFD(__this, L_6, NULL);
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
// System.Boolean System.Drawing.Imaging.Metafile/MetafileHolder::get_Disposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetafileHolder_get_Disposed_m30CF8FD2131AFD089C40230D322E40B46991C597 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_0;
		return L_0;
	}
}
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder__ctor_m2F0E8BA0F314544C7E0BD1DFAAE96163320C108E (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____disposed_0 = (bool)0;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____nativeImage_1 = L_0;
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_Finalize_mF3BCDE36F892577DCE8C1686FEBDACC1BC6E58C4 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MetafileHolder_Dispose_m85434BF533B16B8B718844CBF325318D2C1D99A2(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_Dispose_mFC00C73656D163CB8675CBCE9C9058DE8C9F4B87 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MetafileHolder_Dispose_m85434BF533B16B8B718844CBF325318D2C1D99A2(__this, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_Dispose_m85434BF533B16B8B718844CBF325318D2C1D99A2 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = __this->____disposed_0;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_1 = __this->____nativeImage_1;
		V_0 = L_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____nativeImage_1 = L_2;
		__this->____disposed_0 = (bool)1;
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GDIPlus_t8F99EA329D4E59B591E262EB2D9A1E0B330A14B1_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = GDIPlus_GdipDisposeImage_mD4A43CCBD9933778B73B5AA371CF5E7CF5CACC64(L_6, NULL);
		GDIPlus_CheckStatus_m5178D66692F3B07B0430D166BE08C1229FC6C055(L_7, NULL);
	}

IL_0039:
	{
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::MetafileDisposed(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_MetafileDisposed_m585BC97DDE55AB7C5D09352A58E4E736498B9008 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, intptr_t ___nativeImage0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___nativeImage0;
		__this->____nativeImage_1 = L_0;
		return;
	}
}
// System.Void System.Drawing.Imaging.Metafile/MetafileHolder::GraphicsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetafileHolder_GraphicsDisposed_m3FB3B887CC4814A2E47D685A1B936E08155F2396 (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) 
{
	{
		MetafileHolder_Dispose_mFC00C73656D163CB8675CBCE9C9058DE8C9F4B87(__this, NULL);
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
// System.Void System.Drawing.Design.UITypeEditor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITypeEditor__cctor_mC6B804F1A6E953AE3C5B5163EC8AADF710545698 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeDescriptor_tC36C76617F823DE4F887E1D17846077CE7B0C3D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UITypeEditor_t8E430CF4286C9E6364D79F9205E6125C920205E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral084B06C5EFE15CCE08C428F91621CC3869ADEB02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F75311F32CC1CC9DAE416D735F2DAC33296D63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4547321023A083AF14AB11B7FD10665C080C0150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79E8E14C3E99BC99472C9201D231EA1D50599469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB497C32287A00283EBE4BEA4C84AF6874AE5FB93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEC9CEF3FE10F0CFF3049232BBE98B40A23119F3);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_0 = NULL;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		V_0 = L_0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_1, L_3, _stringLiteral4547321023A083AF14AB11B7FD10665C080C0150);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, L_6, _stringLiteral084B06C5EFE15CCE08C428F91621CC3869ADEB02);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_7, L_9, _stringLiteral79E8E14C3E99BC99472C9201D231EA1D50599469);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, _stringLiteral79E8E14C3E99BC99472C9201D231EA1D50599469);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_13, L_15, _stringLiteral21F75311F32CC1CC9DAE416D735F2DAC33296D63);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_16);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_16, L_18, _stringLiteral21F75311F32CC1CC9DAE416D735F2DAC33296D63);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_19, L_21, _stringLiteralB497C32287A00283EBE4BEA4C84AF6874AE5FB93);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, L_24, _stringLiteralDEC9CEF3FE10F0CFF3049232BBE98B40A23119F3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (UITypeEditor_t8E430CF4286C9E6364D79F9205E6125C920205E1_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeDescriptor_tC36C76617F823DE4F887E1D17846077CE7B0C3D0_il2cpp_TypeInfo_var);
		TypeDescriptor_AddEditorTable_m98A7C2CD0FFF377C169891B82F91C1A084E27D72(L_26, L_27, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_X_m57216246BE34687C3100179002EA5B2A9079776D_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___x_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Y_m8D016239D6FA9171C75C071E6CDD3557BF8C0239_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___y_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Width_m08006DBCE23A7EC1B9BA4BAE399141B529B13A52_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___width_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Rectangle_get_Height_m9C3D28B6C72348677EE9EEBA616E65C90B154DB2_inline (Rectangle_tF1DE9C7C07CBB4836E5B266F6CE357E063934218* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___height_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0 = ___value0;
		intptr_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReleaseDelegate_Invoke_m9E6468BC84AC37AA86E28BF7325E8118055E9582_inline (ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA* __this, intptr_t ___this0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AddRefDelegate_Invoke_mBBA9E6E4EEE1F8AE3611127005D085786D756471_inline (AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70* __this, intptr_t ___this0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadDelegate_Invoke_mB28BA73FAFD0C473FFB5527940B19D91EA05E29C_inline (ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbRead3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pv1, ___cb2, ___pcbRead3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WriteDelegate_Invoke_m3750013F1EAD868F736D4D290F426992EE550902_inline (WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF* __this, intptr_t ___this0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pv1, int32_t ___cb2, intptr_t ___pcbWritten3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pv1, ___cb2, ___pcbWritten3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SeekDelegate_Invoke_m3B7A8956E6D34007D7DEBEB350D82908ED16EAF0_inline (SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559* __this, intptr_t ___this0, int64_t ___dlibMove1, int32_t ___dwOrigin2, intptr_t ___plibNewPosition3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___dlibMove1, ___dwOrigin2, ___plibNewPosition3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SetSizeDelegate_Invoke_m6D9CB10DE619D96BA09BE44DF6FA873E6D1718B5_inline (SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE* __this, intptr_t ___this0, int64_t ___libNewSize1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___libNewSize1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CopyToDelegate_Invoke_mED6951C0BEC807D5F7B98410C4DACAC32AAE26D8_inline (CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31* __this, intptr_t ___this0, RuntimeObject* ___pstm1, int64_t ___cb2, intptr_t ___pcbRead3, intptr_t ___pcbWritten4, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, RuntimeObject*, int64_t, intptr_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pstm1, ___cb2, ___pcbRead3, ___pcbWritten4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommitDelegate_Invoke_m45CB81D89D8D581583797959BAC236B26AEDD619_inline (CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B* __this, intptr_t ___this0, int32_t ___grfCommitFlags1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___grfCommitFlags1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RevertDelegate_Invoke_m68BA3529162D1342667EAA782CCBB724944749DD_inline (RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD* __this, intptr_t ___this0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LockRegionDelegate_Invoke_m9B6F58374647FB42102BF7F0886E9380A760A797_inline (LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___libOffset1, ___cb2, ___dwLockType3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnlockRegionDelegate_Invoke_mEE5E4FF902B1DBBC5681889048930F4815369483_inline (UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6* __this, intptr_t ___this0, int64_t ___libOffset1, int64_t ___cb2, int32_t ___dwLockType3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, int64_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___libOffset1, ___cb2, ___dwLockType3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StatDelegate_Invoke_mFA20CF23B1E7ED4B0ADC98CA871899D32558F618_inline (StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453* __this, intptr_t ___this0, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___pstatstg1, int32_t ___grfStatFlag2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___pstatstg1, ___grfStatFlag2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CloneDelegate_Invoke_m3482AB11DA02AF92B457F001551333D81AB6B3BC_inline (CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E* __this, intptr_t ___this0, intptr_t* ___ppstm1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___this0, ___ppstm1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Graphics_get_NativeObject_m93C84FBD86D236CEA21E4FC0475A5FB6AE9E18B2_inline (Graphics_t121AEDF8110DC232A0C448089D081C5B6703B504* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___nativeObject_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SerializationEntry_get_Name_mF6151F31B3F43C88AF08F39F178401406642EB67_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SerializationEntry_get_Value_mA57713535F866795C180D20067C0E38A85327912_inline (SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ImageFormat_get_Guid_m31AFD191C23A43014AF1168D320EB7CA96831AD4_inline (ImageFormat_tD6562F84E625CBCDCF9C59A7F87085F9AA7D1E68* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___guid_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ImageCodecInfo_get_FormatID_mAA66FAF124BEF7AF3CE6E785AB414C448D7FCDDB_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->____formatID_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t ImageCodecInfo_get_Clsid_m0B4302897900CA76E4CBC75092352668BDD1F899_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->____clsid_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Image_get_NativeObject_m7B065018E0ADD1DFD25346A728A586F2667AFC76_inline (Image_tEA97A38A5E7039951631A91016F38B5B581BDDAE* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___nativeObject_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____platform_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m0132A8360914E80AD6EEF7A353BC1C75A29AE4BF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var))->___stderr_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Clsid_mC16320A24C90BEF23972A1BACD81C0915B9AAB92_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->____clsid_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FormatID_m97551D59F457D48FFEFBB6B4DCA13BF72DB91D23_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___value0;
		__this->____formatID_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_CodecName_m39279E9CC908B7CDCDD683044394C4A8B6536FF4_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____codecName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codecName_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_DllName_mDE0AD63F9DBC28EAFD3A4A52104D8669AA126FC3_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____dllName_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dllName_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FormatDescription_mC861A45BE4602C80AFD764E628CA86DF66F273CD_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____formatDescription_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatDescription_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_FilenameExtension_mAAE81EA232FDE144E4E51A75D7B9B58F83800E23_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____filenameExtension_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filenameExtension_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_MimeType_m201C83D753E6DC95F455407BCCDB6D3F23DE1FE8_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____mimeType_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mimeType_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Flags_m3697AA16CD1E226F62092D653A61C8A502498109_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____flags_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_Version_m39108B3C7AB3AF6FFB70A5A7FC82F54FE7A146C9_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____version_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_SignaturePatterns_mE337F44D5265F54CF0E8CA6EC5EB3BC323585798_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->____signaturePatterns_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signaturePatterns_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageCodecInfo_set_SignatureMasks_m4798FDA3C4ECF33969C9F4C2C154C2FEAA6B466A_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___value0;
		__this->____signatureMasks_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signatureMasks_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ImageCodecInfo_get_SignaturePatterns_mEAB0E0EA776A5374B558717EB6BFDAA6F6404F9F_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->____signaturePatterns_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ImageCodecInfo_get_SignatureMasks_m645BE10A6D750E7C58FFE4CB7CBAB59D741DB982_inline (ImageCodecInfo_t51CAA82A85E7E0DFB1E9A40883FE8235BA2D5753* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->____signatureMasks_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MetafileHolder_get_Disposed_m30CF8FD2131AFD089C40230D322E40B46991C597_inline (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetafileHolder_MetafileDisposed_m585BC97DDE55AB7C5D09352A58E4E736498B9008_inline (MetafileHolder_t1985271D267B8C5639E517F1B4D88D5CC39493D3* __this, intptr_t ___nativeImage0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___nativeImage0;
		__this->____nativeImage_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
