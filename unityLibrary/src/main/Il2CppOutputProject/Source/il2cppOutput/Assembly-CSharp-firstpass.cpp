#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<Samsung.ConsumedList>
struct Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Samsung.OwnedProductList>
struct Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A;
// System.Action`1<Samsung.ProductInfoList>
struct Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248;
// System.Action`1<Samsung.PurchasedInfo>
struct Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Samsung.ConsumeVo>
struct List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Samsung.OwnedProductVo>
struct List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2;
// System.Collections.Generic.List`1<Samsung.ProductVo>
struct List_1_tD936425E3FC6B9BB6065F89106F6426003D12522;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.Events.UnityEvent`1<Samsung.ConsumedList>
struct UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Samsung.OwnedProductList>
struct UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E;
// UnityEngine.Events.UnityEvent`1<Samsung.ProductInfoList>
struct UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64;
// UnityEngine.Events.UnityEvent`1<Samsung.PurchasedInfo>
struct UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Samsung.ConsumeVo[]
struct ConsumeVoU5BU5D_t977D0AA3CBD0998DE0662945825D9DC1F3B89428;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Samsung.OwnedProductVo[]
struct OwnedProductVoU5BU5D_tAA5C0D38FC87EB6600681FA1B84855623119D273;
// Samsung.ProductVo[]
struct ProductVoU5BU5D_t85C249DA6FE06FC77CF78282C4FB17EEFACDBE27;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Samsung.ConsumeVo
struct ConsumeVo_tE963F93A5EDFBD3B78F95A8B4502765388A4D55A;
// Samsung.ConsumedList
struct ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5;
// CrashSightAgent
struct CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499;
// CrashSightCallback
struct CrashSightCallback_t192CF42C711A04034586241BD5197DC691464371;
// CrashSightInit
struct CrashSightInit_t7353C257410EDEC9C1429D48B413D1444D8CEE3E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Samsung.ErrorVo
struct ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Samsung.OnConsumeEvent
struct OnConsumeEvent_tA44D8A1B6264B4E984E9A50A7B42B758E336B183;
// Samsung.OnGetOwenedListEvent
struct OnGetOwenedListEvent_t625D61708537A479849FDED1322F1C2CF26C0BCE;
// Samsung.OnGetProductsEvent
struct OnGetProductsEvent_t5FD899A99145270F6CB2BB95F481D818C60F7902;
// Samsung.OnPaymentEvent
struct OnPaymentEvent_t89D0DDCD359EB295F4D92C5F2257A0301DC91030;
// Samsung.OwnedProductList
struct OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899;
// Samsung.OwnedProductVo
struct OwnedProductVo_tB01803442CB1F8FE9F2B14202C53116129054A87;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Samsung.ProductInfoList
struct ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78;
// Samsung.ProductVo
struct ProductVo_t9C892CC0E154DA10C25FC853461466FC7BAAE437;
// Samsung.PurchaseVo
struct PurchaseVo_tE560C8320502F61108F395FF5041176401526CC7;
// Samsung.PurchasedInfo
struct PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Samsung.SamsungIAP
struct SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// CrashSightAgent/LogCallbackDelegate
struct LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemType_t416DA71B1227A0BC184E9A40EA2AED87F57B7A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationMode_t95C6B95842D03B4EA90D096444B87A6EE13E66FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0175F2EDCBB5157569964E27CB766AF4AC26FC00;
IL2CPP_EXTERN_C String_t* _stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0E2AE0C689B3C0D89156B133D569028DBEAF562F;
IL2CPP_EXTERN_C String_t* _stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102;
IL2CPP_EXTERN_C String_t* _stringLiteral137F5DA697E776E7439C5B6BA3A94B1971D4AEA8;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral1780C9D697028269A3C92002ED56CF64F3593925;
IL2CPP_EXTERN_C String_t* _stringLiteral182B2D4654D5D0DE45B794EA5F4E54EF2EF0FA7E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1F837876F9B76AAA4A548C5C461F85CFA2E906D1;
IL2CPP_EXTERN_C String_t* _stringLiteral1FAB07429217DDFAAE6578F7AC0DE15E702EEB82;
IL2CPP_EXTERN_C String_t* _stringLiteral204FB93C3572CB4480C96CACFA116D0BB3BD8C16;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral224790F8AD5EE970D3E080EA2525C761CC78B647;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral23B647BE23E44FDCAA8BAF2DADD09617EA84961B;
IL2CPP_EXTERN_C String_t* _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D;
IL2CPP_EXTERN_C String_t* _stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5;
IL2CPP_EXTERN_C String_t* _stringLiteral275475888FD46983B9997B4C8DC5627251DF3484;
IL2CPP_EXTERN_C String_t* _stringLiteral285CC2630BFF971E0806D28627F47E9284BA22A0;
IL2CPP_EXTERN_C String_t* _stringLiteral29CA327AC02DECBAFA88FF05C3318D491C02A30C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral2FC877C2B8C8CB8BD4A186C7CCE90E96C49AEEDD;
IL2CPP_EXTERN_C String_t* _stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C;
IL2CPP_EXTERN_C String_t* _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373;
IL2CPP_EXTERN_C String_t* _stringLiteral32179EE9DAFFD9CCB151AE296F3D0C0CBE6F1A22;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B;
IL2CPP_EXTERN_C String_t* _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440;
IL2CPP_EXTERN_C String_t* _stringLiteral397F9B2E1438065E772B28A4CA8CF0E4A0D20E95;
IL2CPP_EXTERN_C String_t* _stringLiteral399424EAA0A270B0E89CD41833FF269CAD6AE3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C631DB5E5A63352B8CCB79F305E59B215779195;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC476F25BB96DF3AB48B85C9B4556E3A8EECDDF;
IL2CPP_EXTERN_C String_t* _stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral416D207BAA8DA08EF85D43D4D1C69260F7735AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E;
IL2CPP_EXTERN_C String_t* _stringLiteral4808ACA9668728D6BBF49150A76132057225944C;
IL2CPP_EXTERN_C String_t* _stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7;
IL2CPP_EXTERN_C String_t* _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral56C59749732F13B10E597964D8BC3F7B8B1C4A39;
IL2CPP_EXTERN_C String_t* _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293;
IL2CPP_EXTERN_C String_t* _stringLiteral5D95A0C3E069E9CAC86BBCD65C4AF5A15F6019C1;
IL2CPP_EXTERN_C String_t* _stringLiteral61D8F0C7DA51EA09D22C0604473E8A37EB463181;
IL2CPP_EXTERN_C String_t* _stringLiteral63417D112A391E256F1F6EB23C6065DCB592A88A;
IL2CPP_EXTERN_C String_t* _stringLiteral669F15A84AF7656AD4522C599D67132E9745C548;
IL2CPP_EXTERN_C String_t* _stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5;
IL2CPP_EXTERN_C String_t* _stringLiteral6A31488BBC8233A775DEC6E5C4D770817F3D2B7E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DABD1488065CFF66778EC7BBD2CA6ABB26ED726;
IL2CPP_EXTERN_C String_t* _stringLiteral6E571100EBB444DF5BCE485719D2C592256FE1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral6F26819F5682C2D9A7CF7FC3B13CFE79F6D59A47;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5F4B730831B20589268119FBDEDC2466F08E22;
IL2CPP_EXTERN_C String_t* _stringLiteral73CD64D2BDF2FEED77CFE2377AE1C46B203F0B73;
IL2CPP_EXTERN_C String_t* _stringLiteral74BFD4D51555329F003EF06A916825CC6B7A57FC;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral766520BA122B11639DEA21FD11348396C1DA431F;
IL2CPP_EXTERN_C String_t* _stringLiteral774A5B40D09A00B05FEBF22D0FE8AD88A630C583;
IL2CPP_EXTERN_C String_t* _stringLiteral7A21B738582222CA9FACA0509F3CB9B207C50446;
IL2CPP_EXTERN_C String_t* _stringLiteral7D6CFDA9ED811560588EFEC19B7DFA98F3A05A44;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE18B9B94414FE9BDBA0668D8B260329D4DF2AA;
IL2CPP_EXTERN_C String_t* _stringLiteral7E697F948E1E198164B5B09B250C324F3D1044CB;
IL2CPP_EXTERN_C String_t* _stringLiteral822B496EE7630A0562263AF42972445ECA49F024;
IL2CPP_EXTERN_C String_t* _stringLiteral83DCA8A05A6F992296886A45A5A408CDA434772F;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051;
IL2CPP_EXTERN_C String_t* _stringLiteral8C75570146F867BCCDAC1ACD6D987C81B86D9B25;
IL2CPP_EXTERN_C String_t* _stringLiteral8D0EDAE8218575FC34769326FAE5D1CA527D46BA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E;
IL2CPP_EXTERN_C String_t* _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F;
IL2CPP_EXTERN_C String_t* _stringLiteral9A2D33EE20E51717CDC6859049AB64AAAF108C53;
IL2CPP_EXTERN_C String_t* _stringLiteral9C8693CE7D88AAF366EE179A4BB705613CEBDD81;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFBE377C68F7E47841152AD0B970F9731B1D2B7;
IL2CPP_EXTERN_C String_t* _stringLiteral9E671F7408FA1F2195439E518380763663AFB80F;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F;
IL2CPP_EXTERN_C String_t* _stringLiteralA039BE88B8D6B21CA08227A0DE60A77BACD4ED1D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3277C4838DA010F5768CAC824838A6DF2E8E082;
IL2CPP_EXTERN_C String_t* _stringLiteralA392FB5E31FE22CF5451C4C52C4FDCA87A1EE7FF;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CCD82CACA1451C7E9EF39C174DFD4D06BE4906;
IL2CPP_EXTERN_C String_t* _stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F;
IL2CPP_EXTERN_C String_t* _stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43;
IL2CPP_EXTERN_C String_t* _stringLiteralAAECD198D8E0B1975698349EC6BA11C23F4DA7FB;
IL2CPP_EXTERN_C String_t* _stringLiteralAB47308B6792A97C9CAD782CFFF97BBB26848A75;
IL2CPP_EXTERN_C String_t* _stringLiteralABAE1155CE9EFC0F9A95E89CB74687207B87B365;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5B8D1C9401E75E664CC0008025E462198BCD3B;
IL2CPP_EXTERN_C String_t* _stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4D4F7CFAAF34EC0E2FF33AFD0AF84D99F8D9EC;
IL2CPP_EXTERN_C String_t* _stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1;
IL2CPP_EXTERN_C String_t* _stringLiteralB7288AA095EE8871F7C1052F9C7FF6265BC3D468;
IL2CPP_EXTERN_C String_t* _stringLiteralB7662F5FA906C2869CBEBC0D8CD3F8FE295542F3;
IL2CPP_EXTERN_C String_t* _stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9CF8DF92CFFB773B095C5AAF4373358DA0B923;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8;
IL2CPP_EXTERN_C String_t* _stringLiteralC8383E12E7FD30422266E9DACA776327E32FBB40;
IL2CPP_EXTERN_C String_t* _stringLiteralC8D209392969C3122523988F0070F12A63316400;
IL2CPP_EXTERN_C String_t* _stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0;
IL2CPP_EXTERN_C String_t* _stringLiteralCEEE3D01E1D6C32865B014D6751C666740D67F9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD05CDDE1AE2D6CAA8F1D80F6ADFD5B9A75D1E235;
IL2CPP_EXTERN_C String_t* _stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A22358EC39BA907C894111803520622DEF4324;
IL2CPP_EXTERN_C String_t* _stringLiteralD8235FE403BAB44634519FA4D2B9135A19A0C45D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E4A2FDC293FF035F0FB42F1F6578603E80F361;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE083A65F141355ABDA5CB33303F2A6A63F7EE24D;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2952F0BB2A78DA3A34151196F3A9763D2206AC;
IL2CPP_EXTERN_C String_t* _stringLiteralECABF18065268EB411BB465302677CB028AA90BB;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE81E7F7616078E6059EF5FB25758578E1A858B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF41FCA3E897860930F772B8229AB620CA99B9E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralF4AE13C92B42301EA117DEFB9940611CF9928C50;
IL2CPP_EXTERN_C String_t* _stringLiteralFB13B1A6B5635EEB1C610A9E87D1B0914B469581;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDBC88F451708877242143919478A7B7F581F79;
IL2CPP_EXTERN_C String_t* _stringLiteralFC880FFD647222133300E9941C584DD14A850725;
IL2CPP_EXTERN_C String_t* _stringLiteralFCD982A3A939A85227D3B73B36FED88F2D5FC9B6;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8FAA0E1FE9EBF6FABEC9106C1163F6B26894B4;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrashSightAgent__OnLogCallbackHandler_m53E1FCF94C31AD3F046595F030D1656198A9C83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrashSightAgent__OnUncaughtExceptionHandler_m6212DF609A9500E2511758550E135A90C3365300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrashSightInit_MyLogCallbackExtrasHandler_m735091C2E267482CB1C9DF2FA80F944C7F44BC43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5_mC2EA587556F07390FFDB0F5FFD174360EF76FA87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisOwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899_mED001104C658636D98957E3AA100F4BB179E2CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78_m5774B910616EDC3F834A692A571783B32EAA3701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71_m3EA6B9620F3BE4CD2DD343EABEEC48C6A85738A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m60F86A7946E7816DB15DA2AEF348AD3697BF45C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBEEC680CA6BE69EC147AC9CFF3B5093A3D4CD04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC6F212CD7981D9FABE55450FED01F69323A7E19E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_mE68C5ADBC592DFD80220691AE6DFE1D919907549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m25BF081F681ED3B48E130993A7E86F81C159F1D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m43087C5CAA181F58F840322C43E0000CE3C2CFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m69852C0BB4EC9BCBE77AB8C5FBC2D59753299C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA50846D1A6902B85BB2AB083B025584E0EDC11F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m084D32B0BA544960BA8776B08F847006E22AE6F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m2630ECA871B684134FC7E3F9B07D35B666177AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m54975E6DBAD311924EDB6E4D009558D12950A4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB95BA75E33FEB4107C72EFA05B6A02DDCAD7BBAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
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

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Samsung.ConsumeVo>
struct List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConsumeVoU5BU5D_t977D0AA3CBD0998DE0662945825D9DC1F3B89428* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<Samsung.OwnedProductVo>
struct List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OwnedProductVoU5BU5D_tAA5C0D38FC87EB6600681FA1B84855623119D273* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Samsung.ProductVo>
struct List_1_tD936425E3FC6B9BB6065F89106F6426003D12522  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ProductVoU5BU5D_t85C249DA6FE06FC77CF78282C4FB17EEFACDBE27* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

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

// Samsung.ConsumeVo
struct ConsumeVo_tE963F93A5EDFBD3B78F95A8B4502765388A4D55A  : public RuntimeObject
{
	// System.String Samsung.ConsumeVo::mPurchaseId
	String_t* ___mPurchaseId_0;
	// System.String Samsung.ConsumeVo::mStatusString
	String_t* ___mStatusString_1;
	// System.Int32 Samsung.ConsumeVo::mStatusCode
	int32_t ___mStatusCode_2;
};

// Samsung.ConsumedList
struct ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5  : public RuntimeObject
{
	// Samsung.ErrorVo Samsung.ConsumedList::errorInfo
	ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2* ___errorInfo_0;
	// System.Collections.Generic.List`1<Samsung.ConsumeVo> Samsung.ConsumedList::results
	List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620* ___results_1;
};

// CrashSightAgent
struct CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499  : public RuntimeObject
{
};

// CrashSightCallback
struct CrashSightCallback_t192CF42C711A04034586241BD5197DC691464371  : public RuntimeObject
{
};

