#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
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
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
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
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>
struct Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct KeyCollection_t5D26B946C26464345D91A3DF860C02A5D3E535D2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action>
struct KeyCollection_t94F67CDF5E978000C16F49D121E96AC2F10CE60F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniWebViewNativeListener>
struct KeyCollection_tBE32C7F4803A2123E7DD7F1F22DBD1B4B8695130;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct ValueCollection_t8AFB67E2CB3D3975905C5C4CB69FC38C4CFBDD22;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action>
struct ValueCollection_tB6C7A8B6372F17E2F4C197D8E93B44F04165E83B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniWebViewNativeListener>
struct ValueCollection_t50BB2C026AB01B473E4181B53D300D7448F9B8BA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<UniWebViewNativeResultPayload>>[]
struct EntryU5BU5D_t0B236C71AE1FDD11192BEAB2606FFCF0606AE7BF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action>[]
struct EntryU5BU5D_t34DD94604A143A63F891FD7F17CE3D5ABA76DEA4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniWebViewNativeListener>[]
struct EntryU5BU5D_t6439180333F37E3183891804F0F66FC462C05F2A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UniWebView
struct UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C;
// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83;
// UniWebViewHelper
struct UniWebViewHelper_t166BB0D31B84038617C0DE07E9B52815998DD115;
// UniWebViewInterface
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4;
// UniWebViewLogger
struct UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B;
// UniWebViewNativeListener
struct UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423;
// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28;
// UniWebViewSafeBrowingComponent
struct UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4;
// UniWebViewSafeBrowsing
struct UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UniWebView/<>c__DisplayClass152_0
struct U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190;
// UniWebView/CaptureSnapshotFinished
struct CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68;
// UniWebView/FileDownloadFinished
struct FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE;
// UniWebView/FileDownloadStarted
struct FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615;
// UniWebView/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA;
// UniWebView/MessageReceivedDelegate
struct MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951;
// UniWebView/MultipleWindowClosedDelegate
struct MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8;
// UniWebView/MultipleWindowOpenedDelegate
struct MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6;
// UniWebView/OnWebContentProcessTerminatedDelegate
struct OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0;
// UniWebView/OrientationChangedDelegate
struct OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E;
// UniWebView/PageErrorReceivedDelegate
struct PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347;
// UniWebView/PageFinishedDelegate
struct PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC;
// UniWebView/PageProgressChangedDelegate
struct PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1;
// UniWebView/PageStartedDelegate
struct PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213;
// UniWebView/ShouldCloseDelegate
struct ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667;
// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate
struct OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Level_tAE06E24FCDD418667688DA0099DC5625E38EABA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E;
IL2CPP_EXTERN_C String_t* _stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621;
IL2CPP_EXTERN_C String_t* _stringLiteral0537E826CEC4233BE28552114535F51A3D777943;
IL2CPP_EXTERN_C String_t* _stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14;
IL2CPP_EXTERN_C String_t* _stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72;
IL2CPP_EXTERN_C String_t* _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265;
IL2CPP_EXTERN_C String_t* _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E;
IL2CPP_EXTERN_C String_t* _stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471;
IL2CPP_EXTERN_C String_t* _stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962;
IL2CPP_EXTERN_C String_t* _stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral2DB20FB043B2B7603A35A77E3D40E67C9577A370;
IL2CPP_EXTERN_C String_t* _stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81;
IL2CPP_EXTERN_C String_t* _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7;
IL2CPP_EXTERN_C String_t* _stringLiteral37DD53F3C91602BAB84363C053188A81B762168F;
IL2CPP_EXTERN_C String_t* _stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182;
IL2CPP_EXTERN_C String_t* _stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403;
IL2CPP_EXTERN_C String_t* _stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595;
IL2CPP_EXTERN_C String_t* _stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F;
IL2CPP_EXTERN_C String_t* _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A;
IL2CPP_EXTERN_C String_t* _stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4;
IL2CPP_EXTERN_C String_t* _stringLiteral46235E42561BC75195410C8FD01B7026927BA27E;
IL2CPP_EXTERN_C String_t* _stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBDA72250283979F1A464C506665274601F2A0C;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184;
IL2CPP_EXTERN_C String_t* _stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA;
IL2CPP_EXTERN_C String_t* _stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4;
IL2CPP_EXTERN_C String_t* _stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10;
IL2CPP_EXTERN_C String_t* _stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1;
IL2CPP_EXTERN_C String_t* _stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA503855111C346E6CBE6DEF890CC86D08F832F;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6;
IL2CPP_EXTERN_C String_t* _stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560;
IL2CPP_EXTERN_C String_t* _stringLiteral6273268A800B8837D5B315F1A0CB73F9116AA007;
IL2CPP_EXTERN_C String_t* _stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFD68B13AA8A51CDA93902ADD4D3CD3BB395061;
IL2CPP_EXTERN_C String_t* _stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95;
IL2CPP_EXTERN_C String_t* _stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22;
IL2CPP_EXTERN_C String_t* _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral74A5881238A30DEB9EF11A8EE6B92E2B642BF6AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984;
IL2CPP_EXTERN_C String_t* _stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8228F26A547DD52F870220D24F4F243E35286F25;
IL2CPP_EXTERN_C String_t* _stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789;
IL2CPP_EXTERN_C String_t* _stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF;
IL2CPP_EXTERN_C String_t* _stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B;
IL2CPP_EXTERN_C String_t* _stringLiteral936CE6919C99DBE2A0544D68CA4F6B3B152B06F7;
IL2CPP_EXTERN_C String_t* _stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8;
IL2CPP_EXTERN_C String_t* _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921;
IL2CPP_EXTERN_C String_t* _stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022;
IL2CPP_EXTERN_C String_t* _stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98;
IL2CPP_EXTERN_C String_t* _stringLiteralA1738FA234DD23984A6C35D65687B65D92536008;
IL2CPP_EXTERN_C String_t* _stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A;
IL2CPP_EXTERN_C String_t* _stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C;
IL2CPP_EXTERN_C String_t* _stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324;
IL2CPP_EXTERN_C String_t* _stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF;
IL2CPP_EXTERN_C String_t* _stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB;
IL2CPP_EXTERN_C String_t* _stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFB3A399D7319894C651DD5423F463A95B9DA55;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6;
IL2CPP_EXTERN_C String_t* _stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B;
IL2CPP_EXTERN_C String_t* _stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC81426293B91F35B234307120A0683A8E8468A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF;
IL2CPP_EXTERN_C String_t* _stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D;
IL2CPP_EXTERN_C String_t* _stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDEEA4904CA12EBD798D6DE754E4F996AE77368DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21;
IL2CPP_EXTERN_C String_t* _stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FD7533D578834C52F955AF663C262434D950DE;
IL2CPP_EXTERN_C String_t* _stringLiteralED16F9589E28E51337A6B35399688F5187808BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED;
IL2CPP_EXTERN_C String_t* _stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62;
IL2CPP_EXTERN_C String_t* _stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass152_0_U3CGetHTMLContentU3Eb__0_m429C40B5C5F84C64FC9B5551107A8856494A4E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniWebView_jsCompletionHandler_mFF854459078D3AE969F0FFCE6B4B5777F139923B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0CA68B4774C0576102C22D9907CBF946C9F36D3D 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0B236C71AE1FDD11192BEAB2606FFCF0606AE7BF* ____entries_1;
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
	KeyCollection_t5D26B946C26464345D91A3DF860C02A5D3E535D2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8AFB67E2CB3D3975905C5C4CB69FC38C4CFBDD22* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t34DD94604A143A63F891FD7F17CE3D5ABA76DEA4* ____entries_1;
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
	KeyCollection_t94F67CDF5E978000C16F49D121E96AC2F10CE60F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB6C7A8B6372F17E2F4C197D8E93B44F04165E83B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>
struct Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6439180333F37E3183891804F0F66FC462C05F2A* ____entries_1;
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
	KeyCollection_tBE32C7F4803A2123E7DD7F1F22DBD1B4B8695130* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t50BB2C026AB01B473E4181B53D300D7448F9B8BA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
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

// UniWebViewHelper
struct UniWebViewHelper_t166BB0D31B84038617C0DE07E9B52815998DD115  : public RuntimeObject
{
};

// UniWebViewInterface
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4  : public RuntimeObject
{
};

// UniWebViewLogger
struct UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B  : public RuntimeObject
{
	// UniWebViewLogger/Level UniWebViewLogger::level
	int32_t ___level_1;
};

// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28  : public RuntimeObject
{
	// System.String UniWebViewNativeResultPayload::identifier
	String_t* ___identifier_0;
	// System.String UniWebViewNativeResultPayload::resultCode
	String_t* ___resultCode_1;
	// System.String UniWebViewNativeResultPayload::data
	String_t* ___data_2;
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

// UniWebView/<>c__DisplayClass152_0
struct U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190  : public RuntimeObject
{
	// System.Action`1<System.String> UniWebView/<>c__DisplayClass152_0::handler
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UniWebViewMessage
struct UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 
{
	// System.String UniWebViewMessage::<RawMessage>k__BackingField
	String_t* ___U3CRawMessageU3Ek__BackingField_0;
	// System.String UniWebViewMessage::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
	// System.String UniWebViewMessage::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::<Args>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UniWebViewMessage
struct UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke
{
	char* ___U3CRawMessageU3Ek__BackingField_0;
	char* ___U3CSchemeU3Ek__BackingField_1;
	char* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UniWebViewMessage
struct UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com
{
	Il2CppChar* ___U3CRawMessageU3Ek__BackingField_0;
	Il2CppChar* ___U3CSchemeU3Ek__BackingField_1;
	Il2CppChar* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField_3;
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
	intptr_t ___method_ptr_0;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UniWebViewSafeBrowsing
struct UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate UniWebViewSafeBrowsing::OnSafeBrowsingFinished
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* ___OnSafeBrowsingFinished_4;
	// System.String UniWebViewSafeBrowsing::id
	String_t* ___id_5;
	// UniWebViewNativeListener UniWebViewSafeBrowsing::listener
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___listener_6;
	// System.String UniWebViewSafeBrowsing::url
	String_t* ___url_7;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UniWebView/CaptureSnapshotFinished
struct CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68  : public MulticastDelegate_t
{
};

// UniWebView/FileDownloadFinished
struct FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE  : public MulticastDelegate_t
{
};

// UniWebView/FileDownloadStarted
struct FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615  : public MulticastDelegate_t
{
};

// UniWebView/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA  : public MulticastDelegate_t
{
};

// UniWebView/MessageReceivedDelegate
struct MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951  : public MulticastDelegate_t
{
};

// UniWebView/MultipleWindowClosedDelegate
struct MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8  : public MulticastDelegate_t
{
};

// UniWebView/MultipleWindowOpenedDelegate
struct MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6  : public MulticastDelegate_t
{
};

// UniWebView/OnWebContentProcessTerminatedDelegate
struct OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0  : public MulticastDelegate_t
{
};

// UniWebView/OrientationChangedDelegate
struct OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E  : public MulticastDelegate_t
{
};

// UniWebView/PageErrorReceivedDelegate
struct PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347  : public MulticastDelegate_t
{
};

// UniWebView/PageFinishedDelegate
struct PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC  : public MulticastDelegate_t
{
};

// UniWebView/PageProgressChangedDelegate
struct PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1  : public MulticastDelegate_t
{
};

// UniWebView/PageStartedDelegate
struct PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213  : public MulticastDelegate_t
{
};

// UniWebView/ShouldCloseDelegate
struct ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667  : public MulticastDelegate_t
{
};

// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate
struct OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UniWebView
struct UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UniWebView/PageStartedDelegate UniWebView::OnPageStarted
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* ___OnPageStarted_4;
	// UniWebView/PageFinishedDelegate UniWebView::OnPageFinished
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* ___OnPageFinished_5;
	// UniWebView/PageErrorReceivedDelegate UniWebView::OnPageErrorReceived
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* ___OnPageErrorReceived_6;
	// UniWebView/PageProgressChangedDelegate UniWebView::OnPageProgressChanged
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* ___OnPageProgressChanged_7;
	// UniWebView/MessageReceivedDelegate UniWebView::OnMessageReceived
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* ___OnMessageReceived_8;
	// UniWebView/ShouldCloseDelegate UniWebView::OnShouldClose
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* ___OnShouldClose_9;
	// UniWebView/OrientationChangedDelegate UniWebView::OnOrientationChanged
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* ___OnOrientationChanged_10;
	// UniWebView/OnWebContentProcessTerminatedDelegate UniWebView::OnWebContentProcessTerminated
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* ___OnWebContentProcessTerminated_11;
	// UniWebView/FileDownloadStarted UniWebView::OnFileDownloadStarted
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* ___OnFileDownloadStarted_12;
	// UniWebView/FileDownloadFinished UniWebView::OnFileDownloadFinished
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* ___OnFileDownloadFinished_13;
	// UniWebView/CaptureSnapshotFinished UniWebView::OnCaptureSnapshotFinished
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* ___OnCaptureSnapshotFinished_14;
	// UniWebView/MultipleWindowOpenedDelegate UniWebView::OnMultipleWindowOpened
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* ___OnMultipleWindowOpened_15;
	// UniWebView/MultipleWindowClosedDelegate UniWebView::OnMultipleWindowClosed
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* ___OnMultipleWindowClosed_16;
	// System.String UniWebView::id
	String_t* ___id_17;
	// UniWebViewNativeListener UniWebView::listener
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___listener_18;
	// System.Boolean UniWebView::isPortrait
	bool ___isPortrait_19;
	// System.String UniWebView::urlOnStart
	String_t* ___urlOnStart_20;
	// System.Boolean UniWebView::showOnStart
	bool ___showOnStart_21;
	// System.Boolean UniWebView::fullScreen
	bool ___fullScreen_22;
	// System.Boolean UniWebView::useToolbar
	bool ___useToolbar_23;
	// UniWebViewToolbarPosition UniWebView::toolbarPosition
	int32_t ___toolbarPosition_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> UniWebView::actions
	Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* ___actions_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>> UniWebView::payloadActions
	Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* ___payloadActions_26;
	// UnityEngine.Rect UniWebView::frame
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___frame_27;
	// UnityEngine.RectTransform UniWebView::referenceRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___referenceRectTransform_28;
	// System.Boolean UniWebView::started
	bool ___started_29;
	// System.Boolean UniWebView::backButtonEnabled
	bool ___backButtonEnabled_30;
	// UnityEngine.Color UniWebView::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_31;
	// UniWebView/KeyCodeReceivedDelegate UniWebView::OnKeyCodeReceived
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* ___OnKeyCodeReceived_32;
};

// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UniWebViewNativeListener
struct UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UniWebView UniWebViewNativeListener::webView
	UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___webView_5;
	// UniWebViewSafeBrowsing UniWebViewNativeListener::safeBrowsing
	UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___safeBrowsing_6;
};

// UniWebViewSafeBrowingComponent
struct UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UniWebViewSafeBrowingComponent::url
	String_t* ___url_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action>

// System.Collections.Generic.Dictionary`2<System.String,System.Action>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>

// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UniWebViewHelper

// UniWebViewHelper

// UniWebViewInterface
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields
{
	// UnityEngine.AndroidJavaClass UniWebViewInterface::plugin
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___plugin_0;
	// System.Boolean UniWebViewInterface::correctPlatform
	bool ___correctPlatform_1;
};

// UniWebViewInterface

// UniWebViewLogger
struct UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields
{
	// UniWebViewLogger UniWebViewLogger::instance
	UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* ___instance_0;
};

// UniWebViewLogger

// UniWebViewNativeResultPayload

// UniWebViewNativeResultPayload

// UniWebView/<>c__DisplayClass152_0

// UniWebView/<>c__DisplayClass152_0

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UniWebViewMessage

// UniWebViewMessage

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
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

// System.Type

// UniWebViewSafeBrowsing

// UniWebViewSafeBrowsing

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<UniWebViewNativeResultPayload>

// System.Action`1<UniWebViewNativeResultPayload>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.Transform

// UnityEngine.Transform

// UniWebView/CaptureSnapshotFinished

// UniWebView/CaptureSnapshotFinished

// UniWebView/FileDownloadFinished

// UniWebView/FileDownloadFinished

// UniWebView/FileDownloadStarted

// UniWebView/FileDownloadStarted

// UniWebView/KeyCodeReceivedDelegate

// UniWebView/KeyCodeReceivedDelegate

// UniWebView/MessageReceivedDelegate

// UniWebView/MessageReceivedDelegate

// UniWebView/MultipleWindowClosedDelegate

// UniWebView/MultipleWindowClosedDelegate

// UniWebView/MultipleWindowOpenedDelegate

// UniWebView/MultipleWindowOpenedDelegate

// UniWebView/OnWebContentProcessTerminatedDelegate

// UniWebView/OnWebContentProcessTerminatedDelegate

// UniWebView/OrientationChangedDelegate

// UniWebView/OrientationChangedDelegate

// UniWebView/PageErrorReceivedDelegate

// UniWebView/PageErrorReceivedDelegate

// UniWebView/PageFinishedDelegate

// UniWebView/PageFinishedDelegate

// UniWebView/PageProgressChangedDelegate

// UniWebView/PageProgressChangedDelegate

// UniWebView/PageStartedDelegate

// UniWebView/PageStartedDelegate

// UniWebView/ShouldCloseDelegate

// UniWebView/ShouldCloseDelegate

// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate

// UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UniWebView

// UniWebView

// UniWebViewAndroidStaticListener

// UniWebViewAndroidStaticListener

// UniWebViewNativeListener
struct UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener> UniWebViewNativeListener::listeners
	Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* ___listeners_4;
};

// UniWebViewNativeListener

// UniWebViewSafeBrowingComponent

// UniWebViewSafeBrowingComponent
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UniWebViewAndroidStaticListener>()
inline UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UniWebViewNativeListener UniWebViewNativeListener::GetListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UniWebView::UpdateFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
// System.String UniWebViewNativeListener::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, const RuntimeMethod* method) ;
// System.String UniWebViewInterface::GetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Rect UniWebView::NextFrameRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
// UniWebViewLogger UniWebViewLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827 (const RuntimeMethod* method) ;
// System.Void UniWebViewLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_fourCornersArray, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewLogger::Critical(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UniWebViewInterface::NativeScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single UniWebViewInterface::NativeScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UniWebViewNativeListener>()
inline UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UniWebViewNativeListener::AddListener(UniWebViewNativeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___0_target, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
// System.Boolean UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Show_m06F609BE438C518277660BF0D5F6D1DB98185CED (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UniWebView::Load(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Load_m5BABC3C114E577690E766E892D1A9C1E3BB08E11 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, bool ___1_skipEncoding, String_t* ___2_readAccessURL, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void UniWebView/OrientationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_inline (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UniWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_mEBC0D299BB63639FC21757135E38395B2FD18D53 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
// System.Void UniWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoBack_m53E58E67305A75D5D640D7FE0A73844277BF7F2B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnShouldClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
// System.Boolean UniWebView::_Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) ;
// System.Boolean UniWebView::_Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59 (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Reload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::GoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::GoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::Add(TKey,TValue)
inline void Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void UniWebView::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_show, bool ___1_animated, bool ___2_onTop, bool ___3_adjustInset, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9 (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
// System.Void System.Action`1<UniWebViewNativeResultPayload>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7 (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49 (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) ;
// System.String UniWebViewInterface::GetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2 (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowFileAccess(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156 (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetEnableKeyboardAvoidance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetEnableKeyboardAvoidance_mD6B9866731E8A9FE608A798425DBA42B0E9A48CE (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1 (bool ___0_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24 (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::CleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3 (const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) ;
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) ;
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddPermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddPermissionTrustDomain_mEB9C21E5A179925F0C536DBE837761AF28766075 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemovePermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemovePermissionTrustDomain_m0EBFFD7F79AD89A2CA27E57092137E4CB328B1EC (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetUseWideViewPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUseWideViewPort_m47489E0088289ECA21D0CA5CA5CE0840F88CC6CB (String_t* ___0_name, bool ___1_use, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetLoadWithOverviewMode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLoadWithOverviewMode_m75E8005ED6FA15DCDAF5467988D2D0C47BAB0729 (String_t* ___0_name, bool ___1_overview, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetUserInteractionEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetTransparencyClickingThroughEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E (bool ___0_enabled, const RuntimeMethod* method) ;
// System.Void UniWebView/<>c__DisplayClass152_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass152_0__ctor_m4E6FA141FF864D937412B130651A5B69FC2DF6DE (U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* __this, const RuntimeMethod* method) ;
// System.Void UniWebView::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_mCE1BCB51C4DB0F0380F4430F1D9715CCB872B3F0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetSupportMultipleWindows(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m521B45A2CAC7D83C0482BB365454E991A6C8573B (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetDefaultFontSize(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDefaultFontSize_mB805E508F0BA6B9075B6B3C231A80C7A3DE2B24B (String_t* ___0_name, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetTextZoom(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTextZoom_m419910B15BA5AEBCE6E170B55A2F3DD72DF96E12 (String_t* ___0_name, int32_t ___1_textZoom, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::CaptureSnapshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD (String_t* ___0_name, String_t* ___1_filename, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetDownloadEventForContextMenuEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m67EE6C45B99ABE4CF3B8E119FC36F06E06E2141F (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewNativeListener::RemoveListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Destroy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::Remove(TKey)
inline bool Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5 (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Action`1<UniWebViewNativeResultPayload>::Invoke(T)
inline void Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Remove(TKey)
inline bool Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Void UniWebView/PageFinishedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_inline (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) ;
// System.Void UniWebView/PageStartedDelegate::Invoke(UniWebView,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_inline (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) ;
// System.Void UniWebView/PageErrorReceivedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_inline (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) ;
// System.Void UniWebView/PageProgressChangedDelegate::Invoke(UniWebView,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_inline (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method) ;
// System.Void UniWebViewMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_rawMessage, const RuntimeMethod* method) ;
// System.Void UniWebView/MessageReceivedDelegate::Invoke(UniWebView,UniWebViewMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_inline (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method) ;
// System.Boolean UniWebView/ShouldCloseDelegate::Invoke(UniWebView)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_inline (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) ;
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::Invoke(UniWebView)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_inline (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) ;
// System.Void UniWebView/MultipleWindowOpenedDelegate::Invoke(UniWebView,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_inline (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) ;
// System.Void UniWebView/MultipleWindowClosedDelegate::Invoke(UniWebView,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_inline (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) ;
// System.Void UniWebView/FileDownloadStarted::Invoke(UniWebView,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_inline (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method) ;
// System.Void UniWebView/FileDownloadFinished::Invoke(UniWebView,System.Int32,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_inline (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method) ;
// System.Void UniWebView/CaptureSnapshotFinished::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_inline (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::.ctor()
inline void Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::.ctor()
inline void Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewLogger::Log(UniWebViewLogger/Level,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503 (int32_t ___0_level, const RuntimeMethod* method) ;
// System.Void UniWebViewLogger::.ctor(UniWebViewLogger/Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_m34471A32804D2FA24C75F47FE2928C4D502592D8 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, const RuntimeMethod* method) ;
// UniWebViewLogger/Level UniWebViewLogger::get_LogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761_inline (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, const RuntimeMethod* method) ;
// System.String UniWebViewMessage::get_RawMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewMessage::set_RawMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UniWebViewMessage::get_Scheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewMessage::set_Scheme(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UniWebViewMessage::get_Path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewMessage::set_Path(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_Args()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewMessage::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.Void UniWebViewLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void UniWebViewLogger::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::Add(TKey,TValue)
inline void Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, String_t* ___0_key, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, String_t*, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::Remove(TKey)
inline bool Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198 (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, String_t* ___0_key, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, String_t*, UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnPageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_mCC7F59BDFB3D6DCE5BB86478DA91B1C47765D9AE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<UniWebViewNativeResultPayload>(System.String)
inline UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void UniWebView::InternalOnPageFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_mC5C2526387EBD9A3C91AA5A7FBEA43578ECC616A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_mF2FD6E5D4B839AC9CDB00497C9C07BC5672DAACF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnPageProgressChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageProgressChanged_m315FCE400C99F88020084AD9EE72C97B29B5370C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, float ___0_progress, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m43B0D8548BC33F30B809AAE5ACCC6451658B740B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnHideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_m0384C70ED27CF10A11297B4D8D3A71A7076E92D8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnAnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_m5FCE7F89EDEAAE8673ECBF8BC0E5BF7CCE2B9632 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_m1D42374A36244250F2F6124A0C819B33C5684378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_mF80A34BC2BD3F5063BE79C98245CF7D397C7A3E7 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_m6BA779B133E0858266E4C25E5935FE4D78918356 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_result, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnWebContentProcessDidTerminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebContentProcessDidTerminate_mDDD3AEF0EC6AD327ACA6B8E9BCD71B6EB73DADDE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewSafeBrowsing::InternalSafeBrowsingFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_mE666E18A32CA3A020190C9A9738221344796977B (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnMultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowOpened_m511D2F03883B77233CDF1975E80DA01531E52C05 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnMultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowClosed_m1B0A5F7048AC06C683C48C1232B840454F39C028 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnFileDownloadStarted(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadStarted_mF8149818A85DB5C0448A0DF32B3626F0D00A8378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnFileDownloadFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadFinished_mBFE7FC899642D5F12106559319E0E35DC944EB8A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void UniWebView::InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnCaptureSnapshotFinished_mE3338681266888F771F1A9C89F43F831C325690E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::.ctor()
inline void Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UniWebViewSafeBrowsing UniWebViewSafeBrowsing::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* UniWebViewSafeBrowsing_Create_mC444524EA64AC27D905C841A0BBE81BF55B25794 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UniWebViewSafeBrowsing::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Show_m7FC6AEC9841DC9F4F425ECFAF34472CF75FA337D (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_IsSafeBrowsingSupported_m9F76E5D4EBAA15D5E2243D40D9BD34D0879AB938 (const RuntimeMethod* method) ;
// System.Void UniWebViewSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing__ctor_m11815A3213110A74C5F32C3F740E6547DAD8BD9F (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) ;
// System.Boolean UniWebViewHelper::get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7 (const RuntimeMethod* method) ;
// System.Void UniWebViewSafeBrowsing::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Init_mE99E67B592AF74177A542B69CC2D9A9934D46B9A (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Boolean UniWebViewSafeBrowsing::get_IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_mDA309DDBE04C13BF0F2F6B063D97F0E22D59D340 (const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SafeBrowsingShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SafeBrowsingSetToolbarColor(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SafeBrowsingInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6 (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) ;
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::Invoke(UniWebViewSafeBrowsing)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_inline (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void UniWebViewInterface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__cctor_mDFE83B914E15539C37FEFD93ED2FF076F3ED153F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449E90EA94A719309FD246952C6B4621E65F159A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool correctPlatform = Application.platform == RuntimePlatform.Android;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___correctPlatform_1 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		// var go = new GameObject("UniWebViewAndroidStaticListener");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403, NULL);
		// go.AddComponent<UniWebViewAndroidStaticListener>();
		NullCheck(L_1);
		UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* L_2;
		L_2 = GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B(L_1, GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B_RuntimeMethod_var);
		// plugin = new AndroidJavaClass("com.onevcat.uniwebview.UniWebViewInterface");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B, NULL);
		((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0), (void*)L_3);
		// CheckPlatform();
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("prepare");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A, L_5, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503 (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setLogLevel", level);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_level;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("init", name, x, y, width, height);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_width;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___4_height;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_16, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Destroy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("destroy", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("load", name, url);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_url;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59 (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("loadHTMLString", name, html, baseUrl);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_html;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_baseUrl;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Reload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("reload", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("stop", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, L_2, NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1738FA234DD23984A6C35D65687B65D92536008);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<string>("getUrl", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralA1738FA234DD23984A6C35D65687B65D92536008, L_2, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setFrame", name, x, y, width, height);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_width;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___4_height;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21, L_16, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetPosition(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetPosition_m99848646D1312836E3CF5C42120B3FCC2E253893 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setPosition", name, x, y);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154, L_8, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSize(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSize_mFC520293677926F6247850F1C194A742E549C040 (String_t* ___0_name, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setSize", name, width, height);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_width;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_height;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4, L_8, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74A5881238A30DEB9EF11A8EE6B92E2B642BF6AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// if (useAsync) {
		bool L_0 = ___4_useAsync;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// plugin.CallStatic("showAsync", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_name;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		bool L_6 = ___1_fade;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = ___2_edge;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = ___3_duration;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		String_t* L_18 = ___5_identifier;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral74A5881238A30DEB9EF11A8EE6B92E2B642BF6AD, L_17, NULL);
		// return true;
		return (bool)1;
	}

IL_0044:
	{
		// return plugin.CallStatic<bool>("show", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		bool L_24 = ___1_fade;
		bool L_25 = L_24;
		RuntimeObject* L_26 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		int32_t L_28 = ___2_edge;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
		float L_32 = ___3_duration;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		String_t* L_36 = ___5_identifier;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_36);
		NullCheck(L_19);
		bool L_37;
		L_37 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_19, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_35, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_37;
	}
}
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6273268A800B8837D5B315F1A0CB73F9116AA007);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// if (useAsync) {
		bool L_0 = ___4_useAsync;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// plugin.CallStatic("hideAsync", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_name;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		bool L_6 = ___1_fade;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = ___2_edge;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = ___3_duration;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		String_t* L_18 = ___5_identifier;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral6273268A800B8837D5B315F1A0CB73F9116AA007, L_17, NULL);
		// return true;
		return (bool)1;
	}

IL_0044:
	{
		// return plugin.CallStatic<bool>("hide", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		bool L_24 = ___1_fade;
		bool L_25 = L_24;
		RuntimeObject* L_26 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		int32_t L_28 = ___2_edge;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
		float L_32 = ___3_duration;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		String_t* L_36 = ___5_identifier;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_36);
		NullCheck(L_19);
		bool L_37;
		L_37 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_19, _stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81, L_35, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_37;
	}
}
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("animateTo", name, x, y, width, height, duration, delay, identifier);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_width;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___4_height;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		float L_21 = ___5_duration;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = ___6_delay;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		String_t* L_29 = ___7_identifier;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_29);
		NullCheck(L_0);
		bool L_30;
		L_30 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF, L_28, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_30;
	}
}
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addJavaScript", name, jsString, identifier);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_jsString;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_identifier;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("evaluateJavaScript", name, jsString, identifier);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_jsString;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_identifier;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49 (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addUrlScheme", name, scheme);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_scheme;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeUrlScheme", name, scheme);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_scheme;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addSslExceptionDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeSslExceptionDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddPermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddPermissionTrustDomain_mEB9C21E5A179925F0C536DBE837761AF28766075 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addPermissionTrustDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemovePermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemovePermissionTrustDomain_m0EBFFD7F79AD89A2CA27E57092137E4CB328B1EC (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removePermissionTrustDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setHeaderField", name, key, value);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_key;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_value;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setUserAgent", name, userAgent);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_userAgent;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182, L_4, NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<string>("getUserAgent", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3, L_2, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowAutoPlay", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowJavaScriptOpenWindow", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowFileAccess(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowFileAccess", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowFileAccessFromFileURLs", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowUniversalAccessFromFileURLs", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetEnableKeyboardAvoidance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetEnableKeyboardAvoidance_mD6B9866731E8A9FE608A798425DBA42B0E9A48CE (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA503855111C346E6CBE6DEF890CC86D08F832F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setEnableKeyboardAvoidance", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5DA503855111C346E6CBE6DEF890CC86D08F832F, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1 (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setJavaScriptEnabled", enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enabled;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("cleanCache", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("clearCookies");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DD53F3C91602BAB84363C053188A81B762168F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setCookie", url, cookie);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_cookie;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral37DD53F3C91602BAB84363C053188A81B762168F, L_4, NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<string>("getCookie", url, key);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_key;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		String_t* L_6;
		L_6 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F, L_4, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UniWebViewInterface::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeCookies", url);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0537E826CEC4233BE28552114535F51A3D777943);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeCookie", url, key);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_key;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral0537E826CEC4233BE28552114535F51A3D777943, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("clearHttpAuthUsernamePassword", host, realm);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_host;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_realm;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setBackgroundColor", name, r, g, b, a);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		float L_5 = ___1_r;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		float L_9 = ___2_g;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		float L_13 = ___3_b;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		float L_17 = ___4_a;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265, L_16, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setWebViewAlpha", name, alpha);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		float L_5 = ___1_alpha;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6, L_4, NULL);
		// }
		return;
	}
}
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<float>("getWebViewAlpha", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		float L_4;
		L_4 = AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6(L_0, _stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A, L_2, AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46235E42561BC75195410C8FD01B7026927BA27E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setShowSpinnerWhileLoading", name, show);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_show;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral46235E42561BC75195410C8FD01B7026927BA27E, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setSpinnerText", name, text);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_text;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("canGoBack", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("canGoForward", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::GoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("goBack", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::GoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("goForward", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setOpenLinksInExternalBrowser", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setHorizontalScrollBarEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setVerticalScrollBarEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setBouncesEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setZoomEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUseWideViewPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUseWideViewPort_m47489E0088289ECA21D0CA5CA5CE0840F88CC6CB (String_t* ___0_name, bool ___1_use, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setUseWideViewPort", name, use);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_use;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetLoadWithOverviewMode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLoadWithOverviewMode_m75E8005ED6FA15DCDAF5467988D2D0C47BAB0729 (String_t* ___0_name, bool ___1_overview, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setLoadWithOverviewMode", name, overview);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_overview;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetImmersiveModeEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetImmersiveModeEnabled_m5F961435C25E9375EAE978B2CFA5D65C8FD6DBEE (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FD7533D578834C52F955AF663C262434D950DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setImmersiveModeEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE1FD7533D578834C52F955AF663C262434D950DE, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUserInteractionEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setUserInteractionEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetTransparencyClickingThroughEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936CE6919C99DBE2A0544D68CA4F6B3B152B06F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setTransparencyClickingThroughEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral936CE6919C99DBE2A0544D68CA4F6B3B152B06F7, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8228F26A547DD52F870220D24F4F243E35286F25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setWebContentsDebuggingEnabled", enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enabled;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8228F26A547DD52F870220D24F4F243E35286F25, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowHTTPAuthPopUpWindow", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("print", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CaptureSnapshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD (String_t* ___0_name, String_t* ___1_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("captureSnapshot", name, filename);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_filename;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("scrollTo", name, x, y, animated);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		bool L_13 = ___3_animated;
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95, L_12, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setCalloutEnabled", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSupportMultipleWindows(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m521B45A2CAC7D83C0482BB365454E991A6C8573B (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setSupportMultipleWindows", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetDefaultFontSize(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDefaultFontSize_mB805E508F0BA6B9075B6B3C231A80C7A3DE2B24B (String_t* ___0_name, int32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setDefaultFontSize", name, size);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_size;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetTextZoom(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTextZoom_m419910B15BA5AEBCE6E170B55A2F3DD72DF96E12 (String_t* ___0_name, int32_t ___1_textZoom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setTextZoom", name, textZoom);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_textZoom;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2, L_4, NULL);
		// }
		return;
	}
}
// System.Single UniWebViewInterface::NativeScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<float>("screenWidth");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6(L_0, _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921, L_1, AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Single UniWebViewInterface::NativeScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<float>("screenHeight");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6(L_0, _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789, L_1, AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UniWebViewInterface::SetDownloadEventForContextMenuEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m67EE6C45B99ABE4CF3B8E119FC36F06E06E2141F (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setDownloadEventForContextMenuEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_IsSafeBrowsingSupported_m9F76E5D4EBAA15D5E2243D40D9BD34D0879AB938 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("isSafeBrowsingSupported");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6 (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("safeBrowsingInit", name, url);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_url;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingSetToolbarColor(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("safeBrowsingSetToolbarColor", name, r, g, b);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		float L_5 = ___1_r;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		float L_9 = ___2_g;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		float L_13 = ___3_b;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB, L_12, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("safeBrowsingShow", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!correctPlatform) {
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___correctPlatform_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new System.InvalidOperationException("Method can only be performed on Android.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEEA4904CA12EBD798D6DE754E4F996AE77368DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C_RuntimeMethod_var)));
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void UniWebViewInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__ctor_m157CD2615373AA53DFA457D91782AD33A0FE794D (UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4* __this, const RuntimeMethod* method) 
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
// System.Void UniWebViewAndroidStaticListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_Awake_m70ABEC4CEC6CE2F537B73010A2703FBEC4992B5F (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::OnJavaMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_OnJavaMessage_m05F2A2459168497BAE57653377B40DB98D61100B (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// string[] parts = message.Split("@"[0]);
		String_t* L_0 = ___0_message;
		NullCheck(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		V_0 = L_2;
		// if (parts.Length < 3) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("Not enough parts for receiving a message.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5886CC8EB4F8A781BD0FD273284D9412CD0EC0EA, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// var listener = UniWebViewNativeListener.GetListener(parts[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_7;
		L_7 = UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5(L_6, NULL);
		V_1 = L_7;
		// if (listener == null) {
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return;
		return;
	}

IL_0037:
	{
		// MethodInfo methodInfo = typeof(UniWebViewNativeListener).GetMethod(parts[1]);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		MethodInfo_t* L_15;
		L_15 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_11, L_14, NULL);
		V_2 = L_15;
		// if (methodInfo == null) {
		MethodInfo_t* L_16 = V_2;
		bool L_17;
		L_17 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_16, (MethodInfo_t*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.Log("Cannot find correct method to invoke: " + parts[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A92C3780BFB8E4337E1F918B9736D7E62AC5DAB, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
	}

IL_0065:
	{
		// var leftLength = parts.Length - 2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 2));
		// var left = new string[leftLength];
		int32_t L_23 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_4 = L_24;
		// for (int i = 0; i < leftLength; i++) {
		V_5 = 0;
		goto IL_0089;
	}

IL_0078:
	{
		// left[i] = parts[i + 2];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_4;
		int32_t L_26 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_30);
		// for (int i = 0; i < leftLength; i++) {
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0089:
	{
		// for (int i = 0; i < leftLength; i++) {
		int32_t L_32 = V_5;
		int32_t L_33 = V_3;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0078;
		}
	}
	{
		// methodInfo.Invoke(listener, new object[] { String.Join("@", left) });
		MethodInfo_t* L_34 = V_2;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_35 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_4;
		String_t* L_39;
		L_39 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		NullCheck(L_34);
		RuntimeObject* L_40;
		L_40 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_34, L_35, L_37, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener__ctor_m89F9ACC2686C80F00F7A6823E4A8A44709246E24 (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, const RuntimeMethod* method) 
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
// System.Void UniWebView::add_OnPageStarted(UniWebView/PageStartedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageStarted_m5B15DE7EA74B99FD86BB6C29FE57EF99124E9214 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_0 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_1 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_2 = NULL;
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_0 = __this->___OnPageStarted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_2 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var));
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213** L_5 = (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213**)(&__this->___OnPageStarted_4);
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_6 = V_2;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_7 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_9 = V_0;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_9) == ((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageStarted(UniWebView/PageStartedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageStarted_mC3163EB767F564D58EF82724A151F360AE4BF538 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_0 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_1 = NULL;
	PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* V_2 = NULL;
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_0 = __this->___OnPageStarted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_2 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213_il2cpp_TypeInfo_var));
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213** L_5 = (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213**)(&__this->___OnPageStarted_4);
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_6 = V_2;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_7 = V_1;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_9 = V_0;
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_9) == ((RuntimeObject*)(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageFinished(UniWebView/PageFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageFinished_m3C02848F31206CB701D15EEABFAB062D742A8B18 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_0 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_1 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_2 = NULL;
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_0 = __this->___OnPageFinished_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_2 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var));
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC** L_5 = (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC**)(&__this->___OnPageFinished_5);
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_6 = V_2;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_7 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_9 = V_0;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_9) == ((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageFinished(UniWebView/PageFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageFinished_m21FE9388FF9E49765E79CB509E16A040F2586B17 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_0 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_1 = NULL;
	PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* V_2 = NULL;
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_0 = __this->___OnPageFinished_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_2 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC_il2cpp_TypeInfo_var));
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC** L_5 = (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC**)(&__this->___OnPageFinished_5);
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_6 = V_2;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_7 = V_1;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_9 = V_0;
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_9) == ((RuntimeObject*)(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageErrorReceived(UniWebView/PageErrorReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageErrorReceived_mD804E31791F0EF5F757BD35B7941DAF7FAF3E81E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_0 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_1 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_2 = NULL;
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_0 = __this->___OnPageErrorReceived_6;
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_2 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347** L_5 = (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347**)(&__this->___OnPageErrorReceived_6);
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_6 = V_2;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_7 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_9 = V_0;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageErrorReceived(UniWebView/PageErrorReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageErrorReceived_m7D93CF1F96906007CBCB3E6979BE48231CB50128 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_0 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_1 = NULL;
	PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* V_2 = NULL;
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_0 = __this->___OnPageErrorReceived_6;
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_2 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347** L_5 = (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347**)(&__this->___OnPageErrorReceived_6);
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_6 = V_2;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_7 = V_1;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_9 = V_0;
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageProgressChanged(UniWebView/PageProgressChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnPageProgressChanged_mB8D6F1F93299A2E29260D4ECB0C2FC0D0E1A6BBB (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_0 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_1 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_2 = NULL;
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_0 = __this->___OnPageProgressChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_1 = V_0;
		V_1 = L_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_2 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)CastclassSealed((RuntimeObject*)L_4, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var));
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1** L_5 = (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1**)(&__this->___OnPageProgressChanged_7);
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_6 = V_2;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_7 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_9 = V_0;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_9) == ((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageProgressChanged(UniWebView/PageProgressChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageProgressChanged_mDE658F07E1E3C1499BFC08CF1FC2935CD48EA3ED (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_0 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_1 = NULL;
	PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* V_2 = NULL;
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_0 = __this->___OnPageProgressChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_1 = V_0;
		V_1 = L_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_2 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)CastclassSealed((RuntimeObject*)L_4, PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1_il2cpp_TypeInfo_var));
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1** L_5 = (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1**)(&__this->___OnPageProgressChanged_7);
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_6 = V_2;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_7 = V_1;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_8;
		L_8 = InterlockedCompareExchangeImpl<PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*>(L_5, L_6, L_7);
		V_0 = L_8;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_9 = V_0;
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_10 = V_1;
		if ((!(((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_9) == ((RuntimeObject*)(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMessageReceived(UniWebView/MessageReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMessageReceived_m38C1795DE1D774FD3B345FAFFEC18823CF7ED9D8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_0 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_1 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_2 = NULL;
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_0 = __this->___OnMessageReceived_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_2 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951** L_5 = (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951**)(&__this->___OnMessageReceived_8);
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_6 = V_2;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_7 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_9 = V_0;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMessageReceived(UniWebView/MessageReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMessageReceived_mE4397618545526A3DE46143970641238C5B53B3A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_0 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_1 = NULL;
	MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* V_2 = NULL;
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_0 = __this->___OnMessageReceived_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_2 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951** L_5 = (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951**)(&__this->___OnMessageReceived_8);
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_6 = V_2;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_7 = V_1;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_9 = V_0;
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnShouldClose(UniWebView/ShouldCloseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnShouldClose_m969F574D5827CFF603F51F568A35F274D4CFC642 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_0 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_1 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_2 = NULL;
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_0 = __this->___OnShouldClose_9;
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_2 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667** L_5 = (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667**)(&__this->___OnShouldClose_9);
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_6 = V_2;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_7 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_8;
		L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*>(L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_9 = V_0;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnShouldClose(UniWebView/ShouldCloseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnShouldClose_m0BC52070447097BCCFB9F6044B2A80C4AAD30EBA (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_0 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_1 = NULL;
	ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* V_2 = NULL;
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_0 = __this->___OnShouldClose_9;
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_2 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667** L_5 = (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667**)(&__this->___OnShouldClose_9);
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_6 = V_2;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_7 = V_1;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_8;
		L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*>(L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_9 = V_0;
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnOrientationChanged(UniWebView/OrientationChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnOrientationChanged_m1E07087A2815C1ABF779C2279BEA93C10D968824 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_0 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_1 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_2 = NULL;
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_0 = __this->___OnOrientationChanged_10;
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_2 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E** L_5 = (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E**)(&__this->___OnOrientationChanged_10);
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_6 = V_2;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_7 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_8;
		L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*>(L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_9 = V_0;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnOrientationChanged(UniWebView/OrientationChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnOrientationChanged_m0FC95AB9A2122E79FBB638768FCA0951E470C6C7 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_0 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_1 = NULL;
	OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* V_2 = NULL;
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_0 = __this->___OnOrientationChanged_10;
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_2 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E** L_5 = (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E**)(&__this->___OnOrientationChanged_10);
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_6 = V_2;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_7 = V_1;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_8;
		L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*>(L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_9 = V_0;
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnWebContentProcessTerminated(UniWebView/OnWebContentProcessTerminatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnWebContentProcessTerminated_mECC73ACBD6D455B5E16A1E31C4B751197244AD07 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_0 = __this->___OnWebContentProcessTerminated_11;
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0** L_5 = (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0**)(&__this->___OnWebContentProcessTerminated_11);
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnWebContentProcessTerminated(UniWebView/OnWebContentProcessTerminatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnWebContentProcessTerminated_mA124C2D5942FD974BC11036F1BA6CC83732FBD08 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_0 = __this->___OnWebContentProcessTerminated_11;
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0** L_5 = (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0**)(&__this->___OnWebContentProcessTerminated_11);
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnFileDownloadStarted(UniWebView/FileDownloadStarted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnFileDownloadStarted_m4A938F6CA17E41AD1D68B903E7B3A993883FF20F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_0 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_1 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_2 = NULL;
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_0 = __this->___OnFileDownloadStarted_12;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_1 = V_0;
		V_1 = L_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_2 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)CastclassSealed((RuntimeObject*)L_4, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var));
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615** L_5 = (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615**)(&__this->___OnFileDownloadStarted_12);
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_6 = V_2;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_7 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_9 = V_0;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_9) == ((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnFileDownloadStarted(UniWebView/FileDownloadStarted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnFileDownloadStarted_m01B82D6CAA158E1CEBAA64BC7EFEF958B3B8318F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_0 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_1 = NULL;
	FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* V_2 = NULL;
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_0 = __this->___OnFileDownloadStarted_12;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_1 = V_0;
		V_1 = L_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_2 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)CastclassSealed((RuntimeObject*)L_4, FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615_il2cpp_TypeInfo_var));
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615** L_5 = (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615**)(&__this->___OnFileDownloadStarted_12);
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_6 = V_2;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_7 = V_1;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_9 = V_0;
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_9) == ((RuntimeObject*)(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnFileDownloadFinished(UniWebView/FileDownloadFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnFileDownloadFinished_mD7295586ACC1FD703EF95CAB2AEC480C9FB3B8E3 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_0 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_1 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_2 = NULL;
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_0 = __this->___OnFileDownloadFinished_13;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_1 = V_0;
		V_1 = L_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_2 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)CastclassSealed((RuntimeObject*)L_4, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var));
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE** L_5 = (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE**)(&__this->___OnFileDownloadFinished_13);
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_6 = V_2;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_7 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_9 = V_0;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_9) == ((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnFileDownloadFinished(UniWebView/FileDownloadFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnFileDownloadFinished_m60ED2BAFE01D296FDB583F75F7D2EB4CD7BCA2EE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_0 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_1 = NULL;
	FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* V_2 = NULL;
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_0 = __this->___OnFileDownloadFinished_13;
		V_0 = L_0;
	}

IL_0007:
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_1 = V_0;
		V_1 = L_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_2 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)CastclassSealed((RuntimeObject*)L_4, FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE_il2cpp_TypeInfo_var));
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE** L_5 = (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE**)(&__this->___OnFileDownloadFinished_13);
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_6 = V_2;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_7 = V_1;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_8;
		L_8 = InterlockedCompareExchangeImpl<FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*>(L_5, L_6, L_7);
		V_0 = L_8;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_9 = V_0;
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_10 = V_1;
		if ((!(((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_9) == ((RuntimeObject*)(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnCaptureSnapshotFinished(UniWebView/CaptureSnapshotFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnCaptureSnapshotFinished_mF5FBDA9C2607F10C54374F8827AF36B212BBF280 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_0 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_1 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_2 = NULL;
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_0 = __this->___OnCaptureSnapshotFinished_14;
		V_0 = L_0;
	}

IL_0007:
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_1 = V_0;
		V_1 = L_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_2 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)CastclassSealed((RuntimeObject*)L_4, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var));
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68** L_5 = (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68**)(&__this->___OnCaptureSnapshotFinished_14);
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_6 = V_2;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_7 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_8;
		L_8 = InterlockedCompareExchangeImpl<CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*>(L_5, L_6, L_7);
		V_0 = L_8;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_9 = V_0;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_10 = V_1;
		if ((!(((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_9) == ((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnCaptureSnapshotFinished(UniWebView/CaptureSnapshotFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnCaptureSnapshotFinished_m5C115DF1D8510C9E6BDC79904EA82562569B1576 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_0 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_1 = NULL;
	CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* V_2 = NULL;
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_0 = __this->___OnCaptureSnapshotFinished_14;
		V_0 = L_0;
	}

IL_0007:
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_1 = V_0;
		V_1 = L_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_2 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)CastclassSealed((RuntimeObject*)L_4, CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68_il2cpp_TypeInfo_var));
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68** L_5 = (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68**)(&__this->___OnCaptureSnapshotFinished_14);
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_6 = V_2;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_7 = V_1;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_8;
		L_8 = InterlockedCompareExchangeImpl<CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*>(L_5, L_6, L_7);
		V_0 = L_8;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_9 = V_0;
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_10 = V_1;
		if ((!(((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_9) == ((RuntimeObject*)(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMultipleWindowOpened(UniWebView/MultipleWindowOpenedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMultipleWindowOpened_mF231E5EC2AF3C62784CA99D2B8EB3B1EBCFFDF9A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_0 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_1 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_2 = NULL;
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_0 = __this->___OnMultipleWindowOpened_15;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_2 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var));
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6** L_5 = (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6**)(&__this->___OnMultipleWindowOpened_15);
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_6 = V_2;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_7 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_9 = V_0;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_9) == ((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMultipleWindowOpened(UniWebView/MultipleWindowOpenedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMultipleWindowOpened_mE923C32D4E14C6EC4D8182DD67AA329E2823A427 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_0 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_1 = NULL;
	MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* V_2 = NULL;
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_0 = __this->___OnMultipleWindowOpened_15;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_2 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6_il2cpp_TypeInfo_var));
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6** L_5 = (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6**)(&__this->___OnMultipleWindowOpened_15);
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_6 = V_2;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_7 = V_1;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_9 = V_0;
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_9) == ((RuntimeObject*)(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMultipleWindowClosed(UniWebView/MultipleWindowClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnMultipleWindowClosed_mFF2BDC048DCEA46BFFCBCA839AECA8A5281101D9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_0 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_1 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_2 = NULL;
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_0 = __this->___OnMultipleWindowClosed_16;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_2 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var));
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8** L_5 = (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8**)(&__this->___OnMultipleWindowClosed_16);
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_6 = V_2;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_7 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_9 = V_0;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_9) == ((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMultipleWindowClosed(UniWebView/MultipleWindowClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnMultipleWindowClosed_m0F215C47FF6028CA4D6814C010F9506CDB777FA3 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_0 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_1 = NULL;
	MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* V_2 = NULL;
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_0 = __this->___OnMultipleWindowClosed_16;
		V_0 = L_0;
	}

IL_0007:
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_1 = V_0;
		V_1 = L_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_2 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)CastclassSealed((RuntimeObject*)L_4, MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8_il2cpp_TypeInfo_var));
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8** L_5 = (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8**)(&__this->___OnMultipleWindowClosed_16);
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_6 = V_2;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_7 = V_1;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_9 = V_0;
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_9) == ((RuntimeObject*)(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Rect UniWebView::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UniWebView_get_Frame_m330302534D60059224928E436A6AE99C782E74B3 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		// get { return frame; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___frame_27;
		return L_0;
	}
}
// System.Void UniWebView::set_Frame(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_Frame_mAEA13C2B07D6C0FD7CFCCC6C7A1EED95FF4609C6 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	{
		// frame = value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_value;
		__this->___frame_27 = L_0;
		// UpdateFrame();
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.RectTransform UniWebView::get_ReferenceRectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* UniWebView_get_ReferenceRectTransform_m6FEFFFC2377E8B11B098BC3B9D4ABAF497B77B74 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		// return referenceRectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___referenceRectTransform_28;
		return L_0;
	}
}
// System.Void UniWebView::set_ReferenceRectTransform(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_ReferenceRectTransform_m45F10A27F1BEC3CD38156B83AECD9609C539216C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_value, const RuntimeMethod* method) 
{
	{
		// referenceRectTransform = value;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_value;
		__this->___referenceRectTransform_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___referenceRectTransform_28), (void*)L_0);
		// UpdateFrame();
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
		// }
		return;
	}
}
// System.String UniWebView::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_get_Url_m163A689D92DD1A007A7D161651A762D0F071B812 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UniWebViewInterface.GetUrl(listener.Name); }
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1(L_1, NULL);
		return L_2;
	}
}
// System.Void UniWebView::UpdateFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect = NextFrameRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE(__this, NULL);
		V_0 = L_0;
		// UniWebViewInterface.SetFrame(listener.Name, (int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener_18;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		float L_3;
		L_3 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84(L_2, il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), NULL);
		// }
		return;
	}
}
// UnityEngine.Rect UniWebView::NextFrameRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFB3A399D7319894C651DD5423F463A95B9DA55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_11 = NULL;
	int32_t V_12 = 0;
	{
		// if (referenceRectTransform == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___referenceRectTransform_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// UniWebViewLogger.Instance.Info("Using Frame setting to determine web view frame.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_2;
		L_2 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_2);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_2, _stringLiteral7D5A1BC658DA7223D5B3A37EDE7E9A3F1C60C984, NULL);
		// return frame;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = __this->___frame_27;
		return L_3;
	}

IL_0024:
	{
		// UniWebViewLogger.Instance.Info("Using reference RectTransform to determine web view frame.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_4, _stringLiteralD0261650E60CCD4DB8E943AFD94028507D700FA6, NULL);
		// var worldCorners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_5;
		// referenceRectTransform.GetWorldCorners(worldCorners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___referenceRectTransform_28;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		NullCheck(L_6);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_6, L_7, NULL);
		// var bottomLeft = worldCorners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// var topLeft = worldCorners[1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// var topRight = worldCorners[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		// var bottomRight = worldCorners[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		// var canvas = referenceRectTransform.GetComponentInParent<Canvas>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___referenceRectTransform_28;
		NullCheck(L_20);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_21;
		L_21 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_20, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_5 = L_21;
		// if (canvas == null) {
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_22 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		// return frame;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = __this->___frame_27;
		return L_24;
	}

IL_0085:
	{
		// switch (canvas.renderMode) {
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_25, NULL);
		V_12 = L_26;
		int32_t L_27 = V_12;
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_28 = V_12;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, 1))) <= ((uint32_t)1))))
		{
			goto IL_00f2;
		}
	}
	{
		// var camera = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_29 = V_5;
		NullCheck(L_29);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_29, NULL);
		V_11 = L_30;
		// if (camera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00cc;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical(@"You need a render camera
		// or event camera to use RectTransform to determine correct
		// frame for UniWebView.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_33;
		L_33 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_33);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_33, _stringLiteralBEFB3A399D7319894C651DD5423F463A95B9DA55, NULL);
		// UniWebViewLogger.Instance.Info("No camera found. Fall back to ScreenSpaceOverlay mode.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_34;
		L_34 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_34);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_34, _stringLiteralBAA5A3EA71ED89EC8F8D5755DC9EFFB906291550, NULL);
		goto IL_00f2;
	}

IL_00cc:
	{
		// bottomLeft = camera.WorldToScreenPoint(bottomLeft);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_35, L_36, NULL);
		V_1 = L_37;
		// topLeft = camera.WorldToScreenPoint(topLeft);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_38, L_39, NULL);
		V_2 = L_40;
		// topRight = camera.WorldToScreenPoint(topRight);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_3;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_41, L_42, NULL);
		V_3 = L_43;
		// bottomRight = camera.WorldToScreenPoint(bottomRight);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_44, L_45, NULL);
		V_4 = L_46;
	}

IL_00f2:
	{
		// float widthFactor = (float)UniWebViewInterface.NativeScreenWidth() / (float)Screen.width;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_47;
		L_47 = UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1(NULL);
		int32_t L_48;
		L_48 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_6 = ((float)(((float)L_47)/((float)L_48)));
		// float heightFactor = (float)UniWebViewInterface.NativeScreenHeight() / (float)Screen.height;
		float L_49;
		L_49 = UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570(NULL);
		int32_t L_50;
		L_50 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_7 = ((float)(((float)L_49)/((float)L_50)));
		// float x = topLeft.x * widthFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_2;
		float L_52 = L_51.___x_2;
		float L_53 = V_6;
		// float y = (Screen.height - topLeft.y) * heightFactor;
		int32_t L_54;
		L_54 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		float L_56 = L_55.___y_3;
		float L_57 = V_7;
		V_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_54), L_56)), L_57));
		// float width = (bottomRight.x - topLeft.x) * widthFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_4;
		float L_59 = L_58.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_2;
		float L_61 = L_60.___x_2;
		float L_62 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_59, L_61)), L_62));
		// float height = (topLeft.y - bottomRight.y) * heightFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_2;
		float L_64 = L_63.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_4;
		float L_66 = L_65.___y_3;
		float L_67 = V_7;
		V_10 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_64, L_66)), L_67));
		// return new Rect(x, y, width, height);
		float L_68 = V_8;
		float L_69 = V_9;
		float L_70 = V_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_71;
		memset((&L_71), 0, sizeof(L_71));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_71), ((float)il2cpp_codegen_multiply(L_52, L_53)), L_68, L_69, L_70, /*hidden argument*/NULL);
		return L_71;
	}
}
// System.Void UniWebView::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Awake_mB1E249D23D5286335FA6DE08172420FD8B82677E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var listenerObject = new GameObject(id);
		String_t* L_0 = __this->___id_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		// listener = listenerObject.AddComponent<UniWebViewNativeListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3;
		L_3 = GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D(L_2, GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		__this->___listener_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_18), (void*)L_3);
		// listenerObject.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// listener.webView = this;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_7 = __this->___listener_18;
		NullCheck(L_7);
		L_7->___webView_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___webView_5), (void*)__this);
		// UniWebViewNativeListener.AddListener(listener);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_8 = __this->___listener_18;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646(L_8, NULL);
		// if (fullScreen) {
		bool L_9 = __this->___fullScreen_22;
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		// rect = new Rect(0, 0, Screen.width, Screen.height);
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), (0.0f), (0.0f), ((float)L_10), ((float)L_11), NULL);
		goto IL_006e;
	}

IL_0067:
	{
		// rect = NextFrameRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = UniWebView_NextFrameRect_m222BFF790A1DE336FB40800E08F8DA3846EF4CAE(__this, NULL);
		V_1 = L_12;
	}

IL_006e:
	{
		// UniWebViewInterface.Init(listener.Name, (int)rect.x, (int)rect. y, (int)rect.width, (int)rect.height);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_13 = __this->___listener_18;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_13, NULL);
		float L_15;
		L_15 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		float L_16;
		L_16 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_18;
		L_18 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF(L_14, il2cpp_codegen_cast_double_to_int<int32_t>(L_15), il2cpp_codegen_cast_double_to_int<int32_t>(L_16), il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), NULL);
		// isPortrait = Screen.height >= Screen.width;
		int32_t L_19;
		L_19 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_20;
		L_20 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		__this->___isPortrait_19 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void UniWebView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Start_m597A16009A46D9C9D493089A31969DDCC6B150D5 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showOnStart) {
		bool L_0 = __this->___showOnStart_21;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// Show();
		bool L_1;
		L_1 = UniWebView_Show_m06F609BE438C518277660BF0D5F6D1DB98185CED(__this, (bool)0, 0, (0.400000006f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0017:
	{
		// if (!string.IsNullOrEmpty(urlOnStart)) {
		String_t* L_2 = __this->___urlOnStart_20;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Load(urlOnStart);
		String_t* L_4 = __this->___urlOnStart_20;
		UniWebView_Load_m5BABC3C114E577690E766E892D1A9C1E3BB08E11(__this, L_4, (bool)0, (String_t*)NULL, NULL);
	}

IL_0032:
	{
		// started = true;
		__this->___started_29 = (bool)1;
		// if (referenceRectTransform != null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___referenceRectTransform_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// UpdateFrame();
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UniWebView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Update_m8FAB3A40F449F28A01A311F01B9F45DD7546506D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED16F9589E28E51337A6B35399688F5187808BD2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var newIsPortrait = Screen.height >= Screen.width;
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (isPortrait != newIsPortrait) {
		bool L_2 = __this->___isPortrait_19;
		bool L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		// isPortrait = newIsPortrait;
		bool L_4 = V_0;
		__this->___isPortrait_19 = L_4;
		// if (OnOrientationChanged != null) {
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_5 = __this->___OnOrientationChanged_10;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// OnOrientationChanged(this, Screen.orientation);
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* L_6 = __this->___OnOrientationChanged_10;
		int32_t L_7;
		L_7 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		NullCheck(L_6);
		OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_inline(L_6, __this, L_7, NULL);
	}

IL_0039:
	{
		// if (referenceRectTransform != null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___referenceRectTransform_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// UpdateFrame();
		UniWebView_UpdateFrame_mFDF51D4160F6BDC8321A584B95B624C91E1ECA7A(__this, NULL);
	}

IL_004d:
	{
		// if (backButtonEnabled && Input.GetKeyUp(KeyCode.Escape)) {
		bool L_10 = __this->___backButtonEnabled_30;
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		// UniWebViewLogger.Instance.Info("Received Back button, handling GoBack or close web view.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_12;
		L_12 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_12);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_12, _stringLiteralED16F9589E28E51337A6B35399688F5187808BD2, NULL);
		// if (CanGoBack) {
		bool L_13;
		L_13 = UniWebView_get_CanGoBack_mEBC0D299BB63639FC21757135E38395B2FD18D53(__this, NULL);
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// GoBack();
		UniWebView_GoBack_m53E58E67305A75D5D640D7FE0A73844277BF7F2B(__this, NULL);
		return;
	}

IL_007c:
	{
		// InternalOnShouldClose();
		UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9(__this, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void UniWebView::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnEnable_m7287D113753C02465934F74163A2A166E4B0FB9B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		// if (started) {
		bool L_0 = __this->___started_29;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// _Show(useAsync: true);
		bool L_1;
		L_1 = UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC(__this, (bool)0, 0, (0.400000006f), (bool)1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UniWebView::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnDisable_m41D158219F6376058A56ECF2CE54574C180744CF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		// if (started) {
		bool L_0 = __this->___started_29;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// _Hide(useAsync: true);
		bool L_1;
		L_1 = UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F(__this, (bool)0, 0, (0.400000006f), (bool)1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UniWebView::Load(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Load_m5BABC3C114E577690E766E892D1A9C1E3BB08E11 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, bool ___1_skipEncoding, String_t* ___2_readAccessURL, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Load(listener.Name, url, skipEncoding, readAccessURL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_url;
		bool L_3 = ___1_skipEncoding;
		String_t* L_4 = ___2_readAccessURL;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::LoadHTMLString(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_LoadHTMLString_m84D893FA6DC50A3530238B9F0F59B7B4A8FB82FB (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_htmlString, String_t* ___1_baseUrl, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.LoadHTMLString(listener.Name, htmlString, baseUrl, skipEncoding);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_htmlString;
		String_t* L_3 = ___1_baseUrl;
		bool L_4 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Reload_mDE62B4D83A25F5BD9DCDE5FF3A477B557D9294DF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Reload(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Stop_mB0259ADE628F4205366744F407B0A38C6A99B3BF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Stop(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_mEBC0D299BB63639FC21757135E38395B2FD18D53 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.CanGoBack(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A(L_1, NULL);
		return L_2;
	}
}
// System.Boolean UniWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoForward_mBE03C57FF6710D30D040C6F77C9A1E5770342330 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.CanGoForward(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627(L_1, NULL);
		return L_2;
	}
}
// System.Void UniWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoBack_m53E58E67305A75D5D640D7FE0A73844277BF7F2B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.GoBack(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GoForward_m013DFFB4F4B2A25A93EB1CBCA1B5DF32CBA03A8B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.GoForward(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetOpenLinksInExternalBrowser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetOpenLinksInExternalBrowser_m139FD6347BF86FBEBEE62506B79F0819AA9CEAE5 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetOpenLinksInExternalBrowser(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Show_m06F609BE438C518277660BF0D5F6D1DB98185CED (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	{
		// return _Show(fade, edge, duration, false, completionHandler);
		bool L_0 = ___0_fade;
		int32_t L_1 = ___1_edge;
		float L_2 = ___2_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_completionHandler;
		bool L_4;
		L_4 = UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC(__this, L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean UniWebView::_Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Show_mD57A217AD16954F405C22355A6C9CFF45CC5D8FC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// var showStarted = UniWebViewInterface.Show(listener.Name, fade, (int)edge, duration, useAsync, identifier);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		bool L_4 = ___0_fade;
		int32_t L_5 = ___1_edge;
		float L_6 = ___2_duration;
		bool L_7 = ___3_useAsync;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// if (showStarted && completionHandler != null) {
		bool L_10 = L_9;
		G_B1_0 = L_10;
		if (!L_10)
		{
			G_B8_0 = L_10;
			goto IL_0054;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_completionHandler;
		G_B2_0 = G_B1_0;
		if (!L_11)
		{
			G_B8_0 = G_B1_0;
			goto IL_0054;
		}
	}
	{
		// var hasAnimation = (fade || edge != UniWebViewTransitionEdge.None);
		bool L_12 = ___0_fade;
		G_B3_0 = G_B2_0;
		if (L_12)
		{
			G_B4_0 = G_B2_0;
			goto IL_003a;
		}
	}
	{
		int32_t L_13 = ___1_edge;
		G_B5_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		// if (hasAnimation) {
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004d;
		}
	}
	{
		// actions.Add(identifier, completionHandler);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_14 = __this->___actions_25;
		String_t* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___4_completionHandler;
		NullCheck(L_14);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_14, L_15, L_16, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0054;
	}

IL_004d:
	{
		// completionHandler();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___4_completionHandler;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
		G_B8_0 = G_B7_0;
	}

IL_0054:
	{
		// if (showStarted && useToolbar) {
		bool L_18 = G_B8_0;
		G_B9_0 = L_18;
		if (!L_18)
		{
			G_B11_0 = L_18;
			goto IL_0078;
		}
	}
	{
		bool L_19 = __this->___useToolbar_23;
		G_B10_0 = G_B9_0;
		if (!L_19)
		{
			G_B11_0 = G_B9_0;
			goto IL_0078;
		}
	}
	{
		// var top = (toolbarPosition == UniWebViewToolbarPosition.Top);
		int32_t L_20 = __this->___toolbarPosition_24;
		V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		// SetShowToolbar(true, false, top, fullScreen);
		bool L_21 = V_2;
		bool L_22 = __this->___fullScreen_22;
		UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24(__this, (bool)1, (bool)0, L_21, L_22, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0078:
	{
		// return showStarted;
		return G_B11_0;
	}
}
// System.Boolean UniWebView::Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_Hide_m072E9348808732F001DD4D8C74D7215DD31D1346 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	{
		// return _Hide(fade, edge, duration, false, completionHandler);
		bool L_0 = ___0_fade;
		int32_t L_1 = ___1_edge;
		float L_2 = ___2_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_completionHandler;
		bool L_4;
		L_4 = UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F(__this, L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean UniWebView::_Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView__Hide_m31E395ABF66C41ABE8B093DD58619DADCD1B4C6F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// var hideStarted = UniWebViewInterface.Hide(listener.Name, fade, (int)edge, duration, useAsync, identifier);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		bool L_4 = ___0_fade;
		int32_t L_5 = ___1_edge;
		float L_6 = ___2_duration;
		bool L_7 = ___3_useAsync;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// if (hideStarted && completionHandler != null) {
		bool L_10 = L_9;
		G_B1_0 = L_10;
		if (!L_10)
		{
			G_B8_0 = L_10;
			goto IL_0054;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_completionHandler;
		G_B2_0 = G_B1_0;
		if (!L_11)
		{
			G_B8_0 = G_B1_0;
			goto IL_0054;
		}
	}
	{
		// var hasAnimation = (fade || edge != UniWebViewTransitionEdge.None);
		bool L_12 = ___0_fade;
		G_B3_0 = G_B2_0;
		if (L_12)
		{
			G_B4_0 = G_B2_0;
			goto IL_003a;
		}
	}
	{
		int32_t L_13 = ___1_edge;
		G_B5_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		// if (hasAnimation) {
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004d;
		}
	}
	{
		// actions.Add(identifier, completionHandler);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_14 = __this->___actions_25;
		String_t* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___4_completionHandler;
		NullCheck(L_14);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_14, L_15, L_16, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0054;
	}

IL_004d:
	{
		// completionHandler();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___4_completionHandler;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
		G_B8_0 = G_B7_0;
	}

IL_0054:
	{
		// if (hideStarted && useToolbar) {
		bool L_18 = G_B8_0;
		G_B9_0 = L_18;
		if (!L_18)
		{
			G_B11_0 = L_18;
			goto IL_0078;
		}
	}
	{
		bool L_19 = __this->___useToolbar_23;
		G_B10_0 = G_B9_0;
		if (!L_19)
		{
			G_B11_0 = G_B9_0;
			goto IL_0078;
		}
	}
	{
		// var top = (toolbarPosition == UniWebViewToolbarPosition.Top);
		int32_t L_20 = __this->___toolbarPosition_24;
		V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		// SetShowToolbar(false, false, top, fullScreen);
		bool L_21 = V_2;
		bool L_22 = __this->___fullScreen_22;
		UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24(__this, (bool)0, (bool)0, L_21, L_22, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0078:
	{
		// return hideStarted;
		return G_B11_0;
	}
}
// System.Boolean UniWebView::AnimateTo(UnityEngine.Rect,System.Single,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebView_AnimateTo_m379C422E9CAABCFE7FB522E61E92503ABC4A5E53 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_frame, float ___1_duration, float ___2_delay, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// var animationStarted = UniWebViewInterface.AnimateTo(listener.Name,
		//             (int)frame.x, (int)frame.y, (int)frame.width, (int)frame.height, duration, delay, identifier);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		float L_4;
		L_4 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_frame), NULL);
		float L_5;
		L_5 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_frame), NULL);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_frame), NULL);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_frame), NULL);
		float L_8 = ___1_duration;
		float L_9 = ___2_delay;
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), il2cpp_codegen_cast_double_to_int<int32_t>(L_7), L_8, L_9, L_10, NULL);
		// if (animationStarted) {
		bool L_12 = L_11;
		G_B1_0 = L_12;
		if (!L_12)
		{
			G_B3_0 = L_12;
			goto IL_0063;
		}
	}
	{
		// this.frame = frame;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = ___0_frame;
		__this->___frame_27 = L_13;
		// if (completionHandler != null) {
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___3_completionHandler;
		G_B2_0 = G_B1_0;
		if (!L_14)
		{
			G_B3_0 = G_B1_0;
			goto IL_0063;
		}
	}
	{
		// actions.Add(identifier, completionHandler);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_15 = __this->___actions_25;
		String_t* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___3_completionHandler;
		NullCheck(L_15);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_15, L_16, L_17, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B3_0 = G_B2_0;
	}

IL_0063:
	{
		// return animationStarted;
		return G_B3_0;
	}
}
// System.Void UniWebView::AddJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddJavaScript_m6B8B41E452FA585A0BD04531CFE95897E480833E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// UniWebViewInterface.AddJavaScript(listener.Name, jsString, identifier);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		String_t* L_4 = ___0_jsString;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740(L_3, L_4, L_5, NULL);
		// if (completionHandler != null) {
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_6 = ___1_completionHandler;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// payloadActions.Add(identifier, completionHandler);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions_26;
		String_t* L_8 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_9 = ___1_completionHandler;
		NullCheck(L_7);
		Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9(L_7, L_8, L_9, Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UniWebView::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_mCE1BCB51C4DB0F0380F4430F1D9715CCB872B3F0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebView_jsCompletionHandler_mFF854459078D3AE969F0FFCE6B4B5777F139923B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// UniWebViewInterface.EvaluateJavaScript(listener.Name, jsString, identifier);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		String_t* L_4 = ___0_jsString;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4(L_3, L_4, L_5, NULL);
		// if (completionHandler != null) {
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_6 = ___1_completionHandler;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// payloadActions.Add(identifier, completionHandler);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions_26;
		String_t* L_8 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_9 = ___1_completionHandler;
		NullCheck(L_7);
		Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9(L_7, L_8, L_9, Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		return;
	}

IL_0037:
	{
		// completionHandler = jsCompletionHandler;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_10 = (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*)il2cpp_codegen_object_new(Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7(L_10, __this, (intptr_t)((void*)UniWebView_jsCompletionHandler_mFF854459078D3AE969F0FFCE6B4B5777F139923B_RuntimeMethod_var), NULL);
		___1_completionHandler = L_10;
		// }
		return;
	}
}
// System.Void UniWebView::jsCompletionHandler(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_jsCompletionHandler_mFF854459078D3AE969F0FFCE6B4B5777F139923B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DB20FB043B2B7603A35A77E3D40E67C9577A370);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("Adding JavaScript Finished without error." + payload.resultCode);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___resultCode_1;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2DB20FB043B2B7603A35A77E3D40E67C9577A370, L_1, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddUrlScheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddUrlScheme_m69D58B1FD13B6C4BAB887F4A73F71EDAD6728CCC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scheme == null) {
		String_t* L_0 = ___0_scheme;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not be null.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (scheme.Contains("://")) {
		String_t* L_2 = ___0_scheme;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not include invalid characters '://'");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.AddUrlScheme(listener.Name, scheme);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_scheme;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemoveUrlScheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveUrlScheme_m0062D380411F3A928D99B1161252A7DBFD8BA103 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scheme == null) {
		String_t* L_0 = ___0_scheme;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not be null.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteralD3FCE46B907FCCFB1380979FD158061B0542D64D, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (scheme.Contains("://")) {
		String_t* L_2 = ___0_scheme;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The scheme should not include invalid characters '://'");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral7CB52D6F4A9943E8A23A1AA0CBB183BDE4AC2E7B, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.RemoveUrlScheme(listener.Name, scheme);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_scheme;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddSslExceptionDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddSslExceptionDomain_mEBEDEE7B8BEF3563222107BA38776FDBB3D1BA6D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (domain == null) {
		String_t* L_0 = ___0_domain;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not be null.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (domain.Contains("://")) {
		String_t* L_2 = ___0_domain;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not include invalid characters '://'");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.AddSslExceptionDomain(listener.Name, domain);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemoveSslExceptionDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveSslExceptionDomain_mF1BEC625F440167F640678A5E8E73D8548A4ED6D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (domain == null) {
		String_t* L_0 = ___0_domain;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not be null.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteral1172A1CEF3378DA89DA639BD09ED58C07EE90C7E, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (domain.Contains("://")) {
		String_t* L_2 = ___0_domain;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("The domain should not include invalid characters '://'");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral33EB4DD410972BEFE9F0A67F8A7FCD8A235E01B7, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.RemoveSslExceptionDomain(listener.Name, domain);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_5, NULL);
		String_t* L_7 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetHeaderField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetHeaderField_mF06DA2AE52947D8F4785783F3DEE71CE589BF0AA (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key == null) {
		String_t* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical("Header key should not be null.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1;
		L_1 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_1, _stringLiteral93B204B4CDC241356AD725235A5C0966C643FAF8, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// UniWebViewInterface.SetHeaderField(listener.Name, key, value);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		String_t* L_4 = ___0_key;
		String_t* L_5 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUserAgent_m327C9199D60AF7FF3E13609A6E48E91967B53BD4 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_agent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUserAgent(listener.Name, agent);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_agent;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.String UniWebView::GetUserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_GetUserAgent_m1BF3450407754000C524665116721487B4834CE4 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetUserAgent(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94(L_1, NULL);
		return L_2;
	}
}
// System.Void UniWebView::SetContentInsetAdjustmentBehavior(UniWebViewContentInsetAdjustmentBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetContentInsetAdjustmentBehavior_m10E64F5910FE3E2F410114AC8442D8312895A55B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_behavior, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowAutoPlay_m2F8C09D346F4C238FBCF8805FEA9213A688AD2DB (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowAutoPlay(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowInlinePlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowInlinePlay_mA527DE8F8E2246F3A9E70DB1C2B7FAD6FB9F7776 (bool ___0_flag, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowFileAccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccess_m510164E68BE05851B9CCFB38DA92C637EE4AB070 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowFileAccess(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowFileAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccessFromFileURLs_m29AA874001CA777B5C44879C5F3DD3B3AC6ED71D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowFileAccessFromFileURLs(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowUniversalAccessFromFileURLs_m4EE2CE5A66501619B3978A243600AD779EE5DCB7 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowUniversalAccessFromFileURLs(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetEnableKeyboardAvoidance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetEnableKeyboardAvoidance_mCB7A22BFB68D9AF4E0859CFBF78416E056B798F8 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetEnableKeyboardAvoidance(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetEnableKeyboardAvoidance_mD6B9866731E8A9FE608A798425DBA42B0E9A48CE(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetJavaScriptEnabled_m77702CE4856DF6CC09BE602DE67141CB900A1BFF (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetJavaScriptEnabled(enabled);
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowJavaScriptOpenWindow_m95065BF4C458716C050EF43FF8BEC9C346FE7F6A (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowJavaScriptOpenWindow(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::CleanCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_CleanCache_mB0863CF09C07DBD30C6769B7DED5AA9E55E26B20 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.CleanCache(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ClearCookies_m717D8F64BDAB6A9C237B94776B3982762D245EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ClearCookies();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3(NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetCookie_mAE72E381F58BC38E6EE403808F0056F14754BF46 (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetCookie(url, cookie, skipEncoding);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_cookie;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.String UniWebView::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebView_GetCookie_m04C2B92683FE763B34B7A074166F91F9B71E3173 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetCookie(url, key, skipEncoding);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void UniWebView::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveCookies_m9BAD986D847B8582A2199D19D0AAC28AE42B0466 (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemoveCookies(url, skipEncoding);
		String_t* L_0 = ___0_url;
		bool L_1 = ___1_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemoveCooke(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveCooke_m5DF2BBD4796EEFC55B0CCA55E733671092B80843 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemoveCookie(url, key, skipEncoding);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ClearHttpAuthUsernamePassword_m334D11701F615A41A8CCD9881C2E920669350DC0 (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ClearHttpAuthUsernamePassword(host, realm);
		String_t* L_0 = ___0_host;
		String_t* L_1 = ___1_realm;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Color UniWebView::get_BackgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UniWebView_get_BackgroundColor_m1FE687F2C13F799D6BB60EDFECC1EC48D55F315E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		// return backgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___backgroundColor_31;
		return L_0;
	}
}
// System.Void UniWebView::set_BackgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_BackgroundColor_mA2711BF40DDCCBD9E8B9E6101BC8560542FD1ACC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// backgroundColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___backgroundColor_31 = L_0;
		// UniWebViewInterface.SetBackgroundColor(listener.Name, value.r, value.g, value.b, value.a);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener_18;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		float L_4 = L_3.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_value;
		float L_6 = L_5.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_value;
		float L_8 = L_7.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_value;
		float L_10 = L_9.___a_3;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A(L_2, L_4, L_6, L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Single UniWebView::get_Alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebView_get_Alpha_mE510D1D29A7E30476B9BEA00F36DFD491C90A160 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetWebViewAlpha(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6(L_1, NULL);
		return L_2;
	}
}
// System.Void UniWebView::set_Alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_set_Alpha_m30DDAFDC739C4466CAB0286AC0E74D1E4F596ECC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetWebViewAlpha(listener.Name, value);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		float L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetShowSpinnerWhileLoading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowSpinnerWhileLoading_m275082B2B4B426FDE15503AED02E3C46C9E9F23B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetShowSpinnerWhileLoading(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetSpinnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSpinnerText_m1E88EC6C1D8DA8CC269B9EAD9E5F11A230D1BCC4 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetSpinnerText(listener.Name, text);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetHorizontalScrollBarEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetHorizontalScrollBarEnabled_m079C0B751645D161797F0D37EB97C4EE344EC445 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetHorizontalScrollBarEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetVerticalScrollBarEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetVerticalScrollBarEnabled_m0D11B47DFEFE037B5AA159B34B221A8C1E64725F (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetVerticalScrollBarEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetBouncesEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetBouncesEnabled_m6844CC5D13603356BDA380F742982924499AB49B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetBouncesEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetZoomEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetZoomEnabled_mDC790FD74384D5658B76C8073DB92E76247E71BC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetZoomEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddPermissionTrustDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddPermissionTrustDomain_m2971E4734C2024CF1806A7C3306CC5FBE5BE0F12 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.AddPermissionTrustDomain(listener.Name, domain);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddPermissionTrustDomain_mEB9C21E5A179925F0C536DBE837761AF28766075(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::RemovePermissionTrustDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemovePermissionTrustDomain_m37FAE0DFD6F57D16B28CBCC0FDD3552CF665E46A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemovePermissionTrustDomain(listener.Name, domain);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemovePermissionTrustDomain_m0EBFFD7F79AD89A2CA27E57092137E4CB328B1EC(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetBackButtonEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetBackButtonEnabled_m54B61F8106B54F85EA5D6AC80CE0E0F7FB6EED22 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		// this.backButtonEnabled = enabled;
		bool L_0 = ___0_enabled;
		__this->___backButtonEnabled_30 = L_0;
		// }
		return;
	}
}
// System.Void UniWebView::SetUseWideViewPort(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUseWideViewPort_mC8BD8CEE3765DD961D8EB25006F1316DF11FFAD0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUseWideViewPort(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUseWideViewPort_m47489E0088289ECA21D0CA5CA5CE0840F88CC6CB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetLoadWithOverviewMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetLoadWithOverviewMode_mA694AE30E4851BFF6C5AD042F543AFDA8FD17C99 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetLoadWithOverviewMode(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLoadWithOverviewMode_m75E8005ED6FA15DCDAF5467988D2D0C47BAB0729(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m096C958961581C717CBDD141059A3950CF43BF24 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_show, bool ___1_animated, bool ___2_onTop, bool ___3_adjustInset, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarDoneButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarDoneButtonText_mF81E2643E32709B124D4267F20AF1DC5E94EB242 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarGoBackButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarGoBackButtonText_m955A1DBA18AF6EF7426BEC33C6356BEBFED26A72 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarGoForwardButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarGoForwardButtonText_m242126DF8AF9BCEFCE230E700EDD31DD60CE0674 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarTintColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarTintColor_mB06A6C79E86CB32301263735CB229D3BD1608764 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetToolbarTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetToolbarTextColor_m14405C4491FEFA3C77383946C59C0EA31B8C1680 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetShowToolbarNavigationButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbarNavigationButtons_m7D2149FD752C0789FE5DD289D3CF7E2BDADA3909 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_show, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetUserInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetUserInteractionEnabled_mA48EFFB7433AD5938D4C50B8254FB9CBAD7A3E09 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUserInteractionEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetTransparencyClickingThroughEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetTransparencyClickingThroughEnabled_mCC71F80F6F3F84E63CB02E34038839D680B46A91 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetTransparencyClickingThroughEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetWebContentsDebuggingEnabled_mDB1204545765BA056D5E798B723F4EA8E389EDA8 (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetWebContentsDebuggingEnabled(enabled);
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetWindowUserResizeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetWindowUserResizeEnabled_m00449035DC258D150CE5707C9116F648A0E670A9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::GetHTMLContent(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_GetHTMLContent_mE12CCF45BF33818C6ACFCEC78685E73CEC8602C8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass152_0_U3CGetHTMLContentU3Eb__0_m429C40B5C5F84C64FC9B5551107A8856494A4E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* L_0 = (U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass152_0__ctor_m4E6FA141FF864D937412B130651A5B69FC2DF6DE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* L_1 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___0_handler;
		NullCheck(L_1);
		L_1->___handler_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___handler_0), (void*)L_2);
		// EvaluateJavaScript("document.documentElement.outerHTML", payload => {
		//     if (handler != null) {
		//         handler(payload.data);
		//     }
		// });
		U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* L_3 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_4 = (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*)il2cpp_codegen_object_new(Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass152_0_U3CGetHTMLContentU3Eb__0_m429C40B5C5F84C64FC9B5551107A8856494A4E85_RuntimeMethod_var), NULL);
		UniWebView_EvaluateJavaScript_mCE1BCB51C4DB0F0380F4430F1D9715CCB872B3F0(__this, _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowBackForwardNavigationGestures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowBackForwardNavigationGestures_m34F27F1FB77961CA18EB7C0E550B9891D145796E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowHTTPAuthPopUpWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowHTTPAuthPopUpWindow_m5F5E015D948CF904A55FA0B157EEFFC2A454C81D (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowHTTPAuthPopUpWindow(listener.Name, flag);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetCalloutEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetCalloutEnabled_mC0C10E54B17A85646D3C1CA79E5E3BFCB64DBCE9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetCalloutEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetSupportMultipleWindows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetSupportMultipleWindows_m03DB0D1236A7CDA81F270536BA9DA4A7E5E55028 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetSupportMultipleWindows(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSupportMultipleWindows_m521B45A2CAC7D83C0482BB365454E991A6C8573B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetDefaultFontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDefaultFontSize_m8418C3F7554DF1F8C54EF7A217DA655E18B11FB6 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetDefaultFontSize(listener.Name, size);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		int32_t L_2 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDefaultFontSize_mB805E508F0BA6B9075B6B3C231A80C7A3DE2B24B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetTextZoom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetTextZoom_m5D61544806D51508CDB2DCE7A177C20840EEE5CC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_textZoom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetTextZoom(listener.Name, textZoom);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		int32_t L_2 = ___0_textZoom;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetTextZoom_m419910B15BA5AEBCE6E170B55A2F3DD72DF96E12(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::SetDragInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDragInteractionEnabled_m096A8B2D5B45E42771F0D24A8970E53BEAC96EA9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::Print()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_Print_m89A1855974B13E7DEAC07FC5DD30D52F974D4A35 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Print(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::CaptureSnapshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_CaptureSnapshot_m6C2CE9E21042DDD08E914339487D26E0F5048797 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.CaptureSnapshot(listener.Name, fileName);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_fileName;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::ScrollTo(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_ScrollTo_m56D73554B8DBBE0E29C86BA7B8A7F200128A5259 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, int32_t ___0_x, int32_t ___1_y, bool ___2_animated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ScrollTo(listener.Name, x, y, animated);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		int32_t L_2 = ___0_x;
		int32_t L_3 = ___1_y;
		bool L_4 = ___2_animated;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::AddDownloadURL(System.String,UniWebViewDownloadMatchingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddDownloadURL_mE73D3756CEC125E0901C042BF7C70B8252C0744C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_urlString, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::RemoveDownloadURL(System.String,UniWebViewDownloadMatchingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveDownloadURL_m7FCC311D710D929DE7A4D46827E67C76E27C2A07 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_urlString, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::AddDownloadMIMEType(System.String,UniWebViewDownloadMatchingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_AddDownloadMIMEType_m7AF3194CCE8842E3DC60D842065645B52296CE12 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_MIMEType, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::RemoveDownloadMIMETypes(System.String,UniWebViewDownloadMatchingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_RemoveDownloadMIMETypes_mABB0890771FC25FECB477968C22EFC423F610C27 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_MIMEType, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetAllowUserChooseActionAfterDownloading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetAllowUserChooseActionAfterDownloading_m3E258ED2A0C0F45AC2367FB2E98C3AF3BC6BF6C9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_allowed, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetDownloadEventForContextMenuEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetDownloadEventForContextMenuEnabled_m2A4291413FCA8C032944528CF11C9531EFA5F603 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetDownloadEventForContextMenuEnabled(listener.Name, enabled);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m67EE6C45B99ABE4CF3B8E119FC36F06E06E2141F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_OnDestroy_mB7FF60DE5065C3A2E39D3C70EC14C2242661E9A0 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewNativeListener.RemoveListener(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713(L_1, NULL);
		// UniWebViewInterface.Destroy(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B(L_3, NULL);
		// Destroy(listener.gameObject);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_4 = __this->___listener_18;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m43B0D8548BC33F30B809AAE5ACCC6451658B740B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		// if (actions.TryGetValue(identifier, out action)) {
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___actions_25;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// actions.Remove(identifier);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___actions_25;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnHideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_m0384C70ED27CF10A11297B4D8D3A71A7076E92D8 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		// if (actions.TryGetValue(identifier, out action)) {
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___actions_25;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// actions.Remove(identifier);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___actions_25;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnAnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_m5FCE7F89EDEAAE8673ECBF8BC0E5BF7CCE2B9632 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		// if (actions.TryGetValue(identifier, out action)) {
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___actions_25;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// actions.Remove(identifier);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___actions_25;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_m1D42374A36244250F2F6124A0C819B33C5684378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var identifier = payload.identifier;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		V_1 = L_1;
		// if (payloadActions.TryGetValue(identifier, out action)) {
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_2 = __this->___payloadActions_26;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// action(payload);
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_5);
		Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline(L_5, L_6, NULL);
		// payloadActions.Remove(identifier);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions_26;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D(L_7, L_8, Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_mF80A34BC2BD3F5063BE79C98245CF7D397C7A3E7 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var identifier = payload.identifier;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		V_1 = L_1;
		// if (payloadActions.TryGetValue(identifier, out action)) {
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_2 = __this->___payloadActions_26;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// action(payload);
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_5);
		Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline(L_5, L_6, NULL);
		// payloadActions.Remove(identifier);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___payloadActions_26;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D(L_7, L_8, Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_mC5C2526387EBD9A3C91AA5A7FBEA43578ECC616A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OnPageFinished != null) {
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_0 = __this->___OnPageFinished_5;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// int code = -1;
		V_0 = (-1);
		// if (int.TryParse(payload.resultCode, out code)) {
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnPageFinished(this, code, payload.data);
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* L_4 = __this->___OnPageFinished_5;
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_6);
		String_t* L_7 = L_6->___data_2;
		NullCheck(L_4);
		PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_inline(L_4, __this, L_5, L_7, NULL);
		return;
	}

IL_002d:
	{
		// UniWebViewLogger.Instance.Critical("Invalid status code received: " + payload.resultCode);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_8;
		L_8 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_payload;
		NullCheck(L_9);
		String_t* L_10 = L_9->___resultCode_1;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC4CC144598BD145E00CD6F81EDD805EA5BBA24E6, L_10, NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_8, L_11, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_mCC7F59BDFB3D6DCE5BB86478DA91B1C47765D9AE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		// if (OnPageStarted != null) {
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_0 = __this->___OnPageStarted_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPageStarted(this, url);
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* L_1 = __this->___OnPageStarted_4;
		String_t* L_2 = ___0_url;
		NullCheck(L_1);
		PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_mF2FD6E5D4B839AC9CDB00497C9C07BC5672DAACF (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OnPageErrorReceived != null) {
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_0 = __this->___OnPageErrorReceived_6;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// int code = -1;
		V_0 = (-1);
		// if (int.TryParse(payload.resultCode, out code)) {
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnPageErrorReceived(this, code, payload.data);
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* L_4 = __this->___OnPageErrorReceived_6;
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_6);
		String_t* L_7 = L_6->___data_2;
		NullCheck(L_4);
		PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_inline(L_4, __this, L_5, L_7, NULL);
		return;
	}

IL_002d:
	{
		// UniWebViewLogger.Instance.Critical("Invalid error code received: " + payload.resultCode);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_8;
		L_8 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_payload;
		NullCheck(L_9);
		String_t* L_10 = L_9->___resultCode_1;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD2199E4A06060B44700618DF6B43A85D47E229DF, L_10, NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_8, L_11, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnPageProgressChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageProgressChanged_m315FCE400C99F88020084AD9EE72C97B29B5370C (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// if (OnPageProgressChanged != null) {
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_0 = __this->___OnPageProgressChanged_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPageProgressChanged(this, progress);
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* L_1 = __this->___OnPageProgressChanged_7;
		float L_2 = ___0_progress;
		NullCheck(L_1);
		PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_m6BA779B133E0858266E4C25E5935FE4D78918356 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (OnMessageReceived != null) {
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_0 = __this->___OnMessageReceived_8;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// var message = new UniWebViewMessage(result);
		String_t* L_1 = ___0_result;
		UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31((&V_0), L_1, NULL);
		// OnMessageReceived(this, message);
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* L_2 = __this->___OnMessageReceived_8;
		UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 L_3 = V_0;
		NullCheck(L_2);
		MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_inline(L_2, __this, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnShouldClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnShouldClose != null) {
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_0 = __this->___OnShouldClose_9;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// var shouldClose = OnShouldClose(this);
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* L_1 = __this->___OnShouldClose_9;
		NullCheck(L_1);
		bool L_2;
		L_2 = ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_inline(L_1, __this, NULL);
		// if (shouldClose) {
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		return;
	}

IL_001d:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnWebContentProcessDidTerminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebContentProcessDidTerminate_mDDD3AEF0EC6AD327ACA6B8E9BCD71B6EB73DADDE (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	{
		// if (OnWebContentProcessTerminated != null) {
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_0 = __this->___OnWebContentProcessTerminated_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnWebContentProcessTerminated(this);
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* L_1 = __this->___OnWebContentProcessTerminated_11;
		NullCheck(L_1);
		OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnMultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowOpened_m511D2F03883B77233CDF1975E80DA01531E52C05 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) 
{
	{
		// if (OnMultipleWindowOpened != null) {
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_0 = __this->___OnMultipleWindowOpened_15;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnMultipleWindowOpened(this, multiWindowId);
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* L_1 = __this->___OnMultipleWindowOpened_15;
		String_t* L_2 = ___0_multiWindowId;
		NullCheck(L_1);
		MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnMultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnMultipleWindowClosed_m1B0A5F7048AC06C683C48C1232B840454F39C028 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, String_t* ___0_multiWindowId, const RuntimeMethod* method) 
{
	{
		// if (OnMultipleWindowClosed != null) {
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_0 = __this->___OnMultipleWindowClosed_16;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnMultipleWindowClosed(this, multiWindowId);
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* L_1 = __this->___OnMultipleWindowClosed_16;
		String_t* L_2 = ___0_multiWindowId;
		NullCheck(L_1);
		MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnFileDownloadStarted(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadStarted_mF8149818A85DB5C0448A0DF32B3626F0D00A8378 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	{
		// if (OnFileDownloadStarted != null) {
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_0 = __this->___OnFileDownloadStarted_12;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// OnFileDownloadStarted(this, payload.identifier, payload.data);
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* L_1 = __this->___OnFileDownloadStarted_12;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_2 = ___0_payload;
		NullCheck(L_2);
		String_t* L_3 = L_2->___identifier_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4 = ___0_payload;
		NullCheck(L_4);
		String_t* L_5 = L_4->___data_2;
		NullCheck(L_1);
		FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_inline(L_1, __this, L_3, L_5, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnFileDownloadFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnFileDownloadFinished_mBFE7FC899642D5F12106559319E0E35DC944EB8A (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (OnFileDownloadFinished != null) {
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_0 = __this->___OnFileDownloadFinished_13;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// int errorCode = int.TryParse(payload.resultCode, out errorCode) ? errorCode : -1;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		// OnFileDownloadFinished(this, errorCode, payload.identifier, payload.data);
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* L_5 = __this->___OnFileDownloadFinished_13;
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_7 = ___0_payload;
		NullCheck(L_7);
		String_t* L_8 = L_7->___identifier_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_payload;
		NullCheck(L_9);
		String_t* L_10 = L_9->___data_2;
		NullCheck(L_5);
		FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_inline(L_5, __this, L_6, L_8, L_10, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniWebView::InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_InternalOnCaptureSnapshotFinished_mE3338681266888F771F1A9C89F43F831C325690E (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (OnCaptureSnapshotFinished != null) {
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_0 = __this->___OnCaptureSnapshotFinished_14;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int errorCode = int.TryParse(payload.resultCode, out errorCode) ? errorCode : -1;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_payload;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		// OnCaptureSnapshotFinished(this, errorCode,  payload.data);
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* L_5 = __this->___OnCaptureSnapshotFinished_14;
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_7 = ___0_payload;
		NullCheck(L_7);
		String_t* L_8 = L_7->___data_2;
		NullCheck(L_5);
		CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_inline(L_5, __this, L_6, L_8, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void UniWebView::SetImmersiveModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_SetImmersiveModeEnabled_mBC3434DD4C16544ED59542370F99C376F97AD469 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(
		//     "SetImmersiveModeEnabled is removed in UniWebView 4." +
		//     "Now UniWebView always respect navigation bar/status bar settings from Unity."
		// );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFADAFC4A16312377BF957856DCCD59A61D85AB62, NULL);
		// }
		return;
	}
}
// System.Void UniWebView::add_OnKeyCodeReceived(UniWebView/KeyCodeReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_add_OnKeyCodeReceived_mDED354ACD195971E6059F0345C9EC3A92F9578BC (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_0 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_1 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_2 = NULL;
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_0 = __this->___OnKeyCodeReceived_32;
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_2 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA** L_5 = (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA**)(&__this->___OnKeyCodeReceived_32);
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_6 = V_2;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_7 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*>(L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_9 = V_0;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnKeyCodeReceived(UniWebView/KeyCodeReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView_remove_OnKeyCodeReceived_mA92A14A5CA62B8487FCE7FBD86B04602BFCAEB01 (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_0 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_1 = NULL;
	KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* V_2 = NULL;
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_0 = __this->___OnKeyCodeReceived_32;
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_2 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA** L_5 = (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA**)(&__this->___OnKeyCodeReceived_32);
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_6 = V_2;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_7 = V_1;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*>(L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_9 = V_0;
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebView__ctor_m1284EE3CB80B68298787B500C35F215AF57E0D0B (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private string id = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___id_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_17), (void*)L_1);
		// private Dictionary<String, Action> actions = new Dictionary<String, Action>();
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_2 = (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*)il2cpp_codegen_object_new(Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E(L_2, Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var);
		__this->___actions_25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_25), (void*)L_2);
		// private Dictionary<String, Action<UniWebViewNativeResultPayload>> payloadActions = new Dictionary<String, Action<UniWebViewNativeResultPayload>>();
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_3 = (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*)il2cpp_codegen_object_new(Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E(L_3, Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var);
		__this->___payloadActions_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payloadActions_26), (void*)L_3);
		// private bool backButtonEnabled = true;
		__this->___backButtonEnabled_30 = (bool)1;
		// private Color backgroundColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___backgroundColor_31 = L_4;
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
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_Multicast(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* currentDelegate = reinterpret_cast<PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInst(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_url, method);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenStatic(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_url, method);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenStaticInvoker(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_ClosedStaticInvoker(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenVirtual(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInterface(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericVirtual(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_url);
}
void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericInterface(PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_url);
}
// System.Void UniWebView/PageStartedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate__ctor_mBA40DE0B1878E6C0907BFBCA95083C1080209C4D (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_Multicast;
}
// System.Void UniWebView/PageStartedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310 (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/PageStartedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageStartedDelegate_BeginInvoke_m07F7EF5EB610B70CA8D41B028D778991167996D7 (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_url;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/PageStartedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageStartedDelegate_EndInvoke_mBADF57A348D200C24597E45DD1143D31D467C69E (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_Multicast(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* currentDelegate = reinterpret_cast<PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInst(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_statusCode, ___2_url, method);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenStatic(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_statusCode, ___2_url, method);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenStaticInvoker(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	InvokerActionInvoker3< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_ClosedStaticInvoker(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenVirtual(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInterface(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericVirtual(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_statusCode, ___2_url);
}
void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericInterface(PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_statusCode, ___2_url);
}
// System.Void UniWebView/PageFinishedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate__ctor_m601B981286793D02738129D1B444A2D415BE1DB4 (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_Multicast;
}
// System.Void UniWebView/PageFinishedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543 (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/PageFinishedDelegate::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageFinishedDelegate_BeginInvoke_m5F9799DF2E53CA438D6A2C0AE8AC112EE4E300C0 (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_statusCode);
	__d_args[2] = ___2_url;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void UniWebView/PageFinishedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageFinishedDelegate_EndInvoke_mD14473B8249D6CEF72E6354BE466D69976FAC94B (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_Multicast(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* currentDelegate = reinterpret_cast<PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInst(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_errorMessage, method);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenStatic(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_errorMessage, method);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenStaticInvoker(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	InvokerActionInvoker3< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_ClosedStaticInvoker(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenVirtual(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInterface(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericVirtual(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericInterface(PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
// System.Void UniWebView/PageErrorReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate__ctor_m7721736193BB37F11202515587A35A5C7E34C1E2 (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_Multicast;
}
// System.Void UniWebView/PageErrorReceivedDelegate::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/PageErrorReceivedDelegate::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageErrorReceivedDelegate_BeginInvoke_mC9AE259AB9C02FD9706D5FAD600A5B4BCC190704 (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_errorMessage;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void UniWebView/PageErrorReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_EndInvoke_m819BA17A2BA7731AACEA3293BA012E9B4F50790D (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_Multicast(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* currentDelegate = reinterpret_cast<PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInst(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_progress, method);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenStatic(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_progress, method);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenStaticInvoker(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_ClosedStaticInvoker(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenVirtual(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInterface(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericVirtual(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< float >::Invoke(method, ___0_webView, ___1_progress);
}
void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericInterface(PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< float >::Invoke(method, ___0_webView, ___1_progress);
}
// System.Void UniWebView/PageProgressChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate__ctor_mF9C4C9A1243773D147E31C8E86ACC6607B0A3F88 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_Multicast;
}
// System.Void UniWebView/PageProgressChangedDelegate::Invoke(UniWebView,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/PageProgressChangedDelegate::BeginInvoke(UniWebView,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PageProgressChangedDelegate_BeginInvoke_mDCB31F47CDE7947D75B37AE2606CFC6FC3850F83 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_progress);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/PageProgressChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_EndInvoke_m3C19874ABD37CC9E5D4CA14C1F703C98445D3CD1 (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_Multicast(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* currentDelegate = reinterpret_cast<MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInst(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_message, method);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenStatic(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_message, method);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenStaticInvoker(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_ClosedStaticInvoker(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenVirtual(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInterface(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericVirtual(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(method, ___0_webView, ___1_message);
}
void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericInterface(MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 >::Invoke(method, ___0_webView, ___1_message);
}
// System.Void UniWebView/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m25D03F50241866CB8E4B2B6C415A667502169E1D (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_Multicast;
}
// System.Void UniWebView/MessageReceivedDelegate::Invoke(UniWebView,UniWebViewMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4 (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/MessageReceivedDelegate::BeginInvoke(UniWebView,UniWebViewMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_mAC63535F79E9725D6B3173B4F6CD504DEC0D3B98 (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_il2cpp_TypeInfo_var, &___1_message);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate_EndInvoke_m2C4AEA03EE048886D90A42AA01C08090D53846D0 (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_Multicast(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* currentDelegate = reinterpret_cast<ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInst(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef bool (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_webView, method);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenStatic(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_webView, method);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenStaticInvoker(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_ClosedStaticInvoker(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenVirtual(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInterface(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericVirtual(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___0_webView);
}
bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericInterface(ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___0_webView);
}
// System.Void UniWebView/ShouldCloseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShouldCloseDelegate__ctor_m3945881B49BA14E22CC2205660E6E603AF621384 (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_Multicast;
}
// System.Boolean UniWebView/ShouldCloseDelegate::Invoke(UniWebView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/ShouldCloseDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShouldCloseDelegate_BeginInvoke_mB06B004F287659DB44CDC551DEF5F3467ADB99DC (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_webView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean UniWebView/ShouldCloseDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_EndInvoke_m0AFF8F64D820C3F83D9C52E36D67896531B4CD77 (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_Multicast(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* currentDelegate = reinterpret_cast<OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_orientation, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInst(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_orientation, method);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenStatic(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_orientation, method);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenStaticInvoker(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_ClosedStaticInvoker(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenVirtual(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInterface(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericVirtual(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_orientation);
}
void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericInterface(OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_orientation);
}
// System.Void UniWebView/OrientationChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate__ctor_m37E3B206DFF8008458410A8B65564D16D7C98776 (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_Multicast;
}
// System.Void UniWebView/OrientationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_orientation, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/OrientationChangedDelegate::BeginInvoke(UniWebView,UnityEngine.ScreenOrientation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrientationChangedDelegate_BeginInvoke_m7818C15AD0C166BF5C543096642640ADCE00E192 (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &___1_orientation);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/OrientationChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationChangedDelegate_EndInvoke_mFFEB3E2BBFC85BA30E39BBC5A6456FFC4FB301CB (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_Multicast(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* currentDelegate = reinterpret_cast<OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInst(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, method);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenStatic(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, method);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenStaticInvoker(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	InvokerActionInvoker1< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_ClosedStaticInvoker(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenVirtual(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInterface(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericVirtual(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker0::Invoke(method, ___0_webView);
}
void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericInterface(OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_webView);
}
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate__ctor_mA27D173B831A28688F196ECA10F12D6E81B5B939 (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_Multicast;
}
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::Invoke(UniWebView)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/OnWebContentProcessTerminatedDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnWebContentProcessTerminatedDelegate_BeginInvoke_mF994304DB853D86C10EA7D551585A3B4A0B76BDA (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_webView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_EndInvoke_m8B480BC4128E5C4FB86498369A86CF6EA12DCBA8 (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_Multicast(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* currentDelegate = reinterpret_cast<FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_remoteUrl, ___2_fileName, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInst(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_remoteUrl, ___2_fileName, method);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenStatic(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_remoteUrl, ___2_fileName, method);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenStaticInvoker(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	InvokerActionInvoker3< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_ClosedStaticInvoker(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenVirtual(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInterface(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericVirtual(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< String_t*, String_t* >::Invoke(method, ___0_webView, ___1_remoteUrl, ___2_fileName);
}
void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericInterface(FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(method, ___0_webView, ___1_remoteUrl, ___2_fileName);
}
// System.Void UniWebView/FileDownloadStarted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted__ctor_mF2020AC146E3F5F89B3A2F7AD597FFBB53836FB9 (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_Multicast;
}
// System.Void UniWebView/FileDownloadStarted::Invoke(UniWebView,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964 (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_remoteUrl, ___2_fileName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/FileDownloadStarted::BeginInvoke(UniWebView,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDownloadStarted_BeginInvoke_mE281D28A91F0EAB2C206346217FE1F0A6749108A (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_remoteUrl;
	__d_args[2] = ___2_fileName;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void UniWebView/FileDownloadStarted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadStarted_EndInvoke_m3E4016F261503436B5CDE6BBC066013CF68CF74E (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_Multicast(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* currentDelegate = reinterpret_cast<FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInst(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, method);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenStatic(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, method);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenStaticInvoker(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	InvokerActionInvoker4< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_ClosedStaticInvoker(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenVirtual(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInterface(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericVirtual(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericInterface(FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath);
}
// System.Void UniWebView/FileDownloadFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished__ctor_mFC492554E0EC9074A1BDB2B68F71EB7ED23D9F7A (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_Multicast;
}
// System.Void UniWebView/FileDownloadFinished::Invoke(UniWebView,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22 (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/FileDownloadFinished::BeginInvoke(UniWebView,System.Int32,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDownloadFinished_BeginInvoke_mA11F8B48285120882F8F68B2EF6B4D9DE1E53144 (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_remoteUrl;
	__d_args[3] = ___3_diskPath;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void UniWebView/FileDownloadFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDownloadFinished_EndInvoke_mF03DE1AF71503573ACE3AE7AC8730E6C98FC6783 (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_Multicast(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* currentDelegate = reinterpret_cast<CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_errorCode, ___2_diskPath, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInst(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_diskPath, method);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenStatic(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_diskPath, method);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenStaticInvoker(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	InvokerActionInvoker3< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_ClosedStaticInvoker(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenVirtual(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInterface(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericVirtual(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_diskPath);
}
void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericInterface(CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_diskPath);
}
// System.Void UniWebView/CaptureSnapshotFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished__ctor_m21446E832DBD5AA428A8BCA5E28AF1E71E37542F (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_Multicast;
}
// System.Void UniWebView/CaptureSnapshotFinished::Invoke(UniWebView,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/CaptureSnapshotFinished::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CaptureSnapshotFinished_BeginInvoke_m73534D46C3A12E9F44CAA3999520372A88509F44 (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_diskPath;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void UniWebView/CaptureSnapshotFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_EndInvoke_m37620C3935CEDC0224C5B5EE6C6565C6EA83B86D (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_Multicast(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* currentDelegate = reinterpret_cast<MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInst(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenStatic(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenStaticInvoker(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_ClosedStaticInvoker(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenVirtual(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInterface(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericVirtual(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericInterface(MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
// System.Void UniWebView/MultipleWindowOpenedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate__ctor_m1F985EA7A625DF73ECBE80DD8109936845FAD24D (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_Multicast;
}
// System.Void UniWebView/MultipleWindowOpenedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998 (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/MultipleWindowOpenedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleWindowOpenedDelegate_BeginInvoke_m41787CD15D05E6535751E4E23F50FB36CEEF7DCC (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_multipleWindowId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/MultipleWindowOpenedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_EndInvoke_m79285A5A88211CF011B0667C2E9C70989511A703 (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_Multicast(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* currentDelegate = reinterpret_cast<MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInst(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenStatic(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_multipleWindowId, method);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenStaticInvoker(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_ClosedStaticInvoker(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenVirtual(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInterface(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericVirtual(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericInterface(MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_multipleWindowId);
}
// System.Void UniWebView/MultipleWindowClosedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate__ctor_mA49BF2208D4994577339806017B19FF4392575DE (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_Multicast;
}
// System.Void UniWebView/MultipleWindowClosedDelegate::Invoke(UniWebView,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/MultipleWindowClosedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultipleWindowClosedDelegate_BeginInvoke_m3ABC27AED0AD0E577C38651E5A38D982A64D8809 (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_multipleWindowId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/MultipleWindowClosedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_EndInvoke_m81C6A4D48C57F94E151E10AA0DBDA44F6FA19592 (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_Multicast(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* currentDelegate = reinterpret_cast<KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_keyCode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInst(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_keyCode, method);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenStatic(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_keyCode, method);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenStaticInvoker(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_ClosedStaticInvoker(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenVirtual(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInterface(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericVirtual(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_keyCode);
}
void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericInterface(KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_keyCode);
}
// System.Void UniWebView/KeyCodeReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate__ctor_m5A079C08977B382522F40C6F8898322FC4F0FCF2 (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C_Multicast;
}
// System.Void UniWebView/KeyCodeReceivedDelegate::Invoke(UniWebView,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_Invoke_m606E1038F184565D05A2F3BBDB204DBE9FA9573C (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_keyCode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebView/KeyCodeReceivedDelegate::BeginInvoke(UniWebView,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCodeReceivedDelegate_BeginInvoke_mD0267EC46BCCF88246C969F00733865903015872 (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_keyCode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_keyCode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void UniWebView/KeyCodeReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_EndInvoke_mB4CDE92ABD245E8414EC80E541F85A9D88FC81FD (KeyCodeReceivedDelegate_t2B0D9DBF1128D21126DDE976A2FB0B71858C72DA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView/<>c__DisplayClass152_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass152_0__ctor_m4E6FA141FF864D937412B130651A5B69FC2DF6DE (U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UniWebView/<>c__DisplayClass152_0::<GetHTMLContent>b__0(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass152_0_U3CGetHTMLContentU3Eb__0_m429C40B5C5F84C64FC9B5551107A8856494A4E85 (U3CU3Ec__DisplayClass152_0_t5A339BA9CC2DFE807371FE217FB273A2FB23C190* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	{
		// if (handler != null) {
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___handler_0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// handler(payload.data);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___handler_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_2 = ___0_payload;
		NullCheck(L_2);
		String_t* L_3 = L_2->___data_2;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_3, NULL);
	}

IL_0019:
	{
		// });
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
// System.String UniWebViewHelper::StreamingAssetURLForPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_StreamingAssetURLForPath_m229ED82D5FE5E89B0DA610821BFAE5CFF1CDB67B (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine("file:///android_asset/", path);
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(_stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD, L_0, NULL);
		return L_1;
	}
}
// System.String UniWebViewHelper::PersistentDataURLForPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_PersistentDataURLForPath_m1FEBFED174D8CB73E4820B70D2832BFBD87F96B5 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine("file://" + Application.persistentDataPath, path);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, NULL);
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean UniWebViewHelper::get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UniWebViewHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewHelper__ctor_mE92A9263846DF36C8C0D8F77433CF9E6FC911012 (UniWebViewHelper_t166BB0D31B84038617C0DE07E9B52815998DD115* __this, const RuntimeMethod* method) 
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
// UniWebViewLogger/Level UniWebViewLogger::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, const RuntimeMethod* method) 
{
	{
		// get { return level; }
		int32_t L_0 = __this->___level_1;
		return L_0;
	}
}
// System.Void UniWebViewLogger::set_LogLevel(UniWebViewLogger/Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_set_LogLevel_m263685CB89CE311475E708B4FF5B551ECE529BDE (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_tAE06E24FCDD418667688DA0099DC5625E38EABA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log(Level.Off, "Setting UniWebView logger level to: " + value);
		Il2CppFakeBox<int32_t> L_0(Level_tAE06E24FCDD418667688DA0099DC5625E38EABA0_il2cpp_TypeInfo_var, (&___0_value));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral54293F2D54AE4537D84592735A6CFC7A384FEBA1, L_1, NULL);
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)99), L_2, NULL);
		// level = value;
		int32_t L_3 = ___0_value;
		__this->___level_1 = L_3;
		// UniWebViewInterface.SetLogLevel((int)value);
		int32_t L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503(L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewLogger::.ctor(UniWebViewLogger/Level)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_m34471A32804D2FA24C75F47FE2928C4D502592D8 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, const RuntimeMethod* method) 
{
	{
		// private UniWebViewLogger(Level level) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.level = level;
		int32_t L_0 = ___0_level;
		__this->___level_1 = L_0;
		// }
		return;
	}
}
// UniWebViewLogger UniWebViewLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0 = ((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance = new UniWebViewLogger(Level.Critical);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_1 = (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B*)il2cpp_codegen_object_new(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UniWebViewLogger__ctor_m34471A32804D2FA24C75F47FE2928C4D502592D8(L_1, ((int32_t)80), NULL);
		((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance_0), (void*)L_1);
	}

IL_0013:
	{
		// return instance;
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_2 = ((UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B_il2cpp_TypeInfo_var))->___instance_0;
		return L_2;
	}
}
// System.Void UniWebViewLogger::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void Verbose(string message) { Log(Level.Verbose, message); }
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, 0, L_0, NULL);
		// public void Verbose(string message) { Log(Level.Verbose, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Debug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void Debug(string message) { Log(Level.Debug, message); }
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)10), L_0, NULL);
		// public void Debug(string message) { Log(Level.Debug, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void Info(string message) { Log(Level.Info, message); }
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)20), L_0, NULL);
		// public void Info(string message) { Log(Level.Info, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Critical(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949 (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void Critical(string message) { Log(Level.Critical, message); }
		String_t* L_0 = ___0_message;
		UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F(__this, ((int32_t)80), L_0, NULL);
		// public void Critical(string message) { Log(Level.Critical, message); }
		return;
	}
}
// System.Void UniWebViewLogger::Log(UniWebViewLogger/Level,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_m659B6EC0A09C3588E2EE352A3991CD1AADE4921F (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (level >= this.LogLevel) {
		int32_t L_0 = ___0_level;
		int32_t L_1;
		L_1 = UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		// var logMessage = "<UniWebView> " + message;
		String_t* L_2 = ___1_message;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF8D6B5E5D1A349370529FE8E7793F6F40FEB98F6, L_2, NULL);
		V_0 = L_3;
		// if (level == Level.Critical) {
		int32_t L_4 = ___0_level;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0021;
		}
	}
	{
		// UnityEngine.Debug.LogError(logMessage);
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		return;
	}

IL_0021:
	{
		// UnityEngine.Debug.Log(logMessage);
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0027:
	{
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
// Conversion methods for marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_pinvoke(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_pinvoke_back(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke& marshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_pinvoke_cleanup(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_com(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_com_back(const UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com& marshaled, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UniWebViewMessage
IL2CPP_EXTERN_C void UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshal_com_cleanup(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3_marshaled_com& marshaled)
{
}
// System.String UniWebViewMessage::get_RawMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = __this->___U3CRawMessageU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_RawMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CRawMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline(_thisAdjusted, ___0_value, method);
}
// System.String UniWebViewMessage::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = __this->___U3CSchemeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CSchemeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline(_thisAdjusted, ___0_value, method);
}
// System.String UniWebViewMessage::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_Path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_Args()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CArgsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _returnValue;
	_returnValue = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UniWebViewMessage::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CArgsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_AdjustorThunk (RuntimeObject* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UniWebViewMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31 (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_rawMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// public UniWebViewMessage(string rawMessage): this() {
		il2cpp_codegen_initobj(__this, sizeof(UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3));
		// UniWebViewLogger.Instance.Debug("Try to parse raw message: " + rawMessage);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_rawMessage;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral518BD63F7EC12F584B7692F39A21657A70FB44CA, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB(L_0, L_2, NULL);
		// this.RawMessage = rawMessage;
		String_t* L_3 = ___0_rawMessage;
		UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline(__this, L_3, NULL);
		// string[] schemeSplit = rawMessage.Split(new string[] {"://"}, System.StringSplitOptions.None);
		String_t* L_4 = ___0_rawMessage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_4, L_6, 0, NULL);
		V_0 = L_7;
		// if (schemeSplit.Length == 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		// schemeSplit = rawMessage.Split(new string[] {":/"}, System.StringSplitOptions.None);
		String_t* L_9 = ___0_rawMessage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_9, L_11, 0, NULL);
		V_0 = L_12;
	}

IL_0055:
	{
		// if (schemeSplit.Length == 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		// schemeSplit = rawMessage.Split(new string[] {":"}, System.StringSplitOptions.None);
		String_t* L_14 = ___0_rawMessage;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_14, L_16, 0, NULL);
		V_0 = L_17;
	}

IL_0071:
	{
		// if (schemeSplit.Length >= 2) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) < ((int32_t)2)))
		{
			goto IL_01e9;
		}
	}
	{
		// this.Scheme = schemeSplit[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline(__this, L_21, NULL);
		// UniWebViewLogger.Instance.Debug("Get scheme: " + this.Scheme);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_22;
		L_22 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_23;
		L_23 = UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline(__this, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral64F055D7E61FBC80ABEE468986D2A24466198A9D, L_23, NULL);
		NullCheck(L_22);
		UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB(L_22, L_24, NULL);
		// string pathAndArgsString = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int index = 1;
		V_2 = 1;
		goto IL_00b5;
	}

IL_00a7:
	{
		// pathAndArgsString = string.Concat(pathAndArgsString, schemeSplit[index]);
		String_t* L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_0;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_25, L_29, NULL);
		V_1 = L_30;
		// index++;
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b5:
	{
		// while (index < schemeSplit.Length) {
		int32_t L_32 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
		// UniWebViewLogger.Instance.Verbose("Build path and args string: " + pathAndArgsString);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_34;
		L_34 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_35 = V_1;
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral061A8010D4205A1D21073716210E2F8428BD5E14, L_35, NULL);
		NullCheck(L_34);
		UniWebViewLogger_Verbose_m7477D7643820B23D6659CDE47B49B70A167BF376(L_34, L_36, NULL);
		// string[] split = pathAndArgsString.Split("?"[0]);
		String_t* L_37 = V_1;
		NullCheck(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, 0, NULL);
		NullCheck(L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_37, L_38, 0, NULL);
		V_3 = L_39;
		// this.Path = Net.UnEscapeURL(split[0].TrimEnd('/'));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = 0;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		String_t* L_43;
		L_43 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_42, ((int32_t)47), NULL);
		String_t* L_44;
		L_44 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_43, NULL);
		UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline(__this, L_44, NULL);
		// this.Args = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_45, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline(__this, L_45, NULL);
		// if (split.Length > 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_3;
		NullCheck(L_46);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))) <= ((int32_t)1)))
		{
			goto IL_01fe;
		}
	}
	{
		// foreach (string pair in split[1].Split("&"[0])) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48 = 1;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		Il2CppChar L_50;
		L_50 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, 0, NULL);
		NullCheck(L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51;
		L_51 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_49, L_50, 0, NULL);
		V_4 = L_51;
		V_5 = 0;
		goto IL_01dd;
	}

IL_012a:
	{
		// foreach (string pair in split[1].Split("&"[0])) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_4;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		// string[] elems = pair.Split("="[0]);
		NullCheck(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		Il2CppChar L_56;
		L_56 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, 0, NULL);
		NullCheck(L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57;
		L_57 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_55, L_56, 0, NULL);
		V_6 = L_57;
		// if (elems.Length > 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_6;
		NullCheck(L_58);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))) <= ((int32_t)1)))
		{
			goto IL_01d7;
		}
	}
	{
		// var key = Net.UnEscapeURL(elems[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60 = 0;
		String_t* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_61, NULL);
		V_7 = L_62;
		// if (Args.ContainsKey(key)) {
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_63;
		L_63 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_64 = V_7;
		NullCheck(L_63);
		bool L_65;
		L_65 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_63, L_64, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_65)
		{
			goto IL_0199;
		}
	}
	{
		// var existingValue = Args[key];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_66;
		L_66 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_67 = V_7;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_66, L_67, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_8 = L_68;
		// Args[key] = existingValue + "," + Net.UnEscapeURL(elems[1]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_69;
		L_69 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_70 = V_7;
		String_t* L_71 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_6;
		NullCheck(L_72);
		int32_t L_73 = 1;
		String_t* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		String_t* L_75;
		L_75 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_74, NULL);
		String_t* L_76;
		L_76 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_71, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_75, NULL);
		NullCheck(L_69);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_69, L_70, L_76, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_01af;
	}

IL_0199:
	{
		// Args[key] = Net.UnEscapeURL(elems[1]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_77;
		L_77 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_78 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = V_6;
		NullCheck(L_79);
		int32_t L_80 = 1;
		String_t* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		String_t* L_82;
		L_82 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_81, NULL);
		NullCheck(L_77);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_77, L_78, L_82, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_01af:
	{
		// UniWebViewLogger.Instance.Debug("Get arg, key: " + key + " value: " + Args[key]);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_83;
		L_83 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_84 = V_7;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_85;
		L_85 = UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline(__this, NULL);
		String_t* L_86 = V_7;
		NullCheck(L_85);
		String_t* L_87;
		L_87 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_85, L_86, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		String_t* L_88;
		L_88 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral7C18CF1B37B49917E6D8058AC143814D191A0E21, L_84, _stringLiteralC8958CD955E48DB95A49B82386149ED32A9DD59B, L_87, NULL);
		NullCheck(L_83);
		UniWebViewLogger_Debug_m0ACF6E31D335F25643AE2813F4447C0E18DE87FB(L_83, L_88, NULL);
	}

IL_01d7:
	{
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01dd:
	{
		// foreach (string pair in split[1].Split("&"[0])) {
		int32_t L_90 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = V_4;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_012a;
		}
	}
	{
		return;
	}

IL_01e9:
	{
		// UniWebViewLogger.Instance.Critical("Bad url scheme. Can not be parsed to UniWebViewMessage: " + rawMessage);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_92;
		L_92 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_93 = ___0_rawMessage;
		String_t* L_94;
		L_94 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B49369FB3D81533ACCE4CC50C7A93DE8EE95FBB, L_93, NULL);
		NullCheck(L_92);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_92, L_94, NULL);
	}

IL_01fe:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31_AdjustorThunk (RuntimeObject* __this, String_t* ___0_rawMessage, const RuntimeMethod* method)
{
	UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3*>(__this + _offset);
	UniWebViewMessage__ctor_mB7BC54EAE6F2C87CAD0C7E4C06B3B322039E4F31(_thisAdjusted, ___0_rawMessage, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewNativeListener::AddListener(UniWebViewNativeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Add(target.Name, target);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = ((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners_4;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = ___0_target;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3 = ___0_target;
		NullCheck(L_0);
		Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF(L_0, L_2, L_3, Dictionary_2_Add_m35248FA6DA553D6A8082C9318F63F98D23FB89AF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::RemoveListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Remove(name);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = ((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198(L_0, L_1, Dictionary_2_Remove_m39B09CBAD5D2D9156D29277D0788191D6C2AF198_RuntimeMethod_var);
		// }
		return;
	}
}
// UniWebViewNativeListener UniWebViewNativeListener::GetListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* UniWebViewNativeListener_GetListener_m39275F3A5DE6212AE442AA579034C7F4169674D5 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* V_0 = NULL;
	{
		// UniWebViewNativeListener result = null;
		V_0 = (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423*)NULL;
		// if (listeners.TryGetValue(name, out result)) {
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = ((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m8BFB0BB6D03FE0A2EA06E89719B4DD3C981125CC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423*)NULL;
	}
}
// System.String UniWebViewNativeListener::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		return L_1;
	}
}
// System.Void UniWebViewNativeListener::PageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageStarted_m11F7F5E75CBDAC8538AB1090C0890D2640080240 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Page Started Event. Url: " + url);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_url;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA82D23700F6B0488E16EC900CE9C012B8B8D5EF5, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnPageStarted(url);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_url;
		NullCheck(L_3);
		UniWebView_InternalOnPageStarted_mCC7F59BDFB3D6DCE5BB86478DA91B1C47765D9AE(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::PageFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageFinished_m8329BE83B6D2D45A61785DB1E04D5DA7A51367E7 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCC81426293B91F35B234307120A0683A8E8468A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Page Finished Event. Url: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCCC81426293B91F35B234307120A0683A8E8468A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnPageFinished(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageFinished_mC5C2526387EBD9A3C91AA5A7FBEA43578ECC616A(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::PageErrorReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageErrorReceived_m4C6931CEA51048A72892DC6A471B7E1D83921999 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Page Error Received Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD6BB3661E0B8AF7D91E3EB869BE4036AE1C39321, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnPageErrorReceived(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageErrorReceived_mF2FD6E5D4B839AC9CDB00497C9C07BC5672DAACF(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::PageProgressChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageProgressChanged_m4D70E0077FA782F0BFA6DD3B566DEA8F6853CA03 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (float.TryParse(result, out progress)) {
		String_t* L_0 = ___0_result;
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// webView.InternalOnPageProgressChanged(progress);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_2 = __this->___webView_5;
		float L_3 = V_0;
		NullCheck(L_2);
		UniWebView_InternalOnPageProgressChanged_m315FCE400C99F88020084AD9EE72C97B29B5370C(L_2, L_3, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::ShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_ShowTransitionFinished_m68539822FEC02CC0EA73483E19BBDD764A370292 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_identifer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Show Transition Finished Event. Identifier: " + identifer);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_identifer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral304D400932589AB6698AC3233B263A5EF8C1BE0A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnShowTransitionFinished(identifer);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_identifer;
		NullCheck(L_3);
		UniWebView_InternalOnShowTransitionFinished_m43B0D8548BC33F30B809AAE5ACCC6451658B740B(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::HideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_HideTransitionFinished_m3C02B673176C9442278346DD3A6F098EED2EEFD6 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_identifer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Hide Transition Finished Event. Identifier: " + identifer);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_identifer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3BDBF19BEE52D0F6D468D06193E3655A9A4DF9F5, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnHideTransitionFinished(identifer);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_identifer;
		NullCheck(L_3);
		UniWebView_InternalOnHideTransitionFinished_m0384C70ED27CF10A11297B4D8D3A71A7076E92D8(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::AnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AnimateToFinished_mBC750BF1D399DA39EF07AAF3DAD23087CB3052E5 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_identifer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Animate To Finished Event. Identifier: " + identifer);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_identifer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7E2CDB796AC0AE13882E39A6F26B9DF2B27D6A30, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnAnimateToFinished(identifer);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_identifer;
		NullCheck(L_3);
		UniWebView_InternalOnAnimateToFinished_m5FCE7F89EDEAAE8673ECBF8BC0E5BF7CCE2B9632(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::AddJavaScriptFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddJavaScriptFinished_m5EDB2431BEB92563394D1CC0890601670C53C17E (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Add JavaScript Finished Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB0D5E7C91F6A2B19CACBDBA3D85F48CDC24A51E8, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnAddJavaScriptFinished(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnAddJavaScriptFinished_m1D42374A36244250F2F6124A0C819B33C5684378(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::EvalJavaScriptFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_EvalJavaScriptFinished_m4B1F127A23161172F087CAB993AC024F2DA55EBE (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBDA72250283979F1A464C506665274601F2A0C);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("Eval JavaScript Finished Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4EBDA72250283979F1A464C506665274601F2A0C, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnEvalJavaScriptFinished(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnEvalJavaScriptFinished_mF80A34BC2BD3F5063BE79C98245CF7D397C7A3E7(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::MessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MessageReceived_m831A2CDEDFA23CDC76A417F6C284D4CADAF851A2 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Message Received Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7B7D33323BA93D25E3749ABC98725558724ACFB3, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnMessageReceived(result);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_result;
		NullCheck(L_3);
		UniWebView_InternalOnMessageReceived_m6BA779B133E0858266E4C25E5935FE4D78918356(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::WebViewDone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebViewDone_mCF725C4049CD090E6CE506C3E318FED4354FEF3E (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Web View Done Event.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteral7EF67CAF3681E05C484A06FDBC22B44C14E1963A, NULL);
		// webView.InternalOnShouldClose();
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_1 = __this->___webView_5;
		NullCheck(L_1);
		UniWebView_InternalOnShouldClose_m288E6C12B6CBB95922E6F700061E148F2658FBC9(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::WebContentProcessDidTerminate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebContentProcessDidTerminate_mEC3AFBE42BD02ED57C3F3D0E68473DE462A6B6F3 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Web Content Process Terminate Event.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteral6531E410A254E705B3486A18962DF55BBAA92F7F, NULL);
		// webView.InternalOnWebContentProcessDidTerminate();
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_1 = __this->___webView_5;
		NullCheck(L_1);
		UniWebView_InternalOnWebContentProcessDidTerminate_mDDD3AEF0EC6AD327ACA6B8E9BCD71B6EB73DADDE(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::SafeBrowsingFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_SafeBrowsingFinished_m41907D144429C9D4D4B53CF862EBB98384630541 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("Safe Browsing Finished.");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, _stringLiteral1A2B081AE1D8E7C26E7F45F730E331D5BE655471, NULL);
		// safeBrowsing.InternalSafeBrowsingFinished();
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_1 = __this->___safeBrowsing_6;
		NullCheck(L_1);
		UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_mE666E18A32CA3A020190C9A9738221344796977B(L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::MultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MultipleWindowOpened_mD4AD7633A634D6E99AF2C037A6897D0EA7A5E881 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("MultipleWindowOpened Event. Multi Window: " + param);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_param;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF86D7EC622B6AE932581F530BC9EAE6B3A4BEAF, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnMultipleWindowOpened(param);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_param;
		NullCheck(L_3);
		UniWebView_InternalOnMultipleWindowOpened_m511D2F03883B77233CDF1975E80DA01531E52C05(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::MultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MultipleWindowClosed_m1DECF2DA7A06B4B0367AE4CA4361F78A9E354046 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewLogger.Instance.Info("MultipleWindowClose Event. Multi Window: " + param);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_param;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral52F373B73A2B66DC4990D649FA0DA946AB9A6A10, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// webView.InternalOnMultipleWindowClosed(param);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_param;
		NullCheck(L_3);
		UniWebView_InternalOnMultipleWindowClosed_m1B0A5F7048AC06C683C48C1232B840454F39C028(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::FileDownloadStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_FileDownloadStarted_m2BC237CB837819B5EEE2E0A6F26738B8726B3D3D (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("FileDownloadStarted Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral201BBE82FF73DFCCE02EF3047E980480E054DF3A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnFileDownloadStarted(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnFileDownloadStarted_mF8149818A85DB5C0448A0DF32B3626F0D00A8378(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::FileDownloadFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_FileDownloadFinished_m03BE5E0D39927DF5D153420FEC8386560020BF38 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("FileDownloadFinished Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD266A18472019B973EDB918EFBE306F0D0D9413C, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnFileDownloadFinished(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnFileDownloadFinished_mBFE7FC899642D5F12106559319E0E35DC944EB8A(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::CaptureSnapshotFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener_CaptureSnapshotFinished_m427172C38BD3132FD44BC324D9B4C0618DB96E08 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// UniWebViewLogger.Instance.Info("CaptureSnapshotFinished Event. Result: " + result);
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_0;
		L_0 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3DD62E04D9C08A1A20E499E6C090334BDCBB140A, L_1, NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m91251A5E43B30BFDAA37C8708E840AFD5DC85003(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnCaptureSnapshotFinished(payload);
		UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnCaptureSnapshotFinished_mE3338681266888F771F1A9C89F43F831C325690E(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewNativeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener__ctor_m3262259BA11873A336B0A575008DD24952005468 (UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeListener__cctor_mF7BA2C9D0ABFE719B894C97BF67CD5F78E4DB67A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<String, UniWebViewNativeListener> listeners = new Dictionary<String, UniWebViewNativeListener>();
		Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE* L_0 = (Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE*)il2cpp_codegen_object_new(Dictionary_2_tDC210348B6F450F31A24ECF0C13B044D2DF1CCAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E(L_0, Dictionary_2__ctor_m5882C0F77F264EC25EF9EBBFD8360E84A079C50E_RuntimeMethod_var);
		((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var))->___listeners_4), (void*)L_0);
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
// System.Void UniWebViewNativeResultPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeResultPayload__ctor_m376159F6A83E6F4D512C683F23FE3963CCE28A07 (UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* __this, const RuntimeMethod* method) 
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
// System.Void UniWebViewSafeBrowingComponent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowingComponent_Start_m645CAED48CF368D847947021DA96E8721E277FA7 (UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(url)) {
		String_t* L_0 = __this->___url_4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("The `url` is empty or null. Set a valid url in the prefab before you initialize it.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA83A925538F3CF2C8C3F376EE41897EBDE39B11A, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// var safeBrowsing = UniWebViewSafeBrowsing.Create(url);
		String_t* L_2 = __this->___url_4;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_3;
		L_3 = UniWebViewSafeBrowsing_Create_mC444524EA64AC27D905C841A0BBE81BF55B25794(L_2, NULL);
		// safeBrowsing.Show();
		NullCheck(L_3);
		UniWebViewSafeBrowsing_Show_m7FC6AEC9841DC9F4F425ECFAF34472CF75FA337D(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowingComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowingComponent__ctor_m66A091D86F01159C8B1663937BA9E258BCD5DCF7 (UniWebViewSafeBrowingComponent_t167EE3B984ADED602FD561B25B927F13C743FDC4* __this, const RuntimeMethod* method) 
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
// System.Void UniWebViewSafeBrowsing::add_OnSafeBrowsingFinished(UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_add_OnSafeBrowsingFinished_m2B1523726E5DAB12FEBEB70BE15FB1C84FD38009 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_0 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_1 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_2 = NULL;
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_0 = __this->___OnSafeBrowsingFinished_4;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_1 = V_0;
		V_1 = L_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_2 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)CastclassSealed((RuntimeObject*)L_4, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var));
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296** L_5 = (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296**)(&__this->___OnSafeBrowsingFinished_4);
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_6 = V_2;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_7 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_9 = V_0;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_9) == ((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::remove_OnSafeBrowsingFinished(UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_remove_OnSafeBrowsingFinished_mA42ADDB0A90572B96F72A41D9AD11C22D9D4C0C7 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_0 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_1 = NULL;
	OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* V_2 = NULL;
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_0 = __this->___OnSafeBrowsingFinished_4;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_1 = V_0;
		V_1 = L_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_2 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)CastclassSealed((RuntimeObject*)L_4, OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296_il2cpp_TypeInfo_var));
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296** L_5 = (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296**)(&__this->___OnSafeBrowsingFinished_4);
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_6 = V_2;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_7 = V_1;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_9 = V_0;
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_9) == ((RuntimeObject*)(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UniWebViewSafeBrowsing::get_IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_mDA309DDBE04C13BF0F2F6B063D97F0E22D59D340 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.IsSafeBrowsingSupported();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UniWebViewInterface_IsSafeBrowsingSupported_m9F76E5D4EBAA15D5E2243D40D9BD34D0879AB938(NULL);
		return L_0;
	}
}
// UniWebViewSafeBrowsing UniWebViewSafeBrowsing::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* UniWebViewSafeBrowsing_Create_mC444524EA64AC27D905C841A0BBE81BF55B25794 (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* V_0 = NULL;
	{
		// var safeBrowsing = new UniWebViewSafeBrowsing();
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_0 = (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*)il2cpp_codegen_object_new(UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UniWebViewSafeBrowsing__ctor_m11815A3213110A74C5F32C3F740E6547DAD8BD9F(L_0, NULL);
		V_0 = L_0;
		// if (!UniWebViewHelper.IsEditor) {
		bool L_1;
		L_1 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// safeBrowsing.listener.safeBrowsing = safeBrowsing;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_3 = L_2->___listener_6;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_4 = V_0;
		NullCheck(L_3);
		L_3->___safeBrowsing_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___safeBrowsing_6), (void*)L_4);
		// safeBrowsing.Init(url);
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_5 = V_0;
		String_t* L_6 = ___0_url;
		NullCheck(L_5);
		UniWebViewSafeBrowsing_Init_mE99E67B592AF74177A542B69CC2D9A9934D46B9A(L_5, L_6, NULL);
	}

IL_0020:
	{
		// safeBrowsing.url = url;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_7 = V_0;
		String_t* L_8 = ___0_url;
		NullCheck(L_7);
		L_7->___url_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___url_7), (void*)L_8);
		// return safeBrowsing;
		UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* L_9 = V_0;
		return L_9;
	}
}
// System.Void UniWebViewSafeBrowsing::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Show_m7FC6AEC9841DC9F4F425ECFAF34472CF75FA337D (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AFD68B13AA8A51CDA93902ADD4D3CD3BB395061);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UniWebViewSafeBrowsing.IsSafeBrowsingSupported) {
		bool L_0;
		L_0 = UniWebViewSafeBrowsing_get_IsSafeBrowsingSupported_mDA309DDBE04C13BF0F2F6B063D97F0E22D59D340(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// UniWebViewInterface.SafeBrowsingShow(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56(L_2, NULL);
		return;
	}

IL_0018:
	{
		// if (!UniWebViewHelper.IsEditor) {
		bool L_3;
		L_3 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// UniWebViewLogger.Instance.Critical(@"UniWebViewSafeBrowsing.Show is called but the current device does
		// not support Safe Browsing.
		// This might be due to Chrome or any other processing app is not installed, or the manifest file not
		// configured correctly. Check SafeBrowsing Mode guide for more:  https://docs.uniwebview.com/guide/safe-browsing.html");
		UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* L_4;
		L_4 = UniWebViewLogger_get_Instance_m82389D732BA7476F9BFD7B495B2A8D900B685827(NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mE9942E008038F7D3D1B147D2686B51A5862C4949(L_4, _stringLiteral6AFD68B13AA8A51CDA93902ADD4D3CD3BB395061, NULL);
	}

IL_002e:
	{
		// Application.OpenURL(url);
		String_t* L_5 = __this->___url_7;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_5, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::Dismiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Dismiss_m3D1E6F0AB2F11BAA30EB5BE4209CA43353CAD018 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::SetToolbarColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_SetToolbarColor_m315F17283C9B61F7A8B48F838758596C40BF8F79 (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!UniWebViewHelper.IsEditor) {
		bool L_0;
		L_0 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// UniWebViewInterface.SafeBrowsingSetToolbarColor(listener.Name, color.r, color.g, color.b);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_1 = __this->___listener_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		float L_4 = L_3.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color;
		float L_6 = L_5.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_color;
		float L_8 = L_7.___b_2;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD(L_2, L_4, L_6, L_8, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::SetToolbarItemColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_SetToolbarItemColor_m95A80A9E40C39ACEB7554644E5BEF5055840FAEF (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing__ctor_m11815A3213110A74C5F32C3F740E6547DAD8BD9F (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// private string id = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___id_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_5), (void*)L_1);
		// private UniWebViewSafeBrowsing() {
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		// if (!UniWebViewHelper.IsEditor) {
		bool L_2;
		L_2 = UniWebViewHelper_get_IsEditor_m19E05C1E8D4CEE5A7C1B123F313D0079F0B142C7(NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		// var listenerObject = new GameObject(id);
		String_t* L_3 = __this->___id_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		V_1 = L_4;
		// listener = listenerObject.AddComponent<UniWebViewNativeListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_6;
		L_6 = GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D(L_5, GameObject_AddComponent_TisUniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_m581DD65242CB14B14DC5D49378E978B06349D00D_RuntimeMethod_var);
		__this->___listener_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_6), (void*)L_6);
		// UniWebViewNativeListener.AddListener(listener);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_7 = __this->___listener_6;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_mDA0D252CE6ADD3BD00D4279503333839A32C4646(L_7, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_Init_mE99E67B592AF74177A542B69CC2D9A9934D46B9A (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SafeBrowsingInit(listener.Name, url);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_0 = __this->___listener_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_0, NULL);
		String_t* L_2 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewSafeBrowsing::InternalSafeBrowsingFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewSafeBrowsing_InternalSafeBrowsingFinished_mE666E18A32CA3A020190C9A9738221344796977B (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnSafeBrowsingFinished != null) {
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_0 = __this->___OnSafeBrowsingFinished_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnSafeBrowsingFinished(this);
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* L_1 = __this->___OnSafeBrowsingFinished_4;
		NullCheck(L_1);
		OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		// UniWebViewNativeListener.RemoveListener(listener.Name);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_2 = __this->___listener_6;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = UniWebViewNativeListener_get_Name_m118DE113ACADC4D0E8DD3230ADDE1F4146F1792C(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_m6349FABAC78F87FD6AE5DAEDD1945F03F7221713(L_3, NULL);
		// Destroy(listener.gameObject);
		UniWebViewNativeListener_t01E5D3A50E9EFDDA6686FB3D429FC92A9ABD8423* L_4 = __this->___listener_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
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
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_Multicast(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* currentDelegate = reinterpret_cast<OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_browsing, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInst(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_browsing, method);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenStatic(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_browsing, method);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenStaticInvoker(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	InvokerActionInvoker1< UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_ClosedStaticInvoker(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenVirtual(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInterface(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericVirtual(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	GenericVirtualActionInvoker0::Invoke(method, ___0_browsing);
}
void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericInterface(OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_browsing);
}
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate__ctor_m5004997A03E045519011AE41B6F6B2A771A7D532 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_Multicast;
}
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::Invoke(UniWebViewSafeBrowsing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_browsing, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::BeginInvoke(UniWebViewSafeBrowsing,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSafeBrowsingFinishedDelegate_BeginInvoke_m100A97ACF7A17AB75B2B3B31FD51C48047370204 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_browsing;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void UniWebViewSafeBrowsing/OnSafeBrowsingFinishedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_EndInvoke_m9D574CCABAB5DFF795F7203C0EBF3897B573A861 (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_m1B44877C758FE658D0AFA3566DE1184DFBD4B05B_inline (OrientationChangedDelegate_tEB2763358C46298414784FEE2427450944E67F5E* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_orientation, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_orientation, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mED9A9295C572CE334C07DE42D322812E5CA48543_inline (PageFinishedDelegate_tA8E38188B50C47DD1D25FFBF593966D879398AAC* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m590109D6ED47A4F014854815B3C43787848A9310_inline (PageStartedDelegate_t8BDD355FAFFA8DD29115D0FC742D8DDC380C3213* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m0DCB103850B9CCF56CF248E1B08F92B45454BE7E_inline (PageErrorReceivedDelegate_t3A968389EE2D49A749B2BFBD7E7498EBCD79E347* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PageProgressChangedDelegate_Invoke_m4D6CCAE32197A76E89D896929A2977120E422F87_inline (PageProgressChangedDelegate_t7228A60A666E1A4D6522BB029EEECDE837762FC1* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, float ___1_progress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mD3C7DE217DC2449F69AE8F7AAFD79C3A47726ED4_inline (MessageReceivedDelegate_t8DB522A951A046A6A5AD79777CBC16C8627BF951* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3 ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m9B14E86E2922B2D31D1FB4B54A5F4768A590D91E_inline (ShouldCloseDelegate_tF600E7BEE4D17F788A10A0DF7A9CB7D60115D667* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m7A79F18C9B0E7A40C6A05228B0EF09E92AEBA75F_inline (OnWebContentProcessTerminatedDelegate_t9EEDB45761A9199576C88618AB9D4D7D930FF6E0* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowOpenedDelegate_Invoke_m37457EAAC999E0F150E6C12CDF0EFC0FE213F998_inline (MultipleWindowOpenedDelegate_tFB0D4BD98BA904E1613DED927B5C7134E5B656D6* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultipleWindowClosedDelegate_Invoke_mC4098BC72BE7763A3EE2D2D70056E3237F09A85A_inline (MultipleWindowClosedDelegate_t7B42BFC785F5803CCA716C0E68F89CC2DCA21BA8* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_multipleWindowId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_multipleWindowId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadStarted_Invoke_m16756DFAAF930CE4CEFDC35B348DA23956CEF964_inline (FileDownloadStarted_t09F1F8D69077F6B67AC9B44E85039F0A41B42615* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, String_t* ___1_remoteUrl, String_t* ___2_fileName, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_remoteUrl, ___2_fileName, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileDownloadFinished_Invoke_mB0739E713EB4ED24ED5BEE8BF13547A0E2523A22_inline (FileDownloadFinished_t3502DB65001067342D8DC16711127BA20F4B97CE* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_remoteUrl, String_t* ___3_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_remoteUrl, ___3_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CaptureSnapshotFinished_Invoke_m385FB8D2B4EFAB67CE554FD8235702A3F9150F6F_inline (CaptureSnapshotFinished_t54F2D3943A01D715E75F62D27C25599CB2C44F68* __this, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C* ___0_webView, int32_t ___1_errorCode, String_t* ___2_diskPath, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebView_t10DBFF7F8769D77D6CC53EAE58479401D107527C*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_diskPath, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_mDD6D8292FDF564448574978C418BD4A1D042A761_inline (UniWebViewLogger_tCC52C6CFEB27096E20A64A468F0522A8946E0F9B* __this, const RuntimeMethod* method) 
{
	{
		// get { return level; }
		int32_t L_0 = __this->___level_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mA50E0A27C5843A01C66D5E21860E9A2ACB8BC73F_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = __this->___U3CRawMessageU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4AFBC62D619123F8FF4703D1010830A22BA19FA4_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string RawMessage {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CRawMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m8AFEC9948C781D984787F1AA405B0238B3B6A88D_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = __this->___U3CSchemeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m0A06F412CA63BC5B5FDB63C52030E40D8517D991_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CSchemeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m35505E576E5D9CFC542FA04B063A3D90EE2ADEB9_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_mA26EABB9F47156B69CE03D73E499856242553BE6_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* UniWebViewMessage_get_Args_m7E99246BC6118B4EE1DBB4792BC30A1280B8761B_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CArgsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mD3710215CEA4DD5102A2674A3A356756F70DF62A_inline (UniWebViewMessage_tE9603C59D658AC28F2024A91DADFDD84F09F98C3* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CArgsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSafeBrowsingFinishedDelegate_Invoke_mAA6F989043BD6E3C0B8A6EFD21EDD745ED903AF5_inline (OnSafeBrowsingFinishedDelegate_tFFD739B3CD5975D92CF514AD44CCE41F8473E296* __this, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4* ___0_browsing, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, UniWebViewSafeBrowsing_tEF14657DF2144FA77FDA9C6C16F4E9075CB54BC4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_browsing, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