// Samsung.ErrorVo
struct ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2  : public RuntimeObject
{
	// System.Int32 Samsung.ErrorVo::errorCode
	int32_t ___errorCode_0;
	// System.String Samsung.ErrorVo::errorString
	String_t* ___errorString_1;
	// System.String Samsung.ErrorVo::extraString
	String_t* ___extraString_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
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

// Samsung.OwnedProductList
struct OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899  : public RuntimeObject
{
	// Samsung.ErrorVo Samsung.OwnedProductList::errorInfo
	ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2* ___errorInfo_0;
	// System.Collections.Generic.List`1<Samsung.OwnedProductVo> Samsung.OwnedProductList::results
	List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2* ___results_1;
};

// Samsung.OwnedProductVo
struct OwnedProductVo_tB01803442CB1F8FE9F2B14202C53116129054A87  : public RuntimeObject
{
	// System.String Samsung.OwnedProductVo::mItemId
	String_t* ___mItemId_0;
	// System.String Samsung.OwnedProductVo::mItemName
	String_t* ___mItemName_1;
	// System.String Samsung.OwnedProductVo::mItemPrice
	String_t* ___mItemPrice_2;
	// System.String Samsung.OwnedProductVo::mItemPriceString
	String_t* ___mItemPriceString_3;
	// System.String Samsung.OwnedProductVo::mCurrencyUnit
	String_t* ___mCurrencyUnit_4;
	// System.String Samsung.OwnedProductVo::mCurrencyCode
	String_t* ___mCurrencyCode_5;
	// System.String Samsung.OwnedProductVo::mItemDesc
	String_t* ___mItemDesc_6;
	// System.String Samsung.OwnedProductVo::mType
	String_t* ___mType_7;
	// System.String Samsung.OwnedProductVo::mConsumableYN
	String_t* ___mConsumableYN_8;
	// System.String Samsung.OwnedProductVo::mSubscriptionEndDate
	String_t* ___mSubscriptionEndDate_9;
	// System.String Samsung.OwnedProductVo::mPaymentId
	String_t* ___mPaymentId_10;
	// System.String Samsung.OwnedProductVo::mPurchaseId
	String_t* ___mPurchaseId_11;
	// System.String Samsung.OwnedProductVo::mPurchaseDate
	String_t* ___mPurchaseDate_12;
	// System.String Samsung.OwnedProductVo::mPassThroughParam
	String_t* ___mPassThroughParam_13;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Samsung.ProductInfoList
struct ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78  : public RuntimeObject
{
	// Samsung.ErrorVo Samsung.ProductInfoList::errorInfo
	ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2* ___errorInfo_0;
	// System.Collections.Generic.List`1<Samsung.ProductVo> Samsung.ProductInfoList::results
	List_1_tD936425E3FC6B9BB6065F89106F6426003D12522* ___results_1;
};

// Samsung.ProductVo
struct ProductVo_t9C892CC0E154DA10C25FC853461466FC7BAAE437  : public RuntimeObject
{
	// System.String Samsung.ProductVo::mItemId
	String_t* ___mItemId_0;
	// System.String Samsung.ProductVo::mItemName
	String_t* ___mItemName_1;
	// System.String Samsung.ProductVo::mItemPrice
	String_t* ___mItemPrice_2;
	// System.String Samsung.ProductVo::mItemPriceString
	String_t* ___mItemPriceString_3;
	// System.String Samsung.ProductVo::mCurrencyUnit
	String_t* ___mCurrencyUnit_4;
	// System.String Samsung.ProductVo::mCurrencyCode
	String_t* ___mCurrencyCode_5;
	// System.String Samsung.ProductVo::mItemDesc
	String_t* ___mItemDesc_6;
	// System.String Samsung.ProductVo::mType
	String_t* ___mType_7;
	// System.String Samsung.ProductVo::mConsumableYN
	String_t* ___mConsumableYN_8;
	// System.String Samsung.ProductVo::mItemImageUrl
	String_t* ___mItemImageUrl_9;
	// System.String Samsung.ProductVo::mItemDownloadUrl
	String_t* ___mItemDownloadUrl_10;
	// System.String Samsung.ProductVo::mReserved1
	String_t* ___mReserved1_11;
	// System.String Samsung.ProductVo::mReserved2
	String_t* ___mReserved2_12;
	// System.String Samsung.ProductVo::mFreeTrialPeriod
	String_t* ___mFreeTrialPeriod_13;
	// System.String Samsung.ProductVo::mSubscriptionDurationUnit
	String_t* ___mSubscriptionDurationUnit_14;
	// System.String Samsung.ProductVo::mSubscriptionDurationMultiplier
	String_t* ___mSubscriptionDurationMultiplier_15;
	// System.String Samsung.ProductVo::mTieredPrice
	String_t* ___mTieredPrice_16;
	// System.String Samsung.ProductVo::mTieredPriceString
	String_t* ___mTieredPriceString_17;
	// System.String Samsung.ProductVo::mTieredSubscriptionYN
	String_t* ___mTieredSubscriptionYN_18;
	// System.String Samsung.ProductVo::mTieredSubscriptionDurationUnit
	String_t* ___mTieredSubscriptionDurationUnit_19;
	// System.String Samsung.ProductVo::mTieredSubscriptionDurationMultiplier
	String_t* ___mTieredSubscriptionDurationMultiplier_20;
	// System.String Samsung.ProductVo::mTieredSubscriptionCount
	String_t* ___mTieredSubscriptionCount_21;
	// System.String Samsung.ProductVo::mShowStartDate
	String_t* ___mShowStartDate_22;
	// System.String Samsung.ProductVo::mShowEndDate
	String_t* ___mShowEndDate_23;
};

// Samsung.PurchaseVo
struct PurchaseVo_tE560C8320502F61108F395FF5041176401526CC7  : public RuntimeObject
{
	// System.String Samsung.PurchaseVo::mItemId
	String_t* ___mItemId_0;
	// System.String Samsung.PurchaseVo::mItemName
	String_t* ___mItemName_1;
	// System.String Samsung.PurchaseVo::mItemPrice
	String_t* ___mItemPrice_2;
	// System.String Samsung.PurchaseVo::mItemPriceString
	String_t* ___mItemPriceString_3;
	// System.String Samsung.PurchaseVo::mCurrencyUnit
	String_t* ___mCurrencyUnit_4;
	// System.String Samsung.PurchaseVo::mCurrencyCode
	String_t* ___mCurrencyCode_5;
	// System.String Samsung.PurchaseVo::mItemDesc
	String_t* ___mItemDesc_6;
	// System.String Samsung.PurchaseVo::mType
	String_t* ___mType_7;
	// System.String Samsung.PurchaseVo::mConsumableYN
	String_t* ___mConsumableYN_8;
	// System.String Samsung.PurchaseVo::mPaymentId
	String_t* ___mPaymentId_9;
	// System.String Samsung.PurchaseVo::mPurchaseId
	String_t* ___mPurchaseId_10;
	// System.String Samsung.PurchaseVo::mPurchaseDate
	String_t* ___mPurchaseDate_11;
	// System.String Samsung.PurchaseVo::mVerifyUrl
	String_t* ___mVerifyUrl_12;
	// System.String Samsung.PurchaseVo::mPassThroughParam
	String_t* ___mPassThroughParam_13;
	// System.String Samsung.PurchaseVo::mItemImageUrl
	String_t* ___mItemImageUrl_14;
	// System.String Samsung.PurchaseVo::mItemDownloadUrl
	String_t* ___mItemDownloadUrl_15;
	// System.String Samsung.PurchaseVo::mReserved1
	String_t* ___mReserved1_16;
	// System.String Samsung.PurchaseVo::mReserved2
	String_t* ___mReserved2_17;
	// System.String Samsung.PurchaseVo::mOrderId
	String_t* ___mOrderId_18;
};

// Samsung.PurchasedInfo
struct PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71  : public RuntimeObject
{
	// Samsung.ErrorVo Samsung.PurchasedInfo::errorInfo
	ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2* ___errorInfo_0;
	// Samsung.PurchaseVo Samsung.PurchasedInfo::results
	PurchaseVo_tE560C8320502F61108F395FF5041176401526CC7* ___results_1;
};

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t* ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_2;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_3;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine.Events.UnityEvent`1<Samsung.ConsumedList>
struct UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Samsung.OwnedProductList>
struct UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Samsung.ProductInfoList>
struct UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Samsung.PurchasedInfo>
struct UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object System.UnhandledExceptionEventArgs::_exception
	RuntimeObject* ____exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_isTerminating
	bool ____isTerminating_2;
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
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// Samsung.OnConsumeEvent
struct OnConsumeEvent_tA44D8A1B6264B4E984E9A50A7B42B758E336B183  : public UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9
{
};

// Samsung.OnGetOwenedListEvent
struct OnGetOwenedListEvent_t625D61708537A479849FDED1322F1C2CF26C0BCE  : public UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E
{
};

// Samsung.OnGetProductsEvent
struct OnGetProductsEvent_t5FD899A99145270F6CB2BB95F481D818C60F7902  : public UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64
{
};

// Samsung.OnPaymentEvent
struct OnPaymentEvent_t89D0DDCD359EB295F4D92C5F2257A0301DC91030  : public UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<Samsung.ConsumedList>
struct Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Samsung.OwnedProductList>
struct Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A  : public MulticastDelegate_t
{
};

// System.Action`1<Samsung.ProductInfoList>
struct Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248  : public MulticastDelegate_t
{
};

// System.Action`1<Samsung.PurchasedInfo>
struct Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627  : public MulticastDelegate_t
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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// CrashSightAgent/LogCallbackDelegate
struct LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CrashSightInit
struct CrashSightInit_t7353C257410EDEC9C1429D48B413D1444D8CEE3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Samsung.SamsungIAP
struct SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AndroidJavaObject Samsung.SamsungIAP::iapInstance
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___iapInstance_5;
	// System.Boolean Samsung.SamsungIAP::prodBuild
	bool ___prodBuild_6;
	// Samsung.TestResult Samsung.SamsungIAP::testPurchaseResult
	int32_t ___testPurchaseResult_7;
	// System.String Samsung.SamsungIAP::savedPassthroughParam
	String_t* ___savedPassthroughParam_8;
	// System.Action`1<Samsung.ProductInfoList> Samsung.SamsungIAP::onGetProductsDetailsListener
	Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248* ___onGetProductsDetailsListener_9;
	// System.Action`1<Samsung.PurchasedInfo> Samsung.SamsungIAP::onStartPaymentListener
	Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9* ___onStartPaymentListener_10;
	// System.Action`1<Samsung.ConsumedList> Samsung.SamsungIAP::onConsumePurchasedItemListener
	Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B* ___onConsumePurchasedItemListener_11;
	// System.Action`1<Samsung.OwnedProductList> Samsung.SamsungIAP::onGetOwenedListListener
	Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A* ___onGetOwenedListListener_12;
	// Samsung.OnGetProductsEvent Samsung.SamsungIAP::onGetProductsDetails
	OnGetProductsEvent_t5FD899A99145270F6CB2BB95F481D818C60F7902* ___onGetProductsDetails_13;
	// Samsung.OnPaymentEvent Samsung.SamsungIAP::onPayment
	OnPaymentEvent_t89D0DDCD359EB295F4D92C5F2257A0301DC91030* ___onPayment_14;
	// Samsung.OnConsumeEvent Samsung.SamsungIAP::onConsume
	OnConsumeEvent_tA44D8A1B6264B4E984E9A50A7B42B758E336B183* ___onConsume_15;
	// Samsung.OnGetOwenedListEvent Samsung.SamsungIAP::onGetOwenedList
	OnGetOwenedListEvent_t625D61708537A479849FDED1322F1C2CF26C0BCE* ___onGetOwenedList_16;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Samsung.ConsumeVo>
struct List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConsumeVoU5BU5D_t977D0AA3CBD0998DE0662945825D9DC1F3B89428* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Samsung.ConsumeVo>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Samsung.OwnedProductVo>
struct List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OwnedProductVoU5BU5D_tAA5C0D38FC87EB6600681FA1B84855623119D273* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Samsung.OwnedProductVo>

// System.Collections.Generic.List`1<Samsung.ProductVo>
struct List_1_tD936425E3FC6B9BB6065F89106F6426003D12522_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ProductVoU5BU5D_t85C249DA6FE06FC77CF78282C4FB17EEFACDBE27* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Samsung.ProductVo>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// Samsung.ConsumeVo

// Samsung.ConsumeVo

// Samsung.ConsumedList

// Samsung.ConsumedList

// CrashSightAgent
struct CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields
{
	// System.String CrashSightAgent::GAME_AGENT_CLASS
	String_t* ___GAME_AGENT_CLASS_0;
	// System.Int32 CrashSightAgent::TYPE_U3D_CRASH
	int32_t ___TYPE_U3D_CRASH_1;
	// System.Int32 CrashSightAgent::GAME_TYPE_UNITY
	int32_t ___GAME_TYPE_UNITY_2;
	// System.Boolean CrashSightAgent::hasSetGameType
	bool ___hasSetGameType_3;
	// UnityEngine.AndroidJavaClass CrashSightAgent::_gameAgentClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____gameAgentClass_4;
	// System.String CrashSightAgent::_configChannel
	String_t* ____configChannel_5;
	// System.String CrashSightAgent::_configVersion
	String_t* ____configVersion_6;
	// System.String CrashSightAgent::_configUser
	String_t* ____configUser_7;
	// System.Int64 CrashSightAgent::_configDelayTime
	int64_t ____configDelayTime_8;
	// System.Boolean CrashSightAgent::_configCrashReporterPackage
	bool ____configCrashReporterPackage_9;
	// CrashSightAgent/LogCallbackDelegate CrashSightAgent::_LogCallbackEventHandler
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ____LogCallbackEventHandler_10;
	// System.Boolean CrashSightAgent::_isInitialized
	bool ____isInitialized_11;
	// CSLogSeverity CrashSightAgent::_autoReportLogLevel
	int32_t ____autoReportLogLevel_12;
	// System.Int32 CrashSightAgent::_crashReporterType
	int32_t ____crashReporterType_13;
	// System.String CrashSightAgent::_crashReporterPackage
	String_t* ____crashReporterPackage_14;
	// System.Boolean CrashSightAgent::_debugMode
	bool ____debugMode_15;
	// System.Boolean CrashSightAgent::_autoQuitApplicationAfterReport
	bool ____autoQuitApplicationAfterReport_16;
	// System.Int32 CrashSightAgent::EXCEPTION_TYPE_UNCAUGHT
	int32_t ___EXCEPTION_TYPE_UNCAUGHT_17;
	// System.Int32 CrashSightAgent::EXCEPTION_TYPE_CAUGHT
	int32_t ___EXCEPTION_TYPE_CAUGHT_18;
	// System.String CrashSightAgent::_pluginVersion
	String_t* ____pluginVersion_19;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> CrashSightAgent::_LogCallbackExtrasHandler
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ____LogCallbackExtrasHandler_20;
	// System.Boolean CrashSightAgent::_uncaughtAutoReportOnce
	bool ____uncaughtAutoReportOnce_21;
};

// CrashSightAgent

// CrashSightCallback

// CrashSightCallback

// Samsung.ErrorVo

// Samsung.ErrorVo

// System.Text.RegularExpressions.GroupCollection

// System.Text.RegularExpressions.GroupCollection

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Samsung.OwnedProductList

// Samsung.OwnedProductList

// Samsung.OwnedProductVo

// Samsung.OwnedProductVo

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// Samsung.ProductInfoList

// Samsung.ProductInfoList

// Samsung.ProductVo

// Samsung.ProductVo

// Samsung.PurchaseVo

// Samsung.PurchaseVo

// Samsung.PurchasedInfo

// Samsung.PurchasedInfo

// System.Diagnostics.StackFrame

// System.Diagnostics.StackFrame

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_5;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_6;
};

// System.Diagnostics.StackTrace

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.Events.UnityEvent`1<Samsung.ConsumedList>

// UnityEngine.Events.UnityEvent`1<Samsung.ConsumedList>

// UnityEngine.Events.UnityEvent`1<Samsung.OwnedProductList>

// UnityEngine.Events.UnityEvent`1<Samsung.OwnedProductList>

// UnityEngine.Events.UnityEvent`1<Samsung.ProductInfoList>

// UnityEngine.Events.UnityEvent`1<Samsung.ProductInfoList>

// UnityEngine.Events.UnityEvent`1<Samsung.PurchasedInfo>

// UnityEngine.Events.UnityEvent`1<Samsung.PurchasedInfo>

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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.UnhandledExceptionEventArgs

// System.UnhandledExceptionEventArgs

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Samsung.OnConsumeEvent

// Samsung.OnConsumeEvent

// Samsung.OnGetOwenedListEvent

// Samsung.OnGetOwenedListEvent

// Samsung.OnGetProductsEvent

// Samsung.OnGetProductsEvent

// Samsung.OnPaymentEvent

// Samsung.OnPaymentEvent

// System.Text.RegularExpressions.Regex
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

// System.Text.RegularExpressions.Regex

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

// System.Action`1<Samsung.ConsumedList>

// System.Action`1<Samsung.ConsumedList>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Samsung.OwnedProductList>

// System.Action`1<Samsung.OwnedProductList>

// System.Action`1<Samsung.ProductInfoList>

// System.Action`1<Samsung.ProductInfoList>

// System.Action`1<Samsung.PurchasedInfo>

// System.Action`1<Samsung.PurchasedInfo>

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.AsyncCallback

// System.AsyncCallback

// System.UnhandledExceptionEventHandler

// System.UnhandledExceptionEventHandler

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// CrashSightAgent/LogCallbackDelegate

// CrashSightAgent/LogCallbackDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// CrashSightInit

// CrashSightInit

// Samsung.SamsungIAP
struct SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_StaticFields
{
	// Samsung.SamsungIAP Samsung.SamsungIAP::_instance
	SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* ____instance_4;
};

// Samsung.SamsungIAP
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;

// System.Void CrashSightAgent::_SetCrashReporterType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__SetCrashReporterType_mE401D00D00D569E0F9127FEC53A34F0C044D3D0D (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::_SetCrashReporterLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__SetCrashReporterLogLevel_m446D50C39823C7C31DF499038CDCBD042F3D15B5 (int32_t ___0_logLevel, const RuntimeMethod* method) ;
// System.Boolean CrashSightAgent::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void CrashSightAgent::DebugLog(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622 (String_t* ___0_tag, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::InitCrashSightAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_InitCrashSightAgent_mBBE05C34247CE12EAF106CEE39FDE6B57663BFC3 (String_t* ___0_appId, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::_RegisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__RegisterExceptionHandler_mD0E6C70521982EAC3A65EE21BD6AAA84DFAB51A2 (const RuntimeMethod* method) ;
// System.Void CrashSightAgent::add__LogCallbackEventHandler(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_add__LogCallbackEventHandler_m3DBF258B4362283C965E0BA9680190276A5B2134 (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_value, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::_HandleException(System.Exception,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__HandleException_m9F60A97BD92C7E2CD91EF9AAD226DE98B90FBC93 (Exception_t* ___0_e, String_t* ___1_message, bool ___2_uncaught, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::_HandleException(CSLogSeverity,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__HandleException_m01DC5ED053B1848DC99AD6D76CB2666298C7AF01 (int32_t ___0_logLevel, String_t* ___1_name, String_t* ___2_message, String_t* ___3_stackTrace, bool ___4_uncaught, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::remove__LogCallbackEventHandler(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_remove__LogCallbackEventHandler_m2D2965F3C3AB0DB3ABFB4FA56D9E66ADA7A392ED (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_value, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::SetUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetUserInfo_m5A1C91872A85CB91B81C58AF861CA67019AFB39D (String_t* ___0_userInfo, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::SetCurrentScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetCurrentScene_m964FC57F1F9A0EDBAEE6B315C7C9E71E9C90AB7B (int32_t ___0_sceneId, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::AddKeyAndValueInScene(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_AddKeyAndValueInScene_m7A37494F63D45DA0E2C46E8678CA514F4C5AF413 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::EnableDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_EnableDebugMode_mEEF1B25A7BBA5703B7C4D27FF0A11B1C4A607666 (bool ___0_enable, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigDefaultBeforeInit(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigDefaultBeforeInit_mDEEAFC92D1EEFA883C22A1978D7C8E2D12AED717 (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigCrashServerUrlBeforeInit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigCrashServerUrlBeforeInit_mCB88D6DC59E17EDA6E79ED444459525FF0CBEB34 (String_t* ___0_crashServerUrl, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m7A82CDC7A6F9E34A54FD706A21E3F822378028BD (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::LogRecord(CSLogSeverity,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_LogRecord_m4872208DCFA3EBA848F533A884203000C764A574 (int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::CloseCrashReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_CloseCrashReport_m79DAB84D9385C7F46E5AC6231486C76FE4DCBBE8 (const RuntimeMethod* method) ;
// System.Void CrashSightAgent::StartCrashReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_StartCrashReport_m4D567428BBE83F804AD8DE7440C3A1529417FB28 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigCrashReporterPackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724 (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass CrashSightAgent::get_GameAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_handler, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___0_value, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::SetUnityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetUnityVersion_mBB3C246C2D89F115A7425701895D8873A7E32A72 (const RuntimeMethod* method) ;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_remove_UnhandledException_mB02B27A301E597F7F4D581ED6058E9DBA3F6EABA (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___0_value, const RuntimeMethod* method) ;
// System.Void CrashSightAgent/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_inline (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___0_e, bool ___1_fNeedFileInfo, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::_reportException(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__reportException_m18ADB10FE025F4E2CF7AA810550D00225605C10C (bool ___0_uncaught, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, const RuntimeMethod* method) ;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200 (const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::PrintLog(CSLogSeverity,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_PrintLog_m5CA32F7C11B57BB931A3C6A45AD41F7B8519B35A (int32_t ___0_level, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ReportException(System.Int32,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ReportException_mE8EC447976D15A435E7C7C76013BA469FA7FDD88 (int32_t ___0_type, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, bool ___4_quitProgram, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___0_groupname, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigDebugMode_m3187E8AB8680AF320A36EEF3CF5AADA753F007B9 (bool ___0_enable, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigDefault(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigDefault_m621A0AA180C572B23F8254CCDE5E0E06C81D8EE2 (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigAutoReportLogLevel(CSLogSeverity)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigAutoReportLogLevel_m21FC2B34EB71D76DC9924B5A11E25D08C2A240E8_inline (int32_t ___0_level, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigAutoQuitApplication_m0C489D4E648E8EE5C9BEB1FCA2983944489B7B85_inline (bool ___0_autoQuit, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::RegisterLogCallback(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_RegisterLogCallback_mF08469D6E6A9608FA725D38591F1AD94FA7141C8 (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_handler, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::InitWithAppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_InitWithAppId_mEB80E05EA89125C71F7FC4077E40D91D14FEAD59 (String_t* ___0_appId, const RuntimeMethod* method) ;
// System.Void CrashSightAgent::EnableExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_EnableExceptionHandler_m3D885EBC5AD45382E27CCB6638082A17D887FA5E (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void CrashSightAgent::SetLogCallbackExtrasHandler(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetLogCallbackExtrasHandler_mA34FEA21769C3D8935645D1A3873869349A637C3 (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_handler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E (const RuntimeMethod* method) ;
// UnityEngine.DeviceType UnityEngine.SystemInfo::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceVendorID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.OwnedProductList>::.ctor()
inline void UnityEvent_1__ctor_m2630ECA871B684134FC7E3F9B07D35B666177AFE (UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.ProductInfoList>::.ctor()
inline void UnityEvent_1__ctor_m084D32B0BA544960BA8776B08F847006E22AE6F0 (UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.PurchasedInfo>::.ctor()
inline void UnityEvent_1__ctor_mB95BA75E33FEB4107C72EFA05B6A02DDCAD7BBAE (UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.ConsumedList>::.ctor()
inline void UnityEvent_1__ctor_m54975E6DBAD311924EDB6E4D009558D12950A4BB (UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Samsung.SamsungIAP>()
inline SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* Object_FindObjectOfType_TisSamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_mE68C5ADBC592DFD80220691AE6DFE1D919907549 (const RuntimeMethod* method)
{
	return ((  SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void Samsung.SamsungIAP::SetOperationMode(Samsung.OperationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_SetOperationMode_m0C496DC9702914C303B0E9B7F356A57CBC7E252C (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Samsung.SamsungIAP::OnError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Samsung.ProductInfoList>(System.String)
inline ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* JsonUtility_FromJson_TisProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78_m5774B910616EDC3F834A692A571783B32EAA3701 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Int32 System.Collections.Generic.List`1<Samsung.ProductVo>::get_Count()
inline int32_t List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_inline (List_1_tD936425E3FC6B9BB6065F89106F6426003D12522* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD936425E3FC6B9BB6065F89106F6426003D12522*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Samsung.ProductVo>::get_Item(System.Int32)
inline ProductVo_t9C892CC0E154DA10C25FC853461466FC7BAAE437* List_1_get_Item_mBEEC680CA6BE69EC147AC9CFF3B5093A3D4CD04D (List_1_tD936425E3FC6B9BB6065F89106F6426003D12522* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ProductVo_t9C892CC0E154DA10C25FC853461466FC7BAAE437* (*) (List_1_tD936425E3FC6B9BB6065F89106F6426003D12522*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.ProductInfoList>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA50846D1A6902B85BB2AB083B025584E0EDC11F9 (UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64* __this, ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5CCF200390D9543163ED5587A02D362BD050FF64*, ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void System.Action`1<Samsung.ProductInfoList>::Invoke(T)
inline void Action_1_Invoke_m61F186E875FDF4FA4360CC08F4B6B27D760A83E1_inline (Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248* __this, ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248*, ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// T UnityEngine.JsonUtility::FromJson<Samsung.OwnedProductList>(System.String)
inline OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* JsonUtility_FromJson_TisOwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899_mED001104C658636D98957E3AA100F4BB179E2CD7 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Int32 System.Collections.Generic.List`1<Samsung.OwnedProductVo>::get_Count()
inline int32_t List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_inline (List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Samsung.OwnedProductVo>::get_Item(System.Int32)
inline OwnedProductVo_tB01803442CB1F8FE9F2B14202C53116129054A87* List_1_get_Item_mC6F212CD7981D9FABE55450FED01F69323A7E19E (List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OwnedProductVo_tB01803442CB1F8FE9F2B14202C53116129054A87* (*) (List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.OwnedProductList>::Invoke(T0)
inline void UnityEvent_1_Invoke_m43087C5CAA181F58F840322C43E0000CE3C2CFF3 (UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E* __this, OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0C55ECF54D23B662ED34FD8F7954DB12042C421E*, OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void System.Action`1<Samsung.OwnedProductList>::Invoke(T)
inline void Action_1_Invoke_m137F03BA6AD546483593E2A76095EC6AF880692B_inline (Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A* __this, OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A*, OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// T UnityEngine.JsonUtility::FromJson<Samsung.ConsumedList>(System.String)
inline ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* JsonUtility_FromJson_TisConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5_mC2EA587556F07390FFDB0F5FFD174360EF76FA87 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Int32 System.Collections.Generic.List`1<Samsung.ConsumeVo>::get_Count()
inline int32_t List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_inline (List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Samsung.ConsumeVo>::get_Item(System.Int32)
inline ConsumeVo_tE963F93A5EDFBD3B78F95A8B4502765388A4D55A* List_1_get_Item_m60F86A7946E7816DB15DA2AEF348AD3697BF45C9 (List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ConsumeVo_tE963F93A5EDFBD3B78F95A8B4502765388A4D55A* (*) (List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.ConsumedList>::Invoke(T0)
inline void UnityEvent_1_Invoke_m25BF081F681ED3B48E130993A7E86F81C159F1D5 (UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9* __this, ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1F065899824BAD619818ED27F9AB514B7F39D5B9*, ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void System.Action`1<Samsung.ConsumedList>::Invoke(T)
inline void Action_1_Invoke_mA5239BE88712644A50A4410980100C24FCE6F79D_inline (Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B* __this, ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B*, ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// T UnityEngine.JsonUtility::FromJson<Samsung.PurchasedInfo>(System.String)
inline PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* JsonUtility_FromJson_TisPurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71_m3EA6B9620F3BE4CD2DD343EABEEC48C6A85738A6 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Samsung.PurchasedInfo>::Invoke(T0)
inline void UnityEvent_1_Invoke_m69852C0BB4EC9BCBE77AB8C5FBC2D59753299C36 (UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B* __this, PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2F4313C97DD533BDD410C6EEB2D3061BD4D0D03B*, PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void System.Action`1<Samsung.PurchasedInfo>::Invoke(T)
inline void Action_1_Invoke_mD77434ABFA88C01BF93304B6AD41A5FD9894B39D_inline (Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9* __this, PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9*, PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
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
// System.Void CrashSightAgent::ConfigCrashReporter(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigCrashReporter_mED62D3EA39A230B18DB0B23212FE2FB96FAB7179 (int32_t ___0_type, int32_t ___1_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _SetCrashReporterType (1);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent__SetCrashReporterType_mE401D00D00D569E0F9127FEC53A34F0C044D3D0D(1, NULL);
		// _SetCrashReporterLogLevel (logLevel);
		int32_t L_0 = ___1_logLevel;
		CrashSightAgent__SetCrashReporterLogLevel_m446D50C39823C7C31DF499038CDCBD042F3D15B5(L_0, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::InitWithAppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_InitWithAppId_mEB80E05EA89125C71F7FC4077E40D91D14FEAD59 (String_t* ___0_appId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB47308B6792A97C9CAD782CFFF97BBB26848A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECABF18065268EB411BB465302677CB028AA90BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DebugLog (null, "CrashSightAgent has already been initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralAB47308B6792A97C9CAD782CFFF97BBB26848A75, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (string.IsNullOrEmpty (appId)) {
		String_t* L_2 = ___0_appId;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		return;
	}

IL_0021:
	{
		// InitCrashSightAgent (appId);
		String_t* L_4 = ___0_appId;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_InitCrashSightAgent_mBBE05C34247CE12EAF106CEE39FDE6B57663BFC3(L_4, NULL);
		// DebugLog (null, "Initialized with app id: {0}", appId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___0_appId;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralECABF18065268EB411BB465302677CB028AA90BB, L_6, NULL);
		// _RegisterExceptionHandler ();
		CrashSightAgent__RegisterExceptionHandler_mD0E6C70521982EAC3A65EE21BD6AAA84DFAB51A2(NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::EnableExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_EnableExceptionHandler_m3D885EBC5AD45382E27CCB6638082A17D887FA5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB47308B6792A97C9CAD782CFFF97BBB26848A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4D4F7CFAAF34EC0E2FF33AFD0AF84D99F8D9EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DebugLog (null, "CrashSightAgent has already been initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralAB47308B6792A97C9CAD782CFFF97BBB26848A75, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// DebugLog (null, "Only enable the exception handler, please make sure you has initialized the sdk in the native code in associated Android or iOS project.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralAE4D4F7CFAAF34EC0E2FF33AFD0AF84D99F8D9EC, L_2, NULL);
		// _RegisterExceptionHandler ();
		CrashSightAgent__RegisterExceptionHandler_mD0E6C70521982EAC3A65EE21BD6AAA84DFAB51A2(NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::RegisterLogCallback(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_RegisterLogCallback_mF08469D6E6A9608FA725D38591F1AD94FA7141C8 (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_0 = ___0_handler;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// DebugLog (null, "Add log callback handler: {0}", handler);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_3 = ___0_handler;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralA9539B7EE51651AB4FC065B8BC827242FC42613F, L_2, NULL);
		// _LogCallbackEventHandler += handler;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_4 = ___0_handler;
		CrashSightAgent_add__LogCallbackEventHandler_m3DBF258B4362283C965E0BA9680190276A5B2134(L_4, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::SetLogCallbackExtrasHandler(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetLogCallbackExtrasHandler_mA34FEA21769C3D8935645D1A3873869349A637C3 (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB13B1A6B5635EEB1C610A9E87D1B0914B469581);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ___0_handler;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// _LogCallbackExtrasHandler = handler;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_1 = ___0_handler;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackExtrasHandler_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackExtrasHandler_20), (void*)L_1);
		// DebugLog(null, "Add log callback extra data handler : {0}", handler);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_4 = ___0_handler;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralFB13B1A6B5635EEB1C610A9E87D1B0914B469581, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::ReportException(System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ReportException_m4A3237D515CB547319E4C0AB372538D713092FE1 (Exception_t* ___0_e, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// DebugLog (null, "Report exception: {0}\n------------\n{1}\n------------", message, e);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___1_message;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		Exception_t* L_5 = ___0_e;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralB08C65592DC87F6D8778CEEFEFE0655FC49229A1, L_4, NULL);
		// _HandleException (e, message, false);
		Exception_t* L_6 = ___0_e;
		String_t* L_7 = ___1_message;
		CrashSightAgent__HandleException_m9F60A97BD92C7E2CD91EF9AAD226DE98B90FBC93(L_6, L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::ReportException(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ReportException_mB034DC93A556332CE0ABDB92F0F8BFE317D7EED1 (String_t* ___0_name, String_t* ___1_message, String_t* ___2_stackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D0EDAE8218575FC34769326FAE5D1CA527D46BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// DebugLog (null, "Report exception: {0} {1} \n{2}", name, message, stackTrace);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_message;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_stackTrace;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral8D0EDAE8218575FC34769326FAE5D1CA527D46BA, L_6, NULL);
		// _HandleException (CSLogSeverity.LogException, name, message, stackTrace, false);
		String_t* L_8 = ___0_name;
		String_t* L_9 = ___1_message;
		String_t* L_10 = ___2_stackTrace;
		CrashSightAgent__HandleException_m01DC5ED053B1848DC99AD6D76CB2666298C7AF01(6, L_8, L_9, L_10, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::UnregisterLogCallback(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_UnregisterLogCallback_m7DD0F6198EA5975BDE7F409C864C7BA603B7CDFF (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler != null) {
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_0 = ___0_handler;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// DebugLog (null, "Remove log callback handler");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral442235F1D88C0C4298CC6C5D4C6803583F2E538E, L_1, NULL);
		// _LogCallbackEventHandler -= handler;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_2 = ___0_handler;
		CrashSightAgent_remove__LogCallbackEventHandler_m2D2965F3C3AB0DB3ABFB4FA56D9E66ADA7A392ED(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetUserId_mE247C304ABAEE463DE1E605D7FC75EB919DB69A9 (String_t* ___0_userId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CA327AC02DECBAFA88FF05C3318D491C02A30C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// DebugLog (null, "Set user id: {0}", userId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_userId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral29CA327AC02DECBAFA88FF05C3318D491C02A30C, L_2, NULL);
		// SetUserInfo (userId);
		String_t* L_4 = ___0_userId;
		CrashSightAgent_SetUserInfo_m5A1C91872A85CB91B81C58AF861CA67019AFB39D(L_4, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::SetScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetScene_m62F3A137694680EF681EDEC6C1924B9522EC3095 (int32_t ___0_sceneId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275475888FD46983B9997B4C8DC5627251DF3484);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// DebugLog (null, "Set scene: {0}", sceneId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_sceneId;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral275475888FD46983B9997B4C8DC5627251DF3484, L_2, NULL);
		// SetCurrentScene (sceneId);
		int32_t L_6 = ___0_sceneId;
		CrashSightAgent_SetCurrentScene_m964FC57F1F9A0EDBAEE6B315C7C9E71E9C90AB7B(L_6, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::AddSceneData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_AddSceneData_m64502845595F7850C64DB74BED42282EEEC57890 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285CC2630BFF971E0806D28627F47E9284BA22A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// DebugLog (null, "Add scene data: [{0}, {1}]", key, value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_key;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_value;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral285CC2630BFF971E0806D28627F47E9284BA22A0, L_4, NULL);
		// AddKeyAndValueInScene (key, value);
		String_t* L_6 = ___0_key;
		String_t* L_7 = ___1_value;
		CrashSightAgent_AddKeyAndValueInScene_m7A37494F63D45DA0E2C46E8678CA514F4C5AF413(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigDebugMode_m3187E8AB8680AF320A36EEF3CF5AADA753F007B9 (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	RuntimeObject* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	RuntimeObject* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RuntimeObject* G_B3_5 = NULL;
	{
		// EnableDebugMode (enable);
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_EnableDebugMode_mEEF1B25A7BBA5703B7C4D27FF0A11B1C4A607666(L_0, NULL);
		// DebugLog (null, "{0} the log message print to console", enable ? "Enable" : "Disable");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enable;
		G_B1_0 = 0;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0;
		G_B1_4 = NULL;
		if (L_3)
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteralCCBC68B199DA3C0837624AEFA5E640D84B7B03F0;
			G_B2_4 = NULL;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral515AE8FDB9C25ACAE2FBF81A8470F0F8B3FDD6FC;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0023:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigAutoQuitApplication(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigAutoQuitApplication_m0C489D4E648E8EE5C9BEB1FCA2983944489B7B85 (bool ___0_autoQuit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___0_autoQuit;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_16 = L_0;
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigAutoReportLogLevel(CSLogSeverity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigAutoReportLogLevel_m21FC2B34EB71D76DC9924B5A11E25D08C2A240E8 (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoReportLogLevel = level;
		int32_t L_0 = ___0_level;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoReportLogLevel_12 = L_0;
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigDefault(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigDefault_m621A0AA180C572B23F8254CCDE5E0E06C81D8EE2 (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63417D112A391E256F1F6EB23C6065DCB592A88A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog (null, "Config default channel:{0}, version:{1}, user:{2}, delay:{3}", channel, version, user, delay);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_version;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___2_user;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		int64_t L_8 = ___3_delay;
		int64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral63417D112A391E256F1F6EB23C6065DCB592A88A, L_7, NULL);
		// ConfigDefaultBeforeInit (channel, version, user, delay);
		String_t* L_11 = ___0_channel;
		String_t* L_12 = ___1_version;
		String_t* L_13 = ___2_user;
		int64_t L_14 = ___3_delay;
		CrashSightAgent_ConfigDefaultBeforeInit_mDEEAFC92D1EEFA883C22A1978D7C8E2D12AED717(L_11, L_12, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigCrashServerUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigCrashServerUrl_m833D7E52EAF843A5452E030159FDE9B59680923F (String_t* ___0_crashServerUrl, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral774A5B40D09A00B05FEBF22D0FE8AD88A630C583);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLog (null, "Config crashServerUrl:{0}", crashServerUrl);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_crashServerUrl;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteral774A5B40D09A00B05FEBF22D0FE8AD88A630C583, L_1, NULL);
		// ConfigCrashServerUrlBeforeInit (crashServerUrl);
		String_t* L_3 = ___0_crashServerUrl;
		CrashSightAgent_ConfigCrashServerUrlBeforeInit_mCB88D6DC59E17EDA6E79ED444459525FF0CBEB34(L_3, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::DebugLog(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622 (String_t* ___0_tag, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CCD82CACA1451C7E9EF39C174DFD4D06BE4906);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!_debugMode) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____debugMode_15;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (string.IsNullOrEmpty (format)) {
		String_t* L_1 = ___1_format;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// Console.WriteLine ("[CrashSightAgent] <Debug> - {0} : {1}", tag, string.Format (format, args));
		String_t* L_3 = ___0_tag;
		String_t* L_4 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___2_args;
		String_t* L_6;
		L_6 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m7A82CDC7A6F9E34A54FD706A21E3F822378028BD(_stringLiteralA3CCD82CACA1451C7E9EF39C174DFD4D06BE4906, L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::PrintLog(CSLogSeverity,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_PrintLog_m5CA32F7C11B57BB931A3C6A45AD41F7B8519B35A (int32_t ___0_level, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty (format)) {
		String_t* L_0 = ___1_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// LogRecord (level, string.Format (format, args));
		int32_t L_2 = ___0_level;
		String_t* L_3 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___2_args;
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_LogRecord_m4872208DCFA3EBA848F533A884203000C764A574(L_2, L_5, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::ReRegistAllMonitors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ReRegistAllMonitors_m87F6C5D4BE8A98467D3D41AD2591F2F48AC2EA94 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE083A65F141355ABDA5CB33303F2A6A63F7EE24D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CloseCrashReport();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_CloseCrashReport_m79DAB84D9385C7F46E5AC6231486C76FE4DCBBE8(NULL);
		// StartCrashReport();
		CrashSightAgent_StartCrashReport_m4D567428BBE83F804AD8DE7440C3A1529417FB28(NULL);
		// DebugLog(null, "ReRegistAllMonitors");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralE083A65F141355ABDA5CB33303F2A6A63F7EE24D, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaClass CrashSightAgent::get_GameAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E2AE0C689B3C0D89156B133D569028DBEAF562F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_gameAgentClass == null) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// _gameAgentClass = new AndroidJavaClass(GAME_AGENT_CLASS);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		String_t* L_1 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___GAME_AGENT_CLASS_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, L_1, NULL);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4), (void*)L_2);
	}

IL_0016:
	{
		// if (!hasSetGameType) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_3 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___hasSetGameType_3;
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		// _gameAgentClass.CallStatic ("setGameType", GAME_TYPE_UNITY);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		int32_t L_7 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___GAME_TYPE_UNITY_2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteral0E2AE0C689B3C0D89156B133D569028DBEAF562F, L_6, NULL);
		// hasSetGameType = true;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___hasSetGameType_3 = (bool)1;
	}

IL_0045:
	{
		// return _gameAgentClass;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4;
		return L_10;
	}
}
// System.Void CrashSightAgent::ConfigDefaultBeforeInit(System.String,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigDefaultBeforeInit_mDEEAFC92D1EEFA883C22A1978D7C8E2D12AED717 (String_t* ___0_channel, String_t* ___1_version, String_t* ___2_user, int64_t ___3_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _configChannel = channel;
		String_t* L_0 = ___0_channel;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configChannel_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configChannel_5), (void*)L_0);
		// _configVersion = version;
		String_t* L_1 = ___1_version;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configVersion_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configVersion_6), (void*)L_1);
		// _configUser = user;
		String_t* L_2 = ___2_user;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configUser_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configUser_7), (void*)L_2);
		// _configDelayTime = delay;
		int64_t L_3 = ___3_delay;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configDelayTime_8 = L_3;
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigCrashServerUrlBeforeInit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigCrashServerUrlBeforeInit_mCB88D6DC59E17EDA6E79ED444459525FF0CBEB34 (String_t* ___0_crashServerUrl, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF41FCA3E897860930F772B8229AB620CA99B9E7A);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("setServerUrl", crashServerUrl);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_crashServerUrl;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF41FCA3E897860930F772B8229AB620CA99B9E7A, L_2, NULL);
		// } catch {
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Object)
		RuntimeObject* L_4 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::ConfigCrashReporterPackage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FAB07429217DDFAAE6578F7AC0DE15E702EEB82);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!_configCrashReporterPackage) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configCrashReporterPackage_9;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("setSdkPackageName", _crashReporterPackage);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterPackage_14;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral1FAB07429217DDFAAE6578F7AC0DE15E702EEB82, L_3, NULL);
		// _configCrashReporterPackage = true;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configCrashReporterPackage_9 = (bool)1;
		// } catch {
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.Object)
		RuntimeObject* L_5 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::InitCrashSightAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_InitCrashSightAgent_mBBE05C34247CE12EAF106CEE39FDE6B57663BFC3 (String_t* ___0_appId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F837876F9B76AAA4A548C5C461F85CFA2E906D1);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("initCrashReport", appId, _configChannel, _configVersion, _configUser, _configDelayTime);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_appId;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configChannel_5;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configVersion_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configUser_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		int64_t L_12 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configDelayTime_8;
		int64_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral1F837876F9B76AAA4A548C5C461F85CFA2E906D1, L_11, NULL);
		// _isInitialized = true;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____isInitialized_11 = (bool)1;
		// } catch {
		goto IL_0056;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.Object)
		RuntimeObject* L_15 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0056;
	}// end catch (depth: 1)

IL_0056:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::EnableDebugMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_EnableDebugMode_mEEF1B25A7BBA5703B7C4D27FF0A11B1C4A607666 (bool ___0_enable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05CDDE1AE2D6CAA8F1D80F6ADFD5B9A75D1E235);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// _debugMode = enable;
		bool L_0 = ___0_enable;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____debugMode_15 = L_0;
		// ConfigCrashReporterPackage();
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("setLogEnable", enable);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1;
		L_1 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		bool L_4 = ___0_enable;
		bool L_5 = L_4;
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralD05CDDE1AE2D6CAA8F1D80F6ADFD5B9A75D1E235, L_3, NULL);
		// } catch {
		goto IL_002e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{// begin catch(System.Object)
		RuntimeObject* L_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002e;
	}// end catch (depth: 1)

IL_002e:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::SetUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetUserInfo_m5A1C91872A85CB91B81C58AF861CA67019AFB39D (String_t* ___0_userInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5F4B730831B20589268119FBDEDC2466F08E22);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("setUserId", userInfo);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_userInfo;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6F5F4B730831B20589268119FBDEDC2466F08E22, L_2, NULL);
		// } catch {
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Object)
		RuntimeObject* L_4 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0023;
	}// end catch (depth: 1)

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::ReportException(System.Int32,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_ReportException_mE8EC447976D15A435E7C7C76013BA469FA7FDD88 (int32_t ___0_type, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, bool ___4_quitProgram, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D95A0C3E069E9CAC86BBCD65C4AF5A15F6019C1);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("postException", TYPE_U3D_CRASH, name, reason, stackTrace, quitProgram);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___TYPE_U3D_CRASH_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		String_t* L_7 = ___1_name;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___2_reason;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___3_stackTrace;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		bool L_13 = ___4_quitProgram;
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5D95A0C3E069E9CAC86BBCD65C4AF5A15F6019C1, L_12, NULL);
		// } catch {
		goto IL_0042;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{// begin catch(System.Object)
		RuntimeObject* L_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0042;
	}// end catch (depth: 1)

IL_0042:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::SetCurrentScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetCurrentScene_m964FC57F1F9A0EDBAEE6B315C7C9E71E9C90AB7B (int32_t ___0_sceneId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204FB93C3572CB4480C96CACFA116D0BB3BD8C16);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("setUserSceneTag", sceneId);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_sceneId;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral204FB93C3572CB4480C96CACFA116D0BB3BD8C16, L_2, NULL);
		// } catch {
		goto IL_0028;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Object)
		RuntimeObject* L_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0028;
	}// end catch (depth: 1)

IL_0028:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::SetUnityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_SetUnityVersion_mBB3C246C2D89F115A7425701895D8873A7E32A72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2952F0BB2A78DA3A34151196F3A9763D2206AC);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("setSdkConfig", "UnityVersion", Application.unityVersion);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralEA2952F0BB2A78DA3A34151196F3A9763D2206AC, L_3, NULL);
		// } catch {
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.Object)
		RuntimeObject* L_5 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::AddKeyAndValueInScene(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_AddKeyAndValueInScene_m7A37494F63D45DA0E2C46E8678CA514F4C5AF413 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8383E12E7FD30422266E9DACA776327E32FBB40);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("putUserData", key, value);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_key;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_value;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC8383E12E7FD30422266E9DACA776327E32FBB40, L_4, NULL);
		// } catch {
		goto IL_0027;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Object)
		RuntimeObject* L_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::AddExtraDataWithException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_AddExtraDataWithException_m358E62E9F11E5D3354121C1FC385BCD16586DC9A (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::LogRecord(CSLogSeverity,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_LogRecord_m4872208DCFA3EBA848F533A884203000C764A574 (int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DABD1488065CFF66778EC7BBD2CA6ABB26ED726);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A22358EC39BA907C894111803520622DEF4324);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (level < CSLogSeverity.LogWarning) {
		int32_t L_0 = ___0_level;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_001c;
		}
	}
	{
		// DebugLog (level.ToString (), message);
		Il2CppFakeBox<int32_t> L_1(CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var, (&___0_level));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3 = ___1_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622(L_2, L_3, L_4, NULL);
	}

IL_001c:
	{
		// ConfigCrashReporterPackage();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigCrashReporterPackage_m003A926BECFCEEFDFD9EC4BB7479B94DDCE35724(NULL);
	}
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("printLog", string.Format ("<{0}> - {1}", level.ToString (), message));
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5;
		L_5 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		Il2CppFakeBox<int32_t> L_8(CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var, (&___0_level));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		String_t* L_10 = ___1_message;
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD7A22358EC39BA907C894111803520622DEF4324, L_9, L_10, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_5, _stringLiteral6DABD1488065CFF66778EC7BBD2CA6ABB26ED726, L_7, NULL);
		// } catch {
		goto IL_0056;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.Object)
		RuntimeObject* L_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0056;
	}// end catch (depth: 1)

IL_0056:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::CloseCrashReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_CloseCrashReport_m79DAB84D9385C7F46E5AC6231486C76FE4DCBBE8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7288AA095EE8871F7C1052F9C7FF6265BC3D468);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("closeCrashReport");
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB7288AA095EE8871F7C1052F9C7FF6265BC3D468, L_1, NULL);
		// } catch {
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Object)
		RuntimeObject* L_2 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::StartCrashReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_StartCrashReport_m4D567428BBE83F804AD8DE7440C3A1529417FB28 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32179EE9DAFFD9CCB151AE296F3D0C0CBE6F1A22);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// GameAgent.CallStatic("startCrashReport");
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0;
		L_0 = CrashSightAgent_get_GameAgent_m800B37A08093ED78835FE14D8D7C50F16809238D(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral32179EE9DAFFD9CCB151AE296F3D0C0CBE6F1A22, L_1, NULL);
		// } catch {
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Object)
		RuntimeObject* L_2 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::add__LogCallbackEventHandler(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_add__LogCallbackEventHandler_m3DBF258B4362283C965E0BA9680190276A5B2134 (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* V_0 = NULL;
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* V_1 = NULL;
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_10;
		V_0 = L_0;
	}

IL_0006:
	{
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_1 = V_0;
		V_1 = L_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_2 = V_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)CastclassSealed((RuntimeObject*)L_4, LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_5 = V_2;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_6 = V_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_7;
		L_7 = InterlockedCompareExchangeImpl<LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*>((&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_10), L_5, L_6);
		V_0 = L_7;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_8 = V_0;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_9 = V_1;
		if ((!(((RuntimeObject*)(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)L_8) == ((RuntimeObject*)(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CrashSightAgent::remove__LogCallbackEventHandler(CrashSightAgent/LogCallbackDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent_remove__LogCallbackEventHandler_m2D2965F3C3AB0DB3ABFB4FA56D9E66ADA7A392ED (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* V_0 = NULL;
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* V_1 = NULL;
	LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_10;
		V_0 = L_0;
	}

IL_0006:
	{
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_1 = V_0;
		V_1 = L_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_2 = V_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)CastclassSealed((RuntimeObject*)L_4, LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_5 = V_2;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_6 = V_1;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_7;
		L_7 = InterlockedCompareExchangeImpl<LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*>((&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_10), L_5, L_6);
		V_0 = L_7;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_8 = V_0;
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_9 = V_1;
		if ((!(((RuntimeObject*)(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)L_8) == ((RuntimeObject*)(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String CrashSightAgent::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CrashSightAgent_get_PluginVersion_m35F1E08420F5C84D95082F8F9211504E7FF3FE6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _pluginVersion; }
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____pluginVersion_19;
		return L_0;
	}
}
// System.Boolean CrashSightAgent::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _isInitialized; }
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____isInitialized_11;
		return L_0;
	}
}
// System.Boolean CrashSightAgent::get_AutoQuitApplicationAfterReport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrashSightAgent_get_AutoQuitApplicationAfterReport_m8B8F8637429B6622BD26F9CF194FC37EC541716C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _autoQuitApplicationAfterReport; }
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_16;
		return L_0;
	}
}
// System.Void CrashSightAgent::_SetCrashReporterType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__SetCrashReporterType_mE401D00D00D569E0F9127FEC53A34F0C044D3D0D (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3277C4838DA010F5768CAC824838A6DF2E8E082);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _crashReporterType = type;
		int32_t L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterType_13 = L_0;
		// if (_crashReporterType == 2) {
		int32_t L_1 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterType_13;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		// _crashReporterPackage = "com.uqm.crashsight.msdk";
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterPackage_14 = _stringLiteralA3277C4838DA010F5768CAC824838A6DF2E8E082;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterPackage_14), (void*)_stringLiteralA3277C4838DA010F5768CAC824838A6DF2E8E082);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::_SetCrashReporterLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__SetCrashReporterLogLevel_m446D50C39823C7C31DF499038CDCBD042F3D15B5 (int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::_RegisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__RegisterExceptionHandler_mD0E6C70521982EAC3A65EE21BD6AAA84DFAB51A2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent__OnLogCallbackHandler_m53E1FCF94C31AD3F046595F030D1656198A9C83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent__OnUncaughtExceptionHandler_m6212DF609A9500E2511758550E135A90C3365300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Application.RegisterLogCallback (_OnLogCallbackHandler);
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, NULL, (intptr_t)((void*)CrashSightAgent__OnLogCallbackHandler_m53E1FCF94C31AD3F046595F030D1656198A9C83A_RuntimeMethod_var), NULL);
		Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6(L_0, NULL);
		// AppDomain.CurrentDomain.UnhandledException += _OnUncaughtExceptionHandler;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_2 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_2, NULL, (intptr_t)((void*)CrashSightAgent__OnUncaughtExceptionHandler_m6212DF609A9500E2511758550E135A90C3365300_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7(L_1, L_2, NULL);
		// _isInitialized = true;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____isInitialized_11 = (bool)1;
		// DebugLog (null, "Register the log callback in Unity {0}", Application.unityVersion);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5;
		L_5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralBA864B446F1D9E8734FE1D3782FF76AC3CDD0D80, L_4, NULL);
		// } catch {
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.Object)
		RuntimeObject* L_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// SetUnityVersion ();
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_SetUnityVersion_mBB3C246C2D89F115A7425701895D8873A7E32A72(NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::_UnregisterExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__UnregisterExceptionHandler_mF52EA1BF31D847849FB546F61A5675AADAB72C70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent__OnUncaughtExceptionHandler_m6212DF609A9500E2511758550E135A90C3365300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Application.RegisterLogCallback (null);
		Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6((LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)NULL, NULL);
		// System.AppDomain.CurrentDomain.UnhandledException -= _OnUncaughtExceptionHandler;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_1 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_1, NULL, (intptr_t)((void*)CrashSightAgent__OnUncaughtExceptionHandler_m6212DF609A9500E2511758550E135A90C3365300_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		AppDomain_remove_UnhandledException_mB02B27A301E597F7F4D581ED6058E9DBA3F6EABA(L_0, L_1, NULL);
		// DebugLog (null, "Unregister the log callback in unity {0}", Application.unityVersion);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralED91876C803CEA1470118E99633BA83CE06D3C8F, L_3, NULL);
		// } catch {
		goto IL_003a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.Object)
		RuntimeObject* L_5 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003a;
	}// end catch (depth: 1)

IL_003a:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::_OnLogCallbackHandler(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__OnLogCallbackHandler_m53E1FCF94C31AD3F046595F030D1656198A9C83A (String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D6CFDA9ED811560588EFEC19B7DFA98F3A05A44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_LogCallbackEventHandler != null) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _LogCallbackEventHandler (condition, stackTrace, type);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* L_1 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____LogCallbackEventHandler_10;
		String_t* L_2 = ___0_condition;
		String_t* L_3 = ___1_stackTrace;
		int32_t L_4 = ___2_type;
		NullCheck(L_1);
		LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0014:
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if (!string.IsNullOrEmpty (condition) && condition.Contains ("[CrashSightAgent] <Log>")) {
		String_t* L_6 = ___0_condition;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_8 = ___0_condition;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral7D6CFDA9ED811560588EFEC19B7DFA98F3A05A44, NULL);
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		return;
	}

IL_0032:
	{
		// if (_uncaughtAutoReportOnce) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_10 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_21;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		return;
	}

IL_003a:
	{
		// CSLogSeverity logLevel = CSLogSeverity.Log;
		V_0 = 0;
		int32_t L_11 = ___2_type;
		switch (L_11)
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_006a;
	}

IL_0058:
	{
		// logLevel = CSLogSeverity.LogException;
		V_0 = 6;
		// break;
		goto IL_006a;
	}

IL_005c:
	{
		// logLevel = CSLogSeverity.LogError;
		V_0 = 5;
		// break;
		goto IL_006a;
	}

IL_0060:
	{
		// logLevel = CSLogSeverity.LogAssert;
		V_0 = 4;
		// break;
		goto IL_006a;
	}

IL_0064:
	{
		// logLevel = CSLogSeverity.LogWarning;
		V_0 = 3;
		// break;
		goto IL_006a;
	}

IL_0068:
	{
		// logLevel = CSLogSeverity.LogDebug;
		V_0 = 1;
	}

IL_006a:
	{
		// if (CSLogSeverity.Log == logLevel) {
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_006e;
		}
	}
	{
		// return;
		return;
	}

IL_006e:
	{
		// _HandleException (logLevel, null, condition, stackTrace, true);
		int32_t L_13 = V_0;
		String_t* L_14 = ___0_condition;
		String_t* L_15 = ___1_stackTrace;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent__HandleException_m01DC5ED053B1848DC99AD6D76CB2666298C7AF01(L_13, (String_t*)NULL, L_14, L_15, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::_OnUncaughtExceptionHandler(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__OnUncaughtExceptionHandler_m6212DF609A9500E2511758550E135A90C3365300 (RuntimeObject* ___0_sender, UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (args == null || args.ExceptionObject == null) {
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_1 = ___1_args;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (args.ExceptionObject.GetType () != typeof(System.Exception)) {
			UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_3 = ___1_args;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_3, NULL);
			NullCheck(L_4);
			Type_t* L_5;
			L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			bool L_8;
			L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
			if (!L_8)
			{
				goto IL_002b_1;
			}
		}
		{
			// return;
			goto IL_0063;
		}

IL_002b_1:
		{
			// } catch {
			goto IL_0041;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Object)
		{
			RuntimeObject* L_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
			// } catch {
			// if (UnityEngine.Debug.isDebugBuild == true) {
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			bool L_10;
			L_10 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
			if (!L_10)
			{
				goto IL_003f;
			}
		}
		{
			// UnityEngine.Debug.Log ("CrashSightAgent: Failed to report uncaught exception");
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral182B2D4654D5D0DE45B794EA5F4E54EF2EF0FA7E)), NULL);
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0063;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (_uncaughtAutoReportOnce) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_12 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_21;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		// return;
		return;
	}

IL_0051:
	{
		// _HandleException ((System.Exception)args.ExceptionObject, null, true);
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_13 = ___1_args;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent__HandleException_m9F60A97BD92C7E2CD91EF9AAD226DE98B90FBC93(((Exception_t*)CastclassClass((RuntimeObject*)L_14, Exception_t_il2cpp_TypeInfo_var)), (String_t*)NULL, (bool)1, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void CrashSightAgent::_HandleException(System.Exception,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__HandleException_m9F60A97BD92C7E2CD91EF9AAD226DE98B90FBC93 (Exception_t* ___0_e, String_t* ___1_message, bool ___2_uncaught, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FC877C2B8C8CB8BD4A186C7CCE90E96C49AEEDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_6 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// if (e == null) {
		Exception_t* L_0 = ___0_e;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		return;
	}

IL_000c:
	{
		// string name = e.GetType ().Name;
		Exception_t* L_2 = ___0_e;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		V_0 = L_4;
		// string reason = e.Message;
		Exception_t* L_5 = ___0_e;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		V_1 = L_6;
		// if (!string.IsNullOrEmpty (message)) {
		String_t* L_7 = ___1_message;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		// reason = string.Format ("{0}{1}***{2}", reason, Environment.NewLine, message);
		String_t* L_9 = V_1;
		String_t* L_10;
		L_10 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		String_t* L_11 = ___1_message;
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral2FC877C2B8C8CB8BD4A186C7CCE90E96C49AEEDD, L_9, L_10, L_11, NULL);
		V_1 = L_12;
	}

IL_0039:
	{
		// StringBuilder stackTraceBuilder = new StringBuilder ("");
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_2 = L_13;
		// StackTrace stackTrace = new StackTrace (e, true);
		Exception_t* L_14 = ___0_e;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_15 = (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853*)il2cpp_codegen_object_new(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF(L_15, L_14, (bool)1, NULL);
		V_3 = L_15;
		// int count = stackTrace.FrameCount;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_16);
		V_4 = L_17;
		// for (int i = 0; i < count; i++) {
		V_5 = 0;
		goto IL_01bd;
	}

IL_005c:
	{
		// StackFrame frame = stackTrace.GetFrame (i);
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_20;
		L_20 = VirtualFuncInvoker1< StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_18, L_19);
		V_6 = L_20;
		// stackTraceBuilder.AppendFormat ("{0}.{1}", frame.GetMethod ().DeclaringType.Name, frame.GetMethod ().Name);
		StringBuilder_t* L_21 = V_2;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_22 = V_6;
		NullCheck(L_22);
		MethodBase_t* L_23;
		L_23 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_22);
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_23);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_24);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_26 = V_6;
		NullCheck(L_26);
		MethodBase_t* L_27;
		L_27 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_26);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_27);
		NullCheck(L_21);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_21, _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_25, L_28, NULL);
		// ParameterInfo[] parameters = frame.GetMethod ().GetParameters ();
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_30 = V_6;
		NullCheck(L_30);
		MethodBase_t* L_31;
		L_31 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_30);
		NullCheck(L_31);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_32;
		L_32 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_31);
		V_7 = L_32;
		// if (parameters == null || parameters.Length == 0) {
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_33 = V_7;
		if (!L_33)
		{
			goto IL_00a6;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_34 = V_7;
		NullCheck(L_34);
		if ((((RuntimeArray*)L_34)->max_length))
		{
			goto IL_00b4;
		}
	}

IL_00a6:
	{
		// stackTraceBuilder.Append (" () ");
		StringBuilder_t* L_35 = V_2;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral2DE175241CD3F193AEBDE7A2D595059D3BB0DE3E, NULL);
		goto IL_0123;
	}

IL_00b4:
	{
		// stackTraceBuilder.Append (" (");
		StringBuilder_t* L_37 = V_2;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		// int pcount = parameters.Length;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_39 = V_7;
		NullCheck(L_39);
		V_9 = ((int32_t)(((RuntimeArray*)L_39)->max_length));
		// ParameterInfo param = null;
		V_10 = (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*)NULL;
		// for (int p = 0; p < pcount; p++) {
		V_11 = 0;
		goto IL_010e;
	}

IL_00ce:
	{
		// param = parameters [p];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_40 = V_7;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_10 = L_43;
		// stackTraceBuilder.AppendFormat ("{0} {1}", param.ParameterType.Name, param.Name);
		StringBuilder_t* L_44 = V_2;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_45 = V_10;
		NullCheck(L_45);
		Type_t* L_46;
		L_46 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_45);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_48 = V_10;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_48);
		NullCheck(L_44);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_44, _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_47, L_49, NULL);
		// if (p != pcount - 1) {
		int32_t L_51 = V_11;
		int32_t L_52 = V_9;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1)))))
		{
			goto IL_0108;
		}
	}
	{
		// stackTraceBuilder.Append (", ");
		StringBuilder_t* L_53 = V_2;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0108:
	{
		// for (int p = 0; p < pcount; p++) {
		int32_t L_55 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_010e:
	{
		// for (int p = 0; p < pcount; p++) {
		int32_t L_56 = V_11;
		int32_t L_57 = V_9;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00ce;
		}
	}
	{
		// param = null;
		V_10 = (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*)NULL;
		// stackTraceBuilder.Append (") ");
		StringBuilder_t* L_58 = V_2;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
	}

IL_0123:
	{
		// string fileName = frame.GetFileName ();
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_60 = V_6;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_60);
		V_8 = L_61;
		// if (!string.IsNullOrEmpty (fileName) && !fileName.ToLower ().Equals ("unknown")) {
		String_t* L_62 = V_8;
		bool L_63;
		L_63 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_62, NULL);
		if (L_63)
		{
			goto IL_01b0;
		}
	}
	{
		String_t* L_64 = V_8;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_64, NULL);
		NullCheck(L_65);
		bool L_66;
		L_66 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_65, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, NULL);
		if (L_66)
		{
			goto IL_01b0;
		}
	}
	{
		// fileName = fileName.Replace ("\\", "/");
		String_t* L_67 = V_8;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_67, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		V_8 = L_68;
		// int loc = fileName.ToLower ().IndexOf ("/assets/");
		String_t* L_69 = V_8;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_69, NULL);
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_70, _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373, NULL);
		V_12 = L_71;
		// if (loc < 0) {
		int32_t L_72 = V_12;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_0186;
		}
	}
	{
		// loc = fileName.ToLower ().IndexOf ("assets/");
		String_t* L_73 = V_8;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_73, NULL);
		NullCheck(L_74);
		int32_t L_75;
		L_75 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_74, _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F, NULL);
		V_12 = L_75;
	}

IL_0186:
	{
		// if (loc > 0) {
		int32_t L_76 = V_12;
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_0196;
		}
	}
	{
		// fileName = fileName.Substring (loc);
		String_t* L_77 = V_8;
		int32_t L_78 = V_12;
		NullCheck(L_77);
		String_t* L_79;
		L_79 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_77, L_78, NULL);
		V_8 = L_79;
	}

IL_0196:
	{
		// stackTraceBuilder.AppendFormat ("(at {0}:{1})", fileName, frame.GetFileLineNumber ());
		StringBuilder_t* L_80 = V_2;
		String_t* L_81 = V_8;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_82 = V_6;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_82);
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_80);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_80, _stringLiteral25AEDA992D7226DC2D636B3995104E58322F52D5, L_81, L_85, NULL);
	}

IL_01b0:
	{
		// stackTraceBuilder.AppendLine ();
		StringBuilder_t* L_87 = V_2;
		NullCheck(L_87);
		StringBuilder_t* L_88;
		L_88 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_87, NULL);
		// for (int i = 0; i < count; i++) {
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01bd:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_90 = V_5;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_005c;
		}
	}
	{
		// _reportException (uncaught, name, reason, stackTraceBuilder.ToString ());
		bool L_92 = ___2_uncaught;
		String_t* L_93 = V_0;
		String_t* L_94 = V_1;
		StringBuilder_t* L_95 = V_2;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_95);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent__reportException_m18ADB10FE025F4E2CF7AA810550D00225605C10C(L_92, L_93, L_94, L_96, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::_reportException(System.Boolean,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__reportException_m18ADB10FE025F4E2CF7AA810550D00225605C10C (bool ___0_uncaught, String_t* ___1_name, String_t* ___2_reason, String_t* ___3_stackTrace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416D207BAA8DA08EF85D43D4D1C69260F7735AFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4808ACA9668728D6BBF49150A76132057225944C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C59749732F13B10E597964D8BC3F7B8B1C4A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B29_0 = 0;
	int32_t G_B32_0 = 0;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	String_t* G_B34_2 = NULL;
	int32_t G_B34_3 = 0;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	String_t* G_B33_2 = NULL;
	int32_t G_B33_3 = 0;
	int32_t G_B35_0 = 0;
	String_t* G_B35_1 = NULL;
	String_t* G_B35_2 = NULL;
	String_t* G_B35_3 = NULL;
	int32_t G_B35_4 = 0;
	{
		// if (string.IsNullOrEmpty (name)) {
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (string.IsNullOrEmpty (stackTrace)) {
		String_t* L_2 = ___3_stackTrace;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// stackTrace = StackTraceUtility.ExtractStackTrace ();
		il2cpp_codegen_runtime_class_init_inline(StackTraceUtility_t5C5AAD64E1074311E4831F275A817B231324C366_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = StackTraceUtility_ExtractStackTrace_mFDB05BC4CA207364FFC93F44E29F35A271DF5200(NULL);
		___3_stackTrace = L_4;
	}

IL_0018:
	{
		// if (string.IsNullOrEmpty (stackTrace)) {
		String_t* L_5 = ___3_stackTrace;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// stackTrace = "Empty";
		___3_stackTrace = _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
		goto IL_016a;
	}

IL_002c:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// string[] frames = stackTrace.Split ('\n');
			String_t* L_7 = ___3_stackTrace;
			NullCheck(L_7);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
			L_8 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_7, ((int32_t)10), 0, NULL);
			V_0 = L_8;
			// if (frames != null && frames.Length > 0) {
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
			if (!L_9)
			{
				goto IL_014c_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
			NullCheck(L_10);
			if (!(((RuntimeArray*)L_10)->max_length))
			{
				goto IL_014c_1;
			}
		}
		{
			// StringBuilder trimFrameBuilder = new StringBuilder ();
			StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
			V_1 = L_11;
			// string frame = null;
			V_2 = (String_t*)NULL;
			// int count = frames.Length;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
			NullCheck(L_12);
			V_3 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
			// for (int i = 0; i < count; i++) {
			V_4 = 0;
			goto IL_013c_1;
		}

IL_0058_1:
		{
			// frame = frames [i];
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
			int32_t L_14 = V_4;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			V_2 = L_16;
			// if (string.IsNullOrEmpty (frame) || string.IsNullOrEmpty (frame.Trim ())) {
			String_t* L_17 = V_2;
			bool L_18;
			L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
			if (L_18)
			{
				goto IL_0136_1;
			}
		}
		{
			String_t* L_19 = V_2;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_19, NULL);
			bool L_21;
			L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
			if (L_21)
			{
				goto IL_0136_1;
			}
		}
		{
			// frame = frame.Trim ();
			String_t* L_22 = V_2;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_22, NULL);
			V_2 = L_23;
			// if (frame.StartsWith ("System.Collections.Generic.") || frame.StartsWith ("ShimEnumerator")) {
			String_t* L_24 = V_2;
			NullCheck(L_24);
			bool L_25;
			L_25 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_24, _stringLiteral326EC1779DF2A38F8AF7B8823A103084F9BDCF4B, NULL);
			if (L_25)
			{
				goto IL_0136_1;
			}
		}
		{
			String_t* L_26 = V_2;
			NullCheck(L_26);
			bool L_27;
			L_27 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_26, _stringLiteralC188999EFFCB7939F9B4DEB8CFD74F0FACDF6EFF, NULL);
			if (L_27)
			{
				goto IL_0136_1;
			}
		}
		{
			// if (frame.StartsWith ("CrashSight")) {
			String_t* L_28 = V_2;
			NullCheck(L_28);
			bool L_29;
			L_29 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_28, _stringLiteral416D207BAA8DA08EF85D43D4D1C69260F7735AFF, NULL);
			if (L_29)
			{
				goto IL_0136_1;
			}
		}
		{
			// if (frame.Contains ("..ctor")) {
			String_t* L_30 = V_2;
			NullCheck(L_30);
			bool L_31;
			L_31 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_30, _stringLiteral130AFE02856FF5A0277CB75295864F209EA2D102, NULL);
			if (L_31)
			{
				goto IL_0136_1;
			}
		}
		{
			// int start = frame.ToLower ().IndexOf ("(at");
			String_t* L_32 = V_2;
			NullCheck(L_32);
			String_t* L_33;
			L_33 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_32, NULL);
			NullCheck(L_33);
			int32_t L_34;
			L_34 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_33, _stringLiteral4808ACA9668728D6BBF49150A76132057225944C, NULL);
			V_5 = L_34;
			// int end = frame.ToLower ().IndexOf ("/assets/");
			String_t* L_35 = V_2;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_35, NULL);
			NullCheck(L_36);
			int32_t L_37;
			L_37 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_36, _stringLiteral31FBC5404CB0EC661C0FD0A79B8D2BC99441B373, NULL);
			V_6 = L_37;
			// if (start > 0 && end > 0) {
			int32_t L_38 = V_5;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_0118_1;
			}
		}
		{
			int32_t L_39 = V_6;
			if ((((int32_t)L_39) <= ((int32_t)0)))
			{
				goto IL_0118_1;
			}
		}
		{
			// trimFrameBuilder.AppendFormat ("{0}(at {1}", frame.Substring (0, start).Replace (":", "."), frame.Substring (end));
			StringBuilder_t* L_40 = V_1;
			String_t* L_41 = V_2;
			int32_t L_42 = V_5;
			NullCheck(L_41);
			String_t* L_43;
			L_43 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_41, 0, L_42, NULL);
			NullCheck(L_43);
			String_t* L_44;
			L_44 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_43, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			String_t* L_45 = V_2;
			int32_t L_46 = V_6;
			NullCheck(L_45);
			String_t* L_47;
			L_47 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_45, L_46, NULL);
			NullCheck(L_40);
			StringBuilder_t* L_48;
			L_48 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_40, _stringLiteral4103F632AE3883CE65740E10B5320832AFA26FCF, L_44, L_47, NULL);
			goto IL_012f_1;
		}

IL_0118_1:
		{
			// trimFrameBuilder.Append (frame.Replace (":", "."));
			StringBuilder_t* L_49 = V_1;
			String_t* L_50 = V_2;
			NullCheck(L_50);
			String_t* L_51;
			L_51 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_50, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			NullCheck(L_49);
			StringBuilder_t* L_52;
			L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, L_51, NULL);
		}

IL_012f_1:
		{
			// trimFrameBuilder.AppendLine ();
			StringBuilder_t* L_53 = V_1;
			NullCheck(L_53);
			StringBuilder_t* L_54;
			L_54 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_53, NULL);
		}

IL_0136_1:
		{
			// for (int i = 0; i < count; i++) {
			int32_t L_55 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		}

IL_013c_1:
		{
			// for (int i = 0; i < count; i++) {
			int32_t L_56 = V_4;
			int32_t L_57 = V_3;
			if ((((int32_t)L_56) < ((int32_t)L_57)))
			{
				goto IL_0058_1;
			}
		}
		{
			// stackTrace = trimFrameBuilder.ToString ();
			StringBuilder_t* L_58 = V_1;
			NullCheck(L_58);
			String_t* L_59;
			L_59 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
			___3_stackTrace = L_59;
		}

IL_014c_1:
		{
			// } catch {
			goto IL_016a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014e;
		}
		throw e;
	}

CATCH_014e:
	{// begin catch(System.Object)
		RuntimeObject* L_60 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// PrintLog(CSLogSeverity.LogWarning,"{0}", "Error to parse the stack trace");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290)));
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86DC3F12E9B43F86F05FCBCB272F69EC36B69290)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var)));
		CrashSightAgent_PrintLog_m5CA32F7C11B57BB931A3C6A45AD41F7B8519B35A(3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94)), L_62, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_016a;
	}// end catch (depth: 1)

IL_016a:
	{
		// PrintLog (CSLogSeverity.LogError, "ReportException: {0} {1}\n*********\n{2}\n*********", name, reason, stackTrace);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_63;
		String_t* L_65 = ___1_name;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_65);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_64;
		String_t* L_67 = ___2_reason;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_67);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = L_66;
		String_t* L_69 = ___3_stackTrace;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_69);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_PrintLog_m5CA32F7C11B57BB931A3C6A45AD41F7B8519B35A(5, _stringLiteral56C59749732F13B10E597964D8BC3F7B8B1C4A39, L_68, NULL);
		// _uncaughtAutoReportOnce = uncaught && _autoQuitApplicationAfterReport;
		bool L_70 = ___0_uncaught;
		if (!L_70)
		{
			goto IL_0191;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_71 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_16;
		G_B29_0 = ((int32_t)(L_71));
		goto IL_0192;
	}

IL_0191:
	{
		G_B29_0 = 0;
	}

IL_0192:
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_21 = (bool)G_B29_0;
		// ReportException (uncaught ? EXCEPTION_TYPE_UNCAUGHT : EXCEPTION_TYPE_CAUGHT, name, reason, stackTrace, uncaught && _autoQuitApplicationAfterReport);
		bool L_72 = ___0_uncaught;
		if (L_72)
		{
			goto IL_01a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		int32_t L_73 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_CAUGHT_18;
		G_B32_0 = L_73;
		goto IL_01a6;
	}

IL_01a1:
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		int32_t L_74 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_UNCAUGHT_17;
		G_B32_0 = L_74;
	}

IL_01a6:
	{
		String_t* L_75 = ___1_name;
		String_t* L_76 = ___2_reason;
		String_t* L_77 = ___3_stackTrace;
		bool L_78 = ___0_uncaught;
		G_B33_0 = L_77;
		G_B33_1 = L_76;
		G_B33_2 = L_75;
		G_B33_3 = G_B32_0;
		if (!L_78)
		{
			G_B34_0 = L_77;
			G_B34_1 = L_76;
			G_B34_2 = L_75;
			G_B34_3 = G_B32_0;
			goto IL_01b3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_79 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_16;
		G_B35_0 = ((int32_t)(L_79));
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		G_B35_3 = G_B33_2;
		G_B35_4 = G_B33_3;
		goto IL_01b4;
	}

IL_01b3:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
		G_B35_3 = G_B34_2;
		G_B35_4 = G_B34_3;
	}

IL_01b4:
	{
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ReportException_mE8EC447976D15A435E7C7C76013BA469FA7FDD88(G_B35_4, G_B35_3, G_B35_2, G_B35_1, (bool)G_B35_0, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::_HandleException(CSLogSeverity,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__HandleException_m01DC5ED053B1848DC99AD6D76CB2666298C7AF01 (int32_t ___0_logLevel, String_t* ___1_name, String_t* ___2_message, String_t* ___3_stackTrace, bool ___4_uncaught, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DE1E906F1FC76998185695007FB138A32E707D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669F15A84AF7656AD4522C599D67132E9745C548);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E571100EBB444DF5BCE485719D2C592256FE1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral822B496EE7630A0562263AF42972445ECA49F024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8235FE403BAB44634519FA4D2B9135A19A0C45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_2 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!IsInitialized) {
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline(NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// DebugLog (null, "It has not been initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralD8235FE403BAB44634519FA4D2B9135A19A0C45D, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (logLevel == CSLogSeverity.Log) {
		int32_t L_2 = ___0_logLevel;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// if ((uncaught && logLevel < _autoReportLogLevel)) {
		bool L_3 = ___4_uncaught;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = ___0_logLevel;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		int32_t L_5 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoReportLogLevel_12;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_004a;
		}
	}
	{
		// DebugLog (null, "Not report exception for level {0}", logLevel.ToString ());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		Il2CppFakeBox<int32_t> L_8(CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var, (&___0_logLevel));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_DebugLog_m826C5B4146198B88FE05043797D2088ACD6E1622((String_t*)NULL, _stringLiteralD44B6A8CFCBCCA882D30DABC08872C044BD78C58, L_7, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// string type = null;
		V_0 = (String_t*)NULL;
		// string reason = null;
		V_1 = (String_t*)NULL;
		// if (!string.IsNullOrEmpty (message)) {
		String_t* L_10 = ___2_message;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_0257;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// if ((CSLogSeverity.LogException == logLevel) && message.Contains ("Exception")) {
			int32_t L_12 = ___0_logLevel;
			if ((!(((uint32_t)6) == ((uint32_t)L_12))))
			{
				goto IL_00c3_1;
			}
		}
		{
			String_t* L_13 = ___2_message;
			NullCheck(L_13);
			bool L_14;
			L_14 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_13, _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53, NULL);
			if (!L_14)
			{
				goto IL_00c3_1;
			}
		}
		{
			// Match match = new Regex (@"^(?<errorType>\S+):\s*(?<errorMessage>.*)", RegexOptions.Singleline).Match (message);
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_15 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_15);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_15, _stringLiteral50EBD3550C224C67E20E5749AFA6A2C221D5AED7, ((int32_t)16), NULL);
			String_t* L_16 = ___2_message;
			NullCheck(L_15);
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_17;
			L_17 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_15, L_16, NULL);
			V_2 = L_17;
			// if (match.Success) {
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_18 = V_2;
			NullCheck(L_18);
			bool L_19;
			L_19 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_18, NULL);
			if (!L_19)
			{
				goto IL_0248_1;
			}
		}
		{
			// type = match.Groups ["errorType"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_20 = V_2;
			NullCheck(L_20);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_21;
			L_21 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_20);
			NullCheck(L_21);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_22;
			L_22 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_21, _stringLiteralBAC2CD1C0497556A9CCD298CC5640CBCA4B3A88E, NULL);
			NullCheck(L_22);
			String_t* L_23;
			L_23 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_22, NULL);
			NullCheck(L_23);
			String_t* L_24;
			L_24 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_23, NULL);
			V_0 = L_24;
			// reason = match.Groups ["errorMessage"].Value.Trim ();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_25 = V_2;
			NullCheck(L_25);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_26;
			L_26 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_25);
			NullCheck(L_26);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_27;
			L_27 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_26, _stringLiteral23DE1E906F1FC76998185695007FB138A32E707D, NULL);
			NullCheck(L_27);
			String_t* L_28;
			L_28 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_27, NULL);
			NullCheck(L_28);
			String_t* L_29;
			L_29 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_28, NULL);
			V_1 = L_29;
			goto IL_0248_1;
		}

IL_00c3_1:
		{
			// } else if ((CSLogSeverity.LogError == logLevel) && message.StartsWith ("Unhandled Exception:")) {
			int32_t L_30 = ___0_logLevel;
			if ((!(((uint32_t)5) == ((uint32_t)L_30))))
			{
				goto IL_0248_1;
			}
		}
		{
			String_t* L_31 = ___2_message;
			NullCheck(L_31);
			bool L_32;
			L_32 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_31, _stringLiteral669F15A84AF7656AD4522C599D67132E9745C548, NULL);
			if (!L_32)
			{
				goto IL_0248_1;
			}
		}
		{
			// Match match = new Regex (@"^Unhandled\s+Exception:\s*(?<exceptionName>\S+):\s*(?<exceptionDetail>.*)", RegexOptions.Singleline).Match(message);
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_33 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_33, _stringLiteralADF4CBFD67BD882C8FBC1FD6DA7AF5D413843C30, ((int32_t)16), NULL);
			String_t* L_34 = ___2_message;
			NullCheck(L_33);
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_35;
			L_35 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_33, L_34, NULL);
			V_3 = L_35;
			// if (match.Success) {
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_36 = V_3;
			NullCheck(L_36);
			bool L_37;
			L_37 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_36, NULL);
			if (!L_37)
			{
				goto IL_0248_1;
			}
		}
		{
			// string exceptionName = match.Groups ["exceptionName"].Value.Trim();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_38 = V_3;
			NullCheck(L_38);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_39;
			L_39 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_38);
			NullCheck(L_39);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_40;
			L_40 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_39, _stringLiteral822B496EE7630A0562263AF42972445ECA49F024, NULL);
			NullCheck(L_40);
			String_t* L_41;
			L_41 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_40, NULL);
			NullCheck(L_41);
			String_t* L_42;
			L_42 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_41, NULL);
			V_4 = L_42;
			// string exceptionDetail = match.Groups ["exceptionDetail"].Value.Trim ();
			Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_43 = V_3;
			NullCheck(L_43);
			GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_44;
			L_44 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_43);
			NullCheck(L_44);
			Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_45;
			L_45 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_44, _stringLiteral6A188EC67B22CF9E09D96F3638F8CCA13FB51DB5, NULL);
			NullCheck(L_45);
			String_t* L_46;
			L_46 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_45, NULL);
			NullCheck(L_46);
			String_t* L_47;
			L_47 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_46, NULL);
			V_5 = L_47;
			// int dotLocation = exceptionName.LastIndexOf(".");
			String_t* L_48 = V_4;
			NullCheck(L_48);
			int32_t L_49;
			L_49 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_48, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
			V_6 = L_49;
			// if (dotLocation > 0 && dotLocation != exceptionName.Length) {
			int32_t L_50 = V_6;
			if ((((int32_t)L_50) <= ((int32_t)0)))
			{
				goto IL_015c_1;
			}
		}
		{
			int32_t L_51 = V_6;
			String_t* L_52 = V_4;
			NullCheck(L_52);
			int32_t L_53;
			L_53 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_52, NULL);
			if ((((int32_t)L_51) == ((int32_t)L_53)))
			{
				goto IL_015c_1;
			}
		}
		{
			// type = exceptionName.Substring(dotLocation + 1);
			String_t* L_54 = V_4;
			int32_t L_55 = V_6;
			NullCheck(L_54);
			String_t* L_56;
			L_56 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)), NULL);
			V_0 = L_56;
			goto IL_015f_1;
		}

IL_015c_1:
		{
			// type = exceptionName;
			String_t* L_57 = V_4;
			V_0 = L_57;
		}

IL_015f_1:
		{
			// int stackLocation = exceptionDetail.IndexOf(" at ");
			String_t* L_58 = V_5;
			NullCheck(L_58);
			int32_t L_59;
			L_59 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_58, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, NULL);
			V_7 = L_59;
			// if (stackLocation > 0) {
			int32_t L_60 = V_7;
			if ((((int32_t)L_60) <= ((int32_t)0)))
			{
				goto IL_01cd_1;
			}
		}
		{
			// reason = exceptionDetail.Substring(0, stackLocation);
			String_t* L_61 = V_5;
			int32_t L_62 = V_7;
			NullCheck(L_61);
			String_t* L_63;
			L_63 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_61, 0, L_62, NULL);
			V_1 = L_63;
			// string callStacks = exceptionDetail.Substring(stackLocation + 3).Replace(" at ", "\n").Replace("in <filename unknown>:0","").Replace("[0x00000]","");
			String_t* L_64 = V_5;
			int32_t L_65 = V_7;
			NullCheck(L_64);
			String_t* L_66;
			L_66 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_64, ((int32_t)il2cpp_codegen_add(L_65, 3)), NULL);
			NullCheck(L_66);
			String_t* L_67;
			L_67 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_66, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			NullCheck(L_67);
			String_t* L_68;
			L_68 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_67, _stringLiteral0872570ECA17D286446A8F9DCBEAD11C9AC362AD, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			NullCheck(L_68);
			String_t* L_69;
			L_69 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_68, _stringLiteral88E99AFA872C3627CA43783D04308160912C2DA4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			V_8 = L_69;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_70 = ___3_stackTrace;
			String_t* L_71 = V_8;
			NullCheck(L_71);
			String_t* L_72;
			L_72 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_71, NULL);
			String_t* L_73;
			L_73 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_70, L_72, NULL);
			___3_stackTrace = L_73;
			goto IL_01d0_1;
		}

IL_01cd_1:
		{
			// reason = exceptionDetail;
			String_t* L_74 = V_5;
			V_1 = L_74;
		}

IL_01d0_1:
		{
			// if(type.Equals("LuaScriptException") && exceptionDetail.Contains(".lua") && exceptionDetail.Contains("stack traceback:")) {
			String_t* L_75 = V_0;
			NullCheck(L_75);
			bool L_76;
			L_76 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_75, _stringLiteralBCD538BCDD7CC104808AFF7B53C5DF923978F284, NULL);
			if (!L_76)
			{
				goto IL_0248_1;
			}
		}
		{
			String_t* L_77 = V_5;
			NullCheck(L_77);
			bool L_78;
			L_78 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_77, _stringLiteral89AE291F5A895AE349B8E0FC91AC6C2EAE546051, NULL);
			if (!L_78)
			{
				goto IL_0248_1;
			}
		}
		{
			String_t* L_79 = V_5;
			NullCheck(L_79);
			bool L_80;
			L_80 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_79, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			if (!L_80)
			{
				goto IL_0248_1;
			}
		}
		{
			// stackLocation = exceptionDetail.IndexOf("stack traceback:");
			String_t* L_81 = V_5;
			NullCheck(L_81);
			int32_t L_82;
			L_82 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_81, _stringLiteral38A6ACF9046399DC1DBD18C1FD3F8B8B0E4FC440, NULL);
			V_7 = L_82;
			// if(stackLocation > 0) {
			int32_t L_83 = V_7;
			if ((((int32_t)L_83) <= ((int32_t)0)))
			{
				goto IL_0248_1;
			}
		}
		{
			// reason = exceptionDetail.Substring(0, stackLocation);
			String_t* L_84 = V_5;
			int32_t L_85 = V_7;
			NullCheck(L_84);
			String_t* L_86;
			L_86 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_84, 0, L_85, NULL);
			V_1 = L_86;
			// string callStacks = exceptionDetail.Substring(stackLocation + 16).Replace(" [", " \n[");
			String_t* L_87 = V_5;
			int32_t L_88 = V_7;
			NullCheck(L_87);
			String_t* L_89;
			L_89 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)16))), NULL);
			NullCheck(L_89);
			String_t* L_90;
			L_90 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_89, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5, _stringLiteral6E571100EBB444DF5BCE485719D2C592256FE1C4, NULL);
			V_9 = L_90;
			// stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
			String_t* L_91 = ___3_stackTrace;
			String_t* L_92 = V_9;
			NullCheck(L_92);
			String_t* L_93;
			L_93 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_92, NULL);
			String_t* L_94;
			L_94 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAA22D570E6C4A129777FCFB302C12DD9C8F5BA43, L_91, L_93, NULL);
			___3_stackTrace = L_94;
		}

IL_0248_1:
		{
			// } catch {
			goto IL_024d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024a;
		}
		throw e;
	}

CATCH_024a:
	{// begin catch(System.Object)
		RuntimeObject* L_95 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// } catch {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_024d;
	}// end catch (depth: 1)

IL_024d:
	{
		// if (string.IsNullOrEmpty (reason)) {
		String_t* L_96 = V_1;
		bool L_97;
		L_97 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_96, NULL);
		if (!L_97)
		{
			goto IL_0257;
		}
	}
	{
		// reason = message;
		String_t* L_98 = ___2_message;
		V_1 = L_98;
	}

IL_0257:
	{
		// if (string.IsNullOrEmpty (name)) {
		String_t* L_99 = ___1_name;
		bool L_100;
		L_100 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_99, NULL);
		if (!L_100)
		{
			goto IL_0281;
		}
	}
	{
		// if (string.IsNullOrEmpty (type)) {
		String_t* L_101 = V_0;
		bool L_102;
		L_102 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_101, NULL);
		if (!L_102)
		{
			goto IL_0283;
		}
	}
	{
		// type = string.Format ("Unity{0}", logLevel.ToString ());
		Il2CppFakeBox<int32_t> L_103(CSLogSeverity_tFEF5DCA7DAA8D9A20B720FD99DDFD108FAD31C28_il2cpp_TypeInfo_var, (&___0_logLevel));
		String_t* L_104;
		L_104 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_103), NULL);
		String_t* L_105;
		L_105 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral92354AFCE308AF1E2F60CBB79B54D8373AFE120E, L_104, NULL);
		V_0 = L_105;
		goto IL_0283;
	}

IL_0281:
	{
		// type = name;
		String_t* L_106 = ___1_name;
		V_0 = L_106;
	}

IL_0283:
	{
		// _reportException (uncaught, type, reason, stackTrace);
		bool L_107 = ___4_uncaught;
		String_t* L_108 = V_0;
		String_t* L_109 = V_1;
		String_t* L_110 = ___3_stackTrace;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent__reportException_m18ADB10FE025F4E2CF7AA810550D00225605C10C(L_107, L_108, L_109, L_110, NULL);
		// }
		return;
	}
}
// System.Void CrashSightAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__ctor_mF4F5F035C2A9F94D7319381F38A21333DB836787 (CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void CrashSightAgent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightAgent__cctor_m8D5FE56167706733A4BE7E855CAA0FBB15CA6FAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61D8F0C7DA51EA09D22C0604473E8A37EB463181);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDBC88F451708877242143919478A7B7F581F79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC880FFD647222133300E9941C584DD14A850725);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string GAME_AGENT_CLASS = "com.uqm.crashsight.agent.GameAgent";
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___GAME_AGENT_CLASS_0 = _stringLiteralFC880FFD647222133300E9941C584DD14A850725;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___GAME_AGENT_CLASS_0), (void*)_stringLiteralFC880FFD647222133300E9941C584DD14A850725);
		// private static readonly int TYPE_U3D_CRASH = 4;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___TYPE_U3D_CRASH_1 = 4;
		// private static readonly int GAME_TYPE_UNITY = 2;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___GAME_TYPE_UNITY_2 = 2;
		// private static bool hasSetGameType = false;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___hasSetGameType_3 = (bool)0;
		// private static AndroidJavaClass _gameAgentClass = null;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____gameAgentClass_4), (void*)(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)NULL);
		// private static bool _configCrashReporterPackage = false;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____configCrashReporterPackage_9 = (bool)0;
		// private static bool _isInitialized = false;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____isInitialized_11 = (bool)0;
		// private static CSLogSeverity _autoReportLogLevel = CSLogSeverity.LogError;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoReportLogLevel_12 = 5;
		// private static int _crashReporterType = 1;  // Default=0,1=CrashSight-V2,MSDKCrashSight=2, IMSDKCrashSight=3
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterType_13 = 1;
		// private static string _crashReporterPackage = "com.uqm.crashsight";
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterPackage_14 = _stringLiteral61D8F0C7DA51EA09D22C0604473E8A37EB463181;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____crashReporterPackage_14), (void*)_stringLiteral61D8F0C7DA51EA09D22C0604473E8A37EB463181);
		// private static bool _debugMode = false;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____debugMode_15 = (bool)0;
		// private static bool _autoQuitApplicationAfterReport = false;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_16 = (bool)0;
		// private static readonly int EXCEPTION_TYPE_UNCAUGHT = 1;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_UNCAUGHT_17 = 1;
		// private static readonly int EXCEPTION_TYPE_CAUGHT = 2;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->___EXCEPTION_TYPE_CAUGHT_18 = 2;
		// private static readonly string _pluginVersion = "1.5.1";
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____pluginVersion_19 = _stringLiteralFBDBC88F451708877242143919478A7B7F581F79;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____pluginVersion_19), (void*)_stringLiteralFBDBC88F451708877242143919478A7B7F581F79);
		// private static bool _uncaughtAutoReportOnce = false;
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____uncaughtAutoReportOnce_21 = (bool)0;
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
void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_Multicast(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* currentDelegate = reinterpret_cast<LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_condition, ___1_stackTrace, ___2_type, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_OpenInst(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	NullCheck(___0_condition);
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_condition, ___1_stackTrace, ___2_type, method);
}
void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_OpenStatic(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_condition, ___1_stackTrace, ___2_type, method);
}
void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_OpenStaticInvoker(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, String_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_condition, ___1_stackTrace, ___2_type);
}
void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_ClosedStaticInvoker(LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, String_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_condition, ___1_stackTrace, ___2_type);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0 (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_condition' to native representation
	char* ____0_condition_marshaled = NULL;
	____0_condition_marshaled = il2cpp_codegen_marshal_string(___0_condition);

	// Marshaling of parameter '___1_stackTrace' to native representation
	char* ____1_stackTrace_marshaled = NULL;
	____1_stackTrace_marshaled = il2cpp_codegen_marshal_string(___1_stackTrace);

	// Native function invocation
	il2cppPInvokeFunc(____0_condition_marshaled, ____1_stackTrace_marshaled, ___2_type);

	// Marshaling cleanup of parameter '___0_condition' native representation
	il2cpp_codegen_marshal_free(____0_condition_marshaled);
	____0_condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_stackTrace' native representation
	il2cpp_codegen_marshal_free(____1_stackTrace_marshaled);
	____1_stackTrace_marshaled = NULL;

}
// System.Void CrashSightAgent/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_mFF46BF9E97397382473896B725D1FFC2B08F799A (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_Multicast;
}
// System.Void CrashSightAgent/LogCallbackDelegate::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_condition, ___1_stackTrace, ___2_type, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CrashSightAgent/LogCallbackDelegate::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m304F967482812FB77B54791286E80FFAA5ADFDD4 (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_condition;
	__d_args[1] = ___1_stackTrace;
	__d_args[2] = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &___2_type);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void CrashSightAgent/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m2583AFFA39A4FADA3BCCC0B3C192158CB123663A (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void CrashSightCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightCallback__ctor_m5E8E11BB2B5EF5079DBD6C8A81F3E4E388832AF1 (CrashSightCallback_t192CF42C711A04034586241BD5197DC691464371* __this, const RuntimeMethod* method) 
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
// System.Void CrashSightInit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightInit_Awake_m02DEA87E1530EFEE2041AC4D529B447041B6ABE2 (CrashSightInit_t7353C257410EDEC9C1429D48B413D1444D8CEE3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightInit_MyLogCallbackExtrasHandler_m735091C2E267482CB1C9DF2FA80F944C7F44BC43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA039BE88B8D6B21CA08227A0DE60A77BACD4ED1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrashSightAgent.ConfigDebugMode (false);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_ConfigDebugMode_m3187E8AB8680AF320A36EEF3CF5AADA753F007B9((bool)0, NULL);
		// CrashSightAgent.ConfigDefault (null, null, null, 0);
		CrashSightAgent_ConfigDefault_m621A0AA180C572B23F8254CCDE5E0E06C81D8EE2((String_t*)NULL, (String_t*)NULL, (String_t*)NULL, ((int64_t)0), NULL);
		// CrashSightAgent.ConfigAutoReportLogLevel (CSLogSeverity.LogError);
		CrashSightAgent_ConfigAutoReportLogLevel_m21FC2B34EB71D76DC9924B5A11E25D08C2A240E8_inline(5, NULL);
		// CrashSightAgent.ConfigAutoQuitApplication (false);
		CrashSightAgent_ConfigAutoQuitApplication_m0C489D4E648E8EE5C9BEB1FCA2983944489B7B85_inline((bool)0, NULL);
		// CrashSightAgent.RegisterLogCallback (null);
		CrashSightAgent_RegisterLogCallback_mF08469D6E6A9608FA725D38591F1AD94FA7141C8((LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0*)NULL, NULL);
		// CrashSightAgent.InitWithAppId (CrashSightAppID);
		CrashSightAgent_InitWithAppId_mEB80E05EA89125C71F7FC4077E40D91D14FEAD59(_stringLiteralA039BE88B8D6B21CA08227A0DE60A77BACD4ED1D, NULL);
		// CrashSightAgent.EnableExceptionHandler ();
		CrashSightAgent_EnableExceptionHandler_m3D885EBC5AD45382E27CCB6638082A17D887FA5E(NULL);
		// CrashSightAgent.SetLogCallbackExtrasHandler (MyLogCallbackExtrasHandler);
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_0, NULL, (intptr_t)((void*)CrashSightInit_MyLogCallbackExtrasHandler_m735091C2E267482CB1C9DF2FA80F944C7F44BC43_RuntimeMethod_var), NULL);
		CrashSightAgent_SetLogCallbackExtrasHandler_mA34FEA21769C3D8935645D1A3873869349A637C3(L_0, NULL);
		// Destroy (this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> CrashSightInit::MyLogCallbackExtrasHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* CrashSightInit_MyLogCallbackExtrasHandler_m735091C2E267482CB1C9DF2FA80F944C7F44BC43 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137F5DA697E776E7439C5B6BA3A94B1971D4AEA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral399424EAA0A270B0E89CD41833FF269CAD6AE3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC476F25BB96DF3AB48B85C9B4556E3A8EECDDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766520BA122B11639DEA21FD11348396C1DA431F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A21B738582222CA9FACA0509F3CB9B207C50446);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E697F948E1E198164B5B09B250C324F3D1044CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A2D33EE20E51717CDC6859049AB64AAAF108C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C8693CE7D88AAF366EE179A4BB705613CEBDD81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA392FB5E31FE22CF5451C4C52C4FDCA87A1EE7FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABAE1155CE9EFC0F9A95E89CB74687207B87B365);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5B8D1C9401E75E664CC0008025E462198BCD3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8D209392969C3122523988F0070F12A63316400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E4A2FDC293FF035F0FB42F1F6578603E80F361);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// CrashSightAgent.PrintLog (CSLogSeverity.Log, "extra handler");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		CrashSightAgent_PrintLog_m5CA32F7C11B57BB931A3C6A45AD41F7B8519B35A(0, _stringLiteral7A21B738582222CA9FACA0509F3CB9B207C50446, L_0, NULL);
		// Dictionary<string, string> extras = new Dictionary<string, string> ();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		// extras.Add ("ScreenSolution", string.Format ("{0}x{1}", Screen.width, Screen.height));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8, L_5, L_8, NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteral399424EAA0A270B0E89CD41833FF269CAD6AE3AF, L_9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceModel", SystemInfo.deviceModel);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_2;
		String_t* L_11;
		L_11 = SystemInfo_get_deviceModel_m308FFBADED4BF6CB34C318A0BBDA762D09A7F185(NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, _stringLiteral927C07A9A0D4F74C939B952882D32EE98B8C854F, L_11, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceName", SystemInfo.deviceName);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = L_10;
		String_t* L_13;
		L_13 = SystemInfo_get_deviceName_mBF171D8609337585AF50DDC7FFC9D7EEA3B4A58E(NULL);
		NullCheck(L_12);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_12, _stringLiteralAD5B8D1C9401E75E664CC0008025E462198BCD3B, L_13, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceType", SystemInfo.deviceType.ToString ());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = L_12;
		int32_t L_15;
		L_15 = SystemInfo_get_deviceType_m9BA3769FAC1102E252B5350FE208BF885E5F24D0(NULL);
		V_0 = L_15;
		Il2CppFakeBox<int32_t> L_16(DeviceType_tEC9DF281BE5EA013E3F57441442CCE5A2DFF44C4_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_17;
		L_17 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_16), NULL);
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, _stringLiteral3CC476F25BB96DF3AB48B85C9B4556E3A8EECDDF, L_17, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("deviceUId", SystemInfo.deviceUniqueIdentifier);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = L_14;
		String_t* L_19;
		L_19 = SystemInfo_get_deviceUniqueIdentifier_m61BA4CB77ADA09730B8B575700D85027EFDB4EFC(NULL);
		NullCheck(L_18);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_18, _stringLiteralABAE1155CE9EFC0F9A95E89CB74687207B87B365, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDId", string.Format ("{0}", SystemInfo.graphicsDeviceID));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = L_18;
		int32_t L_21;
		L_21 = SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646(NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_23, NULL);
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, _stringLiteralA392FB5E31FE22CF5451C4C52C4FDCA87A1EE7FF, L_24, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDName", SystemInfo.graphicsDeviceName);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = L_20;
		String_t* L_26;
		L_26 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteral766520BA122B11639DEA21FD11348396C1DA431F, L_26, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDVdr", SystemInfo.graphicsDeviceVendor);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = L_25;
		String_t* L_28;
		L_28 = SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204(NULL);
		NullCheck(L_27);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_27, _stringLiteral7E697F948E1E198164B5B09B250C324F3D1044CB, L_28, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDVer", SystemInfo.graphicsDeviceVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29 = L_27;
		String_t* L_30;
		L_30 = SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C(NULL);
		NullCheck(L_29);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_29, _stringLiteral9A2D33EE20E51717CDC6859049AB64AAAF108C53, L_30, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("gDVdrID", string.Format ("{0}", SystemInfo.graphicsDeviceVendorID));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = L_29;
		int32_t L_32;
		L_32 = SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309(NULL);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_34, NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, _stringLiteral9C8693CE7D88AAF366EE179A4BB705613CEBDD81, L_35, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("graphicsMemorySize", string.Format ("{0}", SystemInfo.graphicsMemorySize));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_36 = L_31;
		int32_t L_37;
		L_37 = SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF(NULL);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40;
		L_40 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_39, NULL);
		NullCheck(L_36);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_36, _stringLiteralC8D209392969C3122523988F0070F12A63316400, L_40, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("systemMemorySize", string.Format ("{0}", SystemInfo.systemMemorySize));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_41 = L_36;
		int32_t L_42;
		L_42 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_44, NULL);
		NullCheck(L_41);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_41, _stringLiteral137F5DA697E776E7439C5B6BA3A94B1971D4AEA8, L_45, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// extras.Add ("UnityVersion", Application.unityVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = L_41;
		String_t* L_47;
		L_47 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_46);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_46, _stringLiteral5B3D2C8030F02C8EFA282A89920ED9B3A0987293, L_47, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// CrashSightAgent.PrintLog (CSLogSeverity.LogInfo, "Package extra data");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48;
		L_48 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		CrashSightAgent_PrintLog_m5CA32F7C11B57BB931A3C6A45AD41F7B8519B35A(2, _stringLiteralD8E4A2FDC293FF035F0FB42F1F6578603E80F361, L_48, NULL);
		// return extras;
		return L_46;
	}
}
// System.Void CrashSightInit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashSightInit__ctor_mD749FDB2A6F20E6E7F24B02E98525EF0EA0DD2AD (CrashSightInit_t7353C257410EDEC9C1429D48B413D1444D8CEE3E* __this, const RuntimeMethod* method) 
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
// System.Void Samsung.ErrorVo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorVo__ctor_m113AD7DFD93AF28A5C6A092C7E9333202DC6349F (ErrorVo_tC0D29F190009FDAEEE0C86269B3A67EE705AABE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int errorCode    = 1;
		__this->___errorCode_0 = 1;
		// public string errorString  = "";
		__this->___errorString_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___errorString_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string extraString  = "";
		__this->___extraString_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extraString_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Samsung.ProductInfoList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductInfoList__ctor_m387EE9C9C86EF6B176DD9C1AAE41CF09A65A0DCA (ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* __this, const RuntimeMethod* method) 
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
// System.Void Samsung.ProductVo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductVo__ctor_mC1B549DABB4F53FA525FAE01DF6C9CE11F9101DB (ProductVo_t9C892CC0E154DA10C25FC853461466FC7BAAE437* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string mItemId = "";
		__this->___mItemId_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemId_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemName = "";
		__this->___mItemName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemPrice = "";
		__this->___mItemPrice_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemPrice_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemPriceString = "";
		__this->___mItemPriceString_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemPriceString_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mCurrencyUnit = "";
		__this->___mCurrencyUnit_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCurrencyUnit_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mCurrencyCode = "";
		__this->___mCurrencyCode_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCurrencyCode_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemDesc = "";
		__this->___mItemDesc_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemDesc_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mType = "";
		__this->___mType_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mType_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mConsumableYN = "";
		__this->___mConsumableYN_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mConsumableYN_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemImageUrl = "";
		__this->___mItemImageUrl_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemImageUrl_9), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemDownloadUrl = "";
		__this->___mItemDownloadUrl_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemDownloadUrl_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mReserved1 = "";
		__this->___mReserved1_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mReserved1_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mReserved2 = "";
		__this->___mReserved2_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mReserved2_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mFreeTrialPeriod = "";
		__this->___mFreeTrialPeriod_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mFreeTrialPeriod_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mSubscriptionDurationUnit = "";
		__this->___mSubscriptionDurationUnit_14 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSubscriptionDurationUnit_14), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mSubscriptionDurationMultiplier = "";
		__this->___mSubscriptionDurationMultiplier_15 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSubscriptionDurationMultiplier_15), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mTieredPrice = "";
		__this->___mTieredPrice_16 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTieredPrice_16), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mTieredPriceString = "";
		__this->___mTieredPriceString_17 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTieredPriceString_17), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mTieredSubscriptionYN = "";
		__this->___mTieredSubscriptionYN_18 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTieredSubscriptionYN_18), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mTieredSubscriptionDurationUnit = "";
		__this->___mTieredSubscriptionDurationUnit_19 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTieredSubscriptionDurationUnit_19), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mTieredSubscriptionDurationMultiplier = "";
		__this->___mTieredSubscriptionDurationMultiplier_20 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTieredSubscriptionDurationMultiplier_20), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mTieredSubscriptionCount = "";
		__this->___mTieredSubscriptionCount_21 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTieredSubscriptionCount_21), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mShowStartDate = "";
		__this->___mShowStartDate_22 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mShowStartDate_22), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mShowEndDate = "";
		__this->___mShowEndDate_23 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mShowEndDate_23), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Samsung.OwnedProductList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnedProductList__ctor_m97E7CDB708AEDAADEE5DF62AC05656BC2735013D (OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* __this, const RuntimeMethod* method) 
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
// System.Void Samsung.OwnedProductVo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnedProductVo__ctor_m56DC382D3AF97AF5A6DCA8284D6CD192AA9E9983 (OwnedProductVo_tB01803442CB1F8FE9F2B14202C53116129054A87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string mItemId = "";
		__this->___mItemId_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemId_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemName = "";
		__this->___mItemName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemPrice = "";
		__this->___mItemPrice_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemPrice_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemPriceString = "";
		__this->___mItemPriceString_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemPriceString_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mCurrencyUnit = "";
		__this->___mCurrencyUnit_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCurrencyUnit_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mCurrencyCode = "";
		__this->___mCurrencyCode_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCurrencyCode_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemDesc = "";
		__this->___mItemDesc_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemDesc_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mType = "";
		__this->___mType_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mType_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mConsumableYN = "";
		__this->___mConsumableYN_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mConsumableYN_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mSubscriptionEndDate = "";
		__this->___mSubscriptionEndDate_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mSubscriptionEndDate_9), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPaymentId = "";
		__this->___mPaymentId_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPaymentId_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPurchaseId = "";
		__this->___mPurchaseId_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPurchaseId_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPurchaseDate = "";
		__this->___mPurchaseDate_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPurchaseDate_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPassThroughParam = "";
		__this->___mPassThroughParam_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPassThroughParam_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Samsung.PurchasedInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasedInfo__ctor_mCB1E0B0412648994C26890D378A177D635C80592 (PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* __this, const RuntimeMethod* method) 
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
// System.Void Samsung.PurchaseVo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseVo__ctor_m3F98E56D884B752E503F15A03CC0057CAACCE702 (PurchaseVo_tE560C8320502F61108F395FF5041176401526CC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string mItemId = "";
		__this->___mItemId_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemId_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemName = "";
		__this->___mItemName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemPrice = "";
		__this->___mItemPrice_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemPrice_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemPriceString = "";
		__this->___mItemPriceString_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemPriceString_3), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mCurrencyUnit = "";
		__this->___mCurrencyUnit_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCurrencyUnit_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mCurrencyCode = "";
		__this->___mCurrencyCode_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCurrencyCode_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemDesc = "";
		__this->___mItemDesc_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemDesc_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mType = "";
		__this->___mType_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mType_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mConsumableYN = "";
		__this->___mConsumableYN_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mConsumableYN_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPaymentId = "";
		__this->___mPaymentId_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPaymentId_9), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPurchaseId = "";
		__this->___mPurchaseId_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPurchaseId_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPurchaseDate = "";
		__this->___mPurchaseDate_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPurchaseDate_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mVerifyUrl = "";
		__this->___mVerifyUrl_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mVerifyUrl_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mPassThroughParam = "";
		__this->___mPassThroughParam_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPassThroughParam_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemImageUrl = "";
		__this->___mItemImageUrl_14 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemImageUrl_14), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mItemDownloadUrl = "";
		__this->___mItemDownloadUrl_15 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mItemDownloadUrl_15), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mReserved1 = "";
		__this->___mReserved1_16 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mReserved1_16), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mReserved2 = "";
		__this->___mReserved2_17 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mReserved2_17), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mOrderId = "";
		__this->___mOrderId_18 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOrderId_18), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Samsung.ConsumedList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumedList__ctor_mC0C9ADFE7A9F15D707A46952B883E13C2B25C2A5 (ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* __this, const RuntimeMethod* method) 
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
// System.Void Samsung.ConsumeVo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsumeVo__ctor_mCCE62C0255B9AF80065A48DD2BC0F23B48A6E372 (ConsumeVo_tE963F93A5EDFBD3B78F95A8B4502765388A4D55A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string mPurchaseId = "";
		__this->___mPurchaseId_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPurchaseId_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mStatusString = "";
		__this->___mStatusString_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mStatusString_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Samsung.OnGetOwenedListEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGetOwenedListEvent__ctor_m3EAE3D8A414965E2A1C68F1D902CD90081DF83C5 (OnGetOwenedListEvent_t625D61708537A479849FDED1322F1C2CF26C0BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m2630ECA871B684134FC7E3F9B07D35B666177AFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m2630ECA871B684134FC7E3F9B07D35B666177AFE(__this, UnityEvent_1__ctor_m2630ECA871B684134FC7E3F9B07D35B666177AFE_RuntimeMethod_var);
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
// System.Void Samsung.OnGetProductsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGetProductsEvent__ctor_m9F0DFF0F18AEF6F59A3E0FA8D2B94ECA353ACAE8 (OnGetProductsEvent_t5FD899A99145270F6CB2BB95F481D818C60F7902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m084D32B0BA544960BA8776B08F847006E22AE6F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m084D32B0BA544960BA8776B08F847006E22AE6F0(__this, UnityEvent_1__ctor_m084D32B0BA544960BA8776B08F847006E22AE6F0_RuntimeMethod_var);
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
// System.Void Samsung.OnPaymentEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPaymentEvent__ctor_m9DFC0B625D4F7828D16ED4273005048123AE875E (OnPaymentEvent_t89D0DDCD359EB295F4D92C5F2257A0301DC91030* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB95BA75E33FEB4107C72EFA05B6A02DDCAD7BBAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB95BA75E33FEB4107C72EFA05B6A02DDCAD7BBAE(__this, UnityEvent_1__ctor_mB95BA75E33FEB4107C72EFA05B6A02DDCAD7BBAE_RuntimeMethod_var);
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
// System.Void Samsung.OnConsumeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConsumeEvent__ctor_m3298FEACB683915B5AB660C16643CED7B7C172DF (OnConsumeEvent_tA44D8A1B6264B4E984E9A50A7B42B758E336B183* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m54975E6DBAD311924EDB6E4D009558D12950A4BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m54975E6DBAD311924EDB6E4D009558D12950A4BB(__this, UnityEvent_1__ctor_m54975E6DBAD311924EDB6E4D009558D12950A4BB_RuntimeMethod_var);
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
// Samsung.SamsungIAP Samsung.SamsungIAP::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* SamsungIAP_get_Instance_mC7DF290480B4C16AA84F4A9FDA264DCBC062D3D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_mE68C5ADBC592DFD80220691AE6DFE1D919907549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* L_0 = ((SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// _instance = GameObject.FindObjectOfType<SamsungIAP>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* L_2;
		L_2 = Object_FindObjectOfType_TisSamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_mE68C5ADBC592DFD80220691AE6DFE1D919907549(Object_FindObjectOfType_TisSamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_mE68C5ADBC592DFD80220691AE6DFE1D919907549_RuntimeMethod_var);
		((SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_il2cpp_TypeInfo_var))->____instance_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_il2cpp_TypeInfo_var))->____instance_4), (void*)L_2);
	}

IL_0017:
	{
		// return _instance;
		SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* L_3 = ((SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2_il2cpp_TypeInfo_var))->____instance_4;
		return L_3;
	}
}
// System.Void Samsung.SamsungIAP::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_Awake_mA9373E508C49A39A997387C36CD8A627AE56F2D4 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE18B9B94414FE9BDBA0668D8B260329D4DF2AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (iapInstance == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___iapInstance_5;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log("Awake");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7DE18B9B94414FE9BDBA0668D8B260329D4DF2AA, NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::InitIAP(System.Boolean,Samsung.TestResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_InitIAP_m0BBDC91690CDDC9474D022A3BD03CE029307F498 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, bool ___0_isProdBuild, int32_t ___1_testPurchaseResultType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E671F7408FA1F2195439E518380763663AFB80F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// using (AndroidJavaClass cls = new AndroidJavaClass("com.samsung.android.sdk.iap.lib.activity.SamsungIAPFragment"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral9E671F7408FA1F2195439E518380763663AFB80F, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0070;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0070:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// cls.CallStatic("init", gameObject.name);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_6);
				String_t* L_7;
				L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
				NullCheck(L_5);
				ArrayElementTypeCheck (L_5, L_7);
				(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
				NullCheck(L_3);
				AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_3, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_5, NULL);
				// iapInstance = cls.CallStatic<AndroidJavaObject>("getInstance");
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
				L_9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_8);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
				L_10 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_8, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_9, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
				__this->___iapInstance_5 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___iapInstance_5), (void*)L_10);
				// if (isProdBuild)
				bool L_11 = ___0_isProdBuild;
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// SetOperationMode(OperationMode.OPERATION_MODE_PRODUCTION);
				SamsungIAP_SetOperationMode_m0C496DC9702914C303B0E9B7F356A57CBC7E252C(__this, 1, NULL);
				goto IL_0071;
			}

IL_004c_1:
			{
				int32_t L_12 = ___1_testPurchaseResultType;
				if (!L_12)
				{
					goto IL_0055_1;
				}
			}
			{
				int32_t L_13 = ___1_testPurchaseResultType;
				if ((((int32_t)L_13) == ((int32_t)1)))
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_0071;
			}

IL_0055_1:
			{
				// SetOperationMode(OperationMode.OPERATION_MODE_TEST);
				SamsungIAP_SetOperationMode_m0C496DC9702914C303B0E9B7F356A57CBC7E252C(__this, 2, NULL);
				// break;
				goto IL_0071;
			}

IL_005e_1:
			{
				// SetOperationMode(OperationMode.OPERATION_MODE_TEST_FAILURE);
				SamsungIAP_SetOperationMode_m0C496DC9702914C303B0E9B7F356A57CBC7E252C(__this, 0, NULL);
				// break;
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::OnError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEEE3D01E1D6C32865B014D6751C666740D67F9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Samsung IAP Error: " + msg);
		String_t* L_0 = ___0_msg;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCEEE3D01E1D6C32865B014D6751C666740D67F9E, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::SetOperationMode(Samsung.OperationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_SetOperationMode_m0C496DC9702914C303B0E9B7F356A57CBC7E252C (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationMode_t95C6B95842D03B4EA90D096444B87A6EE13E66FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral224790F8AD5EE970D3E080EA2525C761CC78B647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (iapInstance != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___iapInstance_5;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// iapInstance.Call("setOperationMode", mode.ToString());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___iapInstance_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Il2CppFakeBox<int32_t> L_4(OperationMode_t95C6B95842D03B4EA90D096444B87A6EE13E66FA_il2cpp_TypeInfo_var, (&___0_mode));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral224790F8AD5EE970D3E080EA2525C761CC78B647, L_3, NULL);
		return;
	}

IL_002f:
	{
		// OnError("Android Context not inialized correctly.");
		SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48(__this, _stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C, NULL);
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::GetProductsDetails(System.String,System.Action`1<Samsung.ProductInfoList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_GetProductsDetails_m0476B228FE1E8A0FCAD6C6F703EACC2F98672F17 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_itemIDs, Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0175F2EDCBB5157569964E27CB766AF4AC26FC00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7662F5FA906C2869CBEBC0D8CD3F8FE295542F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GetProductsDetails : !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB7662F5FA906C2869CBEBC0D8CD3F8FE295542F3, NULL);
		// onGetProductsDetailsListener = listener;
		Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248* L_0 = ___1_listener;
		__this->___onGetProductsDetailsListener_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onGetProductsDetailsListener_9), (void*)L_0);
		// if (iapInstance != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___iapInstance_5;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// iapInstance.Call("getProductDetails", itemIDs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___iapInstance_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_itemIDs;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral0175F2EDCBB5157569964E27CB766AF4AC26FC00, L_4, NULL);
		return;
	}

IL_0034:
	{
		// OnError("Android Context not inialized correctly.");
		SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48(__this, _stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C, NULL);
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::GetOwnedList(Samsung.ItemType,System.Action`1<Samsung.OwnedProductList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_GetOwnedList_m3F4AB67C402A9FB753DCFC83F8AA6759F06631D8 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, int32_t ___0_itemType, Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemType_t416DA71B1227A0BC184E9A40EA2AED87F57B7A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74BFD4D51555329F003EF06A916825CC6B7A57FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCD982A3A939A85227D3B73B36FED88F2D5FC9B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GetOwnedList : !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral74BFD4D51555329F003EF06A916825CC6B7A57FC, NULL);
		// onGetOwenedListListener = listener;
		Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A* L_0 = ___1_listener;
		__this->___onGetOwenedListListener_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onGetOwenedListListener_12), (void*)L_0);
		// if (iapInstance != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___iapInstance_5;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// iapInstance.Call("getOwnedList", itemType.ToString());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___iapInstance_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		Il2CppFakeBox<int32_t> L_5(ItemType_t416DA71B1227A0BC184E9A40EA2AED87F57B7A7F_il2cpp_TypeInfo_var, (&___0_itemType));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteralFCD982A3A939A85227D3B73B36FED88F2D5FC9B6, L_4, NULL);
		return;
	}

IL_0040:
	{
		// OnError("Android Context not inialized correctly.");
		SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48(__this, _stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C, NULL);
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::StartPayment(System.String,System.String,System.Action`1<Samsung.PurchasedInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_StartPayment_m6CA3675695DE1D8DFB58346EBE412CD329AB8BF2 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_itemID, String_t* ___1_passThroughParam, Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9* ___2_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C631DB5E5A63352B8CCB79F305E59B215779195);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DCA8A05A6F992296886A45A5A408CDA434772F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("StartPayment : !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3C631DB5E5A63352B8CCB79F305E59B215779195, NULL);
		// savedPassthroughParam = passThroughParam;
		String_t* L_0 = ___1_passThroughParam;
		__this->___savedPassthroughParam_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedPassthroughParam_8), (void*)L_0);
		// onStartPaymentListener = listener;
		Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9* L_1 = ___2_listener;
		__this->___onStartPaymentListener_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStartPaymentListener_10), (void*)L_1);
		// if (iapInstance != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___iapInstance_5;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// iapInstance.Call("startPayment", itemID, passThroughParam);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->___iapInstance_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = ___0_itemID;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___1_passThroughParam;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteral83DCA8A05A6F992296886A45A5A408CDA434772F, L_7, NULL);
		return;
	}

IL_003f:
	{
		// OnError("Android Context not inialized correctly.");
		SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48(__this, _stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C, NULL);
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::ConsumePurchasedItems(System.String,System.Action`1<Samsung.ConsumedList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_ConsumePurchasedItems_m27D42ECBA12B4C45CC24712272EC82C3C9E76854 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_purchaseIDs, Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B* ___1_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397F9B2E1438065E772B28A4CA8CF0E4A0D20E95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE81E7F7616078E6059EF5FB25758578E1A858B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ConsumePurchasedItems : !");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEFE81E7F7616078E6059EF5FB25758578E1A858B, NULL);
		// onConsumePurchasedItemListener = listener;
		Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B* L_0 = ___1_listener;
		__this->___onConsumePurchasedItemListener_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onConsumePurchasedItemListener_11), (void*)L_0);
		// if (iapInstance != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___iapInstance_5;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// iapInstance.Call("consumePurchasedItems", purchaseIDs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___iapInstance_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_purchaseIDs;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral397F9B2E1438065E772B28A4CA8CF0E4A0D20E95, L_4, NULL);
		return;
	}

IL_0034:
	{
		// OnError("Android Context not inialized correctly.");
		SamsungIAP_OnError_m263FB9ED703A5FC1A4C3A689BB9F12ECB4C30A48(__this, _stringLiteral309F556349C46DC0E8D5D432A13F2873CFAC5A3C, NULL);
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::OnGetProductsDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_OnGetProductsDetails_mC2A8E16571B31A0081D00EFD70137FC47603636D (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_resultJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78_m5774B910616EDC3F834A692A571783B32EAA3701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBEEC680CA6BE69EC147AC9CFF3B5093A3D4CD04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA50846D1A6902B85BB2AB083B025584E0EDC11F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B647BE23E44FDCAA8BAF2DADD09617EA84961B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F26819F5682C2D9A7CF7FC3B13CFE79F6D59A47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4AE13C92B42301EA117DEFB9940611CF9928C50);
		s_Il2CppMethodInitialized = true;
	}
	ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Debug.Log("OnGetProductsDetails : " + resultJSON);
		String_t* L_0 = ___0_resultJSON;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral23B647BE23E44FDCAA8BAF2DADD09617EA84961B, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// ProductInfoList productList = JsonUtility.FromJson<ProductInfoList>(resultJSON);
		String_t* L_2 = ___0_resultJSON;
		ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* L_3;
		L_3 = JsonUtility_FromJson_TisProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78_m5774B910616EDC3F834A692A571783B32EAA3701(L_2, JsonUtility_FromJson_TisProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78_m5774B910616EDC3F834A692A571783B32EAA3701_RuntimeMethod_var);
		V_0 = L_3;
		// Debug.Log("OnGetProductsDetails cnt:" + productList.results.Count);
		ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* L_4 = V_0;
		NullCheck(L_4);
		List_1_tD936425E3FC6B9BB6065F89106F6426003D12522* L_5 = L_4->___results_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_inline(L_5, List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF4AE13C92B42301EA117DEFB9940611CF9928C50, L_7, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < productList.results.Count; ++i)
		V_2 = 0;
		goto IL_0061;
	}

IL_003d:
	{
		// Debug.Log("onGetProductsDetails: " + productList.results[i].mItemName);
		ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* L_9 = V_0;
		NullCheck(L_9);
		List_1_tD936425E3FC6B9BB6065F89106F6426003D12522* L_10 = L_9->___results_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ProductVo_t9C892CC0E154DA10C25FC853461466FC7BAAE437* L_12;
		L_12 = List_1_get_Item_mBEEC680CA6BE69EC147AC9CFF3B5093A3D4CD04D(L_10, L_11, List_1_get_Item_mBEEC680CA6BE69EC147AC9CFF3B5093A3D4CD04D_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13 = L_12->___mItemName_1;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6F26819F5682C2D9A7CF7FC3B13CFE79F6D59A47, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// for (int i = 0; i < productList.results.Count; ++i)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < productList.results.Count; ++i)
		int32_t L_16 = V_2;
		ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* L_17 = V_0;
		NullCheck(L_17);
		List_1_tD936425E3FC6B9BB6065F89106F6426003D12522* L_18 = L_17->___results_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_inline(L_18, List_1_get_Count_mEC428EFE8102F7B16245CF3B0F68166EE2D7AD97_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		// if (onGetProductsDetails != null)
		OnGetProductsEvent_t5FD899A99145270F6CB2BB95F481D818C60F7902* L_20 = __this->___onGetProductsDetails_13;
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		// onGetProductsDetails.Invoke(productList);
		OnGetProductsEvent_t5FD899A99145270F6CB2BB95F481D818C60F7902* L_21 = __this->___onGetProductsDetails_13;
		ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* L_22 = V_0;
		NullCheck(L_21);
		UnityEvent_1_Invoke_mA50846D1A6902B85BB2AB083B025584E0EDC11F9(L_21, L_22, UnityEvent_1_Invoke_mA50846D1A6902B85BB2AB083B025584E0EDC11F9_RuntimeMethod_var);
	}

IL_0083:
	{
		// if (onGetProductsDetailsListener != null)
		Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248* L_23 = __this->___onGetProductsDetailsListener_9;
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// onGetProductsDetailsListener(productList);
		Action_1_t7E04C1B37BA20675D7A9BB58E85315D704B96248* L_24 = __this->___onGetProductsDetailsListener_9;
		ProductInfoList_t1FC5EA5C52F5CFCC315B275238FF700F54B82C78* L_25 = V_0;
		NullCheck(L_24);
		Action_1_Invoke_m61F186E875FDF4FA4360CC08F4B6B27D760A83E1_inline(L_24, L_25, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::OnGetOwnedProducts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_OnGetOwnedProducts_mDA2850DECDF7E07AFC187ECC4FAA5A1AA2C30F7E (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_resultJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899_mED001104C658636D98957E3AA100F4BB179E2CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC6F212CD7981D9FABE55450FED01F69323A7E19E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m43087C5CAA181F58F840322C43E0000CE3C2CFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CFBE377C68F7E47841152AD0B970F9731B1D2B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAECD198D8E0B1975698349EC6BA11C23F4DA7FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9CF8DF92CFFB773B095C5AAF4373358DA0B923);
		s_Il2CppMethodInitialized = true;
	}
	OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Debug.Log("onGetOwnedProducts");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAAECD198D8E0B1975698349EC6BA11C23F4DA7FB, NULL);
		// OwnedProductList ownedList = JsonUtility.FromJson<OwnedProductList>(resultJSON);
		String_t* L_0 = ___0_resultJSON;
		OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* L_1;
		L_1 = JsonUtility_FromJson_TisOwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899_mED001104C658636D98957E3AA100F4BB179E2CD7(L_0, JsonUtility_FromJson_TisOwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899_mED001104C658636D98957E3AA100F4BB179E2CD7_RuntimeMethod_var);
		V_0 = L_1;
		// Debug.Log("onGetOwnedProducts cnt:" + ownedList.results.Count);
		OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* L_2 = V_0;
		NullCheck(L_2);
		List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2* L_3 = L_2->___results_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_inline(L_3, List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBF9CF8DF92CFFB773B095C5AAF4373358DA0B923, L_5, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// for (int i = 0; i < ownedList.results.Count; ++i)
		V_2 = 0;
		goto IL_005b;
	}

IL_0037:
	{
		// Debug.Log("onGetOwnedProducts: " + ownedList.results[i].mItemName);
		OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* L_7 = V_0;
		NullCheck(L_7);
		List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2* L_8 = L_7->___results_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		OwnedProductVo_tB01803442CB1F8FE9F2B14202C53116129054A87* L_10;
		L_10 = List_1_get_Item_mC6F212CD7981D9FABE55450FED01F69323A7E19E(L_8, L_9, List_1_get_Item_mC6F212CD7981D9FABE55450FED01F69323A7E19E_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11 = L_10->___mItemName_1;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9CFBE377C68F7E47841152AD0B970F9731B1D2B7, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// for (int i = 0; i < ownedList.results.Count; ++i)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < ownedList.results.Count; ++i)
		int32_t L_14 = V_2;
		OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* L_15 = V_0;
		NullCheck(L_15);
		List_1_tE130CB1BBD419D745FBDAA3FD9A4612B078921D2* L_16 = L_15->___results_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_inline(L_16, List_1_get_Count_m2F8726CDFE038058BC809BF1B9F112E4065EAB67_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_0037;
		}
	}
	{
		// if(onGetOwenedList != null)
		OnGetOwenedListEvent_t625D61708537A479849FDED1322F1C2CF26C0BCE* L_18 = __this->___onGetOwenedList_16;
		if (!L_18)
		{
			goto IL_007d;
		}
	}
	{
		// onGetOwenedList.Invoke(ownedList);
		OnGetOwenedListEvent_t625D61708537A479849FDED1322F1C2CF26C0BCE* L_19 = __this->___onGetOwenedList_16;
		OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* L_20 = V_0;
		NullCheck(L_19);
		UnityEvent_1_Invoke_m43087C5CAA181F58F840322C43E0000CE3C2CFF3(L_19, L_20, UnityEvent_1_Invoke_m43087C5CAA181F58F840322C43E0000CE3C2CFF3_RuntimeMethod_var);
	}

IL_007d:
	{
		// if (onGetOwenedListListener != null)
		Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A* L_21 = __this->___onGetOwenedListListener_12;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		// onGetOwenedListListener(ownedList);
		Action_1_tDD2071FBC6F83C94F459CEDC485AC81C62903C6A* L_22 = __this->___onGetOwenedListListener_12;
		OwnedProductList_tF8E028A1D8D282DF0CE93E421664EE7949ADC899* L_23 = V_0;
		NullCheck(L_22);
		Action_1_Invoke_m137F03BA6AD546483593E2A76095EC6AF880692B_inline(L_22, L_23, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::OnConsumePurchasedItems(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_OnConsumePurchasedItems_m27F3EBB860C0906B41B12F3F8E20393B3609088E (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_resultJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5_mC2EA587556F07390FFDB0F5FFD174360EF76FA87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60F86A7946E7816DB15DA2AEF348AD3697BF45C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m25BF081F681ED3B48E130993A7E86F81C159F1D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1780C9D697028269A3C92002ED56CF64F3593925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A31488BBC8233A775DEC6E5C4D770817F3D2B7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73CD64D2BDF2FEED77CFE2377AE1C46B203F0B73);
		s_Il2CppMethodInitialized = true;
	}
	ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Debug.Log("OnConsumePurchasedItems : " + resultJSON);
		String_t* L_0 = ___0_resultJSON;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral73CD64D2BDF2FEED77CFE2377AE1C46B203F0B73, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// ConsumedList consumedList = JsonUtility.FromJson<ConsumedList>(resultJSON);
		String_t* L_2 = ___0_resultJSON;
		ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* L_3;
		L_3 = JsonUtility_FromJson_TisConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5_mC2EA587556F07390FFDB0F5FFD174360EF76FA87(L_2, JsonUtility_FromJson_TisConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5_mC2EA587556F07390FFDB0F5FFD174360EF76FA87_RuntimeMethod_var);
		V_0 = L_3;
		// Debug.Log("OnConsumePurchasedItems cnt:" + consumedList.results.Count);
		ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* L_4 = V_0;
		NullCheck(L_4);
		List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620* L_5 = L_4->___results_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_inline(L_5, List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1780C9D697028269A3C92002ED56CF64F3593925, L_7, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// for (int i = 0; i < consumedList.results.Count; ++i)
		V_2 = 0;
		goto IL_0061;
	}

IL_003d:
	{
		// Debug.Log("OnConsumePurchasedItems: " + consumedList.results[i].mPurchaseId);
		ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* L_9 = V_0;
		NullCheck(L_9);
		List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620* L_10 = L_9->___results_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		ConsumeVo_tE963F93A5EDFBD3B78F95A8B4502765388A4D55A* L_12;
		L_12 = List_1_get_Item_m60F86A7946E7816DB15DA2AEF348AD3697BF45C9(L_10, L_11, List_1_get_Item_m60F86A7946E7816DB15DA2AEF348AD3697BF45C9_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13 = L_12->___mPurchaseId_0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6A31488BBC8233A775DEC6E5C4D770817F3D2B7E, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// for (int i = 0; i < consumedList.results.Count; ++i)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < consumedList.results.Count; ++i)
		int32_t L_16 = V_2;
		ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* L_17 = V_0;
		NullCheck(L_17);
		List_1_t756FB2BB979CB889F682E5667A23CE3BA326D620* L_18 = L_17->___results_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_inline(L_18, List_1_get_Count_m0E733197FD8234F310603FDD5A13776CCE9A47DA_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		// if(onConsume != null)
		OnConsumeEvent_tA44D8A1B6264B4E984E9A50A7B42B758E336B183* L_20 = __this->___onConsume_15;
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		// onConsume.Invoke(consumedList);
		OnConsumeEvent_tA44D8A1B6264B4E984E9A50A7B42B758E336B183* L_21 = __this->___onConsume_15;
		ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* L_22 = V_0;
		NullCheck(L_21);
		UnityEvent_1_Invoke_m25BF081F681ED3B48E130993A7E86F81C159F1D5(L_21, L_22, UnityEvent_1_Invoke_m25BF081F681ED3B48E130993A7E86F81C159F1D5_RuntimeMethod_var);
	}

IL_0083:
	{
		// if (onConsumePurchasedItemListener != null)
		Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B* L_23 = __this->___onConsumePurchasedItemListener_11;
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// onConsumePurchasedItemListener(consumedList);
		Action_1_t6169075EDBDE29FDC1F792DBE11D01FBCD2E6E5B* L_24 = __this->___onConsumePurchasedItemListener_11;
		ConsumedList_t41DA872F473E7B87F2042131D8F54A314E8185B5* L_25 = V_0;
		NullCheck(L_24);
		Action_1_Invoke_mA5239BE88712644A50A4410980100C24FCE6F79D_inline(L_24, L_25, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::OnPayment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP_OnPayment_m8091694555630EF51BD82F6AFEFF154EAA1201A4 (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, String_t* ___0_resultJSON, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71_m3EA6B9620F3BE4CD2DD343EABEEC48C6A85738A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m69852C0BB4EC9BCBE77AB8C5FBC2D59753299C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C75570146F867BCCDAC1ACD6D987C81B86D9B25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8FAA0E1FE9EBF6FABEC9106C1163F6B26894B4);
		s_Il2CppMethodInitialized = true;
	}
	PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* V_0 = NULL;
	{
		// Debug.Log("onPayment: " + resultJSON);
		String_t* L_0 = ___0_resultJSON;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8C75570146F867BCCDAC1ACD6D987C81B86D9B25, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// PurchasedInfo purchasedInfo = JsonUtility.FromJson<PurchasedInfo>(resultJSON);
		String_t* L_2 = ___0_resultJSON;
		PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* L_3;
		L_3 = JsonUtility_FromJson_TisPurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71_m3EA6B9620F3BE4CD2DD343EABEEC48C6A85738A6(L_2, JsonUtility_FromJson_TisPurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71_m3EA6B9620F3BE4CD2DD343EABEEC48C6A85738A6_RuntimeMethod_var);
		V_0 = L_3;
		// if( purchasedInfo != null )
		PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// if( purchasedInfo.results.mPassThroughParam != savedPassthroughParam )
		PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* L_5 = V_0;
		NullCheck(L_5);
		PurchaseVo_tE560C8320502F61108F395FF5041176401526CC7* L_6 = L_5->___results_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___mPassThroughParam_13;
		String_t* L_8 = __this->___savedPassthroughParam_8;
		bool L_9;
		L_9 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("PassThroughParam is different!!!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFF8FAA0E1FE9EBF6FABEC9106C1163F6B26894B4, NULL);
	}

IL_003c:
	{
		// if(onPayment != null)
		OnPaymentEvent_t89D0DDCD359EB295F4D92C5F2257A0301DC91030* L_10 = __this->___onPayment_14;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// onPayment.Invoke(purchasedInfo);
		OnPaymentEvent_t89D0DDCD359EB295F4D92C5F2257A0301DC91030* L_11 = __this->___onPayment_14;
		PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* L_12 = V_0;
		NullCheck(L_11);
		UnityEvent_1_Invoke_m69852C0BB4EC9BCBE77AB8C5FBC2D59753299C36(L_11, L_12, UnityEvent_1_Invoke_m69852C0BB4EC9BCBE77AB8C5FBC2D59753299C36_RuntimeMethod_var);
	}

IL_0050:
	{
		// if (onStartPaymentListener != null)
		Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9* L_13 = __this->___onStartPaymentListener_10;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// onStartPaymentListener(purchasedInfo);
		Action_1_tE79A27646777D15AB295A2A768F8DC6494D4B2B9* L_14 = __this->___onStartPaymentListener_10;
		PurchasedInfo_t02E92B8C88F78B81B0F92345F308A9F567168E71* L_15 = V_0;
		NullCheck(L_14);
		Action_1_Invoke_mD77434ABFA88C01BF93304B6AD41A5FD9894B39D_inline(L_14, L_15, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Samsung.SamsungIAP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungIAP__ctor_mFD9CD14A1A62BFD4E54F6AADB254995E1DA5880D (SamsungIAP_t45ABAC7F0123C9E82DD0027C94FFA4657CAE89A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string savedPassthroughParam = "";
		__this->___savedPassthroughParam_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedPassthroughParam_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CrashSightAgent_get_IsInitialized_m7D2F253370DF6A8E82BD5086649FDA82AEDC77C8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _isInitialized; }
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		bool L_0 = ((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____isInitialized_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_mCD4B747E5BB00DA808F20B692BD7E9872638982E_inline (LogCallbackDelegate_t42839B1468D8EFF95DEDFEDAEDB60BF108A6F6A0* __this, String_t* ___0_condition, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_condition, ___1_stackTrace, ___2_type, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____exception_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigAutoReportLogLevel_m21FC2B34EB71D76DC9924B5A11E25D08C2A240E8_inline (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoReportLogLevel = level;
		int32_t L_0 = ___0_level;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoReportLogLevel_12 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CrashSightAgent_ConfigAutoQuitApplication_m0C489D4E648E8EE5C9BEB1FCA2983944489B7B85_inline (bool ___0_autoQuit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _autoQuitApplicationAfterReport = autoQuit;
		bool L_0 = ___0_autoQuit;
		il2cpp_codegen_runtime_class_init_inline(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var);
		((CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_StaticFields*)il2cpp_codegen_static_fields_for(CrashSightAgent_tA4039DB028D1EE4660194F293D8B61B01B9FC499_il2cpp_TypeInfo_var))->____autoQuitApplicationAfterReport_16 = L_0;
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
