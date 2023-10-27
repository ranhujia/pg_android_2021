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

// ArrayPool`1<System.Char>
struct ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>
struct Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Queue`1<System.String>>
struct KeyCollection_t53577C59498755AD2E565735AD56B3FD0870E177;
// System.Collections.Generic.List`1<CString>
struct List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Queue`1<CString>
struct Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31;
// System.Collections.Generic.Queue`1<CString/CStringBlock>
struct Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<CString/CStringBlock>
struct Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Queue`1<System.String>>
struct ValueCollection_tE379123A57FDD76E312770633A4FE79BEB69F60B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Queue`1<System.String>>[]
struct EntryU5BU5D_t819AA947F8F5BA4CE91F4BC0CDB05F9EA207C9E0;
// System.Collections.Generic.Queue`1<System.Char[]>[]
struct Queue_1U5BU5D_t79E33A9CEAA0D3A4B45788765A8AA263DB4F79DE;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// CString[]
struct CStringU5BU5D_t1297678BC71D04AEDA56623CF849AA08E58F9C0C;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// CString/CStringBlock[]
struct CStringBlockU5BU5D_tEB22D4C964C86290F1DEA6AB113C2509AA3AC157;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// CString
struct CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// IStringBlock
struct IStringBlock_tECF8AFD2BD29DE3D98405B2B467065CBE055D1FA;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// NumberFormatter
struct NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CString/CStringBlock
struct CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2;
// NumberFormatter/CustomInfo
struct CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____284E0936DD0EACE33AA8F33A3E9CF4475C06F90C_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____44EDD5807FD1F0FB6E35E248353AAA4ABD1D207A_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____59F5BD34B6C013DEACC784F69C67E95150033A84_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____714A581A59C860E1C36934C9751FFB81838C1E81_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____793DEAA83354CAE749C6AFF580340AB568595211_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____F78C320F25CF552D08E99BEF3BA28B34DD79867C_6_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07473F17E8BF4AC10B9F4A03F2E98B3893F86743;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5B6805FF35E9D5281B12A6FE89E20C33842F2B82;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0EB61DE4D9F3BC017CB4CCB9789539AD5533AD;
IL2CPP_EXTERN_C String_t* _stringLiteral802E1AAA5091468BB2ACAD98B776F7F942CA86E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB31C71CFB219C98C23E9876F631A7BFAA2BA1011;
IL2CPP_EXTERN_C String_t* _stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E65D0FD281A20B81EE66FB465F7427E8240937;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CStringBlock_Dispose_mF17810F6CEFAFFBC5977F8480D426DD8A59CCF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CString_Append_mCF56B006953274398D7D82B9D531C71C1C5BCEE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CString_ReplaceUnchecked_m7FFDC567AE5813404F1B7E19AB13DC2E5C194CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CString_Replace_m067E99581FE69BD5ADEAFFE2542B98BD12C140E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CString_Replace_m3A53CA725C7C48463FF07A2CB7AABA990011984E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CString_ToLower_m910424414EBC8ED3CA7269FF0825A75DC5E416A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomInfo_GetActiveSection_m73D69E72CABDFE5B9F823D5EDA98D940E0DC23CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD3A2743AE977D53B2D02C0ACB2FAAFC597AF70E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C7253B1A98579DF475B645F2B94A19F777BDCCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2AF94AFDE2FE7842CFEE5300A4363B77C22D1D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAD0B367C73A379CDE170B6216CEBB1516C9FBA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m16772B71D2508EF7E12B907FE51CA7BD9569A719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberFormatter_AppendNonNegativeNumber_m23B702633E88215B547CAC1FDDEAF321CF32CDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberFormatter_FormatHexadecimal_m7BB28976F586CA73D802A1DDCF7005CCE2E9FE1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NumberFormatter_IntegerToString_mA0C15CFE190B4C564E9F679753B6F31467B57AA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m315B36A52F289B78CF31480C0771BE6FFAF8DE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m7C93CE2BFC28DA318E47772E502D7AB581113981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m22484AF9F28584F97572844908C91D71CAE740FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m907F91178ED61355D1784B06A5AE25A763BF2202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m7C42758225656AB4392773D4D32356D49EAD5392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD265908D8C8DE7D15E351B60978CAEF48C83D366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m43ECB2AE58C19F38C68FCEC7B14DB595FDA6F240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB371954EA47A2AC7090AD6ABED6B269E197641C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mC4D8E149D45AFE79D1D3EF5427A6745A095DF5BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m849D8D03F699D93C5AA66ADB40A1D4256284ABE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mE4A367554707DD68A3FD192086F87BB5E3943B6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mD137380D49992D5E8C42E967702957F7B0BF555E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m615DB0F086524EF1D0A4DF68A6A67578BB49D1E6_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5FFCCE8F0CD29C6662EFD386ED5FE3BD7A6BD50A 
{
};

// ArrayPool`1<System.Char>
struct ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T[]>[] ArrayPool`1::pool
	Queue_1U5BU5D_t79E33A9CEAA0D3A4B45788765A8AA263DB4F79DE* ___pool_0;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>
struct Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t819AA947F8F5BA4CE91F4BC0CDB05F9EA207C9E0* ____entries_1;
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
	KeyCollection_t53577C59498755AD2E565735AD56B3FD0870E177* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE379123A57FDD76E312770633A4FE79BEB69F60B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<CString>
struct List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CStringU5BU5D_t1297678BC71D04AEDA56623CF849AA08E58F9C0C* ____items_1;
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

// System.Collections.Generic.Queue`1<CString>
struct Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	CStringU5BU5D_t1297678BC71D04AEDA56623CF849AA08E58F9C0C* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<CString/CStringBlock>
struct Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	CStringBlockU5BU5D_tEB22D4C964C86290F1DEA6AB113C2509AA3AC157* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<CString/CStringBlock>
struct Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	CStringBlockU5BU5D_tEB22D4C964C86290F1DEA6AB113C2509AA3AC157* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71  : public RuntimeObject
{
};

// CString
struct CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898  : public RuntimeObject
{
	// System.Char[] CString::_buffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____buffer_6;
	// System.Int32 CString::length
	int32_t ___length_7;
	// System.Boolean CString::beDisposed
	bool ___beDisposed_8;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// NumberFormatter
struct NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D  : public RuntimeObject
{
	// System.Threading.Thread NumberFormatter::_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_6;
	// System.Int32 NumberFormatter::_ind
	int32_t ____ind_8;
	// System.Boolean NumberFormatter::_NaN
	bool ____NaN_9;
	// System.Boolean NumberFormatter::_infinity
	bool ____infinity_10;
	// System.Boolean NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_11;
	// System.Boolean NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_12;
	// System.Boolean NumberFormatter::_positive
	bool ____positive_13;
	// System.Char NumberFormatter::_specifier
	Il2CppChar ____specifier_14;
	// System.Int32 NumberFormatter::_precision
	int32_t ____precision_15;
	// System.Int32 NumberFormatter::_defPrecision
	int32_t ____defPrecision_16;
	// System.Int32 NumberFormatter::_digitsLen
	int32_t ____digitsLen_17;
	// System.Int32 NumberFormatter::_offset
	int32_t ____offset_18;
	// System.Int32 NumberFormatter::_decPointPos
	int32_t ____decPointPos_19;
	// System.UInt32 NumberFormatter::_val1
	uint32_t ____val1_20;
	// System.UInt32 NumberFormatter::_val2
	uint32_t ____val2_21;
	// System.UInt32 NumberFormatter::_val3
	uint32_t ____val3_22;
	// System.UInt32 NumberFormatter::_val4
	uint32_t ____val4_23;
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

// StringPool
struct StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C  : public RuntimeObject
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

// CString/CStringBlock
struct CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2  : public RuntimeObject
{
	// System.Collections.Generic.List`1<CString> CString/CStringBlock::list
	List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* ___list_0;
	// System.Boolean CString/CStringBlock::beDisposed
	bool ___beDisposed_1;
};

// NumberFormatter/CustomInfo
struct CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD  : public RuntimeObject
{
	// System.Boolean NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
struct __StaticArrayInitTypeSizeU3D152_tEFF50A6DA0A0A22725C909C4E299F421CD9C3552 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_tEFF50A6DA0A0A22725C909C4E299F421CD9C3552__padding[152];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16384
struct __StaticArrayInitTypeSizeU3D16384_t1F230FAC0281FAD803944F6063FE2C58D970BE67 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16384_t1F230FAC0281FAD803944F6063FE2C58D970BE67__padding[16384];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t703B1B25E78EED92517D0380847197CECEFF53E2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t703B1B25E78EED92517D0380847197CECEFF53E2__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=400
struct __StaticArrayInitTypeSizeU3D400_tACD9523ACE41FEC921C53B12D69FFB2C4A1FEBA3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D400_tACD9523ACE41FEC921C53B12D69FFB2C4A1FEBA3__padding[400];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=50
struct __StaticArrayInitTypeSizeU3D50_tACFBB86EE7CBDF6F768D3BDAAF11D2C63412A10A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D50_tACFBB86EE7CBDF6F768D3BDAAF11D2C63412A10A__padding[50];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192
struct __StaticArrayInitTypeSizeU3D8192_t7881DCECF9BED1DAA1AA47B08F1F32F71839E3F4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D8192_t7881DCECF9BED1DAA1AA47B08F1F32F71839E3F4__padding[8192];
	};
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4  : public RuntimeObject
{
	// System.String System.Globalization.TextInfo::m_listSeparator
	String_t* ___m_listSeparator_0;
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.String System.Globalization.TextInfo::m_cultureName
	String_t* ___m_cultureName_2;
	// System.Globalization.CultureData System.Globalization.TextInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_3;
	// System.String System.Globalization.TextInfo::m_textInfoName
	String_t* ___m_textInfoName_4;
	// System.Nullable`1<System.Boolean> System.Globalization.TextInfo::m_IsAsciiCasingSameAsInvariant
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_IsAsciiCasingSameAsInvariant_5;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_7;
	// System.Int32 System.Globalization.TextInfo::m_nDataItem
	int32_t ___m_nDataItem_8;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_10;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// <Module>

// <Module>

// ArrayPool`1<System.Char>

// ArrayPool`1<System.Char>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>

// System.Collections.Generic.List`1<CString>
struct List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CStringU5BU5D_t1297678BC71D04AEDA56623CF849AA08E58F9C0C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CString>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.Queue`1<CString>

// System.Collections.Generic.Queue`1<CString>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.String>

// System.Collections.Generic.Queue`1<System.String>

// System.Collections.Generic.Queue`1<CString/CStringBlock>

// System.Collections.Generic.Queue`1<CString/CStringBlock>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<System.Object>

// System.Collections.Generic.Stack`1<CString/CStringBlock>

// System.Collections.Generic.Stack`1<CString/CStringBlock>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::284E0936DD0EACE33AA8F33A3E9CF4475C06F90C
	__StaticArrayInitTypeSizeU3D152_tEFF50A6DA0A0A22725C909C4E299F421CD9C3552 ___284E0936DD0EACE33AA8F33A3E9CF4475C06F90C_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16384 <PrivateImplementationDetails>::44EDD5807FD1F0FB6E35E248353AAA4ABD1D207A
	__StaticArrayInitTypeSizeU3D16384_t1F230FAC0281FAD803944F6063FE2C58D970BE67 ___44EDD5807FD1F0FB6E35E248353AAA4ABD1D207A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t703B1B25E78EED92517D0380847197CECEFF53E2 ___59F5BD34B6C013DEACC784F69C67E95150033A84_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192 <PrivateImplementationDetails>::714A581A59C860E1C36934C9751FFB81838C1E81
	__StaticArrayInitTypeSizeU3D8192_t7881DCECF9BED1DAA1AA47B08F1F32F71839E3F4 ___714A581A59C860E1C36934C9751FFB81838C1E81_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=400 <PrivateImplementationDetails>::793DEAA83354CAE749C6AFF580340AB568595211
	__StaticArrayInitTypeSizeU3D400_tACD9523ACE41FEC921C53B12D69FFB2C4A1FEBA3 ___793DEAA83354CAE749C6AFF580340AB568595211_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_t703B1B25E78EED92517D0380847197CECEFF53E2 ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=50 <PrivateImplementationDetails>::F78C320F25CF552D08E99BEF3BA28B34DD79867C
	__StaticArrayInitTypeSizeU3D50_tACFBB86EE7CBDF6F768D3BDAAF11D2C63412A10A ___F78C320F25CF552D08E99BEF3BA28B34DD79867C_6;
};

// <PrivateImplementationDetails>

// CString
struct CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields
{
	// ArrayPool`1<System.Char> CString::pool
	ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* ___pool_0;
	// System.Collections.Generic.Queue`1<CString> CString::queue
	Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* ___queue_1;
	// System.Collections.Generic.Queue`1<CString/CStringBlock> CString::blocks
	Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* ___blocks_2;
	// System.Collections.Generic.Stack`1<CString/CStringBlock> CString::stack
	Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* ___stack_3;
	// CString/CStringBlock CString::currentBlock
	CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* ___currentBlock_4;
	// System.String CString::NewLine
	String_t* ___NewLine_5;
	// System.Char[] CString::WhiteChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___WhiteChars_9;
	// System.Collections.Generic.List`1<CString> CString::splitList
	List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* ___splitList_10;
	// System.Char[] CString::numbuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___numbuffer_11;
};

// CString

// System.Globalization.CultureInfo
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

// System.Globalization.CultureInfo

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// NumberFormatter
struct NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields
{
	// System.Int32[] NumberFormatter::DecHexDigits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DecHexDigits_0;
	// System.Char[] NumberFormatter::DigitLowerTable
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DigitLowerTable_1;
	// System.Char[] NumberFormatter::DigitUpperTable
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DigitUpperTable_2;
	// System.Int64[] NumberFormatter::TenPowersList
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___TenPowersList_3;
	// System.UInt64[] NumberFormatter::MantissaBitsTable
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___MantissaBitsTable_4;
	// System.Int32[] NumberFormatter::TensExponentTable
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___TensExponentTable_5;
	// System.Globalization.NumberFormatInfo NumberFormatter::_nfi
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ____nfi_7;
};

// NumberFormatter
struct NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields
{
	// NumberFormatter NumberFormatter::threadNumberFormatter
	NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* ___threadNumberFormatter_24;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// StringPool
struct StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>> StringPool::map
	Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* ___map_0;
};

// StringPool

// CString/CStringBlock

// CString/CStringBlock

// NumberFormatter/CustomInfo

// NumberFormatter/CustomInfo

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16384

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16384

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=400

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=400

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=50

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=50

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4_StaticFields
{
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TextInfo::s_Invariant
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___s_Invariant_6;
};

// System.Globalization.TextInfo

// System.ArgumentException

// System.ArgumentException

// System.FormatException

// System.FormatException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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


// T[] ArrayPool`1<System.Char>::Alloc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_gshared (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, int32_t ___0_n, const RuntimeMethod* method) ;
// System.Int32 ArrayPool`1<System.Char>::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_gshared (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, int32_t ___0_v, const RuntimeMethod* method) ;
// System.Void ArrayPool`1<System.Char>::Collect(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_gshared (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_buffer, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void ArrayPool`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A_gshared (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T[] ArrayPool`1<System.Char>::Alloc(System.Int32)
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859 (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, int32_t ___0_n, const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3*, int32_t, const RuntimeMethod*))ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_gshared)(__this, ___0_n, method);
}
// System.Void CString/CStringBlock::Push(CString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock_Push_mEEB2536C9427CDE99E1134418C391804ABC3B5F3 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_str, const RuntimeMethod* method) ;
// System.Int32 ArrayPool`1<System.Char>::NextPowerOfTwo(System.Int32)
inline int32_t ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, int32_t ___0_v, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3*, int32_t, const RuntimeMethod*))ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_gshared)(__this, ___0_v, method);
}
// System.Void CString::ClearBuffer(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_ClearBuffer_m61460AE90F15E8564D59F6C40E2CEEAB8C21A948 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void CString::CharCopy(System.Char[],System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_CharCopy_m659E47B6FB1FFE6017640049BCEB8918B7AAEA67 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_target, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_source, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void ArrayPool`1<System.Char>::Collect(T[])
inline void ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_gshared)(__this, ___0_buffer, method);
}
// System.Int32 System.Collections.Generic.Queue`1<CString>::get_Count()
inline int32_t Queue_1_get_Count_m43ECB2AE58C19F38C68FCEC7B14DB595FDA6F240_inline (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<CString>::Dequeue()
inline CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* Queue_1_Dequeue_m7C93CE2BFC28DA318E47772E502D7AB581113981 (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* __this, const RuntimeMethod* method)
{
	return ((  CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* (*) (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void CString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString__ctor_m72B3233BB839E5FFFBE29A46A25E1716470A4D54 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<CString>::Enqueue(T)
inline void Queue_1_Enqueue_m22484AF9F28584F97572844908C91D71CAE740FD (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* __this, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B*, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.Queue`1<CString/CStringBlock>::get_Count()
inline int32_t Queue_1_get_Count_mB371954EA47A2AC7090AD6ABED6B269E197641C4_inline (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<CString/CStringBlock>::Dequeue()
inline CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* Queue_1_Dequeue_m315B36A52F289B78CF31480C0771BE6FFAF8DE62 (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* __this, const RuntimeMethod* method)
{
	return ((  CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* (*) (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void CString/CStringBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock__ctor_mD7E778CA232EFB8EE7FA863EEF9DC560E8C11598 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, const RuntimeMethod* method) ;
// System.Void CString/CStringBlock::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock_Init_m077E0B6EC8A30CA92CC715054289AE13784AE9C2 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<CString/CStringBlock>::Push(T)
inline void Stack_1_Push_mE4A367554707DD68A3FD192086F87BB5E3943B6E (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* __this, CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84*, CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Void CString::memset(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_memset_m74E7CA38A4F200E1F5CBE41F68115CA4CC26DA6A (uint8_t* ___0_dest, int32_t ___1_val, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Boolean CString::Equals(CString,CString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CString_Equals_m06BF6514AEB582C0D6DF798169C9BE5726E289D2 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_a, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___1_b, const RuntimeMethod* method) ;
// CString CString::Alloc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Alloc_mB57C7AAF6979CB5F952CD2837EDAFFD7FA102E6C (int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void CString::CharCopy(System.Char*,System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C (Il2CppChar* ___0_dest, Il2CppChar* ___1_src, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 CString::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_IndexOfUnchecked_m45A8A0156075D7206DA46004A49B556A378E2412 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// CString CString::ReplaceUnchecked(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ReplaceUnchecked_m7FFDC567AE5813404F1B7E19AB13DC2E5C194CD4 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// CString CString::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Replace_m2D911B3DC7C72FAFAB60B751B483296F1E18330E (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Int32 CString::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_IndexOfOrdinalUnchecked_mEFC33A2972AB5898EE417B4DE5595B4ECF392388 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
// CString CString::ReplaceFallback(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ReplaceFallback_mA098516BD275FA1627B2A5C14FA057278F518C5B (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_oldValue, String_t* ___1_newValue, int32_t ___2_testedCount, const RuntimeMethod* method) ;
// CString CString::SubstringUnchecked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_SubstringUnchecked_m5AB9B310E6D0D98D96167E1B49572A1DE259658F (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_startIndex, int32_t ___1_len, const RuntimeMethod* method) ;
// CString CString::Append(CString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_m2461F2ABCEC07C599DBBB8C7466336383AADCF53 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_right, const RuntimeMethod* method) ;
// CString CString::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_mF1773B9183ED9EF635964F4AECFAD592F4305730 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// CString CString::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLower_m910424414EBC8ED3CA7269FF0825A75DC5E416A3 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// CString CString::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLowerInvariant_m9E46EECEC57761EE3E30CABF7961E9FFAC785777 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) ;
// CString CString::ToLower(System.Globalization.TextInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLower_m2F1A4BB268E7BF1249470EC7C1A395622C422DAD (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___0_text, const RuntimeMethod* method) ;
// System.Char System.Char::ToLowerInvariant(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToLowerInvariant_m983C1CD07015E41B97D71F466B4B686F1145E60D (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Int32 CString::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::NumberToString(System.Char*,System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_NumberToString_mC5980668606F0D6F5406E179DB4A09E7D14F57EC (Il2CppChar* ___0_buf, int32_t ___1_value, RuntimeObject* ___2_fp, const RuntimeMethod* method) ;
// System.Void CString::memcpy2(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_memcpy2_mAAC90843D8D265DBAE08D49253584766E49ECE16 (uint8_t* ___0_dest, uint8_t* ___1_src, int32_t ___2_size, const RuntimeMethod* method) ;
// System.Void CString::memcpy4(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_memcpy4_m3E494F01E80C12D1A43F310A27FF3868C95ACC16 (uint8_t* ___0_dest, uint8_t* ___1_src, int32_t ___2_size, const RuntimeMethod* method) ;
// System.Void ArrayPool`1<System.Char>::.ctor()
inline void ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3*, const RuntimeMethod*))ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<CString>::.ctor()
inline void Queue_1__ctor_mD265908D8C8DE7D15E351B60978CAEF48C83D366 (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<CString/CStringBlock>::.ctor()
inline void Queue_1__ctor_m7C42758225656AB4392773D4D32356D49EAD5392 (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<CString/CStringBlock>::.ctor()
inline void Stack_1__ctor_mD137380D49992D5E8C42E967702957F7B0BF555E (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CString>::.ctor()
inline void List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5 (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CString>::Add(T)
inline void List_1_Add_m5C7253B1A98579DF475B645F2B94A19F777BDCCD_inline (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* __this, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CString>::get_Item(System.Int32)
inline CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* List_1_get_Item_m16772B71D2508EF7E12B907FE51CA7BD9569A719 (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* (*) (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void CString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_Dispose_mA4C969067EA284005BBBA0CEAFF393E07AF701DF (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CString>::get_Count()
inline int32_t List_1_get_Count_mAD0B367C73A379CDE170B6216CEBB1516C9FBA35_inline (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CString>::Clear()
inline void List_1_Clear_m2AF94AFDE2FE7842CFEE5300A4363B77C22D1D3C_inline (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<CString/CStringBlock>::Enqueue(T)
inline void Queue_1_Enqueue_m907F91178ED61355D1784B06A5AE25A763BF2202 (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* __this, CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323*, CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Stack`1<CString/CStringBlock>::Pop()
inline CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* Stack_1_Pop_m849D8D03F699D93C5AA66ADB40A1D4256284ABE6 (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* __this, const RuntimeMethod* method)
{
	return ((  CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* (*) (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<CString/CStringBlock>::get_Count()
inline int32_t Stack_1_get_Count_m615DB0F086524EF1D0A4DF68A6A67578BB49D1E6_inline (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<CString/CStringBlock>::Peek()
inline CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* Stack_1_Peek_mC4D8E149D45AFE79D1D3EF5427A6745A095DF5BB (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* __this, const RuntimeMethod* method)
{
	return ((  CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* (*) (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.UInt32 NumberFormatter::FastToDecHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumberFormatter_FastToDecHex_m3BFA52B0FC8D8ED1ABC5AF271884ACF063F084EE (int32_t ___0_val, const RuntimeMethod* method) ;
// System.UInt32 NumberFormatter::ToDecHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumberFormatter_ToDecHex_mF3F2BF319BFAF2078EB7B7AB48576E21E2B80BC9 (int32_t ___0_val, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FastDecHexLen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FastDecHexLen_m6DA393537412E956CD627973DA7015F057C7CE9A (int32_t ___0_val, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::DecHexLen(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_DecHexLen_mBFFCAFEDF313D5B9C1678B4FA5CF8E7D343143A7 (uint32_t ___0_val, const RuntimeMethod* method) ;
// System.Int64 NumberFormatter::GetTenPowerOf(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NumberFormatter_GetTenPowerOf_m6A45B8DBEC9FAF452E8C570C67B3CA8CAE595964 (int32_t ___0_i, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* Thread_get_CurrentCulture_mD011FDBB62CA34E83A1D1916628826ADAC85E7A6 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_set_CurrentCulture_m98C79E43E8B7EE9484C6C08836786C98E651B827 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_value, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::DecHexLen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_DecHexLen_mE0267E1D63E7324673916FFF6C0CE9D02B740AAB (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::ParsePrecision(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_ParsePrecision_m1F52983E7B53FCB6DDB70EF75276D72C754DA017 (String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Init_m375405CBA50F24E305C54E94B6FD6097EBD1954C (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void NumberFormatter::InitHex(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_InitHex_m6D632F6974C9BD7A3CB7868C30F8A3B927DA6D71 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void NumberFormatter::InitDecHexDigits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_InitDecHexDigits_m35FA009FB57A4E4D9769894F1CD3884B3D7E9140 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CultureInfo_get_IsReadOnly_m53947CBF80905492B4AC82C8A148088E2DB8F8EF_inline (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* __this, const RuntimeMethod* method) ;
// System.Boolean NumberFormatter::RoundBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_RoundBits_m2046597FD513FAD85C872232C58D7EC30076A272 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_shift, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AddOneToDecHex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AddOneToDecHex_m4FC69F460DC5A7B41B92EF6ECAD058FF8E121013 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::RemoveTrailingZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_RemoveTrailingZeros_m0AA459821140357E010B8A82F727220D97EEF9FA (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::CountTrailingZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_CountTrailingZeros_mB31D59C0BC86186943E474A7B99CCF60ACF3667A (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.UInt32 NumberFormatter::AddOneToDecHex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumberFormatter_AddOneToDecHex_m954B941C1C553B6232AAD166569538360487AB0A (uint32_t ___0_val, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::CountTrailingZeros(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_CountTrailingZeros_m85DA10C45E6F68E8B12D8C6E1DACBEA56F377549 (uint32_t ___0_val, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Void NumberFormatter::.ctor(System.Threading.Thread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter__ctor_mF2746EE9087A992DF63AEF1612F147D51B010175 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___0_current, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
// NumberFormatter NumberFormatter::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* NumberFormatter_GetInstance_mFC251EFB386558220E6BAC2762CCB7622FCDD7EA (const RuntimeMethod* method) ;
// System.Void NumberFormatter::Init(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Init_m3E891FFA14B42368674430ED23FACBACF6BBB60F (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, String_t* ___0_format, int32_t ___1_value, int32_t ___2_defPrecision, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::IntegerToString(System.Char*,System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_IntegerToString_mA0C15CFE190B4C564E9F679753B6F31467B57AA9 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, String_t* ___1_format, RuntimeObject* ___2_fp, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Release()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NumberFormatter_Release_mD6ABA86179A8F9387EC1EF9C85BCE0F343085686_inline (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::NumberToString(System.Char*,System.String,System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_NumberToString_m4481AC28D8DC937A83A4FDCA7DA25A3EA67CB20E (Il2CppChar* ___0_p, String_t* ___1_format, int32_t ___2_value, RuntimeObject* ___3_fp, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FastIntToCString(System.Char*,System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FastIntToCString_m406F40F6B5F7AB8939D2DE554DEAF3D0C448D366 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_p, int32_t ___1_value, RuntimeObject* ___2_fp, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatter_GetNumberFormatInstance_mC1EB772474A7A5C71DF8DCEEF75B14B825D95554 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, RuntimeObject* ___0_fp, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Append(System.Char*,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_dest, String_t* ___1_s, const RuntimeMethod* method) ;
// System.Void NumberFormatter::FastAppendDigits(System.Char*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_FastAppendDigits_mE1372A8BFA2E5E8C21A10C3EB3F0D8ED6E90E7BC (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_val, bool ___2_force, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatCurrency(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatCurrency_m9465FA2F28DF0A6E7EE138B073DE05F8AE6D711E (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatDecimal(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatDecimal_m2D72A6235E3520F9BE0E3B52827190D4C286DDE9 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatExponential(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatExponential_m56B6FF6283DDD8C357EC458ABC1BBC6F5CC525E3 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatFixedPoint(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatFixedPoint_mF2EF89E481C1C2D1F34F8FEC43B0FCDF8E6A7FDE (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatGeneral(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatGeneral_m285F3B894E3A6A84DB8848FE22455633E10B028B (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatNumber(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatNumber_mDE5387F38BC7D851D25264ECCDA9A2A321105585 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatPercent(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatPercent_m8BD850FDE244DBD61725411921E5B8C8AB5FB5C4 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatHexadecimal(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatHexadecimal_m7BB28976F586CA73D802A1DDCF7005CCE2E9FE1C (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatCustom(System.Char*,System.String,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatCustom_mD687317A3F0BB0167B9199F5A429933A4F5C2ED3 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, String_t* ___1_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Boolean NumberFormatter::RoundDecimal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_decimals, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Append(System.Char*,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, Il2CppChar ___1_c, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32[] System.Globalization.NumberFormatInfo::get_CurrencyGroupSizes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Char*,System.Int32[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendIntegerStringWithGroupSeparator_m3D6E5D77621DAC89B4D8703AF2909CB2FE995815 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_groups, String_t* ___2_groupSeparator, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendDecimalString(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDecimalString_m02C8B143F4491895EE2D7355329962E4E3AAB8CC (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendDigits(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_start, int32_t ___2_end, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::get_IntegerDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_get_IntegerDigits_mBD9BF5958AD533730D3310FFA6D8365BCE310FC5 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendIntegerString(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendIntegerString_m3ED3F188BDE1B60D1AAA86C4069117F4AEF2D093 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_minLength, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Boolean NumberFormatter::get_IsFloatingSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_get_IsFloatingSource_mFDE255FD61D0FAD2DEE35D7DCA2F334443F50393 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::RoundPos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_RoundPos_m69B323204871E43BE1D890ABB552CB697E375F40 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_pos, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::FormatExponential(System.Char*,System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatExponential_mEFC4C1C0064B930CDD488FBAE51AA76831E9A113 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, int32_t ___3_expDigits, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentDecimalDigits_m49B53E03F294674AA1B20B77C56E10721BA8643D_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Multiply10(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Multiply10_m5DEA97934150138B2E0C608B4D4F80FA0D035267 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentGroupSeparator_m1321ACEA2239006587D132AF6445E55D733BABF9_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentDecimalSeparator_mB656F8F033BB700E4647AF14044C607F34634B80_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendOneDigit(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendOneDigit_m94A97CEE1E492A8A6E908EF48EF42872315F5B6E (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_start, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendExponent(System.Char*,System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendExponent_m61CDD6ACCCA62085C37475ADF7C6992880F06CDF (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___1_nfi, int32_t ___2_exponent, int32_t ___3_minDigits, const RuntimeMethod* method) ;
// System.Boolean NumberFormatter::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_get_IsZero_m3DD77B91E6745652726343DA34CBE43F2660A03C (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomInfo_GetActiveSection_m73D69E72CABDFE5B9F823D5EDA98D940E0DC23CA (String_t* ___0_format, bool* ___1_positive, bool ___2_zero, int32_t* ___3_offset, int32_t* ___4_length, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::CharCopy(System.Char*,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_CharCopy_m4845A8D1BC716918C743DEE9E80022369CAEC4A6 (Il2CppChar* ___0_buf, String_t* ___1_str, const RuntimeMethod* method) ;
// NumberFormatter/CustomInfo NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* CustomInfo_Parse_m85FF733C1A4A0F05FCE4FCE905D6BC8F820310E0 (String_t* ___0_format, int32_t ___1_offset, int32_t ___2_length, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___3_nfi, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Divide10(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Divide10_mB4B5EB42D58CCC036D40968F3B56439C50377721 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendNonNegativeNumber_m23B702633E88215B547CAC1FDDEAF321CF32CDEF (StringBuilder_t* ___0_sb, int32_t ___1_v, const RuntimeMethod* method) ;
// System.Boolean NumberFormatter::get_IsZeroInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_get_IsZeroInteger_mB248091B22087EEFE6259AE8624D05E7B03B5368 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendIntegerString_m210D488FD5E935BC4662DCABAA1EEEBDF436BF8D (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_minLength, StringBuilder_t* ___1_sb, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::get_DecimalDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_get_DecimalDigits_mF566DE29047E1EA035B029409A6935C9B4188138 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDecimalString_m350C0D44C10A4D3D79A7ACC7D5773C93FD6E1BFB (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_precision, StringBuilder_t* ___1_sb, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mE8DE929F4FD45D1C543FFFEF30963F80C083DC32 (StringBuilder_t* __this, int32_t ___0_index, String_t* ___1_value, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679 (StringBuilder_t* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___0_index, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_IsZeroOnly_m1FD6683F424B45D285C1D57C15818F16A440CDB8 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_ZeroTrimEnd_mB40E04AC7D316E916F317E3206A8C1D183665439 (StringBuilder_t* ___0_sb, bool ___1_canEmpty, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* CustomInfo_Format_mBA292FC9028760623E601C223E84A873990CF9FF (CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* __this, String_t* ___0_format, int32_t ___1_offset, int32_t ___2_length, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___3_nfi, bool ___4_positive, StringBuilder_t* ___5_sb_int, StringBuilder_t* ___6_sb_dec, StringBuilder_t* ___7_sb_exp, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_m8C1A38685D548E89FB8A05525B55261CC8D271B2 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Int32 NumberFormatter::ScaleOrder(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_ScaleOrder_m0EA93115D1ABDA9205735318F653DAE53CA409FA (int64_t ___0_hi, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___0_value, int32_t ___1_repeatCount, const RuntimeMethod* method) ;
// System.Void NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDigits_m0F05642E6E8980799871AAC524CF19CB57ED1AEE (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_start, int32_t ___1_end, StringBuilder_t* ___2_sb, const RuntimeMethod* method) ;
// System.Void NumberFormatter::Append(System.Char*,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Append_m135AE7274D14DBA6C466ED55FAA4EE02A1EA0B33 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, Il2CppChar ___1_c, int32_t ___2_cnt, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE (StringBuilder_t* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
// System.Void NumberFormatter/CustomInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomInfo__ctor_mED225968E251F15894887C88024E4D4F8A4906AD (CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PerMilleSymbol_mBE43A9E5D7F05030C0258FB452BD94FD6E411533_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* __this, int32_t ___0_key, Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7*, int32_t, Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
inline int32_t Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(T)
inline void Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832 (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor()
inline void Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* __this, int32_t ___0_key, Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7*, int32_t, Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// T System.Collections.Generic.Queue`1<System.String>::Dequeue()
inline String_t* Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_mD3A2743AE977D53B2D02C0ACB2FAAFC597AF70E2 (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void CString::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString__ctor_m510311CD843C694C18C7E3B900CEDD8B9E515D5A (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_0 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_1 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		int32_t L_2 = ___0_count;
		NullCheck(L_1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859(L_1, L_2, ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var);
		__this->____buffer_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_6), (void*)L_3);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_4 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		NullCheck(L_4);
		CStringBlock_Push_mEEB2536C9427CDE99E1134418C391804ABC3B5F3(L_4, __this, NULL);
		goto IL_0041;
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_5 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		int32_t L_6 = ___0_count;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A(L_5, L_6, ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->____buffer_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_6), (void*)L_8);
	}

IL_0041:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->____buffer_6;
		CString_ClearBuffer_m61460AE90F15E8564D59F6C40E2CEEAB8C21A948(__this, L_9, NULL);
		return;
	}
}
// System.Int32 CString::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB31C71CFB219C98C23E9876F631A7BFAA2BA1011)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___0_capacity;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____buffer_6;
		NullCheck(L_3);
		if ((((int32_t)L_2) > ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->____buffer_6;
		NullCheck(L_4);
		return ((int32_t)(((RuntimeArray*)L_4)->max_length));
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_5 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		int32_t L_6 = ___0_capacity;
		NullCheck(L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7;
		L_7 = ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859(L_5, L_6, ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var);
		V_0 = L_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->____buffer_6;
		int32_t L_10 = __this->___length_7;
		CString_CharCopy_m659E47B6FB1FFE6017640049BCEB8918B7AAEA67(L_8, L_9, L_10, NULL);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_11 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->____buffer_6;
		NullCheck(L_11);
		ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA(L_11, L_12, ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_0;
		__this->____buffer_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_6), (void*)L_13);
		int32_t L_14 = ___0_capacity;
		return L_14;
	}
}
// System.Void CString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString__ctor_m72B3233BB839E5FFFBE29A46A25E1716470A4D54 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____buffer_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_6), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		__this->___length_7 = 0;
		return;
	}
}
// CString CString::Alloc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Alloc_mB57C7AAF6979CB5F952CD2837EDAFFD7FA102E6C (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m7C93CE2BFC28DA318E47772E502D7AB581113981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m43ECB2AE58C19F38C68FCEC7B14DB595FDA6F240_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* V_0 = NULL;
	{
		V_0 = (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898*)NULL;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* L_0 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m43ECB2AE58C19F38C68FCEC7B14DB595FDA6F240_inline(L_0, Queue_1_get_Count_m43ECB2AE58C19F38C68FCEC7B14DB595FDA6F240_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_2 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* L_3 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_3);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_4;
		L_4 = Queue_1_Dequeue_m7C93CE2BFC28DA318E47772E502D7AB581113981(L_3, Queue_1_Dequeue_m7C93CE2BFC28DA318E47772E502D7AB581113981_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0029;
	}

IL_0023:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_5 = (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898*)il2cpp_codegen_object_new(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CString__ctor_m72B3233BB839E5FFFBE29A46A25E1716470A4D54(L_5, NULL);
		V_0 = L_5;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_6 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_8 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		int32_t L_9 = ___0_size;
		NullCheck(L_8);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10;
		L_10 = ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859(L_8, L_9, ArrayPool_1_Alloc_m2B02FAA583CA3CCB9D9EF2E1D2A7BCF3FE8DE859_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->____buffer_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____buffer_6), (void*)L_10);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_11 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_12 = V_0;
		NullCheck(L_11);
		CStringBlock_Push_mEEB2536C9427CDE99E1134418C391804ABC3B5F3(L_11, L_12, NULL);
		goto IL_0064;
	}

IL_004e:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_14 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		int32_t L_15 = ___0_size;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A(L_14, L_15, ArrayPool_1_NextPowerOfTwo_mAB97D38BB452995AD78AE2B3AB79360898A0BE5A_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_16);
		NullCheck(L_13);
		L_13->____buffer_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____buffer_6), (void*)L_17);
	}

IL_0064:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_18 = V_0;
		NullCheck(L_18);
		L_18->___beDisposed_8 = (bool)0;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_19 = V_0;
		NullCheck(L_19);
		L_19->___length_7 = 0;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_20 = V_0;
		return L_20;
	}
}
// System.Void CString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_Dispose_mA4C969067EA284005BBBA0CEAFF393E07AF701DF (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m22484AF9F28584F97572844908C91D71CAE740FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___beDisposed_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->___beDisposed_8 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_1 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_2 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____buffer_6;
		NullCheck(L_2);
		ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA(L_2, L_3, ArrayPool_1_Collect_m91BF508E235269F81911A5012A7629C96A9450FA_RuntimeMethod_var);
		Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* L_4 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___queue_1;
		NullCheck(L_4);
		Queue_1_Enqueue_m22484AF9F28584F97572844908C91D71CAE740FD(L_4, __this, Queue_1_Enqueue_m22484AF9F28584F97572844908C91D71CAE740FD_RuntimeMethod_var);
	}

IL_0032:
	{
		__this->____buffer_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_6), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		__this->___length_7 = 0;
		return;
	}
}
// IStringBlock CString::Block()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CString_Block_m4055B74FADB8DBBD1F14DA1CEC274BBDABF17534 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m315B36A52F289B78CF31480C0771BE6FFAF8DE62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB371954EA47A2AC7090AD6ABED6B269E197641C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mE4A367554707DD68A3FD192086F87BB5E3943B6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* V_0 = NULL;
	{
		V_0 = (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)NULL;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* L_0 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___blocks_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_mB371954EA47A2AC7090AD6ABED6B269E197641C4_inline(L_0, Queue_1_get_Count_mB371954EA47A2AC7090AD6ABED6B269E197641C4_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* L_2 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___blocks_2;
		NullCheck(L_2);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_3;
		L_3 = Queue_1_Dequeue_m315B36A52F289B78CF31480C0771BE6FFAF8DE62(L_2, Queue_1_Dequeue_m315B36A52F289B78CF31480C0771BE6FFAF8DE62_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0021;
	}

IL_001b:
	{
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_4 = (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)il2cpp_codegen_object_new(CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CStringBlock__ctor_mD7E778CA232EFB8EE7FA863EEF9DC560E8C11598(L_4, NULL);
		V_0 = L_4;
	}

IL_0021:
	{
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_5 = V_0;
		NullCheck(L_5);
		CStringBlock_Init_m077E0B6EC8A30CA92CC715054289AE13784AE9C2(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* L_6 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___stack_3;
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_7 = V_0;
		NullCheck(L_6);
		Stack_1_Push_mE4A367554707DD68A3FD192086F87BB5E3943B6E(L_6, L_7, Stack_1_Push_mE4A367554707DD68A3FD192086F87BB5E3943B6E_RuntimeMethod_var);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_8 = V_0;
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4), (void*)L_8);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_9 = V_0;
		return L_9;
	}
}
// System.Void CString::ClearBuffer(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_ClearBuffer_m61460AE90F15E8564D59F6C40E2CEEAB8C21A948 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_buffer;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0017;
	}

IL_000f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_1;
		NullCheck(L_3);
		V_0 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0017:
	{
		Il2CppChar* L_4 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_buffer;
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_memset_m74E7CA38A4F200E1F5CBE41F68115CA4CC26DA6A((uint8_t*)((intptr_t)L_4), ((int32_t)204), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_5)->max_length)))), NULL);
		V_0 = (Il2CppChar*)((uintptr_t)0);
		return;
	}
}
// System.Void CString::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_Clear_m93297E7BE337710F81BA54211DD7EA5D4D247225 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	{
		__this->___length_7 = 0;
		return;
	}
}
// System.Boolean CString::Equals(CString,CString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CString_Equals_m06BF6514AEB582C0D6DF798169C9BE5726E289D2 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_a, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___1_b, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	Il2CppChar* V_4 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_6 = NULL;
	Il2CppChar* V_7 = NULL;
	Il2CppChar* V_8 = NULL;
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_0 = ___0_a;
		V_0 = L_0;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_1 = ___1_b;
		V_1 = L_1;
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = V_1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		if (L_5)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_6 = ___0_a;
		NullCheck(L_6);
		int32_t L_7 = L_6->___length_7;
		V_2 = L_7;
		int32_t L_8 = V_2;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_9 = ___1_b;
		NullCheck(L_9);
		int32_t L_10 = L_9->___length_7;
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_11 = ___0_a;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = L_11->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = L_12;
		V_5 = L_13;
		if (!L_13)
		{
			goto IL_0035;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_5;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_003a;
		}
	}

IL_0035:
	{
		V_3 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0043;
	}

IL_003a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_5;
		NullCheck(L_15);
		V_3 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0043:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_16 = ___1_b;
		NullCheck(L_16);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = L_16->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = L_17;
		V_6 = L_18;
		if (!L_18)
		{
			goto IL_0054;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_6;
		NullCheck(L_19);
		if (((int32_t)(((RuntimeArray*)L_19)->max_length)))
		{
			goto IL_005a;
		}
	}

IL_0054:
	{
		V_4 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0064;
	}

IL_005a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = V_6;
		NullCheck(L_20);
		V_4 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0064:
	{
		Il2CppChar* L_21 = V_3;
		V_7 = (Il2CppChar*)((intptr_t)L_21);
		Il2CppChar* L_22 = V_4;
		V_8 = (Il2CppChar*)((intptr_t)L_22);
		goto IL_00bf;
	}

IL_006f:
	{
		Il2CppChar* L_23 = V_7;
		int32_t L_24 = *((int32_t*)L_23);
		Il2CppChar* L_25 = V_8;
		int32_t L_26 = *((int32_t*)L_25);
		if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar* L_27 = V_7;
		int32_t L_28 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, 4)));
		Il2CppChar* L_29 = V_8;
		int32_t L_30 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, 4)));
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar* L_31 = V_7;
		int32_t L_32 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		Il2CppChar* L_33 = V_8;
		int32_t L_34 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		if ((!(((uint32_t)L_32) == ((uint32_t)L_34))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar* L_35 = V_7;
		int32_t L_36 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4)))));
		Il2CppChar* L_37 = V_8;
		int32_t L_38 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4)))));
		if ((((int32_t)L_36) == ((int32_t)L_38)))
		{
			goto IL_00a9;
		}
	}

IL_00a7:
	{
		return (bool)0;
	}

IL_00a9:
	{
		Il2CppChar* L_39 = V_7;
		V_7 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 2))));
		Il2CppChar* L_40 = V_8;
		V_8 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 2))));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_41, 8));
	}

IL_00bf:
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) >= ((int32_t)8)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_43 = V_2;
		if ((((int32_t)L_43) < ((int32_t)4)))
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar* L_44 = V_7;
		int32_t L_45 = *((int32_t*)L_44);
		Il2CppChar* L_46 = V_8;
		int32_t L_47 = *((int32_t*)L_46);
		if ((!(((uint32_t)L_45) == ((uint32_t)L_47))))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar* L_48 = V_7;
		int32_t L_49 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, 4)));
		Il2CppChar* L_50 = V_8;
		int32_t L_51 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_50, 4)));
		if ((((int32_t)L_49) == ((int32_t)L_51)))
		{
			goto IL_00dd;
		}
	}

IL_00db:
	{
		return (bool)0;
	}

IL_00dd:
	{
		Il2CppChar* L_52 = V_7;
		V_7 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 2))));
		Il2CppChar* L_53 = V_8;
		V_8 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 2))));
		int32_t L_54 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_54, 4));
	}

IL_00f3:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) <= ((int32_t)1)))
		{
			goto IL_0117;
		}
	}
	{
		Il2CppChar* L_56 = V_7;
		int32_t L_57 = *((int32_t*)L_56);
		Il2CppChar* L_58 = V_8;
		int32_t L_59 = *((int32_t*)L_58);
		if ((((int32_t)L_57) == ((int32_t)L_59)))
		{
			goto IL_0101;
		}
	}
	{
		return (bool)0;
	}

IL_0101:
	{
		Il2CppChar* L_60 = V_7;
		V_7 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))));
		Il2CppChar* L_61 = V_8;
		V_8 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))));
		int32_t L_62 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_62, 2));
	}

IL_0117:
	{
		int32_t L_63 = V_2;
		if (!L_63)
		{
			goto IL_0123;
		}
	}
	{
		Il2CppChar* L_64 = V_7;
		int32_t L_65 = *((uint16_t*)L_64);
		Il2CppChar* L_66 = V_8;
		int32_t L_67 = *((uint16_t*)L_66);
		return (bool)((((int32_t)L_65) == ((int32_t)L_67))? 1 : 0);
	}

IL_0123:
	{
		return (bool)1;
	}
}
// System.Boolean CString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CString_Equals_mCA6F767D6E7206D8BBE8751E959B66D5BA07F207 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CString_Equals_m06BF6514AEB582C0D6DF798169C9BE5726E289D2(__this, ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898*)IsInstClass((RuntimeObject*)L_0, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Int32 CString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_GetHashCode_m4B46DD7D89BAD6EAFAD4FB50DFA7827B0A8FB874 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_001c;
	}

IL_0014:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_1;
		NullCheck(L_3);
		V_0 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_001c:
	{
		Il2CppChar* L_4 = V_0;
		V_2 = (Il2CppChar*)((intptr_t)L_4);
		Il2CppChar* L_5 = V_2;
		int32_t L_6 = __this->___length_7;
		V_3 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2)))), 2));
		V_4 = 0;
		goto IL_0053;
	}

IL_0032:
	{
		int32_t L_7 = V_4;
		int32_t L_8 = V_4;
		Il2CppChar* L_9 = V_2;
		int32_t L_10 = *((uint16_t*)L_9);
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_7<<5)), L_8)), L_10));
		int32_t L_11 = V_4;
		int32_t L_12 = V_4;
		Il2CppChar* L_13 = V_2;
		int32_t L_14 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, 2)));
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_11<<5)), L_12)), L_14));
		Il2CppChar* L_15 = V_2;
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))));
	}

IL_0053:
	{
		Il2CppChar* L_16 = V_2;
		Il2CppChar* L_17 = V_3;
		if ((!(((uintptr_t)L_16) >= ((uintptr_t)L_17))))
		{
			goto IL_0032;
		}
	}
	{
		Il2CppChar* L_18 = V_3;
		V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, 2));
		Il2CppChar* L_19 = V_2;
		Il2CppChar* L_20 = V_3;
		if ((!(((uintptr_t)L_19) < ((uintptr_t)L_20))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_4;
		Il2CppChar* L_23 = V_2;
		int32_t L_24 = *((uint16_t*)L_23);
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_21<<5)), L_22)), L_24));
	}

IL_006b:
	{
		int32_t L_25 = V_4;
		return L_25;
	}
}
// System.Char CString::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar CString_get_Item_m66F1EC174FF2EE5AE23522964A5D571B3F5E592A (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____buffer_6;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Int32 CString::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_get_Length_mBFB6D78782496FCD319341CB3E67B6F26603784E (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___length_7;
		return L_0;
	}
}
// CString CString::SubstringUnchecked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_SubstringUnchecked_m5AB9B310E6D0D98D96167E1B49572A1DE259658F (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_startIndex, int32_t ___1_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B4_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B3_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B5_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B6_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B8_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B7_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B9_0 = NULL;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* G_B10_0 = NULL;
	{
		int32_t L_0 = ___1_len;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_1;
		L_1 = CString_Alloc_mB57C7AAF6979CB5F952CD2837EDAFFD7FA102E6C(0, NULL);
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = ___1_len;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_3;
		L_3 = CString_Alloc_mB57C7AAF6979CB5F952CD2837EDAFFD7FA102E6C(L_2, NULL);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_4 = L_3;
		NullCheck(L_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		V_2 = L_6;
		G_B3_0 = L_4;
		if (!L_6)
		{
			G_B4_0 = L_4;
			goto IL_001f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_2;
		NullCheck(L_7);
		G_B4_0 = G_B3_0;
		if (((int32_t)(((RuntimeArray*)L_7)->max_length)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0024;
		}
	}

IL_001f:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_0024:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_2;
		NullCheck(L_8);
		V_0 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		G_B6_0 = G_B5_0;
	}

IL_002c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9;
		V_3 = L_10;
		G_B7_0 = G_B6_0;
		if (!L_10)
		{
			G_B8_0 = G_B6_0;
			goto IL_003b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_3;
		NullCheck(L_11);
		G_B8_0 = G_B7_0;
		if (((int32_t)(((RuntimeArray*)L_11)->max_length)))
		{
			G_B9_0 = G_B7_0;
			goto IL_0040;
		}
	}

IL_003b:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		G_B10_0 = G_B8_0;
		goto IL_0048;
	}

IL_0040:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = V_3;
		NullCheck(L_12);
		V_1 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		G_B10_0 = G_B9_0;
	}

IL_0048:
	{
		Il2CppChar* L_13 = V_0;
		Il2CppChar* L_14 = V_1;
		int32_t L_15 = ___0_startIndex;
		int32_t L_16 = ___1_len;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)L_13), (Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_14), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 2)))), L_16, NULL);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_17 = G_B10_0;
		int32_t L_18 = ___1_len;
		NullCheck(L_17);
		L_17->___length_7 = L_18;
		V_0 = (Il2CppChar*)((uintptr_t)0);
		V_1 = (Il2CppChar*)((uintptr_t)0);
		return L_17;
	}
}
// System.Int32 CString::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_IndexOfUnchecked_m45A8A0156075D7206DA46004A49B556A378E2412 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	Il2CppChar* V_4 = NULL;
	{
		Il2CppChar L_0 = ___0_value;
		V_0 = L_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		V_2 = L_2;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_2;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0016;
		}
	}

IL_0011:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_001e;
	}

IL_0016:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_2;
		NullCheck(L_4);
		V_1 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_001e:
	{
		Il2CppChar* L_5 = V_1;
		int32_t L_6 = ___1_startIndex;
		V_3 = (Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_5), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2))));
		Il2CppChar* L_7 = V_3;
		int32_t L_8 = ___2_count;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(((int32_t)(L_8>>3))<<3))), 2))));
		goto IL_00e3;
	}

IL_0037:
	{
		Il2CppChar* L_9 = V_3;
		int32_t L_10 = *((uint16_t*)L_9);
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppChar* L_12 = V_3;
		Il2CppChar* L_13 = V_1;
		return ((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_12, ((intptr_t)L_13)))/2))));
	}

IL_0045:
	{
		Il2CppChar* L_14 = V_3;
		int32_t L_15 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, 2)));
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0058;
		}
	}
	{
		Il2CppChar* L_17 = V_3;
		Il2CppChar* L_18 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_17, ((intptr_t)L_18)))/2))), ((int64_t)1))));
	}

IL_0058:
	{
		Il2CppChar* L_19 = V_3;
		int32_t L_20 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar* L_22 = V_3;
		Il2CppChar* L_23 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_22, ((intptr_t)L_23)))/2))), ((int64_t)2))));
	}

IL_006e:
	{
		Il2CppChar* L_24 = V_3;
		int32_t L_25 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		int32_t L_26 = V_0;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar* L_27 = V_3;
		Il2CppChar* L_28 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_27, ((intptr_t)L_28)))/2))), ((int64_t)3))));
	}

IL_0084:
	{
		Il2CppChar* L_29 = V_3;
		int32_t L_30 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 2)))));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_009a;
		}
	}
	{
		Il2CppChar* L_32 = V_3;
		Il2CppChar* L_33 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_32, ((intptr_t)L_33)))/2))), ((int64_t)4))));
	}

IL_009a:
	{
		Il2CppChar* L_34 = V_3;
		int32_t L_35 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 2)))));
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar* L_37 = V_3;
		Il2CppChar* L_38 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_37, ((intptr_t)L_38)))/2))), ((int64_t)5))));
	}

IL_00b0:
	{
		Il2CppChar* L_39 = V_3;
		int32_t L_40 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 2)))));
		int32_t L_41 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00c6;
		}
	}
	{
		Il2CppChar* L_42 = V_3;
		Il2CppChar* L_43 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_42, ((intptr_t)L_43)))/2))), ((int64_t)6))));
	}

IL_00c6:
	{
		Il2CppChar* L_44 = V_3;
		int32_t L_45 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 2)))));
		int32_t L_46 = V_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_00dc;
		}
	}
	{
		Il2CppChar* L_47 = V_3;
		Il2CppChar* L_48 = V_1;
		return ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_47, ((intptr_t)L_48)))/2))), ((int64_t)7))));
	}

IL_00dc:
	{
		Il2CppChar* L_49 = V_3;
		V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 2))));
	}

IL_00e3:
	{
		Il2CppChar* L_50 = V_3;
		Il2CppChar* L_51 = V_4;
		if ((!(((uintptr_t)L_50) == ((uintptr_t)L_51))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar* L_52 = V_4;
		int32_t L_53 = ___2_count;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(L_53&7))), 2))));
		goto IL_010a;
	}

IL_00f8:
	{
		Il2CppChar* L_54 = V_3;
		int32_t L_55 = *((uint16_t*)L_54);
		int32_t L_56 = V_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_0106;
		}
	}
	{
		Il2CppChar* L_57 = V_3;
		Il2CppChar* L_58 = V_1;
		return ((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_57, ((intptr_t)L_58)))/2))));
	}

IL_0106:
	{
		Il2CppChar* L_59 = V_3;
		V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_59, 2));
	}

IL_010a:
	{
		Il2CppChar* L_60 = V_3;
		Il2CppChar* L_61 = V_4;
		if ((!(((uintptr_t)L_60) == ((uintptr_t)L_61))))
		{
			goto IL_00f8;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 CString::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CString_IndexOfOrdinalUnchecked_mEFC33A2972AB5898EE417B4DE5595B4ECF392388 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppChar* V_5 = NULL;
	Il2CppChar* V_6 = NULL;
	int32_t V_7 = 0;
	{
		String_t* L_0 = ___0_value;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___2_count;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_000d;
		}
	}
	{
		return (-1);
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___0_value;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		int32_t L_8 = ___1_startIndex;
		int32_t L_9 = ___2_count;
		int32_t L_10;
		L_10 = CString_IndexOfUnchecked_m45A8A0156075D7206DA46004A49B556A378E2412(__this, L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_0025:
	{
		int32_t L_11 = ___1_startIndex;
		return L_11;
	}

IL_0027:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = L_12;
		V_3 = L_13;
		if (!L_13)
		{
			goto IL_0036;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_3;
		NullCheck(L_14);
		if (((int32_t)(((RuntimeArray*)L_14)->max_length)))
		{
			goto IL_003b;
		}
	}

IL_0036:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0043;
	}

IL_003b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_3;
		NullCheck(L_15);
		V_1 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0043:
	{
		String_t* L_16 = ___0_value;
		V_4 = L_16;
		String_t* L_17 = V_4;
		V_2 = (Il2CppChar*)((intptr_t)L_17);
		Il2CppChar* L_18 = V_2;
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar* L_19 = V_2;
		int32_t L_20;
		L_20 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, L_20));
	}

IL_0055:
	{
		Il2CppChar* L_21 = V_1;
		int32_t L_22 = ___1_startIndex;
		V_5 = (Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_21), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 2))));
		Il2CppChar* L_23 = V_5;
		int32_t L_24 = ___2_count;
		int32_t L_25 = V_0;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 2)))), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 2)))), 2));
		goto IL_00aa;
	}

IL_0070:
	{
		Il2CppChar* L_26 = V_5;
		int32_t L_27 = *((uint16_t*)L_26);
		Il2CppChar* L_28 = V_2;
		int32_t L_29 = *((uint16_t*)L_28);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
		{
			goto IL_00a4;
		}
	}
	{
		V_7 = 1;
		goto IL_0095;
	}

IL_007c:
	{
		Il2CppChar* L_30 = V_5;
		int32_t L_31 = V_7;
		int32_t L_32 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 2)))));
		Il2CppChar* L_33 = V_2;
		int32_t L_34 = V_7;
		int32_t L_35 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 2)))));
		if ((!(((uint32_t)L_32) == ((uint32_t)L_35))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_36 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0095:
	{
		int32_t L_37 = V_7;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar* L_39 = V_5;
		Il2CppChar* L_40 = V_1;
		return ((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_39, ((intptr_t)L_40)))/2))));
	}

IL_00a4:
	{
		Il2CppChar* L_41 = V_5;
		V_5 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_41, 2));
	}

IL_00aa:
	{
		Il2CppChar* L_42 = V_5;
		Il2CppChar* L_43 = V_6;
		if ((!(((uintptr_t)L_42) == ((uintptr_t)L_43))))
		{
			goto IL_0070;
		}
	}
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		V_4 = (String_t*)NULL;
		return (-1);
	}
}
// CString CString::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Replace_m2D911B3DC7C72FAFAB60B751B483296F1E18330E (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___length_7;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Il2CppChar L_1 = ___0_oldChar;
		Il2CppChar L_2 = ___1_newChar;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return __this;
	}

IL_000e:
	{
		Il2CppChar L_3 = ___0_oldChar;
		int32_t L_4 = __this->___length_7;
		int32_t L_5;
		L_5 = CString_IndexOfUnchecked_m45A8A0156075D7206DA46004A49B556A378E2412(__this, L_3, 0, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		return __this;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_003f;
	}

IL_0027:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->____buffer_6;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Il2CppChar L_12 = ___0_oldChar;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = __this->____buffer_6;
		int32_t L_14 = V_1;
		Il2CppChar L_15 = ___1_newChar;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)L_15);
	}

IL_003b:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003f:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = __this->___length_7;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0027;
		}
	}
	{
		return __this;
	}
}
// CString CString::Replace(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Replace_m3A53CA725C7C48463FF07A2CB7AABA990011984E (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___3_count;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___2_startIndex;
		int32_t L_3 = __this->___length_7;
		int32_t L_4 = ___3_count;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_Replace_m3A53CA725C7C48463FF07A2CB7AABA990011984E_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_6 = __this->___length_7;
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_7 = ___0_oldChar;
		Il2CppChar L_8 = ___1_newChar;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return __this;
	}

IL_0029:
	{
		Il2CppChar L_9 = ___0_oldChar;
		int32_t L_10 = ___2_startIndex;
		int32_t L_11 = ___3_count;
		int32_t L_12;
		L_12 = CString_IndexOfUnchecked_m45A8A0156075D7206DA46004A49B556A378E2412(__this, L_9, L_10, L_11, NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_003a;
		}
	}
	{
		return __this;
	}

IL_003a:
	{
		int32_t L_14 = V_0;
		V_1 = L_14;
		goto IL_0056;
	}

IL_003e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = __this->____buffer_6;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (uint16_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Il2CppChar L_19 = ___0_oldChar;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0052;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->____buffer_6;
		int32_t L_21 = V_1;
		Il2CppChar L_22 = ___1_newChar;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)L_22);
	}

IL_0052:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0056:
	{
		int32_t L_24 = V_1;
		int32_t L_25 = ___2_startIndex;
		int32_t L_26 = ___3_count;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)il2cpp_codegen_add(L_25, L_26)))))
		{
			goto IL_003e;
		}
	}
	{
		return __this;
	}
}
// CString CString::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Replace_m067E99581FE69BD5ADEAFFE2542B98BD12C140E8 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_oldValue;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B6805FF35E9D5281B12A6FE89E20C33842F2B82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_Replace_m067E99581FE69BD5ADEAFFE2542B98BD12C140E8_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___0_oldValue;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D0EB61DE4D9F3BC017CB4CCB9789539AD5533AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_Replace_m067E99581FE69BD5ADEAFFE2542B98BD12C140E8_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_5 = __this->___length_7;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		return __this;
	}

IL_002b:
	{
		String_t* L_6 = ___1_newValue;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___1_newValue = L_7;
	}

IL_0035:
	{
		String_t* L_8 = ___0_oldValue;
		String_t* L_9 = ___1_newValue;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_10;
		L_10 = CString_ReplaceUnchecked_m7FFDC567AE5813404F1B7E19AB13DC2E5C194CD4(__this, L_8, L_9, NULL);
		return L_10;
	}
}
// CString CString::ReplaceUnchecked(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ReplaceUnchecked_m7FFDC567AE5813404F1B7E19AB13DC2E5C194CD4 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_ReplaceUnchecked_m7FFDC567AE5813404F1B7E19AB13DC2E5C194CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppChar* V_12 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		String_t* L_0 = ___0_oldValue;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = __this->___length_7;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return __this;
	}

IL_0010:
	{
		String_t* L_3 = ___0_oldValue;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_5 = ___1_newValue;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_7 = ___0_oldValue;
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 0, NULL);
		String_t* L_9 = ___1_newValue;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 0, NULL);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_11;
		L_11 = CString_Replace_m2D911B3DC7C72FAFAB60B751B483296F1E18330E(__this, L_8, L_10, NULL);
		return L_11;
	}

IL_0037:
	{
		if ((uintptr_t)((uintptr_t)((int32_t)200)) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), CString_ReplaceUnchecked_m7FFDC567AE5813404F1B7E19AB13DC2E5C194CD4_RuntimeMethod_var);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)((int32_t)200)), 4));
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		V_0 = (int32_t*)(L_13);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = L_14;
		V_3 = L_15;
		if (!L_15)
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_3;
		NullCheck(L_16);
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			goto IL_0056;
		}
	}

IL_0051:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_005e;
	}

IL_0056:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_3;
		NullCheck(L_17);
		V_1 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_005e:
	{
		String_t* L_18 = ___1_newValue;
		V_4 = L_18;
		String_t* L_19 = V_4;
		V_2 = (Il2CppChar*)((intptr_t)L_19);
		Il2CppChar* L_20 = V_2;
		if (!L_20)
		{
			goto IL_0070;
		}
	}
	{
		Il2CppChar* L_21 = V_2;
		int32_t L_22;
		L_22 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_21, L_22));
	}

IL_0070:
	{
		V_5 = 0;
		V_6 = 0;
		goto IL_00c4;
	}

IL_0078:
	{
		String_t* L_23 = ___0_oldValue;
		int32_t L_24 = V_5;
		int32_t L_25 = __this->___length_7;
		int32_t L_26 = V_5;
		int32_t L_27;
		L_27 = CString_IndexOfOrdinalUnchecked_mEFC33A2972AB5898EE417B4DE5595B4ECF392388(__this, L_23, L_24, ((int32_t)il2cpp_codegen_subtract(L_25, L_26)), NULL);
		V_11 = L_27;
		int32_t L_28 = V_11;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)200))))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t* L_30 = V_0;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_11;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)L_33;
		goto IL_00b9;
	}

IL_00ab:
	{
		String_t* L_34 = ___0_oldValue;
		String_t* L_35 = ___1_newValue;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_36;
		L_36 = CString_ReplaceFallback_mA098516BD275FA1627B2A5C14FA057278F518C5B(__this, L_34, L_35, ((int32_t)200), NULL);
		return L_36;
	}

IL_00b9:
	{
		int32_t L_37 = V_11;
		String_t* L_38 = ___0_oldValue;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, L_39));
	}

IL_00c4:
	{
		int32_t L_40 = V_5;
		int32_t L_41 = __this->___length_7;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0078;
		}
	}

IL_00ce:
	{
		int32_t L_42 = V_6;
		if (L_42)
		{
			goto IL_00d4;
		}
	}
	{
		return __this;
	}

IL_00d4:
	{
		int32_t L_43 = __this->___length_7;
		String_t* L_44 = ___1_newValue;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_44, NULL);
		String_t* L_46 = ___0_oldValue;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		int32_t L_48 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_45, L_47)), L_48))));
		int32_t L_49 = V_7;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_50;
		L_50 = CString_Alloc_mB57C7AAF6979CB5F952CD2837EDAFFD7FA102E6C(L_49, NULL);
		V_8 = L_50;
		V_9 = 0;
		V_10 = 0;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_51 = V_8;
		NullCheck(L_51);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_52 = L_51->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = L_52;
		V_13 = L_53;
		if (!L_53)
		{
			goto IL_010e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = V_13;
		NullCheck(L_54);
		if (((int32_t)(((RuntimeArray*)L_54)->max_length)))
		{
			goto IL_0114;
		}
	}

IL_010e:
	{
		V_12 = (Il2CppChar*)((uintptr_t)0);
		goto IL_011e;
	}

IL_0114:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = V_13;
		NullCheck(L_55);
		V_12 = ((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_011e:
	{
		V_14 = 0;
		goto IL_0186;
	}

IL_0123:
	{
		int32_t* L_56 = V_0;
		int32_t L_57 = V_14;
		int32_t L_58 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_56, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_57), 4))))));
		int32_t L_59 = V_10;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_58, L_59));
		Il2CppChar* L_60 = V_12;
		int32_t L_61 = V_9;
		Il2CppChar* L_62 = V_1;
		int32_t L_63 = V_10;
		int32_t L_64 = V_15;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_60), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 2)))), (Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_62), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_63), 2)))), L_64, NULL);
		int32_t L_65 = V_9;
		int32_t L_66 = V_15;
		V_9 = ((int32_t)il2cpp_codegen_add(L_65, L_66));
		int32_t* L_67 = V_0;
		int32_t L_68 = V_14;
		int32_t L_69 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_68), 4))))));
		String_t* L_70 = ___0_oldValue;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_70, NULL);
		V_10 = ((int32_t)il2cpp_codegen_add(L_69, L_71));
		Il2CppChar* L_72 = V_12;
		int32_t L_73 = V_9;
		Il2CppChar* L_74 = V_2;
		String_t* L_75 = ___1_newValue;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_75, NULL);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_72), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2)))), L_74, L_76, NULL);
		int32_t L_77 = V_9;
		String_t* L_78 = ___1_newValue;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_78, NULL);
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, L_79));
		int32_t L_80 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_0186:
	{
		int32_t L_81 = V_14;
		int32_t L_82 = V_6;
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_0123;
		}
	}
	{
		Il2CppChar* L_83 = V_12;
		int32_t L_84 = V_9;
		Il2CppChar* L_85 = V_1;
		int32_t L_86 = V_10;
		int32_t L_87 = __this->___length_7;
		int32_t L_88 = V_10;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_83), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_84), 2)))), (Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_85), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_86), 2)))), ((int32_t)il2cpp_codegen_subtract(L_87, L_88)), NULL);
		V_12 = (Il2CppChar*)((uintptr_t)0);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_89 = V_8;
		int32_t L_90 = V_7;
		NullCheck(L_89);
		L_89->___length_7 = L_90;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_91 = V_8;
		return L_91;
	}
}
// CString CString::ReplaceFallback(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ReplaceFallback_mA098516BD275FA1627B2A5C14FA057278F518C5B (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_oldValue, String_t* ___1_newValue, int32_t ___2_testedCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___length_7;
		String_t* L_1 = ___1_newValue;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		String_t* L_3 = ___0_oldValue;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		int32_t L_5 = ___2_testedCount;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_6;
		L_6 = CString_Alloc_mB57C7AAF6979CB5F952CD2837EDAFFD7FA102E6C(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_2, L_4)), L_5)))), NULL);
		V_0 = L_6;
		V_1 = 0;
		goto IL_006f;
	}

IL_0020:
	{
		String_t* L_7 = ___0_oldValue;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___length_7;
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = CString_IndexOfOrdinalUnchecked_mEFC33A2972AB5898EE417B4DE5595B4ECF392388(__this, L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		V_2 = L_11;
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___length_7;
		int32_t L_16 = V_1;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_17;
		L_17 = CString_SubstringUnchecked_m5AB9B310E6D0D98D96167E1B49572A1DE259658F(__this, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		NullCheck(L_13);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_18;
		L_18 = CString_Append_m2461F2ABCEC07C599DBBB8C7466336383AADCF53(L_13, L_17, NULL);
		goto IL_0078;
	}

IL_004d:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_23;
		L_23 = CString_SubstringUnchecked_m5AB9B310E6D0D98D96167E1B49572A1DE259658F(__this, L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		NullCheck(L_19);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_24;
		L_24 = CString_Append_m2461F2ABCEC07C599DBBB8C7466336383AADCF53(L_19, L_23, NULL);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_25 = V_0;
		String_t* L_26 = ___1_newValue;
		NullCheck(L_25);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_27;
		L_27 = CString_Append_mF1773B9183ED9EF635964F4AECFAD592F4305730(L_25, L_26, NULL);
		int32_t L_28 = V_2;
		String_t* L_29 = ___0_oldValue;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, L_30));
	}

IL_006f:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->___length_7;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0020;
		}
	}

IL_0078:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_33 = V_0;
		return L_33;
	}
}
// CString CString::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLower_m6EA31F122A15D550C2AE4E672C1A9108601F2BA7 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_1;
		L_1 = CString_ToLower_m910424414EBC8ED3CA7269FF0825A75DC5E416A3(__this, L_0, NULL);
		return L_1;
	}
}
// CString CString::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLower_m910424414EBC8ED3CA7269FF0825A75DC5E416A3 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) 
{
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_culture;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_ToLower_m910424414EBC8ED3CA7269FF0825A75DC5E416A3_RuntimeMethod_var)));
	}

IL_000e:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___0_culture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Globalization.CultureInfo::get_LCID() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_001f;
		}
	}
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_4;
		L_4 = CString_ToLowerInvariant_m9E46EECEC57761EE3E30CABF7961E9FFAC785777(__this, NULL);
		return L_4;
	}

IL_001f:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___0_culture;
		NullCheck(L_5);
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_6;
		L_6 = VirtualFuncInvoker0< TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_5);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_7;
		L_7 = CString_ToLower_m2F1A4BB268E7BF1249470EC7C1A395622C422DAD(__this, L_6, NULL);
		return L_7;
	}
}
// CString CString::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLowerInvariant_m9E46EECEC57761EE3E30CABF7961E9FFAC785777 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___length_7;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____buffer_6;
		int32_t L_2 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____buffer_6;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_7;
		L_7 = Char_ToLowerInvariant_m983C1CD07015E41B97D71F466B4B686F1145E60D(L_6, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Il2CppChar)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___length_7;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		return __this;
	}
}
// CString CString::ToLower(System.Globalization.TextInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_ToLower_m2F1A4BB268E7BF1249470EC7C1A395622C422DAD (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___0_text, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___length_7;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____buffer_6;
		int32_t L_2 = V_0;
		TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* L_3 = ___0_text;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->____buffer_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		Il2CppChar L_8;
		L_8 = VirtualFuncInvoker1< Il2CppChar, Il2CppChar >::Invoke(7 /* System.Char System.Globalization.TextInfo::ToLower(System.Char) */, L_3, L_7);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Il2CppChar)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___length_7;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000e;
		}
	}
	{
		return __this;
	}
}
// System.String CString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CString_ToString_m88236047AB2E34E5EEF39859D60FF4AE1590472C (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___length_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____buffer_6;
		int32_t L_3 = __this->___length_7;
		String_t* L_4;
		L_4 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_2, 0, L_3, NULL);
		return L_4;
	}
}
// System.String CString::CopyToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CString_CopyToString_m17C42B2CE4A47845B33AD637C9B2AD584F94A7BC (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	String_t* V_3 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	{
		String_t* L_0 = ___0_str;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = __this->___length_7;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_004f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_2;
		NullCheck(L_5);
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_002a;
	}

IL_0022:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_2;
		NullCheck(L_6);
		V_0 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_002a:
	{
		String_t* L_7 = ___0_str;
		V_3 = L_7;
		String_t* L_8 = V_3;
		V_1 = (Il2CppChar*)((intptr_t)L_8);
		Il2CppChar* L_9 = V_1;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar* L_10 = V_1;
		int32_t L_11;
		L_11 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_1 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, L_11));
	}

IL_003a:
	{
		Il2CppChar* L_12 = V_1;
		Il2CppChar* L_13 = V_0;
		int32_t L_14 = __this->___length_7;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C(L_12, (Il2CppChar*)((intptr_t)L_13), L_14, NULL);
		V_0 = (Il2CppChar*)((uintptr_t)0);
		V_3 = (String_t*)NULL;
		String_t* L_15 = ___0_str;
		return L_15;
	}

IL_004f:
	{
		int32_t L_16 = __this->___length_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_4 = L_17;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_4;
		int32_t L_20 = __this->___length_7;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, ((int32_t)il2cpp_codegen_multiply(L_20, 2)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = V_4;
		int32_t L_22 = __this->___length_7;
		String_t* L_23;
		L_23 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, 0, L_22, NULL);
		return L_23;
	}
}
// CString CString::Append(CString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_m2461F2ABCEC07C599DBBB8C7466336383AADCF53 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	{
		int32_t L_0 = __this->___length_7;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_1 = ___0_right;
		NullCheck(L_1);
		int32_t L_2 = L_1->___length_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472(__this, L_3, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		V_3 = L_6;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_3;
		NullCheck(L_7);
		if (((int32_t)(((RuntimeArray*)L_7)->max_length)))
		{
			goto IL_002a;
		}
	}

IL_0025:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0032;
	}

IL_002a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_3;
		NullCheck(L_8);
		V_1 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0032:
	{
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_9 = ___0_right;
		NullCheck(L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		V_4 = L_11;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = V_4;
		NullCheck(L_12);
		if (((int32_t)(((RuntimeArray*)L_12)->max_length)))
		{
			goto IL_0048;
		}
	}

IL_0043:
	{
		V_2 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0051;
	}

IL_0048:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_4;
		NullCheck(L_13);
		V_2 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0051:
	{
		Il2CppChar* L_14 = V_1;
		int32_t L_15 = __this->___length_7;
		Il2CppChar* L_16 = V_2;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_17 = ___0_right;
		NullCheck(L_17);
		int32_t L_18 = L_17->___length_7;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_14), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 2)))), (Il2CppChar*)((intptr_t)L_16), L_18, NULL);
		V_1 = (Il2CppChar*)((uintptr_t)0);
		V_2 = (Il2CppChar*)((uintptr_t)0);
		int32_t L_19 = V_0;
		__this->___length_7 = L_19;
		return __this;
	}
}
// CString CString::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_mCC2D997C9609F1F72905B26A2269F0C28F0D4554 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___length_7;
		int32_t L_1;
		L_1 = CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472(__this, ((int32_t)il2cpp_codegen_add(L_0, 1)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____buffer_6;
		int32_t L_3 = __this->___length_7;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->___length_7 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ___0_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)L_6);
		return __this;
	}
}
// CString CString::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_mD81AB3299B4DCE4C6636E98B3AEB467F53C90C40 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	{
		int32_t L_0 = __this->___length_7;
		int32_t L_1;
		L_1 = CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)16))), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_1;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_0024;
		}
	}

IL_001f:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_002c;
	}

IL_0024:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_1;
		NullCheck(L_5);
		V_0 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_002c:
	{
		int32_t L_6 = __this->___length_7;
		Il2CppChar* L_7 = V_0;
		int32_t L_8 = __this->___length_7;
		int32_t L_9 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = NumberFormatter_NumberToString_mC5980668606F0D6F5406E179DB4A09E7D14F57EC((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_7), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 2)))), L_9, (RuntimeObject*)NULL, NULL);
		__this->___length_7 = ((int32_t)il2cpp_codegen_add(L_6, L_10));
		V_0 = (Il2CppChar*)((uintptr_t)0);
		return __this;
	}
}
// CString CString::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_mF1773B9183ED9EF635964F4AECFAD592F4305730 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		int32_t L_0 = __this->___length_7;
		String_t* L_1 = ___0_value;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472(__this, L_3, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		V_3 = L_6;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_3;
		NullCheck(L_7);
		if (((int32_t)(((RuntimeArray*)L_7)->max_length)))
		{
			goto IL_002a;
		}
	}

IL_0025:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0032;
	}

IL_002a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_3;
		NullCheck(L_8);
		V_1 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0032:
	{
		String_t* L_9 = ___0_value;
		V_4 = L_9;
		String_t* L_10 = V_4;
		V_2 = (Il2CppChar*)((intptr_t)L_10);
		Il2CppChar* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar* L_12 = V_2;
		int32_t L_13;
		L_13 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, L_13));
	}

IL_0044:
	{
		Il2CppChar* L_14 = V_1;
		int32_t L_15 = __this->___length_7;
		Il2CppChar* L_16 = V_2;
		String_t* L_17 = ___0_value;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_14), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 2)))), L_16, L_18, NULL);
		V_1 = (Il2CppChar*)((uintptr_t)0);
		V_4 = (String_t*)NULL;
		int32_t L_19 = V_0;
		__this->___length_7 = L_19;
		return __this;
	}
}
// CString CString::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* CString_Append_mCF56B006953274398D7D82B9D531C71C1C5BCEE4 (CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_startIndex;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___2_count;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_Append_mCF56B006953274398D7D82B9D531C71C1C5BCEE4_RuntimeMethod_var)));
	}

IL_0014:
	{
		return __this;
	}

IL_0016:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = ___1_startIndex;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = ___1_startIndex;
		String_t* L_7 = ___0_value;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9 = ___2_count;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9)))))
		{
			goto IL_002f;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CString_Append_mCF56B006953274398D7D82B9D531C71C1C5BCEE4_RuntimeMethod_var)));
	}

IL_002f:
	{
		int32_t L_11 = ___2_count;
		int32_t L_12 = __this->___length_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = CString_EnsureCapacity_m455E276C7D34E0CD029FE509EDD52C1D740BB472(__this, L_13, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = __this->____buffer_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = L_15;
		V_3 = L_16;
		if (!L_16)
		{
			goto IL_004f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_3;
		NullCheck(L_17);
		if (((int32_t)(((RuntimeArray*)L_17)->max_length)))
		{
			goto IL_0054;
		}
	}

IL_004f:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_005c;
	}

IL_0054:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = V_3;
		NullCheck(L_18);
		V_1 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_005c:
	{
		String_t* L_19 = ___0_value;
		V_4 = L_19;
		String_t* L_20 = V_4;
		V_2 = (Il2CppChar*)((intptr_t)L_20);
		Il2CppChar* L_21 = V_2;
		if (!L_21)
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar* L_22 = V_2;
		int32_t L_23;
		L_23 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, L_23));
	}

IL_006e:
	{
		Il2CppChar* L_24 = V_1;
		int32_t L_25 = __this->___length_7;
		Il2CppChar* L_26 = V_2;
		int32_t L_27 = ___1_startIndex;
		int32_t L_28 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)il2cpp_codegen_add(((intptr_t)L_24), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 2)))), ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 2)))), L_28, NULL);
		V_1 = (Il2CppChar*)((uintptr_t)0);
		V_4 = (String_t*)NULL;
		int32_t L_29 = V_0;
		__this->___length_7 = L_29;
		return __this;
	}
}
// System.Void CString::memset(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_memset_m74E7CA38A4F200E1F5CBE41F68115CA4CC26DA6A (uint8_t* ___0_dest, int32_t ___1_val, int32_t ___2_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0014;
	}

IL_0006:
	{
		uint8_t* L_1 = ___0_dest;
		int32_t L_2 = ___1_val;
		*((int8_t*)L_1) = (int8_t)((int32_t)(uint8_t)L_2);
		uint8_t* L_3 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1));
		int32_t L_4 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0014:
	{
		int32_t L_5 = ___2_len;
		if (L_5)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0018:
	{
		int32_t L_6 = ___1_val;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = ___1_val;
		int32_t L_8 = ___1_val;
		___1_val = ((int32_t)(L_7|((int32_t)(L_8<<8))));
		int32_t L_9 = ___1_val;
		int32_t L_10 = ___1_val;
		___1_val = ((int32_t)(L_9|((int32_t)(L_10<<((int32_t)16)))));
	}

IL_002a:
	{
		uint8_t* L_11 = ___0_dest;
		V_0 = ((int32_t)(((int32_t)(intptr_t)L_11)&3));
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(4, L_13));
		int32_t L_14 = ___2_len;
		int32_t L_15 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_003b:
	{
		uint8_t* L_16 = ___0_dest;
		int32_t L_17 = ___1_val;
		*((int8_t*)L_16) = (int8_t)((int32_t)(uint8_t)L_17);
		uint8_t* L_18 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, 1));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0071;
	}

IL_004d:
	{
		uint8_t* L_21 = ___0_dest;
		int32_t L_22 = ___1_val;
		*((int32_t*)L_21) = (int32_t)L_22;
		uint8_t* L_23 = ___0_dest;
		int32_t L_24 = ___1_val;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, 4))) = (int32_t)L_24;
		uint8_t* L_25 = ___0_dest;
		int32_t L_26 = ___1_val;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)L_26;
		uint8_t* L_27 = ___0_dest;
		int32_t L_28 = ___1_val;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)L_28;
		uint8_t* L_29 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, ((int32_t)16)));
		int32_t L_30 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)16)));
	}

IL_0071:
	{
		int32_t L_31 = ___2_len;
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)16))))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0085;
	}

IL_0078:
	{
		uint8_t* L_32 = ___0_dest;
		int32_t L_33 = ___1_val;
		*((int32_t*)L_32) = (int32_t)L_33;
		uint8_t* L_34 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_34, 4));
		int32_t L_35 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_35, 4));
	}

IL_0085:
	{
		int32_t L_36 = ___2_len;
		if ((((int32_t)L_36) >= ((int32_t)4)))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0099;
	}

IL_008b:
	{
		uint8_t* L_37 = ___0_dest;
		int32_t L_38 = ___1_val;
		*((int8_t*)L_37) = (int8_t)((int32_t)(uint8_t)L_38);
		uint8_t* L_39 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, 1));
		int32_t L_40 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_0099:
	{
		int32_t L_41 = ___2_len;
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		return;
	}
}
// System.Void CString::memcpy4(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_memcpy4_m3E494F01E80C12D1A43F310A27FF3868C95ACC16 (uint8_t* ___0_dest, uint8_t* ___1_src, int32_t ___2_size, const RuntimeMethod* method) 
{
	{
		goto IL_003c;
	}

IL_0002:
	{
		uint8_t* L_0 = ___0_dest;
		uint8_t* L_1 = ___1_src;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		uint8_t* L_3 = ___0_dest;
		uint8_t* L_4 = ___1_src;
		int32_t L_5 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 4)));
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 4))) = (int32_t)L_5;
		uint8_t* L_6 = ___0_dest;
		uint8_t* L_7 = ___1_src;
		int32_t L_8 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)L_8;
		uint8_t* L_9 = ___0_dest;
		uint8_t* L_10 = ___1_src;
		int32_t L_11 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4)))));
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))) = (int32_t)L_11;
		uint8_t* L_12 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, ((int32_t)16)));
		uint8_t* L_13 = ___1_src;
		___1_src = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((int32_t)16)));
		int32_t L_14 = ___2_size;
		___2_size = ((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)16)));
	}

IL_003c:
	{
		int32_t L_15 = ___2_size;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0056;
	}

IL_0043:
	{
		uint8_t* L_16 = ___0_dest;
		uint8_t* L_17 = ___1_src;
		int32_t L_18 = *((int32_t*)L_17);
		*((int32_t*)L_16) = (int32_t)L_18;
		uint8_t* L_19 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 4));
		uint8_t* L_20 = ___1_src;
		___1_src = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 4));
		int32_t L_21 = ___2_size;
		___2_size = ((int32_t)il2cpp_codegen_subtract(L_21, 4));
	}

IL_0056:
	{
		int32_t L_22 = ___2_size;
		if ((((int32_t)L_22) >= ((int32_t)4)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_006f;
	}

IL_005c:
	{
		uint8_t* L_23 = ___0_dest;
		uint8_t* L_24 = ___1_src;
		int32_t L_25 = (*(L_24));
		*((int8_t*)L_23) = (int8_t)L_25;
		uint8_t* L_26 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 1));
		uint8_t* L_27 = ___1_src;
		___1_src = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, 1));
		int32_t L_28 = ___2_size;
		___2_size = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_006f:
	{
		int32_t L_29 = ___2_size;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return;
	}
}
// System.Void CString::memcpy2(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_memcpy2_mAAC90843D8D265DBAE08D49253584766E49ECE16 (uint8_t* ___0_dest, uint8_t* ___1_src, int32_t ___2_size, const RuntimeMethod* method) 
{
	{
		goto IL_0039;
	}

IL_0002:
	{
		uint8_t* L_0 = ___0_dest;
		uint8_t* L_1 = ___1_src;
		int32_t L_2 = *((int16_t*)L_1);
		*((int16_t*)L_0) = (int16_t)L_2;
		uint8_t* L_3 = ___0_dest;
		uint8_t* L_4 = ___1_src;
		int32_t L_5 = *((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2)));
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 2))) = (int16_t)L_5;
		uint8_t* L_6 = ___0_dest;
		uint8_t* L_7 = ___1_src;
		int32_t L_8 = *((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))))) = (int16_t)L_8;
		uint8_t* L_9 = ___0_dest;
		uint8_t* L_10 = ___1_src;
		int32_t L_11 = *((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2)))));
		*((int16_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2))))) = (int16_t)L_11;
		uint8_t* L_12 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 8));
		uint8_t* L_13 = ___1_src;
		___1_src = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 8));
		int32_t L_14 = ___2_size;
		___2_size = ((int32_t)il2cpp_codegen_subtract(L_14, 8));
	}

IL_0039:
	{
		int32_t L_15 = ___2_size;
		if ((((int32_t)L_15) >= ((int32_t)8)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0052;
	}

IL_003f:
	{
		uint8_t* L_16 = ___0_dest;
		uint8_t* L_17 = ___1_src;
		int32_t L_18 = *((int16_t*)L_17);
		*((int16_t*)L_16) = (int16_t)L_18;
		uint8_t* L_19 = ___0_dest;
		___0_dest = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 2));
		uint8_t* L_20 = ___1_src;
		___1_src = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 2));
		int32_t L_21 = ___2_size;
		___2_size = ((int32_t)il2cpp_codegen_subtract(L_21, 2));
	}

IL_0052:
	{
		int32_t L_22 = ___2_size;
		if ((((int32_t)L_22) >= ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_23 = ___2_size;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t* L_24 = ___0_dest;
		uint8_t* L_25 = ___1_src;
		int32_t L_26 = (*(L_25));
		*((int8_t*)L_24) = (int8_t)L_26;
	}

IL_005e:
	{
		return;
	}
}
// System.Void CString::CharCopy(System.Char*,System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C (Il2CppChar* ___0_dest, Il2CppChar* ___1_src, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar* L_0 = ___0_dest;
		Il2CppChar* L_1 = ___1_src;
		if (!((int32_t)(((int32_t)(((int32_t)(intptr_t)L_0)|((int32_t)(intptr_t)L_1)))&3)))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar* L_2 = ___0_dest;
		if (!((int32_t)(((int32_t)(intptr_t)L_2)&2)))
		{
			goto IL_002c;
		}
	}
	{
		Il2CppChar* L_3 = ___1_src;
		if (!((int32_t)(((int32_t)(intptr_t)L_3)&2)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		Il2CppChar* L_5 = ___0_dest;
		Il2CppChar* L_6 = ___1_src;
		int32_t L_7 = *((int16_t*)L_6);
		*((int16_t*)L_5) = (int16_t)L_7;
		Il2CppChar* L_8 = ___0_dest;
		___0_dest = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, 2));
		Il2CppChar* L_9 = ___1_src;
		___1_src = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, 2));
		int32_t L_10 = ___2_count;
		___2_count = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_002c:
	{
		Il2CppChar* L_11 = ___0_dest;
		Il2CppChar* L_12 = ___1_src;
		if (!((int32_t)(((int32_t)(((int32_t)(intptr_t)L_11)|((int32_t)(intptr_t)L_12)))&2)))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar* L_13 = ___0_dest;
		Il2CppChar* L_14 = ___1_src;
		int32_t L_15 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_memcpy2_mAAC90843D8D265DBAE08D49253584766E49ECE16((uint8_t*)L_13, (uint8_t*)L_14, ((int32_t)il2cpp_codegen_multiply(L_15, 2)), NULL);
		return;
	}

IL_0040:
	{
		Il2CppChar* L_16 = ___0_dest;
		Il2CppChar* L_17 = ___1_src;
		int32_t L_18 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_memcpy4_m3E494F01E80C12D1A43F310A27FF3868C95ACC16((uint8_t*)L_16, (uint8_t*)L_17, ((int32_t)il2cpp_codegen_multiply(L_18, 2)), NULL);
		return;
	}
}
// System.Void CString::CharCopy(System.Char[],System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString_CharCopy_m659E47B6FB1FFE6017640049BCEB8918B7AAEA67 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_target, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___1_source, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_target;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_2;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (Il2CppChar*)((uintptr_t)0);
		goto IL_0017;
	}

IL_000f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_2;
		NullCheck(L_3);
		V_0 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_0017:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___1_source;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0026;
		}
	}

IL_0021:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_002e;
	}

IL_0026:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_3;
		NullCheck(L_7);
		V_1 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
	}

IL_002e:
	{
		Il2CppChar* L_8 = V_0;
		Il2CppChar* L_9 = V_1;
		int32_t L_10 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CString_CharCopy_mFB71BAB950673A9BAD720F34CFAFA72D4B36C17C((Il2CppChar*)((intptr_t)L_8), (Il2CppChar*)((intptr_t)L_9), L_10, NULL);
		V_0 = (Il2CppChar*)((uintptr_t)0);
		V_1 = (Il2CppChar*)((uintptr_t)0);
		return;
	}
}
// System.Void CString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CString__cctor_m4D2A3416CC8FE95F2CC98B8B0051358D2EC04B63 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m7C42758225656AB4392773D4D32356D49EAD5392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mD265908D8C8DE7D15E351B60978CAEF48C83D366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mD137380D49992D5E8C42E967702957F7B0BF555E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____F78C320F25CF552D08E99BEF3BA28B34DD79867C_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3* L_0 = (ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3*)il2cpp_codegen_object_new(ArrayPool_1_t345B5060D30081E4540E34A1F2B4BBD2E24836A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A(L_0, ArrayPool_1__ctor_m783CFD671B4A3D377566083A6A8FF11D9AED719A_RuntimeMethod_var);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___pool_0), (void*)L_0);
		Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B* L_1 = (Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B*)il2cpp_codegen_object_new(Queue_1_t54739781FD2259CB7E3DAF915EFEB9C8F8F6EB5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mD265908D8C8DE7D15E351B60978CAEF48C83D366(L_1, Queue_1__ctor_mD265908D8C8DE7D15E351B60978CAEF48C83D366_RuntimeMethod_var);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___queue_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___queue_1), (void*)L_1);
		Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* L_2 = (Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323*)il2cpp_codegen_object_new(Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Queue_1__ctor_m7C42758225656AB4392773D4D32356D49EAD5392(L_2, Queue_1__ctor_m7C42758225656AB4392773D4D32356D49EAD5392_RuntimeMethod_var);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___blocks_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___blocks_2), (void*)L_2);
		Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* L_3 = (Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84*)il2cpp_codegen_object_new(Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Stack_1__ctor_mD137380D49992D5E8C42E967702957F7B0BF555E(L_3, Stack_1__ctor_mD137380D49992D5E8C42E967702957F7B0BF555E_RuntimeMethod_var);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___stack_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___stack_3), (void*)L_3);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4 = (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4), (void*)(CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)NULL);
		String_t* L_4;
		L_4 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___NewLine_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___NewLine_5), (void*)L_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____F78C320F25CF552D08E99BEF3BA28B34DD79867C_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___WhiteChars_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___WhiteChars_9), (void*)L_6);
		List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* L_8 = (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*)il2cpp_codegen_object_new(List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5(L_8, List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5_RuntimeMethod_var);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___splitList_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___splitList_10), (void*)L_8);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___numbuffer_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___numbuffer_11), (void*)L_9);
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
// System.Void CString/CStringBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock__ctor_mD7E778CA232EFB8EE7FA863EEF9DC560E8C11598 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* L_0 = (List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8*)il2cpp_codegen_object_new(List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5(L_0, List_1__ctor_m50D28905E2DF0231A0DB833693D478ED12FF39A5_RuntimeMethod_var);
		__this->___list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_0), (void*)L_0);
		return;
	}
}
// System.Void CString/CStringBlock::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock_Init_m077E0B6EC8A30CA92CC715054289AE13784AE9C2 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, const RuntimeMethod* method) 
{
	{
		__this->___beDisposed_1 = (bool)0;
		return;
	}
}
// System.Void CString/CStringBlock::Push(CString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock_Push_mEEB2536C9427CDE99E1134418C391804ABC3B5F3 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C7253B1A98579DF475B645F2B94A19F777BDCCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* L_0 = __this->___list_0;
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_1 = ___0_str;
		NullCheck(L_0);
		List_1_Add_m5C7253B1A98579DF475B645F2B94A19F777BDCCD_inline(L_0, L_1, List_1_Add_m5C7253B1A98579DF475B645F2B94A19F777BDCCD_RuntimeMethod_var);
		return;
	}
}
// System.Void CString/CStringBlock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CStringBlock_Dispose_mF17810F6CEFAFFBC5977F8480D426DD8A59CCF28 (CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2AF94AFDE2FE7842CFEE5300A4363B77C22D1D3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAD0B367C73A379CDE170B6216CEBB1516C9FBA35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16772B71D2508EF7E12B907FE51CA7BD9569A719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m907F91178ED61355D1784B06A5AE25A763BF2202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mC4D8E149D45AFE79D1D3EF5427A6745A095DF5BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m849D8D03F699D93C5AA66ADB40A1D4256284ABE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m615DB0F086524EF1D0A4DF68A6A67578BB49D1E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* G_B10_0 = NULL;
	{
		bool L_0 = __this->___beDisposed_1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_1 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4;
		if ((((RuntimeObject*)(CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)__this) == ((RuntimeObject*)(CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07473F17E8BF4AC10B9F4A03F2E98B3893F86743)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CStringBlock_Dispose_mF17810F6CEFAFFBC5977F8480D426DD8A59CCF28_RuntimeMethod_var)));
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0020:
	{
		List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* L_3 = __this->___list_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898* L_5;
		L_5 = List_1_get_Item_m16772B71D2508EF7E12B907FE51CA7BD9569A719(L_3, L_4, List_1_get_Item_m16772B71D2508EF7E12B907FE51CA7BD9569A719_RuntimeMethod_var);
		NullCheck(L_5);
		CString_Dispose_mA4C969067EA284005BBBA0CEAFF393E07AF701DF(L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* L_8 = __this->___list_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mAD0B367C73A379CDE170B6216CEBB1516C9FBA35_inline(L_8, List_1_get_Count_mAD0B367C73A379CDE170B6216CEBB1516C9FBA35_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0020;
		}
	}
	{
		List_1_tA4C0CF849DDBA16A6FECCBFEAF8F7F3659FAFDB8* L_10 = __this->___list_0;
		NullCheck(L_10);
		List_1_Clear_m2AF94AFDE2FE7842CFEE5300A4363B77C22D1D3C_inline(L_10, List_1_Clear_m2AF94AFDE2FE7842CFEE5300A4363B77C22D1D3C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Queue_1_tFAC0AE808410B0F082C04F105A4BBDC941535323* L_11 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___blocks_2;
		NullCheck(L_11);
		Queue_1_Enqueue_m907F91178ED61355D1784B06A5AE25A763BF2202(L_11, __this, Queue_1_Enqueue_m907F91178ED61355D1784B06A5AE25A763BF2202_RuntimeMethod_var);
		Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* L_12 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___stack_3;
		NullCheck(L_12);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_13;
		L_13 = Stack_1_Pop_m849D8D03F699D93C5AA66ADB40A1D4256284ABE6(L_12, Stack_1_Pop_m849D8D03F699D93C5AA66ADB40A1D4256284ABE6_RuntimeMethod_var);
		Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* L_14 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___stack_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Stack_1_get_Count_m615DB0F086524EF1D0A4DF68A6A67578BB49D1E6_inline(L_14, Stack_1_get_Count_m615DB0F086524EF1D0A4DF68A6A67578BB49D1E6_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		G_B10_0 = ((CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2*)(NULL));
		goto IL_007e;
	}

IL_0074:
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		Stack_1_tC06CB4CDA331F1CC7A9076381B65FF6C5F2E1C84* L_16 = ((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___stack_3;
		NullCheck(L_16);
		CStringBlock_t3309B5C5CED7B82DD59CD51B7091C138AC6084B2* L_17;
		L_17 = Stack_1_Peek_mC4D8E149D45AFE79D1D3EF5427A6745A095DF5BB(L_16, Stack_1_Peek_mC4D8E149D45AFE79D1D3EF5427A6745A095DF5BB_RuntimeMethod_var);
		G_B10_0 = L_17;
	}

IL_007e:
	{
		il2cpp_codegen_runtime_class_init_inline(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var);
		((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_StaticFields*)il2cpp_codegen_static_fields_for(CString_tCBCA057BBBACE0B3568E29F3A52D2074AD392898_il2cpp_TypeInfo_var))->___currentBlock_4), (void*)G_B10_0);
		__this->___beDisposed_1 = (bool)1;
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
// System.Int64 NumberFormatter::GetTenPowerOf(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NumberFormatter_GetTenPowerOf_m6A45B8DBEC9FAF452E8C570C67B3CA8CAE595964 (int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___TenPowersList_3;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void NumberFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter__cctor_m587506CCCEA0A26A73FDB5422D1C9B82EEAD6BDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____284E0936DD0EACE33AA8F33A3E9CF4475C06F90C_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____44EDD5807FD1F0FB6E35E248353AAA4ABD1D207A_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____59F5BD34B6C013DEACC784F69C67E95150033A84_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____714A581A59C860E1C36934C9751FFB81838C1E81_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____793DEAA83354CAE749C6AFF580340AB568595211_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____793DEAA83354CAE749C6AFF580340AB568595211_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0), (void*)L_1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DigitLowerTable_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DigitLowerTable_1), (void*)L_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____59F5BD34B6C013DEACC784F69C67E95150033A84_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DigitUpperTable_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DigitUpperTable_2), (void*)L_7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____284E0936DD0EACE33AA8F33A3E9CF4475C06F90C_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___TenPowersList_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___TenPowersList_3), (void*)L_10);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____44EDD5807FD1F0FB6E35E248353AAA4ABD1D207A_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___MantissaBitsTable_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___MantissaBitsTable_4), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t07442E35E645653C09F9BF888EBFE12C3E477D71____714A581A59C860E1C36934C9751FFB81838C1E81_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___TensExponentTable_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___TensExponentTable_5), (void*)L_16);
		return;
	}
}
// System.Void NumberFormatter::InitDecHexDigits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_InitDecHexDigits_m35FA009FB57A4E4D9769894F1CD3884B3D7E9140 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000000)))))
		{
			goto IL_0027;
		}
	}
	{
		uint32_t L_1 = ___0_value;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000000)));
		uint32_t L_2 = ___0_value;
		int32_t L_3 = V_0;
		___0_value = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)100000000), L_3))));
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = NumberFormatter_FastToDecHex_m3BFA52B0FC8D8ED1ABC5AF271884ACF063F084EE(L_4, NULL);
		__this->____val2_21 = L_5;
	}

IL_0027:
	{
		uint32_t L_6 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_7;
		L_7 = NumberFormatter_ToDecHex_mF3F2BF319BFAF2078EB7B7AB48576E21E2B80BC9(L_6, NULL);
		__this->____val1_20 = L_7;
		return;
	}
}
// System.Int32 NumberFormatter::FastDecHexLen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FastDecHexLen_m6DA393537412E956CD627973DA7015F057C7CE9A (int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_val;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___0_val;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)16))))
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		return 2;
	}

IL_0011:
	{
		int32_t L_2 = ___0_val;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_001b;
		}
	}
	{
		return 3;
	}

IL_001b:
	{
		return 4;
	}
}
// System.Int32 NumberFormatter::DecHexLen(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_DecHexLen_mBFFCAFEDF313D5B9C1678B4FA5CF8E7D343143A7 (uint32_t ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_val;
		if ((!(((uint32_t)L_0) < ((uint32_t)((int32_t)65536)))))
		{
			goto IL_000f;
		}
	}
	{
		uint32_t L_1 = ___0_val;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NumberFormatter_FastDecHexLen_m6DA393537412E956CD627973DA7015F057C7CE9A(L_1, NULL);
		return L_2;
	}

IL_000f:
	{
		uint32_t L_3 = ___0_val;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NumberFormatter_FastDecHexLen_m6DA393537412E956CD627973DA7015F057C7CE9A(((int32_t)((uint32_t)L_3>>((int32_t)16))), NULL);
		return ((int32_t)il2cpp_codegen_add(4, L_4));
	}
}
// System.Int32 NumberFormatter::DecHexLen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_DecHexLen_mE0267E1D63E7324673916FFF6C0CE9D02B740AAB (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->____val4_23;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = __this->____val4_23;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NumberFormatter_DecHexLen_mBFFCAFEDF313D5B9C1678B4FA5CF8E7D343143A7(L_1, NULL);
		return ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)24)));
	}

IL_0017:
	{
		uint32_t L_3 = __this->____val3_22;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_4 = __this->____val3_22;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NumberFormatter_DecHexLen_mBFFCAFEDF313D5B9C1678B4FA5CF8E7D343143A7(L_4, NULL);
		return ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)16)));
	}

IL_002e:
	{
		uint32_t L_6 = __this->____val2_21;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		uint32_t L_7 = __this->____val2_21;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = NumberFormatter_DecHexLen_mBFFCAFEDF313D5B9C1678B4FA5CF8E7D343143A7(L_7, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, 8));
	}

IL_0044:
	{
		uint32_t L_9 = __this->____val1_20;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = __this->____val1_20;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = NumberFormatter_DecHexLen_mBFFCAFEDF313D5B9C1678B4FA5CF8E7D343143A7(L_10, NULL);
		return L_11;
	}

IL_0058:
	{
		return 0;
	}
}
// System.Int32 NumberFormatter::ScaleOrder(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_ScaleOrder_m0EA93115D1ABDA9205735318F653DAE53CA409FA (int64_t ___0_hi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)18);
		goto IL_0016;
	}

IL_0005:
	{
		int64_t L_0 = ___0_hi;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = NumberFormatter_GetTenPowerOf_m6A45B8DBEC9FAF452E8C570C67B3CA8CAE595964(L_1, NULL);
		if ((((int64_t)L_0) < ((int64_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}
}
// System.Int32 NumberFormatter::ParsePrecision(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_ParsePrecision_m1F52983E7B53FCB6DDB70EF75276D72C754DA017 (String_t* ___0_format, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0006:
	{
		String_t* L_0 = ___0_format;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)48)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)10))), L_4));
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)9))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)99))))
		{
			goto IL_0029;
		}
	}

IL_0026:
	{
		return ((int32_t)-2);
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = ___0_format;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void NumberFormatter::.ctor(System.Threading.Thread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter__ctor_mF2746EE9087A992DF63AEF1612F147D51B010175 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___0_current, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = ___0_current;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = ___0_current;
		__this->____thread_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____thread_6), (void*)L_1);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->____thread_6;
		NullCheck(L_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = Thread_get_CurrentCulture_mD011FDBB62CA34E83A1D1916628826ADAC85E7A6(L_2, NULL);
		NumberFormatter_set_CurrentCulture_m98C79E43E8B7EE9484C6C08836786C98E651B827(__this, L_3, NULL);
		return;
	}
}
// System.Void NumberFormatter::InitHex(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_InitHex_m6D632F6974C9BD7A3CB7868C30F8A3B927DA6D71 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____defPrecision_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0029;
	}

IL_0016:
	{
		uint64_t L_4 = ___0_value;
		___0_value = ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint8_t)L_4)));
		goto IL_0029;
	}

IL_001d:
	{
		uint64_t L_5 = ___0_value;
		___0_value = ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint16_t)L_5)));
		goto IL_0029;
	}

IL_0024:
	{
		uint64_t L_6 = ___0_value;
		___0_value = ((int64_t)(uint64_t)((uint32_t)((int32_t)(uint32_t)L_6)));
	}

IL_0029:
	{
		uint64_t L_7 = ___0_value;
		__this->____val1_20 = ((int32_t)(uint32_t)L_7);
		uint64_t L_8 = ___0_value;
		__this->____val2_21 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_8>>((int32_t)32))));
		int32_t L_9;
		L_9 = NumberFormatter_DecHexLen_mE0267E1D63E7324673916FFF6C0CE9D02B740AAB(__this, NULL);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->____digitsLen_17 = L_10;
		int32_t L_11 = V_0;
		__this->____decPointPos_19 = L_11;
		uint64_t L_12 = ___0_value;
		if (L_12)
		{
			goto IL_005b;
		}
	}
	{
		__this->____decPointPos_19 = 1;
	}

IL_005b:
	{
		return;
	}
}
// System.Void NumberFormatter::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Init_m375405CBA50F24E305C54E94B6FD6097EBD1954C (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, String_t* ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = 0;
		V_1 = L_0;
		__this->____val4_23 = L_0;
		uint32_t L_1 = V_1;
		uint32_t L_2 = L_1;
		V_1 = L_2;
		__this->____val3_22 = L_2;
		uint32_t L_3 = V_1;
		uint32_t L_4 = L_3;
		V_1 = L_4;
		__this->____val2_21 = L_4;
		uint32_t L_5 = V_1;
		__this->____val1_20 = L_5;
		__this->____offset_18 = 0;
		int32_t L_6 = 0;
		V_2 = (bool)L_6;
		__this->____infinity_10 = (bool)L_6;
		bool L_7 = V_2;
		__this->____NaN_9 = L_7;
		__this->____isCustomFormat_11 = (bool)0;
		__this->____specifierIsUpper_12 = (bool)1;
		__this->____precision_15 = (-1);
		String_t* L_8 = ___0_format;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_9 = ___0_format;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if (L_10)
		{
			goto IL_0062;
		}
	}

IL_0059:
	{
		__this->____specifier_14 = ((int32_t)71);
		return;
	}

IL_0062:
	{
		String_t* L_11 = ___0_format;
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 0, NULL);
		V_0 = L_12;
		Il2CppChar L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)97))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)122))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_15 = V_0;
		V_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, ((int32_t)97))), ((int32_t)65))));
		__this->____specifierIsUpper_12 = (bool)0;
		goto IL_00a0;
	}

IL_0086:
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)65))))
		{
			goto IL_0090;
		}
	}
	{
		Il2CppChar L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)90))))
		{
			goto IL_00a0;
		}
	}

IL_0090:
	{
		__this->____isCustomFormat_11 = (bool)1;
		__this->____specifier_14 = ((int32_t)48);
		return;
	}

IL_00a0:
	{
		Il2CppChar L_18 = V_0;
		__this->____specifier_14 = L_18;
		String_t* L_19 = ___0_format;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_21 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = NumberFormatter_ParsePrecision_m1F52983E7B53FCB6DDB70EF75276D72C754DA017(L_21, NULL);
		__this->____precision_15 = L_22;
		int32_t L_23 = __this->____precision_15;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00dc;
		}
	}
	{
		__this->____isCustomFormat_11 = (bool)1;
		__this->____specifier_14 = ((int32_t)48);
		__this->____precision_15 = (-1);
	}

IL_00dc:
	{
		return;
	}
}
// System.Void NumberFormatter::Init(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Init_m3E891FFA14B42368674430ED23FACBACF6BBB60F (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, String_t* ___0_format, int32_t ___1_value, int32_t ___2_defPrecision, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_format;
		NumberFormatter_Init_m375405CBA50F24E305C54E94B6FD6097EBD1954C(__this, L_0, NULL);
		int32_t L_1 = ___2_defPrecision;
		__this->____defPrecision_16 = L_1;
		int32_t L_2 = ___1_value;
		__this->____positive_13 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_3 = ___1_value;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_4 = __this->____specifier_14;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0031;
		}
	}

IL_0028:
	{
		int32_t L_5 = ___1_value;
		NumberFormatter_InitHex_m6D632F6974C9BD7A3CB7868C30F8A3B927DA6D71(__this, ((int64_t)L_5), NULL);
		return;
	}

IL_0031:
	{
		int32_t L_6 = ___1_value;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_7 = ___1_value;
		___1_value = ((-L_7));
	}

IL_0039:
	{
		int32_t L_8 = ___1_value;
		NumberFormatter_InitDecHexDigits_m35FA009FB57A4E4D9769894F1CD3884B3D7E9140(__this, L_8, NULL);
		int32_t L_9;
		L_9 = NumberFormatter_DecHexLen_mE0267E1D63E7324673916FFF6C0CE9D02B740AAB(__this, NULL);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->____digitsLen_17 = L_10;
		int32_t L_11 = V_0;
		__this->____decPointPos_19 = L_11;
		return;
	}
}
// System.Void NumberFormatter::Append(System.Char*,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, Il2CppChar ___1_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Il2CppChar* L_0 = ___0_buf;
		int32_t L_1 = __this->____ind_8;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____ind_8 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		Il2CppChar L_4 = ___1_c;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2))))) = (int16_t)L_4;
		return;
	}
}
// System.Void NumberFormatter::Append(System.Char*,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Append_m135AE7274D14DBA6C466ED55FAA4EE02A1EA0B33 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, Il2CppChar ___1_c, int32_t ___2_cnt, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_001a;
	}

IL_0002:
	{
		Il2CppChar* L_0 = ___0_buf;
		int32_t L_1 = __this->____ind_8;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____ind_8 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		Il2CppChar L_4 = ___1_c;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2))))) = (int16_t)L_4;
	}

IL_001a:
	{
		int32_t L_5 = ___2_cnt;
		int32_t L_6 = L_5;
		___2_cnt = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void NumberFormatter::Append(System.Char*,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_dest, String_t* ___1_s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___1_s;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_002d;
	}

IL_000b:
	{
		Il2CppChar* L_2 = ___0_dest;
		int32_t L_3 = __this->____ind_8;
		V_2 = L_3;
		int32_t L_4 = V_2;
		__this->____ind_8 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_2;
		String_t* L_6 = ___1_s;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))))) = (int16_t)L_8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Boolean NumberFormatter::get_IsFloatingSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_get_IsFloatingSource_mFDE255FD61D0FAD2DEE35D7DCA2F334443F50393 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____defPrecision_16;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____defPrecision_16;
		return (bool)((((int32_t)L_1) == ((int32_t)7))? 1 : 0);
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Void NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_set_CurrentCulture_m98C79E43E8B7EE9484C6C08836786C98E651B827 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ___0_value;
		NullCheck(L_1);
		bool L_2;
		L_2 = CultureInfo_get_IsReadOnly_m53947CBF80905492B4AC82C8A148088E2DB8F8EF_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3 = ___0_value;
		NullCheck(L_3);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4;
		L_4 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->____nfi_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->____nfi_7), (void*)L_4);
		return;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->____nfi_7 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->____nfi_7), (void*)(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)NULL);
		return;
	}
}
// System.Int32 NumberFormatter::get_IntegerDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_get_IntegerDigits_mBD9BF5958AD533730D3310FFA6D8365BCE310FC5 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____decPointPos_19;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_1 = __this->____decPointPos_19;
		return L_1;
	}
}
// System.Int32 NumberFormatter::get_DecimalDigits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_get_DecimalDigits_mF566DE29047E1EA035B029409A6935C9B4188138 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____digitsLen_17;
		int32_t L_1 = __this->____decPointPos_19;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		int32_t L_2 = __this->____digitsLen_17;
		int32_t L_3 = __this->____decPointPos_19;
		return ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
	}
}
// System.Boolean NumberFormatter::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_get_IsZero_m3DD77B91E6745652726343DA34CBE43F2660A03C (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____digitsLen_17;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean NumberFormatter::get_IsZeroInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_get_IsZeroInteger_mB248091B22087EEFE6259AE8624D05E7B03B5368 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____digitsLen_17;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->____decPointPos_19;
		return (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)1;
	}
}
// System.Void NumberFormatter::RoundPos(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_RoundPos_m69B323204871E43BE1D890ABB552CB697E375F40 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_pos, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____digitsLen_17;
		int32_t L_1 = ___0_pos;
		bool L_2;
		L_2 = NumberFormatter_RoundBits_m2046597FD513FAD85C872232C58D7EC30076A272(__this, ((int32_t)il2cpp_codegen_subtract(L_0, L_1)), NULL);
		return;
	}
}
// System.Boolean NumberFormatter::RoundDecimal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_decimals, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____digitsLen_17;
		int32_t L_1 = __this->____decPointPos_19;
		int32_t L_2 = ___0_decimals;
		bool L_3;
		L_3 = NumberFormatter_RoundBits_m2046597FD513FAD85C872232C58D7EC30076A272(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), L_2)), NULL);
		return L_3;
	}
}
// System.Boolean NumberFormatter::RoundBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_RoundBits_m2046597FD513FAD85C872232C58D7EC30076A272 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_shift, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___0_shift;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		int32_t L_1 = ___0_shift;
		int32_t L_2 = __this->____digitsLen_17;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0048;
		}
	}
	{
		__this->____digitsLen_17 = 0;
		__this->____decPointPos_19 = 1;
		int32_t L_3 = 0;
		V_3 = L_3;
		__this->____val4_23 = L_3;
		uint32_t L_4 = V_3;
		uint32_t L_5 = L_4;
		V_3 = L_5;
		__this->____val3_22 = L_5;
		uint32_t L_6 = V_3;
		uint32_t L_7 = L_6;
		V_3 = L_7;
		__this->____val2_21 = L_7;
		uint32_t L_8 = V_3;
		__this->____val1_20 = L_8;
		__this->____positive_13 = (bool)1;
		return (bool)0;
	}

IL_0048:
	{
		int32_t L_9 = ___0_shift;
		int32_t L_10 = __this->____offset_18;
		___0_shift = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = __this->____digitsLen_17;
		int32_t L_12 = __this->____offset_18;
		__this->____digitsLen_17 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		goto IL_00a5;
	}

IL_0067:
	{
		uint32_t L_13 = __this->____val2_21;
		__this->____val1_20 = L_13;
		uint32_t L_14 = __this->____val3_22;
		__this->____val2_21 = L_14;
		uint32_t L_15 = __this->____val4_23;
		__this->____val3_22 = L_15;
		__this->____val4_23 = 0;
		int32_t L_16 = __this->____digitsLen_17;
		__this->____digitsLen_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 8));
		int32_t L_17 = ___0_shift;
		___0_shift = ((int32_t)il2cpp_codegen_subtract(L_17, 8));
	}

IL_00a5:
	{
		int32_t L_18 = ___0_shift;
		if ((((int32_t)L_18) > ((int32_t)8)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_19 = ___0_shift;
		___0_shift = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_19, 1))<<2));
		uint32_t L_20 = __this->____val1_20;
		int32_t L_21 = ___0_shift;
		V_0 = ((int32_t)((uint32_t)L_20>>((int32_t)(L_21&((int32_t)31)))));
		uint32_t L_22 = V_0;
		V_1 = ((int32_t)((int32_t)L_22&((int32_t)15)));
		uint32_t L_23 = V_0;
		uint32_t L_24 = V_1;
		int32_t L_25 = ___0_shift;
		__this->____val1_20 = ((int32_t)(((int32_t)((int32_t)L_23^(int32_t)L_24))<<((int32_t)(L_25&((int32_t)31)))));
		V_2 = (bool)0;
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) >= ((uint32_t)5))))
		{
			goto IL_0129;
		}
	}
	{
		uint32_t L_27 = __this->____val1_20;
		int32_t L_28 = ___0_shift;
		__this->____val1_20 = ((int32_t)((int32_t)L_27|((int32_t)((uint32_t)((int32_t)-1717986919)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)28), L_28))&((int32_t)31)))))));
		NumberFormatter_AddOneToDecHex_m4FC69F460DC5A7B41B92EF6ECAD058FF8E121013(__this, NULL);
		int32_t L_29;
		L_29 = NumberFormatter_DecHexLen_mE0267E1D63E7324673916FFF6C0CE9D02B740AAB(__this, NULL);
		V_4 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = __this->____digitsLen_17;
		V_2 = (bool)((((int32_t)((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = __this->____decPointPos_19;
		int32_t L_33 = V_4;
		int32_t L_34 = __this->____digitsLen_17;
		__this->____decPointPos_19 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_32, L_33)), L_34));
		int32_t L_35 = V_4;
		__this->____digitsLen_17 = L_35;
	}

IL_0129:
	{
		NumberFormatter_RemoveTrailingZeros_m0AA459821140357E010B8A82F727220D97EEF9FA(__this, NULL);
		bool L_36 = V_2;
		return L_36;
	}
}
// System.Void NumberFormatter::RemoveTrailingZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_RemoveTrailingZeros_m0AA459821140357E010B8A82F727220D97EEF9FA (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = NumberFormatter_CountTrailingZeros_mB31D59C0BC86186943E474A7B99CCF60ACF3667A(__this, NULL);
		__this->____offset_18 = L_0;
		int32_t L_1 = __this->____digitsLen_17;
		int32_t L_2 = __this->____offset_18;
		__this->____digitsLen_17 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t L_3 = __this->____digitsLen_17;
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		__this->____offset_18 = 0;
		__this->____decPointPos_19 = 1;
		__this->____positive_13 = (bool)1;
	}

IL_003c:
	{
		return;
	}
}
// System.Void NumberFormatter::AddOneToDecHex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AddOneToDecHex_m4FC69F460DC5A7B41B92EF6ECAD058FF8E121013 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->____val1_20;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0072;
		}
	}
	{
		__this->____val1_20 = 0;
		uint32_t L_1 = __this->____val2_21;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_0060;
		}
	}
	{
		__this->____val2_21 = 0;
		uint32_t L_2 = __this->____val3_22;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)-1717986919)))))
		{
			goto IL_004e;
		}
	}
	{
		__this->____val3_22 = 0;
		uint32_t L_3 = __this->____val4_23;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = NumberFormatter_AddOneToDecHex_m954B941C1C553B6232AAD166569538360487AB0A(L_3, NULL);
		__this->____val4_23 = L_4;
		return;
	}

IL_004e:
	{
		uint32_t L_5 = __this->____val3_22;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = NumberFormatter_AddOneToDecHex_m954B941C1C553B6232AAD166569538360487AB0A(L_5, NULL);
		__this->____val3_22 = L_6;
		return;
	}

IL_0060:
	{
		uint32_t L_7 = __this->____val2_21;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_8;
		L_8 = NumberFormatter_AddOneToDecHex_m954B941C1C553B6232AAD166569538360487AB0A(L_7, NULL);
		__this->____val2_21 = L_8;
		return;
	}

IL_0072:
	{
		uint32_t L_9 = __this->____val1_20;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = NumberFormatter_AddOneToDecHex_m954B941C1C553B6232AAD166569538360487AB0A(L_9, NULL);
		__this->____val1_20 = L_10;
		return;
	}
}
// System.UInt32 NumberFormatter::AddOneToDecHex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumberFormatter_AddOneToDecHex_m954B941C1C553B6232AAD166569538360487AB0A (uint32_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)65535)))) == ((uint32_t)((int32_t)39321)))))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_1 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1&((int32_t)16777215)))) == ((uint32_t)((int32_t)10066329)))))
		{
			goto IL_003a;
		}
	}
	{
		uint32_t L_2 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&((int32_t)268435455)))) == ((uint32_t)((int32_t)161061273)))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_3 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_3, ((int32_t)107374183)));
	}

IL_0032:
	{
		uint32_t L_4 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)6710887)));
	}

IL_003a:
	{
		uint32_t L_5 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5&((int32_t)1048575)))) == ((uint32_t)((int32_t)629145)))))
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_6 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)419431)));
	}

IL_0050:
	{
		uint32_t L_7 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)26215)));
	}

IL_0058:
	{
		uint32_t L_8 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&((int32_t)255)))) == ((uint32_t)((int32_t)153)))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_9 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_9&((int32_t)4095)))) == ((uint32_t)((int32_t)2457)))))
		{
			goto IL_007c;
		}
	}
	{
		uint32_t L_10 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_10, ((int32_t)1639)));
	}

IL_007c:
	{
		uint32_t L_11 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_11, ((int32_t)103)));
	}

IL_0081:
	{
		uint32_t L_12 = ___0_val;
		if ((!(((uint32_t)((int32_t)((int32_t)L_12&((int32_t)15)))) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_008d;
		}
	}
	{
		uint32_t L_13 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_13, 7));
	}

IL_008d:
	{
		uint32_t L_14 = ___0_val;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_14, 1));
	}
}
// System.Int32 NumberFormatter::CountTrailingZeros()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_CountTrailingZeros_mB31D59C0BC86186943E474A7B99CCF60ACF3667A (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->____val1_20;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_1 = __this->____val1_20;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NumberFormatter_CountTrailingZeros_m85DA10C45E6F68E8B12D8C6E1DACBEA56F377549(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		uint32_t L_3 = __this->____val2_21;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_4 = __this->____val2_21;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NumberFormatter_CountTrailingZeros_m85DA10C45E6F68E8B12D8C6E1DACBEA56F377549(L_4, NULL);
		return ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_002a:
	{
		uint32_t L_6 = __this->____val3_22;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_7 = __this->____val3_22;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = NumberFormatter_CountTrailingZeros_m85DA10C45E6F68E8B12D8C6E1DACBEA56F377549(L_7, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16)));
	}

IL_0041:
	{
		uint32_t L_9 = __this->____val4_23;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_10 = __this->____val4_23;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = NumberFormatter_CountTrailingZeros_m85DA10C45E6F68E8B12D8C6E1DACBEA56F377549(L_10, NULL);
		return ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)24)));
	}

IL_0058:
	{
		int32_t L_12 = __this->____digitsLen_17;
		return L_12;
	}
}
// System.Int32 NumberFormatter::CountTrailingZeros(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_CountTrailingZeros_m85DA10C45E6F68E8B12D8C6E1DACBEA56F377549 (uint32_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_val;
		if (((int32_t)((int32_t)L_0&((int32_t)65535))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_1 = ___0_val;
		if (((int32_t)((int32_t)L_1&((int32_t)16777215))))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_2 = ___0_val;
		if (((int32_t)((int32_t)L_2&((int32_t)268435455))))
		{
			goto IL_001d;
		}
	}
	{
		return 7;
	}

IL_001d:
	{
		return 6;
	}

IL_001f:
	{
		uint32_t L_3 = ___0_val;
		if (((int32_t)((int32_t)L_3&((int32_t)1048575))))
		{
			goto IL_002a;
		}
	}
	{
		return 5;
	}

IL_002a:
	{
		return 4;
	}

IL_002c:
	{
		uint32_t L_4 = ___0_val;
		if (((int32_t)((int32_t)L_4&((int32_t)255))))
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_5 = ___0_val;
		if (((int32_t)((int32_t)L_5&((int32_t)4095))))
		{
			goto IL_0040;
		}
	}
	{
		return 3;
	}

IL_0040:
	{
		return 2;
	}

IL_0042:
	{
		uint32_t L_6 = ___0_val;
		if (((int32_t)((int32_t)L_6&((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		return 1;
	}

IL_004a:
	{
		return 0;
	}
}
// NumberFormatter NumberFormatter::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* NumberFormatter_GetInstance_mFC251EFB386558220E6BAC2762CCB7622FCDD7EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_0 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24;
		V_0 = L_0;
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24 = (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24), (void*)(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D*)NULL);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_3 = (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D*)il2cpp_codegen_object_new(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NumberFormatter__ctor_mF2746EE9087A992DF63AEF1612F147D51B010175(L_3, L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_4 = V_0;
		return L_4;
	}
}
// System.Void NumberFormatter::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Release_mD6ABA86179A8F9387EC1EF9C85BCE0F343085686 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24), (void*)__this);
		return;
	}
}
// System.Globalization.NumberFormatInfo NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatter_GetNumberFormatInstance_mC1EB772474A7A5C71DF8DCEEF75B14B825D95554 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, RuntimeObject* ___0_fp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->____nfi_7;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1 = ___0_fp;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->____nfi_7;
		return L_2;
	}

IL_0010:
	{
		RuntimeObject* L_3 = ___0_fp;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4;
		L_4 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_3, NULL);
		return L_4;
	}
}
// System.UInt32 NumberFormatter::FastToDecHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumberFormatter_FastToDecHex_m3BFA52B0FC8D8ED1ABC5AF271884ACF063F084EE (int32_t ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_val;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100))))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0;
		int32_t L_2 = ___0_val;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_000d:
	{
		int32_t L_5 = ___0_val;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)5243)))>>((int32_t)19)));
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0;
		int32_t L_11 = ___0_val;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)100)))));
		int32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		return ((int32_t)(((int32_t)(L_9<<8))|L_14));
	}
}
// System.UInt32 NumberFormatter::ToDecHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NumberFormatter_ToDecHex_mF3F2BF319BFAF2078EB7B7AB48576E21E2B80BC9 (int32_t ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_val;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10000))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = ___0_val;
		V_1 = ((int32_t)(L_1/((int32_t)10000)));
		int32_t L_2 = ___0_val;
		int32_t L_3 = V_1;
		___0_val = ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)10000)))));
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = NumberFormatter_FastToDecHex_m3BFA52B0FC8D8ED1ABC5AF271884ACF063F084EE(L_4, NULL);
		V_0 = ((int32_t)((int32_t)L_5<<((int32_t)16)));
	}

IL_0027:
	{
		uint32_t L_6 = V_0;
		int32_t L_7 = ___0_val;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_8;
		L_8 = NumberFormatter_FastToDecHex_m3BFA52B0FC8D8ED1ABC5AF271884ACF063F084EE(L_7, NULL);
		return ((int32_t)((int32_t)L_6|(int32_t)L_8));
	}
}
// System.Int32 NumberFormatter::NumberToString(System.Char*,System.String,System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_NumberToString_m4481AC28D8DC937A83A4FDCA7DA25A3EA67CB20E (Il2CppChar* ___0_p, String_t* ___1_format, int32_t ___2_value, RuntimeObject* ___3_fp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_0;
		L_0 = NumberFormatter_GetInstance_mFC251EFB386558220E6BAC2762CCB7622FCDD7EA(NULL);
		V_0 = L_0;
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_1 = V_0;
		String_t* L_2 = ___1_format;
		int32_t L_3 = ___2_value;
		NullCheck(L_1);
		NumberFormatter_Init_m3E891FFA14B42368674430ED23FACBACF6BBB60F(L_1, L_2, L_3, ((int32_t)10), NULL);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_4 = V_0;
		Il2CppChar* L_5 = ___0_p;
		String_t* L_6 = ___1_format;
		RuntimeObject* L_7 = ___3_fp;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = NumberFormatter_IntegerToString_mA0C15CFE190B4C564E9F679753B6F31467B57AA9(L_4, L_5, L_6, L_7, NULL);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_9 = V_0;
		NullCheck(L_9);
		NumberFormatter_Release_mD6ABA86179A8F9387EC1EF9C85BCE0F343085686_inline(L_9, NULL);
		return L_8;
	}
}
// System.Int32 NumberFormatter::NumberToString(System.Char*,System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_NumberToString_mC5980668606F0D6F5406E179DB4A09E7D14F57EC (Il2CppChar* ___0_buf, int32_t ___1_value, RuntimeObject* ___2_fp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* V_0 = NULL;
	{
		int32_t L_0 = ___1_value;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100000000))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___1_value;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-100000000))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
		Il2CppChar* L_2 = ___0_buf;
		int32_t L_3 = ___1_value;
		RuntimeObject* L_4 = ___2_fp;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NumberFormatter_NumberToString_m4481AC28D8DC937A83A4FDCA7DA25A3EA67CB20E(L_2, (String_t*)NULL, L_3, L_4, NULL);
		return L_5;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_6;
		L_6 = NumberFormatter_GetInstance_mFC251EFB386558220E6BAC2762CCB7622FCDD7EA(NULL);
		V_0 = L_6;
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_7 = V_0;
		Il2CppChar* L_8 = ___0_buf;
		int32_t L_9 = ___1_value;
		RuntimeObject* L_10 = ___2_fp;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = NumberFormatter_FastIntToCString_m406F40F6B5F7AB8939D2DE554DEAF3D0C448D366(L_7, L_8, L_9, L_10, NULL);
		NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* L_12 = V_0;
		NullCheck(L_12);
		NumberFormatter_Release_mD6ABA86179A8F9387EC1EF9C85BCE0F343085686_inline(L_12, NULL);
		return L_11;
	}
}
// System.Int32 NumberFormatter::CharCopy(System.Char*,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_CharCopy_m4845A8D1BC716918C743DEE9E80022369CAEC4A6 (Il2CppChar* ___0_buf, String_t* ___1_str, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___1_str;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		Il2CppChar* L_2 = ___0_buf;
		int32_t L_3 = V_1;
		String_t* L_4 = ___1_str;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 2))))) = (int16_t)L_6;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Int32 NumberFormatter::FastIntToCString(System.Char*,System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FastIntToCString_m406F40F6B5F7AB8939D2DE554DEAF3D0C448D366 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_p, int32_t ___1_value, RuntimeObject* ___2_fp, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__this->____ind_8 = 0;
		int32_t L_0 = ___1_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_1 = ___2_fp;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatter_GetNumberFormatInstance_mC1EB772474A7A5C71DF8DCEEF75B14B825D95554(__this, L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = ___1_value;
		___1_value = ((-L_4));
		Il2CppChar* L_5 = ___0_p;
		String_t* L_6 = V_0;
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_5, L_6, NULL);
	}

IL_0024:
	{
		int32_t L_7 = ___1_value;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)10000))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8 = ___1_value;
		V_1 = ((int32_t)(L_8/((int32_t)10000)));
		Il2CppChar* L_9 = ___0_p;
		int32_t L_10 = V_1;
		NumberFormatter_FastAppendDigits_mE1372A8BFA2E5E8C21A10C3EB3F0D8ED6E90E7BC(__this, L_9, L_10, (bool)0, NULL);
		Il2CppChar* L_11 = ___0_p;
		int32_t L_12 = ___1_value;
		int32_t L_13 = V_1;
		NumberFormatter_FastAppendDigits_mE1372A8BFA2E5E8C21A10C3EB3F0D8ED6E90E7BC(__this, L_11, ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)10000))))), (bool)1, NULL);
		goto IL_0059;
	}

IL_0050:
	{
		Il2CppChar* L_14 = ___0_p;
		int32_t L_15 = ___1_value;
		NumberFormatter_FastAppendDigits_mE1372A8BFA2E5E8C21A10C3EB3F0D8ED6E90E7BC(__this, L_14, L_15, (bool)0, NULL);
	}

IL_0059:
	{
		int32_t L_16 = __this->____ind_8;
		return L_16;
	}
}
// System.Int32 NumberFormatter::IntegerToString(System.Char*,System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_IntegerToString_mA0C15CFE190B4C564E9F679753B6F31467B57AA9 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, String_t* ___1_format, RuntimeObject* ___2_fp, const RuntimeMethod* method) 
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		RuntimeObject* L_0 = ___2_fp;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatter_GetNumberFormatInstance_mC1EB772474A7A5C71DF8DCEEF75B14B825D95554(__this, L_0, NULL);
		V_0 = L_1;
		Il2CppChar L_2 = __this->____specifier_14;
		V_1 = L_2;
		Il2CppChar L_3 = V_1;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)78)))))
		{
			goto IL_003b;
		}
	}
	{
		Il2CppChar L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)67))))
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_007a;
			}
			case 4:
			{
				goto IL_0089;
			}
		}
	}
	{
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)78))))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00d7;
	}

IL_003b:
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)80))))
		{
			goto IL_00ba;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)88))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00d7;
	}

IL_004d:
	{
		Il2CppChar* L_8 = ___0_buf;
		int32_t L_9 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_10 = V_0;
		int32_t L_11;
		L_11 = NumberFormatter_FormatCurrency_m9465FA2F28DF0A6E7EE138B073DE05F8AE6D711E(__this, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_005c:
	{
		Il2CppChar* L_12 = ___0_buf;
		int32_t L_13 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_14 = V_0;
		int32_t L_15;
		L_15 = NumberFormatter_FormatDecimal_m2D72A6235E3520F9BE0E3B52827190D4C286DDE9(__this, L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_006b:
	{
		Il2CppChar* L_16 = ___0_buf;
		int32_t L_17 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_18 = V_0;
		int32_t L_19;
		L_19 = NumberFormatter_FormatExponential_m56B6FF6283DDD8C357EC458ABC1BBC6F5CC525E3(__this, L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_007a:
	{
		Il2CppChar* L_20 = ___0_buf;
		int32_t L_21 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = V_0;
		int32_t L_23;
		L_23 = NumberFormatter_FormatFixedPoint_mF2EF89E481C1C2D1F34F8FEC43B0FCDF8E6A7FDE(__this, L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_0089:
	{
		int32_t L_24 = __this->____precision_15;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar* L_25 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_26 = V_0;
		int32_t L_27;
		L_27 = NumberFormatter_FormatDecimal_m2D72A6235E3520F9BE0E3B52827190D4C286DDE9(__this, L_25, (-1), L_26, NULL);
		return L_27;
	}

IL_009c:
	{
		Il2CppChar* L_28 = ___0_buf;
		int32_t L_29 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_30 = V_0;
		int32_t L_31;
		L_31 = NumberFormatter_FormatGeneral_m285F3B894E3A6A84DB8848FE22455633E10B028B(__this, L_28, L_29, L_30, NULL);
		return L_31;
	}

IL_00ab:
	{
		Il2CppChar* L_32 = ___0_buf;
		int32_t L_33 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_34 = V_0;
		int32_t L_35;
		L_35 = NumberFormatter_FormatNumber_mDE5387F38BC7D851D25264ECCDA9A2A321105585(__this, L_32, L_33, L_34, NULL);
		return L_35;
	}

IL_00ba:
	{
		Il2CppChar* L_36 = ___0_buf;
		int32_t L_37 = __this->____precision_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_38 = V_0;
		int32_t L_39;
		L_39 = NumberFormatter_FormatPercent_m8BD850FDE244DBD61725411921E5B8C8AB5FB5C4(__this, L_36, L_37, L_38, NULL);
		return L_39;
	}

IL_00c9:
	{
		Il2CppChar* L_40 = ___0_buf;
		int32_t L_41 = __this->____precision_15;
		int32_t L_42;
		L_42 = NumberFormatter_FormatHexadecimal_m7BB28976F586CA73D802A1DDCF7005CCE2E9FE1C(__this, L_40, L_41, NULL);
		return L_42;
	}

IL_00d7:
	{
		bool L_43 = __this->____isCustomFormat_11;
		if (!L_43)
		{
			goto IL_00e9;
		}
	}
	{
		Il2CppChar* L_44 = ___0_buf;
		String_t* L_45 = ___1_format;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_46 = V_0;
		int32_t L_47;
		L_47 = NumberFormatter_FormatCustom_mD687317A3F0BB0167B9199F5A429933A4F5C2ED3(__this, L_44, L_45, L_46, NULL);
		return L_47;
	}

IL_00e9:
	{
		String_t* L_48 = ___1_format;
		String_t* L_49;
		L_49 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral802E1AAA5091468BB2ACAD98B776F7F942CA86E8)), L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0E65D0FD281A20B81EE66FB465F7427E8240937)), NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_50 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_50);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_50, L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberFormatter_IntegerToString_mA0C15CFE190B4C564E9F679753B6F31467B57AA9_RuntimeMethod_var)));
	}
}
// System.Int32 NumberFormatter::FormatCurrency(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatCurrency_m9465FA2F28DF0A6E7EE138B073DE05F8AE6D711E (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_precision;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ___2_nfi;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_3 = ___1_precision;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		___1_precision = G_B3_0;
		int32_t L_4 = ___1_precision;
		bool L_5;
		L_5 = NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57(__this, L_4, NULL);
		__this->____ind_8 = 0;
		bool L_6 = __this->____positive_13;
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_7 = ___2_nfi;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_01e1;
	}

IL_0039:
	{
		Il2CppChar* L_11 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12 = ___2_nfi;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_12, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_11, L_13, NULL);
		goto IL_01e1;
	}

IL_004b:
	{
		Il2CppChar* L_14 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_15 = ___2_nfi;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_15, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_14, L_16, NULL);
		Il2CppChar* L_17 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_17, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_0066:
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_18 = ___2_nfi;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline(L_18, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		switch (L_20)
		{
			case 0:
			{
				goto IL_00b8;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_00f2;
			}
			case 3:
			{
				goto IL_0111;
			}
			case 4:
			{
				goto IL_0123;
			}
			case 5:
			{
				goto IL_0131;
			}
			case 6:
			{
				goto IL_01e1;
			}
			case 7:
			{
				goto IL_01e1;
			}
			case 8:
			{
				goto IL_0143;
			}
			case 9:
			{
				goto IL_0155;
			}
			case 10:
			{
				goto IL_01e1;
			}
			case 11:
			{
				goto IL_017a;
			}
			case 12:
			{
				goto IL_0192;
			}
			case 13:
			{
				goto IL_01e1;
			}
			case 14:
			{
				goto IL_01b7;
			}
			case 15:
			{
				goto IL_01d8;
			}
		}
	}
	{
		goto IL_01e1;
	}

IL_00b8:
	{
		Il2CppChar* L_21 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_21, ((int32_t)40), NULL);
		Il2CppChar* L_22 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_23 = ___2_nfi;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_23, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_22, L_24, NULL);
		goto IL_01e1;
	}

IL_00d3:
	{
		Il2CppChar* L_25 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_26 = ___2_nfi;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_26, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_25, L_27, NULL);
		Il2CppChar* L_28 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_29 = ___2_nfi;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_29, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_28, L_30, NULL);
		goto IL_01e1;
	}

IL_00f2:
	{
		Il2CppChar* L_31 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_32 = ___2_nfi;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_32, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_31, L_33, NULL);
		Il2CppChar* L_34 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_35 = ___2_nfi;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_35, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_34, L_36, NULL);
		goto IL_01e1;
	}

IL_0111:
	{
		Il2CppChar* L_37 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_38 = ___2_nfi;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_38, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_37, L_39, NULL);
		goto IL_01e1;
	}

IL_0123:
	{
		Il2CppChar* L_40 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_40, ((int32_t)40), NULL);
		goto IL_01e1;
	}

IL_0131:
	{
		Il2CppChar* L_41 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_42 = ___2_nfi;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_42, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_41, L_43, NULL);
		goto IL_01e1;
	}

IL_0143:
	{
		Il2CppChar* L_44 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_45 = ___2_nfi;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_45, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_44, L_46, NULL);
		goto IL_01e1;
	}

IL_0155:
	{
		Il2CppChar* L_47 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_48 = ___2_nfi;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_48, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_47, L_49, NULL);
		Il2CppChar* L_50 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_51 = ___2_nfi;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_51, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_50, L_52, NULL);
		Il2CppChar* L_53 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_53, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_017a:
	{
		Il2CppChar* L_54 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_55 = ___2_nfi;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_55, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_54, L_56, NULL);
		Il2CppChar* L_57 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_57, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_0192:
	{
		Il2CppChar* L_58 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_59 = ___2_nfi;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_59, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_58, L_60, NULL);
		Il2CppChar* L_61 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_61, ((int32_t)32), NULL);
		Il2CppChar* L_62 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_63 = ___2_nfi;
		NullCheck(L_63);
		String_t* L_64;
		L_64 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_63, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_62, L_64, NULL);
		goto IL_01e1;
	}

IL_01b7:
	{
		Il2CppChar* L_65 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_65, ((int32_t)40), NULL);
		Il2CppChar* L_66 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_67 = ___2_nfi;
		NullCheck(L_67);
		String_t* L_68;
		L_68 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_67, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_66, L_68, NULL);
		Il2CppChar* L_69 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_69, ((int32_t)32), NULL);
		goto IL_01e1;
	}

IL_01d8:
	{
		Il2CppChar* L_70 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_70, ((int32_t)40), NULL);
	}

IL_01e1:
	{
		Il2CppChar* L_71 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_72 = ___2_nfi;
		NullCheck(L_72);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73;
		L_73 = NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA(L_72, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_74 = ___2_nfi;
		NullCheck(L_74);
		String_t* L_75;
		L_75 = NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline(L_74, NULL);
		NumberFormatter_AppendIntegerStringWithGroupSeparator_m3D6E5D77621DAC89B4D8703AF2909CB2FE995815(__this, L_71, L_73, L_75, NULL);
		int32_t L_76 = ___1_precision;
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_020d;
		}
	}
	{
		Il2CppChar* L_77 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_78 = ___2_nfi;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline(L_78, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_77, L_79, NULL);
		Il2CppChar* L_80 = ___0_buf;
		int32_t L_81 = ___1_precision;
		NumberFormatter_AppendDecimalString_m02C8B143F4491895EE2D7355329962E4E3AAB8CC(__this, L_80, L_81, NULL);
	}

IL_020d:
	{
		bool L_82 = __this->____positive_13;
		if (!L_82)
		{
			goto IL_0256;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_83 = ___2_nfi;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline(L_83, NULL);
		V_0 = L_84;
		int32_t L_85 = V_0;
		if ((((int32_t)L_85) == ((int32_t)1)))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_86 = V_0;
		if ((((int32_t)L_86) == ((int32_t)3)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_03d1;
	}

IL_0229:
	{
		Il2CppChar* L_87 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_88 = ___2_nfi;
		NullCheck(L_88);
		String_t* L_89;
		L_89 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_88, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_87, L_89, NULL);
		goto IL_03d1;
	}

IL_023b:
	{
		Il2CppChar* L_90 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_90, ((int32_t)32), NULL);
		Il2CppChar* L_91 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_92 = ___2_nfi;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_92, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_91, L_93, NULL);
		goto IL_03d1;
	}

IL_0256:
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_94 = ___2_nfi;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline(L_94, NULL);
		V_0 = L_95;
		int32_t L_96 = V_0;
		switch (L_96)
		{
			case 0:
			{
				goto IL_02a8;
			}
			case 1:
			{
				goto IL_03d1;
			}
			case 2:
			{
				goto IL_03d1;
			}
			case 3:
			{
				goto IL_02b6;
			}
			case 4:
			{
				goto IL_02c8;
			}
			case 5:
			{
				goto IL_02e3;
			}
			case 6:
			{
				goto IL_02f5;
			}
			case 7:
			{
				goto IL_0314;
			}
			case 8:
			{
				goto IL_0333;
			}
			case 9:
			{
				goto IL_03d1;
			}
			case 10:
			{
				goto IL_034e;
			}
			case 11:
			{
				goto IL_0373;
			}
			case 12:
			{
				goto IL_03d1;
			}
			case 13:
			{
				goto IL_0382;
			}
			case 14:
			{
				goto IL_03a7;
			}
			case 15:
			{
				goto IL_03b2;
			}
		}
	}
	{
		goto IL_03d1;
	}

IL_02a8:
	{
		Il2CppChar* L_97 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_97, ((int32_t)41), NULL);
		goto IL_03d1;
	}

IL_02b6:
	{
		Il2CppChar* L_98 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_99 = ___2_nfi;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_99, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_98, L_100, NULL);
		goto IL_03d1;
	}

IL_02c8:
	{
		Il2CppChar* L_101 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_102 = ___2_nfi;
		NullCheck(L_102);
		String_t* L_103;
		L_103 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_102, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_101, L_103, NULL);
		Il2CppChar* L_104 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_104, ((int32_t)41), NULL);
		goto IL_03d1;
	}

IL_02e3:
	{
		Il2CppChar* L_105 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_106 = ___2_nfi;
		NullCheck(L_106);
		String_t* L_107;
		L_107 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_106, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_105, L_107, NULL);
		goto IL_03d1;
	}

IL_02f5:
	{
		Il2CppChar* L_108 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_109 = ___2_nfi;
		NullCheck(L_109);
		String_t* L_110;
		L_110 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_109, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_108, L_110, NULL);
		Il2CppChar* L_111 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_112 = ___2_nfi;
		NullCheck(L_112);
		String_t* L_113;
		L_113 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_112, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_111, L_113, NULL);
		goto IL_03d1;
	}

IL_0314:
	{
		Il2CppChar* L_114 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_115 = ___2_nfi;
		NullCheck(L_115);
		String_t* L_116;
		L_116 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_115, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_114, L_116, NULL);
		Il2CppChar* L_117 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_118 = ___2_nfi;
		NullCheck(L_118);
		String_t* L_119;
		L_119 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_118, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_117, L_119, NULL);
		goto IL_03d1;
	}

IL_0333:
	{
		Il2CppChar* L_120 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_120, ((int32_t)32), NULL);
		Il2CppChar* L_121 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_122 = ___2_nfi;
		NullCheck(L_122);
		String_t* L_123;
		L_123 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_122, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_121, L_123, NULL);
		goto IL_03d1;
	}

IL_034e:
	{
		Il2CppChar* L_124 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_124, ((int32_t)32), NULL);
		Il2CppChar* L_125 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_126 = ___2_nfi;
		NullCheck(L_126);
		String_t* L_127;
		L_127 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_126, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_125, L_127, NULL);
		Il2CppChar* L_128 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_129 = ___2_nfi;
		NullCheck(L_129);
		String_t* L_130;
		L_130 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_129, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_128, L_130, NULL);
		goto IL_03d1;
	}

IL_0373:
	{
		Il2CppChar* L_131 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_132 = ___2_nfi;
		NullCheck(L_132);
		String_t* L_133;
		L_133 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_132, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_131, L_133, NULL);
		goto IL_03d1;
	}

IL_0382:
	{
		Il2CppChar* L_134 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_135 = ___2_nfi;
		NullCheck(L_135);
		String_t* L_136;
		L_136 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_135, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_134, L_136, NULL);
		Il2CppChar* L_137 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_137, ((int32_t)32), NULL);
		Il2CppChar* L_138 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_139 = ___2_nfi;
		NullCheck(L_139);
		String_t* L_140;
		L_140 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_139, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_138, L_140, NULL);
		goto IL_03d1;
	}

IL_03a7:
	{
		Il2CppChar* L_141 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_141, ((int32_t)41), NULL);
		goto IL_03d1;
	}

IL_03b2:
	{
		Il2CppChar* L_142 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_142, ((int32_t)32), NULL);
		Il2CppChar* L_143 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_144 = ___2_nfi;
		NullCheck(L_144);
		String_t* L_145;
		L_145 = NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline(L_144, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_143, L_145, NULL);
		Il2CppChar* L_146 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_146, ((int32_t)41), NULL);
	}

IL_03d1:
	{
		int32_t L_147 = __this->____ind_8;
		return L_147;
	}
}
// System.Int32 NumberFormatter::FormatDecimal(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatDecimal_m2D72A6235E3520F9BE0E3B52827190D4C286DDE9 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_precision;
		int32_t L_1 = __this->____digitsLen_17;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = __this->____digitsLen_17;
		___1_precision = L_2;
	}

IL_0011:
	{
		__this->____ind_8 = 0;
		int32_t L_3 = ___1_precision;
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Il2CppChar* L_4 = ___0_buf;
		int32_t L_5 = __this->____ind_8;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____ind_8 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), 2))))) = (int16_t)((int32_t)48);
		int32_t L_8 = __this->____ind_8;
		return L_8;
	}

IL_003b:
	{
		bool L_9 = __this->____positive_13;
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar* L_10 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_11 = ___2_nfi;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_11, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_10, L_12, NULL);
	}

IL_0050:
	{
		Il2CppChar* L_13 = ___0_buf;
		int32_t L_14 = ___1_precision;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_13, 0, L_14, NULL);
		int32_t L_15 = __this->____ind_8;
		return L_15;
	}
}
// System.Int32 NumberFormatter::FormatHexadecimal(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatHexadecimal_m7BB28976F586CA73D802A1DDCF7005CCE2E9FE1C (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_FormatHexadecimal_m7BB28976F586CA73D802A1DDCF7005CCE2E9FE1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	uint64_t V_2 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_precision;
		int32_t L_1 = __this->____decPointPos_19;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = __this->____specifierIsUpper_12;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DigitLowerTable_1;
		G_B3_0 = L_4;
		goto IL_0021;
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DigitUpperTable_2;
		G_B3_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B3_0;
		int32_t L_6 = V_0;
		__this->____ind_8 = L_6;
		uint32_t L_7 = __this->____val1_20;
		uint32_t L_8 = __this->____val2_21;
		V_2 = ((int64_t)(((int64_t)(uint64_t)L_7)|((int64_t)(((int64_t)(uint64_t)L_8)<<((int32_t)32)))));
		goto IL_0055;
	}

IL_003e:
	{
		Il2CppChar* L_9 = ___0_buf;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = V_1;
		uint64_t L_13 = V_2;
		if ((uint64_t)(((int64_t)((int64_t)L_13&((int64_t)((int32_t)15))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NumberFormatter_FormatHexadecimal_m7BB28976F586CA73D802A1DDCF7005CCE2E9FE1C_RuntimeMethod_var);
		NullCheck(L_12);
		intptr_t L_14 = ((intptr_t)((int64_t)((int64_t)L_13&((int64_t)((int32_t)15)))));
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 2))))) = (int16_t)L_15;
		uint64_t L_16 = V_2;
		V_2 = ((int64_t)((uint64_t)L_16>>4));
	}

IL_0055:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_18 = __this->____ind_8;
		return L_18;
	}
}
// System.Int32 NumberFormatter::FormatFixedPoint(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatFixedPoint_mF2EF89E481C1C2D1F34F8FEC43B0FCDF8E6A7FDE (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_precision;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ___2_nfi;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline(L_1, NULL);
		___1_precision = L_2;
	}

IL_000c:
	{
		int32_t L_3 = ___1_precision;
		bool L_4;
		L_4 = NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57(__this, L_3, NULL);
		__this->____ind_8 = 0;
		bool L_5 = __this->____positive_13;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar* L_6 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_7 = ___2_nfi;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_7, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_6, L_8, NULL);
	}

IL_0030:
	{
		Il2CppChar* L_9 = ___0_buf;
		int32_t L_10;
		L_10 = NumberFormatter_get_IntegerDigits_mBD9BF5958AD533730D3310FFA6D8365BCE310FC5(__this, NULL);
		NumberFormatter_AppendIntegerString_m3ED3F188BDE1B60D1AAA86C4069117F4AEF2D093(__this, L_9, L_10, NULL);
		int32_t L_11 = ___1_precision;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar* L_12 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_13 = ___2_nfi;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_13, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_12, L_14, NULL);
		Il2CppChar* L_15 = ___0_buf;
		int32_t L_16 = ___1_precision;
		NumberFormatter_AppendDecimalString_m02C8B143F4491895EE2D7355329962E4E3AAB8CC(__this, L_15, L_16, NULL);
	}

IL_0056:
	{
		int32_t L_17 = __this->____ind_8;
		return L_17;
	}
}
// System.Int32 NumberFormatter::FormatGeneral(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatGeneral_m285F3B894E3A6A84DB8848FE22455633E10B028B (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = ___1_precision;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = NumberFormatter_get_IsFloatingSource_mFDE255FD61D0FAD2DEE35D7DCA2F334443F50393(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->____defPrecision_16;
		___1_precision = L_2;
		goto IL_0029;
	}

IL_0015:
	{
		V_0 = (bool)1;
		int32_t L_3 = ___1_precision;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = __this->____defPrecision_16;
		___1_precision = L_4;
	}

IL_0022:
	{
		int32_t L_5 = ___1_precision;
		NumberFormatter_RoundPos_m69B323204871E43BE1D890ABB552CB697E375F40(__this, L_5, NULL);
	}

IL_0029:
	{
		int32_t L_6 = __this->____decPointPos_19;
		V_1 = L_6;
		int32_t L_7 = __this->____digitsLen_17;
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		int32_t L_10 = V_1;
		int32_t L_11 = ___1_precision;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_12 = V_1;
		G_B8_0 = ((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)-4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B8_0 = 1;
	}

IL_004a:
	{
		bool L_13 = V_0;
		if (!((int32_t)(G_B8_0&(int32_t)L_13)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar* L_14 = ___0_buf;
		int32_t L_15 = V_2;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_16 = ___2_nfi;
		int32_t L_17;
		L_17 = NumberFormatter_FormatExponential_mEFC4C1C0064B930CDD488FBAE51AA76831E9A113(__this, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), L_16, 2, NULL);
		return L_17;
	}

IL_005b:
	{
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		V_3 = 0;
	}

IL_0061:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		V_1 = 0;
	}

IL_0067:
	{
		bool L_20 = __this->____positive_13;
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar* L_21 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___2_nfi;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_22, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_21, L_23, NULL);
	}

IL_007c:
	{
		int32_t L_24 = V_1;
		if (L_24)
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar* L_25 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_25, ((int32_t)48), NULL);
		goto IL_0095;
	}

IL_008a:
	{
		Il2CppChar* L_26 = ___0_buf;
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_26, ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), L_29, NULL);
	}

IL_0095:
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		Il2CppChar* L_31 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_32 = ___2_nfi;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_32, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_31, L_33, NULL);
		Il2CppChar* L_34 = ___0_buf;
		int32_t L_35 = V_3;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_34, 0, L_35, NULL);
	}

IL_00af:
	{
		int32_t L_36 = __this->____ind_8;
		return L_36;
	}
}
// System.Int32 NumberFormatter::FormatPercent(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatPercent_m8BD850FDE244DBD61725411921E5B8C8AB5FB5C4 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_precision;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ___2_nfi;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NumberFormatInfo_get_PercentDecimalDigits_m49B53E03F294674AA1B20B77C56E10721BA8643D_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_3 = ___1_precision;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		___1_precision = G_B3_0;
		NumberFormatter_Multiply10_m5DEA97934150138B2E0C608B4D4F80FA0D035267(__this, 2, NULL);
		int32_t L_4 = ___1_precision;
		bool L_5;
		L_5 = NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57(__this, L_4, NULL);
		__this->____ind_8 = 0;
		bool L_6 = __this->____positive_13;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_7 = ___2_nfi;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0098;
		}
	}
	{
		Il2CppChar* L_9 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_10 = ___2_nfi;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_10, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_9, L_11, NULL);
		goto IL_0098;
	}

IL_0045:
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12 = ___2_nfi;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline(L_12, NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_007e;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_0060:
	{
		Il2CppChar* L_15 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_16 = ___2_nfi;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_16, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_15, L_17, NULL);
		goto IL_0098;
	}

IL_006f:
	{
		Il2CppChar* L_18 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_19 = ___2_nfi;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_19, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_18, L_20, NULL);
		goto IL_0098;
	}

IL_007e:
	{
		Il2CppChar* L_21 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_22 = ___2_nfi;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_22, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_21, L_23, NULL);
		Il2CppChar* L_24 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_25 = ___2_nfi;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_25, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_24, L_26, NULL);
	}

IL_0098:
	{
		Il2CppChar* L_27 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_28 = ___2_nfi;
		NullCheck(L_28);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29;
		L_29 = NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA(L_28, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_30 = ___2_nfi;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = NumberFormatInfo_get_PercentGroupSeparator_m1321ACEA2239006587D132AF6445E55D733BABF9_inline(L_30, NULL);
		NumberFormatter_AppendIntegerStringWithGroupSeparator_m3D6E5D77621DAC89B4D8703AF2909CB2FE995815(__this, L_27, L_29, L_31, NULL);
		int32_t L_32 = ___1_precision;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		Il2CppChar* L_33 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_34 = ___2_nfi;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = NumberFormatInfo_get_PercentDecimalSeparator_mB656F8F033BB700E4647AF14044C607F34634B80_inline(L_34, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_33, L_35, NULL);
		Il2CppChar* L_36 = ___0_buf;
		int32_t L_37 = ___1_precision;
		NumberFormatter_AppendDecimalString_m02C8B143F4491895EE2D7355329962E4E3AAB8CC(__this, L_36, L_37, NULL);
	}

IL_00c4:
	{
		bool L_38 = __this->____positive_13;
		if (!L_38)
		{
			goto IL_0103;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_39 = ___2_nfi;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline(L_39, NULL);
		V_0 = L_40;
		int32_t L_41 = V_0;
		if (!L_41)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)1)))
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0138;
	}

IL_00dc:
	{
		Il2CppChar* L_43 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_43, ((int32_t)32), NULL);
		Il2CppChar* L_44 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_45 = ___2_nfi;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_45, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_44, L_46, NULL);
		goto IL_0138;
	}

IL_00f4:
	{
		Il2CppChar* L_47 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_48 = ___2_nfi;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_48, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_47, L_49, NULL);
		goto IL_0138;
	}

IL_0103:
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_50 = ___2_nfi;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline(L_50, NULL);
		V_0 = L_51;
		int32_t L_52 = V_0;
		if (!L_52)
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) == ((int32_t)1)))
		{
			goto IL_012b;
		}
	}
	{
		goto IL_0138;
	}

IL_0113:
	{
		Il2CppChar* L_54 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_54, ((int32_t)32), NULL);
		Il2CppChar* L_55 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_56 = ___2_nfi;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_56, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_55, L_57, NULL);
		goto IL_0138;
	}

IL_012b:
	{
		Il2CppChar* L_58 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_59 = ___2_nfi;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_59, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_58, L_60, NULL);
	}

IL_0138:
	{
		int32_t L_61 = __this->____ind_8;
		return L_61;
	}
}
// System.Int32 NumberFormatter::FormatNumber(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatNumber_mDE5387F38BC7D851D25264ECCDA9A2A321105585 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_precision;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ___2_nfi;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_000d;
	}

IL_000c:
	{
		int32_t L_3 = ___1_precision;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		___1_precision = G_B3_0;
		__this->____ind_8 = 0;
		int32_t L_4 = ___1_precision;
		bool L_5;
		L_5 = NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57(__this, L_4, NULL);
		bool L_6 = __this->____positive_13;
		if (L_6)
		{
			goto IL_0071;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_7 = ___2_nfi;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline(L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_0041:
	{
		Il2CppChar* L_10 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_10, ((int32_t)40), NULL);
		goto IL_0071;
	}

IL_004c:
	{
		Il2CppChar* L_11 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12 = ___2_nfi;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_12, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_11, L_13, NULL);
		goto IL_0071;
	}

IL_005b:
	{
		Il2CppChar* L_14 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_15 = ___2_nfi;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_15, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_14, L_16, NULL);
		Il2CppChar* L_17 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_17, ((int32_t)32), NULL);
	}

IL_0071:
	{
		Il2CppChar* L_18 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_19 = ___2_nfi;
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20;
		L_20 = NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA(L_19, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_21 = ___2_nfi;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_21, NULL);
		NumberFormatter_AppendIntegerStringWithGroupSeparator_m3D6E5D77621DAC89B4D8703AF2909CB2FE995815(__this, L_18, L_20, L_22, NULL);
		int32_t L_23 = ___1_precision;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar* L_24 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_25 = ___2_nfi;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_25, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_24, L_26, NULL);
		Il2CppChar* L_27 = ___0_buf;
		int32_t L_28 = ___1_precision;
		NumberFormatter_AppendDecimalString_m02C8B143F4491895EE2D7355329962E4E3AAB8CC(__this, L_27, L_28, NULL);
	}

IL_009d:
	{
		bool L_29 = __this->____positive_13;
		if (L_29)
		{
			goto IL_00f8;
		}
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_30 = ___2_nfi;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline(L_30, NULL);
		V_0 = L_31;
		int32_t L_32 = V_0;
		switch (L_32)
		{
			case 0:
			{
				goto IL_00c8;
			}
			case 1:
			{
				goto IL_00f8;
			}
			case 2:
			{
				goto IL_00f8;
			}
			case 3:
			{
				goto IL_00d3;
			}
			case 4:
			{
				goto IL_00e2;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_00c8:
	{
		Il2CppChar* L_33 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_33, ((int32_t)41), NULL);
		goto IL_00f8;
	}

IL_00d3:
	{
		Il2CppChar* L_34 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_35 = ___2_nfi;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_35, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_34, L_36, NULL);
		goto IL_00f8;
	}

IL_00e2:
	{
		Il2CppChar* L_37 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_37, ((int32_t)32), NULL);
		Il2CppChar* L_38 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_39 = ___2_nfi;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_39, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_38, L_40, NULL);
	}

IL_00f8:
	{
		int32_t L_41 = __this->____ind_8;
		return L_41;
	}
}
// System.Int32 NumberFormatter::FormatExponential(System.Char*,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatExponential_m56B6FF6283DDD8C357EC458ABC1BBC6F5CC525E3 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_precision;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0007;
		}
	}
	{
		___1_precision = 6;
	}

IL_0007:
	{
		int32_t L_1 = ___1_precision;
		NumberFormatter_RoundPos_m69B323204871E43BE1D890ABB552CB697E375F40(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		Il2CppChar* L_2 = ___0_buf;
		int32_t L_3 = ___1_precision;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4 = ___2_nfi;
		int32_t L_5;
		L_5 = NumberFormatter_FormatExponential_mEFC4C1C0064B930CDD488FBAE51AA76831E9A113(__this, L_2, L_3, L_4, 3, NULL);
		return L_5;
	}
}
// System.Int32 NumberFormatter::FormatExponential(System.Char*,System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatExponential_mEFC4C1C0064B930CDD488FBAE51AA76831E9A113 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, int32_t ___3_expDigits, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____decPointPos_19;
		int32_t L_1 = __this->____digitsLen_17;
		V_0 = L_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		__this->____decPointPos_19 = 1;
		__this->____ind_8 = 0;
		bool L_2 = __this->____positive_13;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar* L_3 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4 = ___2_nfi;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_4, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_3, L_5, NULL);
	}

IL_0033:
	{
		Il2CppChar* L_6 = ___0_buf;
		int32_t L_7 = V_0;
		NumberFormatter_AppendOneDigit_m94A97CEE1E492A8A6E908EF48EF42872315F5B6E(__this, L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
		int32_t L_8 = ___1_precision;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		Il2CppChar* L_9 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_10 = ___2_nfi;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_10, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_9, L_11, NULL);
		Il2CppChar* L_12 = ___0_buf;
		int32_t L_13 = V_0;
		int32_t L_14 = ___1_precision;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->____decPointPos_19;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_12, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), 1)), ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
	}

IL_0062:
	{
		Il2CppChar* L_17 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_18 = ___2_nfi;
		int32_t L_19 = V_1;
		int32_t L_20 = ___3_expDigits;
		NumberFormatter_AppendExponent_m61CDD6ACCCA62085C37475ADF7C6992880F06CDF(__this, L_17, L_18, L_19, L_20, NULL);
		int32_t L_21 = __this->____ind_8;
		return L_21;
	}
}
// System.Int32 NumberFormatter::FormatCustom(System.Char*,System.String,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NumberFormatter_FormatCustom_mD687317A3F0BB0167B9199F5A429933A4F5C2ED3 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, String_t* ___1_format, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___2_nfi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* V_3 = NULL;
	StringBuilder_t* V_4 = NULL;
	StringBuilder_t* V_5 = NULL;
	StringBuilder_t* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	String_t* V_9 = NULL;
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B20_0 = NULL;
	StringBuilder_t* G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	StringBuilder_t* G_B21_1 = NULL;
	{
		bool L_0 = __this->____positive_13;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___1_format;
		bool L_2;
		L_2 = NumberFormatter_get_IsZero_m3DD77B91E6745652726343DA34CBE43F2660A03C(__this, NULL);
		CustomInfo_GetActiveSection_m73D69E72CABDFE5B9F823D5EDA98D940E0DC23CA(L_1, (&V_0), L_2, (&V_1), (&V_2), NULL);
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = __this->____positive_13;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		Il2CppChar* L_5 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = ___2_nfi;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = NumberFormatter_CharCopy_m4845A8D1BC716918C743DEE9E80022369CAEC4A6(L_5, L_7, NULL);
		return L_8;
	}

IL_0037:
	{
		bool L_9 = V_0;
		__this->____positive_13 = L_9;
		String_t* L_10 = ___1_format;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_13 = ___2_nfi;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_14;
		L_14 = CustomInfo_Parse_m85FF733C1A4A0F05FCE4FCE905D6BC8F820310E0(L_10, L_11, L_12, L_13, NULL);
		V_3 = L_14;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = L_15->___IntegerDigits_4;
		StringBuilder_t* L_17 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_17, ((int32_t)il2cpp_codegen_multiply(L_16, 2)), NULL);
		V_4 = L_17;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = L_18->___DecimalDigits_1;
		StringBuilder_t* L_20 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_20, ((int32_t)il2cpp_codegen_multiply(L_19, 2)), NULL);
		V_5 = L_20;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_21 = V_3;
		NullCheck(L_21);
		bool L_22 = L_21->___UseExponent_7;
		if (L_22)
		{
			goto IL_0071;
		}
	}
	{
		G_B7_0 = ((StringBuilder_t*)(NULL));
		goto IL_007e;
	}

IL_0071:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = L_23->___ExponentDigits_8;
		StringBuilder_t* L_25 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_25, ((int32_t)il2cpp_codegen_multiply(L_24, 2)), NULL);
		G_B7_0 = L_25;
	}

IL_007e:
	{
		V_6 = G_B7_0;
		V_7 = 0;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27 = L_26->___Percents_12;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29 = L_28->___Percents_12;
		NumberFormatter_Multiply10_m5DEA97934150138B2E0C608B4D4F80FA0D035267(__this, ((int32_t)il2cpp_codegen_multiply(2, L_29)), NULL);
	}

IL_009a:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = L_30->___Permilles_13;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = L_32->___Permilles_13;
		NumberFormatter_Multiply10_m5DEA97934150138B2E0C608B4D4F80FA0D035267(__this, ((int32_t)il2cpp_codegen_multiply(3, L_33)), NULL);
	}

IL_00b1:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___DividePlaces_11;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_36 = V_3;
		NullCheck(L_36);
		int32_t L_37 = L_36->___DividePlaces_11;
		NumberFormatter_Divide10_mB4B5EB42D58CCC036D40968F3B56439C50377721(__this, L_37, NULL);
	}

IL_00c6:
	{
		V_8 = (bool)1;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_38 = V_3;
		NullCheck(L_38);
		bool L_39 = L_38->___UseExponent_7;
		if (!L_39)
		{
			goto IL_013b;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = L_40->___DecimalDigits_1;
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_42 = V_3;
		NullCheck(L_42);
		int32_t L_43 = L_42->___IntegerDigits_4;
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}

IL_00e3:
	{
		bool L_44;
		L_44 = NumberFormatter_get_IsZero_m3DD77B91E6745652726343DA34CBE43F2660A03C(__this, NULL);
		if (L_44)
		{
			goto IL_011c;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->___DecimalDigits_1;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48 = L_47->___IntegerDigits_4;
		NumberFormatter_RoundPos_m69B323204871E43BE1D890ABB552CB697E375F40(__this, ((int32_t)il2cpp_codegen_add(L_46, L_48)), NULL);
		int32_t L_49 = V_7;
		int32_t L_50 = __this->____decPointPos_19;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_51 = V_3;
		NullCheck(L_51);
		int32_t L_52 = L_51->___IntegerDigits_4;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_49, ((int32_t)il2cpp_codegen_subtract(L_50, L_52))));
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_53 = V_3;
		NullCheck(L_53);
		int32_t L_54 = L_53->___IntegerDigits_4;
		__this->____decPointPos_19 = L_54;
	}

IL_011c:
	{
		int32_t L_55 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_55) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		StringBuilder_t* L_56 = V_6;
		int32_t L_57 = V_7;
		G_B19_0 = L_56;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			G_B20_0 = L_56;
			goto IL_0131;
		}
	}
	{
		int32_t L_58 = V_7;
		G_B21_0 = L_58;
		G_B21_1 = G_B19_0;
		goto IL_0134;
	}

IL_0131:
	{
		int32_t L_59 = V_7;
		G_B21_0 = ((-L_59));
		G_B21_1 = G_B20_0;
	}

IL_0134:
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatter_AppendNonNegativeNumber_m23B702633E88215B547CAC1FDDEAF321CF32CDEF(G_B21_1, G_B21_0, NULL);
		goto IL_0148;
	}

IL_013b:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_60 = V_3;
		NullCheck(L_60);
		int32_t L_61 = L_60->___DecimalDigits_1;
		bool L_62;
		L_62 = NumberFormatter_RoundDecimal_m57D73513B07909B690913E530E03B7D93F67FF57(__this, L_61, NULL);
	}

IL_0148:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_63 = V_3;
		NullCheck(L_63);
		int32_t L_64 = L_63->___IntegerDigits_4;
		if (L_64)
		{
			goto IL_0158;
		}
	}
	{
		bool L_65;
		L_65 = NumberFormatter_get_IsZeroInteger_mB248091B22087EEFE6259AE8624D05E7B03B5368(__this, NULL);
		if (L_65)
		{
			goto IL_0166;
		}
	}

IL_0158:
	{
		int32_t L_66;
		L_66 = NumberFormatter_get_IntegerDigits_mBD9BF5958AD533730D3310FFA6D8365BCE310FC5(__this, NULL);
		StringBuilder_t* L_67 = V_4;
		NumberFormatter_AppendIntegerString_m210D488FD5E935BC4662DCABAA1EEEBDF436BF8D(__this, L_66, L_67, NULL);
	}

IL_0166:
	{
		int32_t L_68;
		L_68 = NumberFormatter_get_DecimalDigits_mF566DE29047E1EA035B029409A6935C9B4188138(__this, NULL);
		StringBuilder_t* L_69 = V_5;
		NumberFormatter_AppendDecimalString_m350C0D44C10A4D3D79A7ACC7D5773C93FD6E1BFB(__this, L_68, L_69, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_70 = V_3;
		NullCheck(L_70);
		bool L_71 = L_70->___UseExponent_7;
		if (!L_71)
		{
			goto IL_0218;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_72 = V_3;
		NullCheck(L_72);
		int32_t L_73 = L_72->___DecimalDigits_1;
		if ((((int32_t)L_73) > ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_74 = V_3;
		NullCheck(L_74);
		int32_t L_75 = L_74->___IntegerDigits_4;
		if ((((int32_t)L_75) > ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		__this->____positive_13 = (bool)1;
	}

IL_0198:
	{
		StringBuilder_t* L_76 = V_4;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_76, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_78 = V_3;
		NullCheck(L_78);
		int32_t L_79 = L_78->___IntegerDigits_4;
		if ((((int32_t)L_77) >= ((int32_t)L_79)))
		{
			goto IL_01d0;
		}
	}
	{
		StringBuilder_t* L_80 = V_4;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_81 = V_3;
		NullCheck(L_81);
		int32_t L_82 = L_81->___IntegerDigits_4;
		StringBuilder_t* L_83 = V_4;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_83, NULL);
		NullCheck(L_80);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Insert_mE8DE929F4FD45D1C543FFFEF30963F80C083DC32(L_80, 0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, ((int32_t)il2cpp_codegen_subtract(L_82, L_84)), NULL);
		goto IL_01d0;
	}

IL_01c5:
	{
		StringBuilder_t* L_86 = V_6;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_86, 0, ((int32_t)48), NULL);
	}

IL_01d0:
	{
		StringBuilder_t* L_88 = V_6;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_88, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_90 = V_3;
		NullCheck(L_90);
		int32_t L_91 = L_90->___ExponentDigits_8;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_92 = V_3;
		NullCheck(L_92);
		int32_t L_93 = L_92->___ExponentTailSharpDigits_9;
		if ((((int32_t)L_89) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, L_93)))))
		{
			goto IL_01c5;
		}
	}
	{
		bool L_94 = V_8;
		if (!L_94)
		{
			goto IL_0203;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_95 = V_3;
		NullCheck(L_95);
		bool L_96 = L_95->___ExponentNegativeSignOnly_10;
		if (L_96)
		{
			goto IL_0203;
		}
	}
	{
		StringBuilder_t* L_97 = V_6;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_98 = ___2_nfi;
		NullCheck(L_98);
		String_t* L_99;
		L_99 = NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline(L_98, NULL);
		NullCheck(L_97);
		StringBuilder_t* L_100;
		L_100 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_97, 0, L_99, NULL);
		goto IL_0278;
	}

IL_0203:
	{
		bool L_101 = V_8;
		if (L_101)
		{
			goto IL_0278;
		}
	}
	{
		StringBuilder_t* L_102 = V_6;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_103 = ___2_nfi;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_103, NULL);
		NullCheck(L_102);
		StringBuilder_t* L_105;
		L_105 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_102, 0, L_104, NULL);
		goto IL_0278;
	}

IL_0218:
	{
		StringBuilder_t* L_106 = V_4;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_106, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_108 = V_3;
		NullCheck(L_108);
		int32_t L_109 = L_108->___IntegerDigits_4;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_110 = V_3;
		NullCheck(L_110);
		int32_t L_111 = L_110->___IntegerHeadSharpDigits_5;
		if ((((int32_t)L_107) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_109, L_111)))))
		{
			goto IL_0251;
		}
	}
	{
		StringBuilder_t* L_112 = V_4;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_113 = V_3;
		NullCheck(L_113);
		int32_t L_114 = L_113->___IntegerDigits_4;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_115 = V_3;
		NullCheck(L_115);
		int32_t L_116 = L_115->___IntegerHeadSharpDigits_5;
		StringBuilder_t* L_117 = V_4;
		NullCheck(L_117);
		int32_t L_118;
		L_118 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_117, NULL);
		NullCheck(L_112);
		StringBuilder_t* L_119;
		L_119 = StringBuilder_Insert_mE8DE929F4FD45D1C543FFFEF30963F80C083DC32(L_112, 0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_114, L_116)), L_118)), NULL);
	}

IL_0251:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_120 = V_3;
		NullCheck(L_120);
		int32_t L_121 = L_120->___IntegerDigits_4;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_122 = V_3;
		NullCheck(L_122);
		int32_t L_123 = L_122->___IntegerHeadSharpDigits_5;
		if ((!(((uint32_t)L_121) == ((uint32_t)L_123))))
		{
			goto IL_0278;
		}
	}
	{
		StringBuilder_t* L_124 = V_4;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		bool L_125;
		L_125 = NumberFormatter_IsZeroOnly_m1FD6683F424B45D285C1D57C15818F16A440CDB8(L_124, NULL);
		if (!L_125)
		{
			goto IL_0278;
		}
	}
	{
		StringBuilder_t* L_126 = V_4;
		StringBuilder_t* L_127 = V_4;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_127, NULL);
		NullCheck(L_126);
		StringBuilder_t* L_129;
		L_129 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_126, 0, L_128, NULL);
	}

IL_0278:
	{
		StringBuilder_t* L_130 = V_5;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		NumberFormatter_ZeroTrimEnd_mB40E04AC7D316E916F317E3206A8C1D183665439(L_130, (bool)1, NULL);
		goto IL_028c;
	}

IL_0282:
	{
		StringBuilder_t* L_131 = V_5;
		NullCheck(L_131);
		StringBuilder_t* L_132;
		L_132 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_131, ((int32_t)48), NULL);
	}

IL_028c:
	{
		StringBuilder_t* L_133 = V_5;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_133, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_135 = V_3;
		NullCheck(L_135);
		int32_t L_136 = L_135->___DecimalDigits_1;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_137 = V_3;
		NullCheck(L_137);
		int32_t L_138 = L_137->___DecimalTailSharpDigits_3;
		if ((((int32_t)L_134) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_136, L_138)))))
		{
			goto IL_0282;
		}
	}
	{
		StringBuilder_t* L_139 = V_5;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_139, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_141 = V_3;
		NullCheck(L_141);
		int32_t L_142 = L_141->___DecimalDigits_1;
		if ((((int32_t)L_140) <= ((int32_t)L_142)))
		{
			goto IL_02cd;
		}
	}
	{
		StringBuilder_t* L_143 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_144 = V_3;
		NullCheck(L_144);
		int32_t L_145 = L_144->___DecimalDigits_1;
		StringBuilder_t* L_146 = V_5;
		NullCheck(L_146);
		int32_t L_147;
		L_147 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_146, NULL);
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_148 = V_3;
		NullCheck(L_148);
		int32_t L_149 = L_148->___DecimalDigits_1;
		NullCheck(L_143);
		StringBuilder_t* L_150;
		L_150 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_143, L_145, ((int32_t)il2cpp_codegen_subtract(L_147, L_149)), NULL);
	}

IL_02cd:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_151 = V_3;
		String_t* L_152 = ___1_format;
		int32_t L_153 = V_1;
		int32_t L_154 = V_2;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_155 = ___2_nfi;
		bool L_156 = __this->____positive_13;
		StringBuilder_t* L_157 = V_4;
		StringBuilder_t* L_158 = V_5;
		StringBuilder_t* L_159 = V_6;
		NullCheck(L_151);
		StringBuilder_t* L_160;
		L_160 = CustomInfo_Format_mBA292FC9028760623E601C223E84A873990CF9FF(L_151, L_152, L_153, L_154, L_155, L_156, L_157, L_158, L_159, NULL);
		NullCheck(L_160);
		String_t* L_161;
		L_161 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_160);
		V_9 = L_161;
		int32_t L_162 = __this->____ind_8;
		Il2CppChar* L_163 = ___0_buf;
		String_t* L_164 = V_9;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_165;
		L_165 = NumberFormatter_CharCopy_m4845A8D1BC716918C743DEE9E80022369CAEC4A6(L_163, L_164, NULL);
		__this->____ind_8 = ((int32_t)il2cpp_codegen_add(L_162, L_165));
		int32_t L_166 = __this->____ind_8;
		return L_166;
	}
}
// System.Void NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_ZeroTrimEnd_mB40E04AC7D316E916F317E3206A8C1D183665439 (StringBuilder_t* ___0_sb, bool ___1_canEmpty, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	{
		V_0 = 0;
		StringBuilder_t* L_0 = ___0_sb;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0020;
	}

IL_000d:
	{
		StringBuilder_t* L_2 = ___0_sb;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_2, L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0020:
	{
		bool L_7 = ___1_canEmpty;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_8 = V_1;
		G_B6_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_0029:
	{
		int32_t L_9 = V_1;
		G_B6_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0030:
	{
		if (G_B6_0)
		{
			goto IL_000d;
		}
	}

IL_0032:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t* L_11 = ___0_sb;
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_12, NULL);
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), L_15, NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Boolean NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberFormatter_IsZeroOnly_m1FD6683F424B45D285C1D57C15818F16A440CDB8 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		StringBuilder_t* L_0 = ___0_sb;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Char_IsDigit_m8C1A38685D548E89FB8A05525B55261CC8D271B2(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_4 = ___0_sb;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_4, L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)48))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0023:
	{
		int32_t L_8 = V_0;
		StringBuilder_t* L_9 = ___0_sb;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendNonNegativeNumber_m23B702633E88215B547CAC1FDDEAF321CF32CDEF (StringBuilder_t* ___0_sb, int32_t ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_v;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberFormatter_AppendNonNegativeNumber_m23B702633E88215B547CAC1FDDEAF321CF32CDEF_RuntimeMethod_var)));
	}

IL_000a:
	{
		int32_t L_2 = ___1_v;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NumberFormatter_ScaleOrder_m0EA93115D1ABDA9205735318F653DAE53CA409FA(((int64_t)L_2), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_0014:
	{
		int32_t L_4 = ___1_v;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		int64_t L_6;
		L_6 = NumberFormatter_GetTenPowerOf_m6A45B8DBEC9FAF452E8C570C67B3CA8CAE595964(L_5, NULL);
		V_1 = ((int32_t)(L_4/((int32_t)L_6)));
		StringBuilder_t* L_7 = ___0_sb;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|L_8))), NULL);
		int32_t L_10 = ___1_v;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int64_t L_13;
		L_13 = NumberFormatter_GetTenPowerOf_m6A45B8DBEC9FAF452E8C570C67B3CA8CAE595964(L_12, NULL);
		int32_t L_14 = V_1;
		___1_v = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)L_13), L_14))));
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendIntegerString_m210D488FD5E935BC4662DCABAA1EEEBDF436BF8D (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_minLength, StringBuilder_t* ___1_sb, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____decPointPos_19;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t* L_1 = ___1_sb;
		int32_t L_2 = ___0_minLength;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_1, ((int32_t)48), L_2, NULL);
		return;
	}

IL_0014:
	{
		int32_t L_4 = __this->____decPointPos_19;
		int32_t L_5 = ___0_minLength;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t* L_6 = ___1_sb;
		int32_t L_7 = ___0_minLength;
		int32_t L_8 = __this->____decPointPos_19;
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_6, ((int32_t)48), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), NULL);
	}

IL_002e:
	{
		int32_t L_10 = __this->____digitsLen_17;
		int32_t L_11 = __this->____decPointPos_19;
		int32_t L_12 = __this->____digitsLen_17;
		StringBuilder_t* L_13 = ___1_sb;
		NumberFormatter_AppendDigits_m0F05642E6E8980799871AAC524CF19CB57ED1AEE(__this, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), L_12, L_13, NULL);
		return;
	}
}
// System.Void NumberFormatter::AppendIntegerString(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendIntegerString_m3ED3F188BDE1B60D1AAA86C4069117F4AEF2D093 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_minLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____decPointPos_19;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar* L_1 = ___0_buf;
		int32_t L_2 = ___1_minLength;
		NumberFormatter_Append_m135AE7274D14DBA6C466ED55FAA4EE02A1EA0B33(__this, L_1, ((int32_t)48), L_2, NULL);
		return;
	}

IL_0014:
	{
		int32_t L_3 = __this->____decPointPos_19;
		int32_t L_4 = ___1_minLength;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		Il2CppChar* L_5 = ___0_buf;
		int32_t L_6 = ___1_minLength;
		int32_t L_7 = __this->____decPointPos_19;
		NumberFormatter_Append_m135AE7274D14DBA6C466ED55FAA4EE02A1EA0B33(__this, L_5, ((int32_t)48), ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
	}

IL_002e:
	{
		Il2CppChar* L_8 = ___0_buf;
		int32_t L_9 = __this->____digitsLen_17;
		int32_t L_10 = __this->____decPointPos_19;
		int32_t L_11 = __this->____digitsLen_17;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), L_11, NULL);
		return;
	}
}
// System.Void NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Char*,System.Int32[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendIntegerStringWithGroupSeparator_m3D6E5D77621DAC89B4D8703AF2909CB2FE995815 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_groups, String_t* ___2_groupSeparator, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B19_0 = 0;
	{
		bool L_0;
		L_0 = NumberFormatter_get_IsZeroInteger_mB248091B22087EEFE6259AE8624D05E7B03B5368(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Il2CppChar* L_1 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_1, ((int32_t)48), NULL);
		return;
	}

IL_0012:
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_002f;
	}

IL_001a:
	{
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_groups;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, L_6));
		int32_t L_7 = V_0;
		int32_t L_8 = __this->____decPointPos_19;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_9 = V_2;
		V_1 = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002f:
	{
		int32_t L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_groups;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001a;
		}
	}

IL_0035:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___1_groups;
		NullCheck(L_13);
		if (!(((RuntimeArray*)L_13)->max_length))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___1_groups;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		int32_t L_19 = __this->____decPointPos_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) > ((int32_t)L_20)))
		{
			goto IL_0054;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_005c;
	}

IL_0054:
	{
		int32_t L_21 = __this->____decPointPos_19;
		int32_t L_22 = V_0;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_005c:
	{
		V_5 = G_B11_0;
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_0068;
	}

IL_0064:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_0068:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___1_groups;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if (!L_29)
		{
			goto IL_0064;
		}
	}

IL_0071:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___1_groups;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		G_B19_0 = L_34;
		goto IL_007d;
	}

IL_007b:
	{
		int32_t L_35 = V_5;
		G_B19_0 = L_35;
	}

IL_007d:
	{
		V_4 = G_B19_0;
	}

IL_007f:
	{
		int32_t L_36 = V_5;
		if (L_36)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_37 = V_4;
		V_3 = L_37;
		goto IL_00a2;
	}

IL_0088:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)(L_39/L_40))));
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		V_3 = ((int32_t)(L_41%L_42));
		int32_t L_43 = V_3;
		if (L_43)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_44 = V_4;
		V_3 = L_44;
		goto IL_00a2;
	}

IL_009e:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00a2:
	{
		V_6 = 0;
	}

IL_00a5:
	{
		int32_t L_46 = __this->____decPointPos_19;
		int32_t L_47 = V_6;
		int32_t L_48 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_46, L_47))) <= ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_49 = V_3;
		if (L_49)
		{
			goto IL_00d2;
		}
	}

IL_00b4:
	{
		Il2CppChar* L_50 = ___0_buf;
		int32_t L_51 = __this->____digitsLen_17;
		int32_t L_52 = __this->____decPointPos_19;
		int32_t L_53 = __this->____digitsLen_17;
		int32_t L_54 = V_6;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_50, ((int32_t)il2cpp_codegen_subtract(L_51, L_52)), ((int32_t)il2cpp_codegen_subtract(L_53, L_54)), NULL);
		return;
	}

IL_00d2:
	{
		Il2CppChar* L_55 = ___0_buf;
		int32_t L_56 = __this->____digitsLen_17;
		int32_t L_57 = V_6;
		int32_t L_58 = V_3;
		int32_t L_59 = __this->____digitsLen_17;
		int32_t L_60 = V_6;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_55, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_56, L_57)), L_58)), ((int32_t)il2cpp_codegen_subtract(L_59, L_60)), NULL);
		int32_t L_61 = V_6;
		int32_t L_62 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		Il2CppChar* L_63 = ___0_buf;
		String_t* L_64 = ___2_groupSeparator;
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_63, L_64, NULL);
		int32_t L_65 = V_1;
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		V_1 = L_66;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = ___1_groups;
		NullCheck(L_67);
		if ((((int32_t)L_66) >= ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_68 = V_1;
		if ((((int32_t)L_68) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ___1_groups;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = L_72;
	}

IL_010e:
	{
		int32_t L_73 = V_4;
		V_3 = L_73;
		goto IL_00a5;
	}

IL_0113:
	{
		Il2CppChar* L_74 = ___0_buf;
		int32_t L_75 = __this->____digitsLen_17;
		int32_t L_76 = __this->____decPointPos_19;
		int32_t L_77 = __this->____digitsLen_17;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_74, ((int32_t)il2cpp_codegen_subtract(L_75, L_76)), L_77, NULL);
		return;
	}
}
// System.Void NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDecimalString_m350C0D44C10A4D3D79A7ACC7D5773C93FD6E1BFB (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_precision, StringBuilder_t* ___1_sb, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____digitsLen_17;
		int32_t L_1 = ___0_precision;
		int32_t L_2 = __this->____decPointPos_19;
		int32_t L_3 = __this->____digitsLen_17;
		int32_t L_4 = __this->____decPointPos_19;
		StringBuilder_t* L_5 = ___1_sb;
		NumberFormatter_AppendDigits_m0F05642E6E8980799871AAC524CF19CB57ED1AEE(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), L_2)), ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), L_5, NULL);
		return;
	}
}
// System.Void NumberFormatter::AppendDecimalString(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDecimalString_m02C8B143F4491895EE2D7355329962E4E3AAB8CC (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_precision, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_buf;
		int32_t L_1 = __this->____digitsLen_17;
		int32_t L_2 = ___1_precision;
		int32_t L_3 = __this->____decPointPos_19;
		int32_t L_4 = __this->____digitsLen_17;
		int32_t L_5 = __this->____decPointPos_19;
		NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24(__this, L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), L_3)), ((int32_t)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		return;
	}
}
// System.Void NumberFormatter::AppendExponent(System.Char*,System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendExponent_m61CDD6ACCCA62085C37475ADF7C6992880F06CDF (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___1_nfi, int32_t ___2_exponent, int32_t ___3_minDigits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		bool L_0 = __this->____specifierIsUpper_12;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Il2CppChar L_1 = __this->____specifier_14;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)82)))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		Il2CppChar* L_2 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_2, ((int32_t)69), NULL);
		goto IL_0026;
	}

IL_001d:
	{
		Il2CppChar* L_3 = ___0_buf;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_3, ((int32_t)101), NULL);
	}

IL_0026:
	{
		int32_t L_4 = ___2_exponent;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar* L_5 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = ___1_nfi;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline(L_6, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_5, L_7, NULL);
		goto IL_004a;
	}

IL_0039:
	{
		Il2CppChar* L_8 = ___0_buf;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ___1_nfi;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_9, NULL);
		NumberFormatter_Append_mD01ACDEAE570C1214503C3C55B36738209BC88A3(__this, L_8, L_10, NULL);
		int32_t L_11 = ___2_exponent;
		___2_exponent = ((-L_11));
	}

IL_004a:
	{
		int32_t L_12 = ___2_exponent;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		Il2CppChar* L_13 = ___0_buf;
		int32_t L_14 = ___3_minDigits;
		NumberFormatter_Append_m135AE7274D14DBA6C466ED55FAA4EE02A1EA0B33(__this, L_13, ((int32_t)48), L_14, NULL);
		return;
	}

IL_0059:
	{
		int32_t L_15 = ___2_exponent;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0078;
		}
	}
	{
		Il2CppChar* L_16 = ___0_buf;
		int32_t L_17 = ___3_minDigits;
		NumberFormatter_Append_m135AE7274D14DBA6C466ED55FAA4EE02A1EA0B33(__this, L_16, ((int32_t)48), ((int32_t)il2cpp_codegen_subtract(L_17, 1)), NULL);
		Il2CppChar* L_18 = ___0_buf;
		int32_t L_19 = ___2_exponent;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_18, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|L_19))), NULL);
		return;
	}

IL_0078:
	{
		int32_t L_20 = ___2_exponent;
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		uint32_t L_21;
		L_21 = NumberFormatter_FastToDecHex_m3BFA52B0FC8D8ED1ABC5AF271884ACF063F084EE(L_20, NULL);
		V_0 = L_21;
		int32_t L_22 = ___2_exponent;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_23 = ___3_minDigits;
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_0097;
		}
	}

IL_0089:
	{
		Il2CppChar* L_24 = ___0_buf;
		uint32_t L_25 = V_0;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_24, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)((uint32_t)L_25>>8))))), NULL);
	}

IL_0097:
	{
		Il2CppChar* L_26 = ___0_buf;
		uint32_t L_27 = V_0;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_26, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(((int32_t)((uint32_t)L_27>>4))&((int32_t)15)))))), NULL);
		Il2CppChar* L_28 = ___0_buf;
		uint32_t L_29 = V_0;
		NumberFormatter_Append_mB8E8D59BE7D884A53FFB4B7A53B935CACC0910E7(__this, L_28, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)((int32_t)L_29&((int32_t)15)))))), NULL);
		return;
	}
}
// System.Void NumberFormatter::AppendOneDigit(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendOneDigit_m94A97CEE1E492A8A6E908EF48EF42872315F5B6E (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_start, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_start;
		int32_t L_1 = __this->____offset_18;
		___1_start = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_start;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
		goto IL_004b;
	}

IL_0012:
	{
		int32_t L_3 = ___1_start;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_4 = __this->____val1_20;
		V_0 = L_4;
		goto IL_004b;
	}

IL_001f:
	{
		int32_t L_5 = ___1_start;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)16))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_6 = __this->____val2_21;
		V_0 = L_6;
		goto IL_004b;
	}

IL_002d:
	{
		int32_t L_7 = ___1_start;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)24))))
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_8 = __this->____val3_22;
		V_0 = L_8;
		goto IL_004b;
	}

IL_003b:
	{
		int32_t L_9 = ___1_start;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_10 = __this->____val4_23;
		V_0 = L_10;
		goto IL_004b;
	}

IL_0049:
	{
		V_0 = 0;
	}

IL_004b:
	{
		uint32_t L_11 = V_0;
		int32_t L_12 = ___1_start;
		V_0 = ((int32_t)((uint32_t)L_11>>((int32_t)(((int32_t)(((int32_t)(L_12&7))<<2))&((int32_t)31)))));
		Il2CppChar* L_13 = ___0_buf;
		int32_t L_14 = __this->____ind_8;
		V_1 = L_14;
		int32_t L_15 = V_1;
		__this->____ind_8 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)((int32_t)L_17&((int32_t)15))))));
		return;
	}
}
// System.Void NumberFormatter::FastAppendDigits(System.Char*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_FastAppendDigits_mE1372A8BFA2E5E8C21A10C3EB3F0D8ED6E90E7BC (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_val, bool ___2_force, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->____ind_8;
		V_0 = L_0;
		Il2CppChar* L_1 = ___0_buf;
		V_2 = L_1;
		bool L_2 = ___2_force;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = ___1_val;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)100))))
		{
			goto IL_0063;
		}
	}

IL_0011:
	{
		int32_t L_4 = ___1_val;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)5243)))>>((int32_t)19)));
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		bool L_9 = ___2_force;
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_10 = ___1_val;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0041;
		}
	}

IL_002f:
	{
		Il2CppChar* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_14>>4)))));
	}

IL_0041:
	{
		Il2CppChar* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_18&((int32_t)15))))));
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0;
		int32_t L_20 = ___1_val;
		int32_t L_21 = V_3;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)100)))));
		int32_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		goto IL_006b;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_StaticFields*)il2cpp_codegen_static_fields_for(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___DecHexDigits_0;
		int32_t L_25 = ___1_val;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_1 = L_27;
	}

IL_006b:
	{
		bool L_28 = ___2_force;
		if (L_28)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_29 = ___1_val;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)10))))
		{
			goto IL_0085;
		}
	}

IL_0073:
	{
		Il2CppChar* L_30 = V_2;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_33>>4)))));
	}

IL_0085:
	{
		Il2CppChar* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_37&((int32_t)15))))));
		int32_t L_38 = V_0;
		__this->____ind_8 = L_38;
		return;
	}
}
// System.Void NumberFormatter::AppendDigits(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDigits_mACA1CD16A6F1564A2E78DDE3E9D5DAD6DF245F24 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, Il2CppChar* ___0_buf, int32_t ___1_start, int32_t ___2_end, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___1_start;
		int32_t L_1 = ___2_end;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		int32_t L_2 = __this->____ind_8;
		int32_t L_3 = ___2_end;
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, L_4))));
		int32_t L_5 = V_0;
		__this->____ind_8 = L_5;
		int32_t L_6 = ___2_end;
		int32_t L_7 = __this->____offset_18;
		___2_end = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int32_t L_8 = ___1_start;
		int32_t L_9 = __this->____offset_18;
		___1_start = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = ___1_start;
		int32_t L_11 = ___1_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, 8)), ((int32_t)(L_11&7))));
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)8))))
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_13 = __this->____val1_20;
		V_2 = L_13;
		goto IL_006c;
	}

IL_0040:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_15 = __this->____val2_21;
		V_2 = L_15;
		goto IL_006c;
	}

IL_004e:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_17 = __this->____val3_22;
		V_2 = L_17;
		goto IL_006c;
	}

IL_005c:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_19 = __this->____val4_23;
		V_2 = L_19;
		goto IL_006c;
	}

IL_006a:
	{
		V_2 = 0;
	}

IL_006c:
	{
		uint32_t L_20 = V_2;
		int32_t L_21 = ___1_start;
		V_2 = ((int32_t)((uint32_t)L_20>>((int32_t)(((int32_t)(((int32_t)(L_21&7))<<2))&((int32_t)31)))));
		int32_t L_22 = V_1;
		int32_t L_23 = ___2_end;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_24 = ___2_end;
		V_1 = L_24;
	}

IL_007d:
	{
		Il2CppChar* L_25 = ___0_buf;
		int32_t L_26 = V_0;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		V_0 = L_27;
		uint32_t L_28 = V_2;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)((int32_t)L_28&((int32_t)15))))));
		int32_t L_29 = V_1;
		int32_t L_30 = ___1_start;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		int32_t L_31 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract(L_31, 1)))
		{
			case 0:
			{
				goto IL_0162;
			}
			case 1:
			{
				goto IL_014b;
			}
			case 2:
			{
				goto IL_0134;
			}
			case 3:
			{
				goto IL_011d;
			}
			case 4:
			{
				goto IL_0106;
			}
			case 5:
			{
				goto IL_00ef;
			}
			case 6:
			{
				goto IL_00d8;
			}
			case 7:
			{
				goto IL_00c1;
			}
		}
	}
	{
		goto IL_0167;
	}

IL_00c1:
	{
		Il2CppChar* L_32 = ___0_buf;
		int32_t L_33 = V_0;
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		V_0 = L_34;
		uint32_t L_35 = V_2;
		int32_t L_36 = ((int32_t)((uint32_t)L_35>>4));
		V_2 = L_36;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_36&((int32_t)15))))));
	}

IL_00d8:
	{
		Il2CppChar* L_37 = ___0_buf;
		int32_t L_38 = V_0;
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		V_0 = L_39;
		uint32_t L_40 = V_2;
		int32_t L_41 = ((int32_t)((uint32_t)L_40>>4));
		V_2 = L_41;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_41&((int32_t)15))))));
	}

IL_00ef:
	{
		Il2CppChar* L_42 = ___0_buf;
		int32_t L_43 = V_0;
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		V_0 = L_44;
		uint32_t L_45 = V_2;
		int32_t L_46 = ((int32_t)((uint32_t)L_45>>4));
		V_2 = L_46;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_46&((int32_t)15))))));
	}

IL_0106:
	{
		Il2CppChar* L_47 = ___0_buf;
		int32_t L_48 = V_0;
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		V_0 = L_49;
		uint32_t L_50 = V_2;
		int32_t L_51 = ((int32_t)((uint32_t)L_50>>4));
		V_2 = L_51;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_47, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_51&((int32_t)15))))));
	}

IL_011d:
	{
		Il2CppChar* L_52 = ___0_buf;
		int32_t L_53 = V_0;
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
		V_0 = L_54;
		uint32_t L_55 = V_2;
		int32_t L_56 = ((int32_t)((uint32_t)L_55>>4));
		V_2 = L_56;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_54), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_56&((int32_t)15))))));
	}

IL_0134:
	{
		Il2CppChar* L_57 = ___0_buf;
		int32_t L_58 = V_0;
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		V_0 = L_59;
		uint32_t L_60 = V_2;
		int32_t L_61 = ((int32_t)((uint32_t)L_60>>4));
		V_2 = L_61;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_59), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_61&((int32_t)15))))));
	}

IL_014b:
	{
		Il2CppChar* L_62 = ___0_buf;
		int32_t L_63 = V_0;
		int32_t L_64 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		V_0 = L_64;
		uint32_t L_65 = V_2;
		int32_t L_66 = ((int32_t)((uint32_t)L_65>>4));
		V_2 = L_66;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_62, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_66&((int32_t)15))))));
	}

IL_0162:
	{
		int32_t L_67 = V_1;
		int32_t L_68 = ___2_end;
		if ((!(((uint32_t)L_67) == ((uint32_t)L_68))))
		{
			goto IL_0167;
		}
	}
	{
		return;
	}

IL_0167:
	{
		int32_t L_69 = V_1;
		___1_start = L_69;
		int32_t L_70 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_70, 8));
		goto IL_0033;
	}
}
// System.Void NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_AppendDigits_m0F05642E6E8980799871AAC524CF19CB57ED1AEE (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_start, int32_t ___1_end, StringBuilder_t* ___2_sb, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = ___1_end;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		StringBuilder_t* L_2 = ___2_sb;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_2, NULL);
		int32_t L_4 = ___1_end;
		int32_t L_5 = ___0_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, L_5))));
		StringBuilder_t* L_6 = ___2_sb;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_6, L_7, NULL);
		int32_t L_8 = ___1_end;
		int32_t L_9 = __this->____offset_18;
		___1_end = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = ___0_start;
		int32_t L_11 = __this->____offset_18;
		___0_start = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = ___0_start;
		int32_t L_13 = ___0_start;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, 8)), ((int32_t)(L_13&7))));
	}

IL_0033:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_15 = __this->____val1_20;
		V_2 = L_15;
		goto IL_006c;
	}

IL_0040:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_17 = __this->____val2_21;
		V_2 = L_17;
		goto IL_006c;
	}

IL_004e:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_19 = __this->____val3_22;
		V_2 = L_19;
		goto IL_006c;
	}

IL_005c:
	{
		int32_t L_20 = V_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_006a;
		}
	}
	{
		uint32_t L_21 = __this->____val4_23;
		V_2 = L_21;
		goto IL_006c;
	}

IL_006a:
	{
		V_2 = 0;
	}

IL_006c:
	{
		uint32_t L_22 = V_2;
		int32_t L_23 = ___0_start;
		V_2 = ((int32_t)((uint32_t)L_22>>((int32_t)(((int32_t)(((int32_t)(L_23&7))<<2))&((int32_t)31)))));
		int32_t L_24 = V_1;
		int32_t L_25 = ___1_end;
		if ((((int32_t)L_24) <= ((int32_t)L_25)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_26 = ___1_end;
		V_1 = L_26;
	}

IL_007d:
	{
		StringBuilder_t* L_27 = ___2_sb;
		int32_t L_28 = V_0;
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		V_0 = L_29;
		uint32_t L_30 = V_2;
		NullCheck(L_27);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_27, L_29, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)((int32_t)L_30&((int32_t)15)))))), NULL);
		int32_t L_31 = V_1;
		int32_t L_32 = ___0_start;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
		int32_t L_33 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract(L_33, 1)))
		{
			case 0:
			{
				goto IL_0162;
			}
			case 1:
			{
				goto IL_014b;
			}
			case 2:
			{
				goto IL_0134;
			}
			case 3:
			{
				goto IL_011d;
			}
			case 4:
			{
				goto IL_0106;
			}
			case 5:
			{
				goto IL_00ef;
			}
			case 6:
			{
				goto IL_00d8;
			}
			case 7:
			{
				goto IL_00c1;
			}
		}
	}
	{
		goto IL_0167;
	}

IL_00c1:
	{
		StringBuilder_t* L_34 = ___2_sb;
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		V_0 = L_36;
		uint32_t L_37 = V_2;
		int32_t L_38 = ((int32_t)((uint32_t)L_37>>4));
		V_2 = L_38;
		NullCheck(L_34);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_34, L_36, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_38&((int32_t)15)))))), NULL);
	}

IL_00d8:
	{
		StringBuilder_t* L_39 = ___2_sb;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		V_0 = L_41;
		uint32_t L_42 = V_2;
		int32_t L_43 = ((int32_t)((uint32_t)L_42>>4));
		V_2 = L_43;
		NullCheck(L_39);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_39, L_41, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_43&((int32_t)15)))))), NULL);
	}

IL_00ef:
	{
		StringBuilder_t* L_44 = ___2_sb;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		V_0 = L_46;
		uint32_t L_47 = V_2;
		int32_t L_48 = ((int32_t)((uint32_t)L_47>>4));
		V_2 = L_48;
		NullCheck(L_44);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_44, L_46, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_48&((int32_t)15)))))), NULL);
	}

IL_0106:
	{
		StringBuilder_t* L_49 = ___2_sb;
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		V_0 = L_51;
		uint32_t L_52 = V_2;
		int32_t L_53 = ((int32_t)((uint32_t)L_52>>4));
		V_2 = L_53;
		NullCheck(L_49);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_49, L_51, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_53&((int32_t)15)))))), NULL);
	}

IL_011d:
	{
		StringBuilder_t* L_54 = ___2_sb;
		int32_t L_55 = V_0;
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		V_0 = L_56;
		uint32_t L_57 = V_2;
		int32_t L_58 = ((int32_t)((uint32_t)L_57>>4));
		V_2 = L_58;
		NullCheck(L_54);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_54, L_56, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_58&((int32_t)15)))))), NULL);
	}

IL_0134:
	{
		StringBuilder_t* L_59 = ___2_sb;
		int32_t L_60 = V_0;
		int32_t L_61 = ((int32_t)il2cpp_codegen_subtract(L_60, 1));
		V_0 = L_61;
		uint32_t L_62 = V_2;
		int32_t L_63 = ((int32_t)((uint32_t)L_62>>4));
		V_2 = L_63;
		NullCheck(L_59);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_59, L_61, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_63&((int32_t)15)))))), NULL);
	}

IL_014b:
	{
		StringBuilder_t* L_64 = ___2_sb;
		int32_t L_65 = V_0;
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		V_0 = L_66;
		uint32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)((uint32_t)L_67>>4));
		V_2 = L_68;
		NullCheck(L_64);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_64, L_66, ((int32_t)(uint16_t)((int32_t)(((int32_t)48)|((int32_t)(L_68&((int32_t)15)))))), NULL);
	}

IL_0162:
	{
		int32_t L_69 = V_1;
		int32_t L_70 = ___1_end;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0167;
		}
	}
	{
		return;
	}

IL_0167:
	{
		int32_t L_71 = V_1;
		___0_start = L_71;
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_72, 8));
		goto IL_0033;
	}
}
// System.Void NumberFormatter::Multiply10(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Multiply10_m5DEA97934150138B2E0C608B4D4F80FA0D035267 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = __this->____digitsLen_17;
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = __this->____decPointPos_19;
		int32_t L_3 = ___0_count;
		__this->____decPointPos_19 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		return;
	}
}
// System.Void NumberFormatter::Divide10(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatter_Divide10_mB4B5EB42D58CCC036D40968F3B56439C50377721 (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = __this->____digitsLen_17;
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = __this->____decPointPos_19;
		int32_t L_3 = ___0_count;
		__this->____decPointPos_19 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
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
// System.Void NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomInfo_GetActiveSection_m73D69E72CABDFE5B9F823D5EDA98D940E0DC23CA (String_t* ___0_format, bool* ___1_positive, bool ___2_zero, int32_t* ___3_offset, int32_t* ___4_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_0077;
	}

IL_0012:
	{
		String_t* L_1 = ___0_format;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_5 = L_3;
		Il2CppChar L_4 = V_5;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_8 = V_5;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_003c;
		}
	}

IL_0030:
	{
		Il2CppChar L_9 = V_3;
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_10 = V_5;
		V_3 = L_10;
		goto IL_0071;
	}

IL_0038:
	{
		V_3 = 0;
		goto IL_0071;
	}

IL_003c:
	{
		Il2CppChar L_11 = V_3;
		if (L_11)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12 = ___0_format;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_16 = ___0_format;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)92))))
		{
			goto IL_0071;
		}
	}

IL_005d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (int32_t)((int32_t)il2cpp_codegen_subtract(L_22, L_23)));
		int32_t L_24 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)3)))
		{
			goto IL_0081;
		}
	}

IL_0071:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0077:
	{
		int32_t L_27 = V_4;
		String_t* L_28 = ___0_format;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0012;
		}
	}

IL_0081:
	{
		int32_t L_30 = V_1;
		if (L_30)
		{
			goto IL_0091;
		}
	}
	{
		int32_t* L_31 = ___3_offset;
		*((int32_t*)L_31) = (int32_t)0;
		int32_t* L_32 = ___4_length;
		String_t* L_33 = ___0_format;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_33, NULL);
		*((int32_t*)L_32) = (int32_t)L_34;
		return;
	}

IL_0091:
	{
		int32_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00d3;
		}
	}
	{
		bool* L_36 = ___1_positive;
		int32_t L_37 = *((uint8_t*)L_36);
		bool L_38 = ___2_zero;
		if (!((int32_t)(L_37|(int32_t)L_38)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t* L_39 = ___3_offset;
		*((int32_t*)L_39) = (int32_t)0;
		int32_t* L_40 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = 0;
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		*((int32_t*)L_40) = (int32_t)L_43;
		return;
	}

IL_00a5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = 0;
		int32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		String_t* L_47 = ___0_format;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_46, 1))) >= ((int32_t)L_48)))
		{
			goto IL_00c9;
		}
	}
	{
		bool* L_49 = ___1_positive;
		*((int8_t*)L_49) = (int8_t)1;
		int32_t* L_50 = ___3_offset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = 0;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		*((int32_t*)L_50) = (int32_t)((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t* L_54 = ___4_length;
		String_t* L_55 = ___0_format;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_55, NULL);
		int32_t* L_57 = ___3_offset;
		int32_t L_58 = *((int32_t*)L_57);
		*((int32_t*)L_54) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_56, L_58));
		return;
	}

IL_00c9:
	{
		int32_t* L_59 = ___3_offset;
		*((int32_t*)L_59) = (int32_t)0;
		int32_t* L_60 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 0;
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		*((int32_t*)L_60) = (int32_t)L_63;
		return;
	}

IL_00d3:
	{
		int32_t L_64 = V_1;
		if ((!(((uint32_t)L_64) == ((uint32_t)2))))
		{
			goto IL_0121;
		}
	}
	{
		bool L_65 = ___2_zero;
		if (!L_65)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t* L_66 = ___3_offset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = 0;
		int32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = 1;
		int32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_69, L_72)), 2));
		int32_t* L_73 = ___4_length;
		String_t* L_74 = ___0_format;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_74, NULL);
		int32_t* L_76 = ___3_offset;
		int32_t L_77 = *((int32_t*)L_76);
		*((int32_t*)L_73) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_75, L_77));
		return;
	}

IL_00f2:
	{
		bool* L_78 = ___1_positive;
		int32_t L_79 = *((uint8_t*)L_78);
		if (!L_79)
		{
			goto IL_0100;
		}
	}
	{
		int32_t* L_80 = ___3_offset;
		*((int32_t*)L_80) = (int32_t)0;
		int32_t* L_81 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_0;
		NullCheck(L_82);
		int32_t L_83 = 0;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		*((int32_t*)L_81) = (int32_t)L_84;
		return;
	}

IL_0100:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 1;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		if ((((int32_t)L_87) <= ((int32_t)0)))
		{
			goto IL_0117;
		}
	}
	{
		bool* L_88 = ___1_positive;
		*((int8_t*)L_88) = (int8_t)1;
		int32_t* L_89 = ___3_offset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_0;
		NullCheck(L_90);
		int32_t L_91 = 0;
		int32_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		*((int32_t*)L_89) = (int32_t)((int32_t)il2cpp_codegen_add(L_92, 1));
		int32_t* L_93 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = V_0;
		NullCheck(L_94);
		int32_t L_95 = 1;
		int32_t L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		*((int32_t*)L_93) = (int32_t)L_96;
		return;
	}

IL_0117:
	{
		int32_t* L_97 = ___3_offset;
		*((int32_t*)L_97) = (int32_t)0;
		int32_t* L_98 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_0;
		NullCheck(L_99);
		int32_t L_100 = 0;
		int32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		*((int32_t*)L_98) = (int32_t)L_101;
		return;
	}

IL_0121:
	{
		int32_t L_102 = V_1;
		if ((!(((uint32_t)L_102) == ((uint32_t)3))))
		{
			goto IL_0169;
		}
	}
	{
		bool L_103 = ___2_zero;
		if (!L_103)
		{
			goto IL_013a;
		}
	}
	{
		int32_t* L_104 = ___3_offset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = 0;
		int32_t L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = V_0;
		NullCheck(L_108);
		int32_t L_109 = 1;
		int32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		*((int32_t*)L_104) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_107, L_110)), 2));
		int32_t* L_111 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_0;
		NullCheck(L_112);
		int32_t L_113 = 2;
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		*((int32_t*)L_111) = (int32_t)L_114;
		return;
	}

IL_013a:
	{
		bool* L_115 = ___1_positive;
		int32_t L_116 = *((uint8_t*)L_115);
		if (!L_116)
		{
			goto IL_0148;
		}
	}
	{
		int32_t* L_117 = ___3_offset;
		*((int32_t*)L_117) = (int32_t)0;
		int32_t* L_118 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = V_0;
		NullCheck(L_119);
		int32_t L_120 = 0;
		int32_t L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		*((int32_t*)L_118) = (int32_t)L_121;
		return;
	}

IL_0148:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = 1;
		int32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		if ((((int32_t)L_124) <= ((int32_t)0)))
		{
			goto IL_015f;
		}
	}
	{
		bool* L_125 = ___1_positive;
		*((int8_t*)L_125) = (int8_t)1;
		int32_t* L_126 = ___3_offset;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_0;
		NullCheck(L_127);
		int32_t L_128 = 0;
		int32_t L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		*((int32_t*)L_126) = (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1));
		int32_t* L_130 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = V_0;
		NullCheck(L_131);
		int32_t L_132 = 1;
		int32_t L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		*((int32_t*)L_130) = (int32_t)L_133;
		return;
	}

IL_015f:
	{
		int32_t* L_134 = ___3_offset;
		*((int32_t*)L_134) = (int32_t)0;
		int32_t* L_135 = ___4_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = V_0;
		NullCheck(L_136);
		int32_t L_137 = 0;
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		*((int32_t*)L_135) = (int32_t)L_138;
		return;
	}

IL_0169:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_139 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_139);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_139, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_139, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomInfo_GetActiveSection_m73D69E72CABDFE5B9F823D5EDA98D940E0DC23CA_RuntimeMethod_var)));
	}
}
// NumberFormatter/CustomInfo NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* CustomInfo_Parse_m85FF733C1A4A0F05FCE4FCE905D6BC8F820310E0 (String_t* ___0_format, int32_t ___1_offset, int32_t ___2_length, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___3_nfi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Il2CppChar V_8 = 0x0;
	Il2CppChar V_9 = 0x0;
	{
		V_0 = 0;
		V_1 = (bool)1;
		V_2 = (bool)0;
		V_3 = (bool)0;
		V_4 = (bool)1;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_0 = (CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD*)il2cpp_codegen_object_new(CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CustomInfo__ctor_mED225968E251F15894887C88024E4D4F8A4906AD(L_0, NULL);
		V_5 = L_0;
		V_6 = 0;
		int32_t L_1 = ___1_offset;
		V_7 = L_1;
		goto IL_0298;
	}

IL_001d:
	{
		String_t* L_2 = ___0_format;
		int32_t L_3 = V_7;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_8 = L_4;
		Il2CppChar L_5 = V_8;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_7 = V_8;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		V_0 = 0;
		goto IL_0292;
	}

IL_0037:
	{
		Il2CppChar L_8 = V_0;
		if (L_8)
		{
			goto IL_0292;
		}
	}
	{
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		Il2CppChar L_10 = V_8;
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		Il2CppChar L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)48))))
		{
			goto IL_006d;
		}
	}
	{
		Il2CppChar L_12 = V_8;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)35))))
		{
			goto IL_006d;
		}
	}
	{
		V_3 = (bool)0;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = L_13->___DecimalPointPos_2;
		V_1 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		V_2 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		int32_t L_16 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		goto IL_0292;
	}

IL_006d:
	{
		Il2CppChar L_17 = V_8;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)69)))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_18 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00ec;
			}
			case 1:
			{
				goto IL_0103;
			}
			case 2:
			{
				goto IL_0292;
			}
			case 3:
			{
				goto IL_025d;
			}
			case 4:
			{
				goto IL_0292;
			}
			case 5:
			{
				goto IL_00ec;
			}
		}
	}
	{
		Il2CppChar L_19 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_027f;
			}
			case 1:
			{
				goto IL_0292;
			}
			case 2:
			{
				goto IL_0242;
			}
			case 3:
			{
				goto IL_0292;
			}
			case 4:
			{
				goto IL_0140;
			}
		}
	}
	{
		Il2CppChar L_20 = V_8;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_0292;
	}

IL_00c1:
	{
		Il2CppChar L_21 = V_8;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e1;
		}
	}
	{
		Il2CppChar L_22 = V_8;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_01cc;
		}
	}
	{
		Il2CppChar L_23 = V_8;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)8240))))
		{
			goto IL_026e;
		}
	}
	{
		goto IL_0292;
	}

IL_00e1:
	{
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_0292;
	}

IL_00ec:
	{
		Il2CppChar L_25 = V_8;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)34))))
		{
			goto IL_00fb;
		}
	}
	{
		Il2CppChar L_26 = V_8;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0292;
		}
	}

IL_00fb:
	{
		Il2CppChar L_27 = V_8;
		V_0 = L_27;
		goto IL_0292;
	}

IL_0103:
	{
		bool L_28 = V_4;
		bool L_29 = V_1;
		if (!((int32_t)((int32_t)L_28&(int32_t)L_29)))
		{
			goto IL_011a;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_30 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_31 = L_30;
		NullCheck(L_31);
		int32_t L_32 = L_31->___IntegerHeadSharpDigits_5;
		NullCheck(L_31);
		L_31->___IntegerHeadSharpDigits_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_0140;
	}

IL_011a:
	{
		bool L_33 = V_2;
		if (!L_33)
		{
			goto IL_012e;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_34 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = L_35->___DecimalTailSharpDigits_3;
		NullCheck(L_35);
		L_35->___DecimalTailSharpDigits_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		goto IL_0140;
	}

IL_012e:
	{
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_0140;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_38 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_39 = L_38;
		NullCheck(L_39);
		int32_t L_40 = L_39->___ExponentTailSharpDigits_9;
		NullCheck(L_39);
		L_39->___ExponentTailSharpDigits_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0140:
	{
		Il2CppChar L_41 = V_8;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)35))))
		{
			goto IL_0161;
		}
	}
	{
		V_4 = (bool)0;
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_0156;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_43 = V_5;
		NullCheck(L_43);
		L_43->___DecimalTailSharpDigits_3 = 0;
		goto IL_0161;
	}

IL_0156:
	{
		bool L_44 = V_3;
		if (!L_44)
		{
			goto IL_0161;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_45 = V_5;
		NullCheck(L_45);
		L_45->___ExponentTailSharpDigits_9 = 0;
	}

IL_0161:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = L_46->___IntegerHeadPos_6;
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_0174;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_48 = V_5;
		int32_t L_49 = V_7;
		NullCheck(L_48);
		L_48->___IntegerHeadPos_6 = L_49;
	}

IL_0174:
	{
		bool L_50 = V_1;
		if (!L_50)
		{
			goto IL_019b;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_51 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_52 = L_51;
		NullCheck(L_52);
		int32_t L_53 = L_52->___IntegerDigits_4;
		NullCheck(L_52);
		L_52->___IntegerDigits_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_6;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_0193;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_55 = V_5;
		NullCheck(L_55);
		L_55->___UseGroup_0 = (bool)1;
	}

IL_0193:
	{
		V_6 = 0;
		goto IL_0292;
	}

IL_019b:
	{
		bool L_56 = V_2;
		if (!L_56)
		{
			goto IL_01b2;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_57 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = L_58->___DecimalDigits_1;
		NullCheck(L_58);
		L_58->___DecimalDigits_1 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		goto IL_0292;
	}

IL_01b2:
	{
		bool L_60 = V_3;
		if (!L_60)
		{
			goto IL_0292;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_61 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63 = L_62->___ExponentDigits_8;
		NullCheck(L_62);
		L_62->___ExponentDigits_8 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_0292;
	}

IL_01cc:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_64 = V_5;
		NullCheck(L_64);
		bool L_65 = L_64->___UseExponent_7;
		if (L_65)
		{
			goto IL_0292;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_66 = V_5;
		NullCheck(L_66);
		L_66->___UseExponent_7 = (bool)1;
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = (bool)1;
		int32_t L_67 = V_7;
		int32_t L_68 = ___1_offset;
		int32_t L_69 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_67, 1)), L_68))) >= ((int32_t)L_69)))
		{
			goto IL_0292;
		}
	}
	{
		String_t* L_70 = ___0_format;
		int32_t L_71 = V_7;
		NullCheck(L_70);
		Il2CppChar L_72;
		L_72 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_70, ((int32_t)il2cpp_codegen_add(L_71, 1)), NULL);
		V_9 = L_72;
		Il2CppChar L_73 = V_9;
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_020c;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_74 = V_5;
		NullCheck(L_74);
		L_74->___ExponentNegativeSignOnly_10 = (bool)0;
	}

IL_020c:
	{
		Il2CppChar L_75 = V_9;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)43))))
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar L_76 = V_9;
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0220;
		}
	}

IL_0218:
	{
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		goto IL_0292;
	}

IL_0220:
	{
		Il2CppChar L_78 = V_9;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)48))))
		{
			goto IL_0292;
		}
	}
	{
		Il2CppChar L_79 = V_9;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)35))))
		{
			goto IL_0292;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_80 = V_5;
		NullCheck(L_80);
		L_80->___UseExponent_7 = (bool)0;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_81 = V_5;
		NullCheck(L_81);
		int32_t L_82 = L_81->___DecimalPointPos_2;
		if ((((int32_t)L_82) >= ((int32_t)0)))
		{
			goto IL_0292;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0292;
	}

IL_0242:
	{
		V_1 = (bool)0;
		V_2 = (bool)1;
		V_3 = (bool)0;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_83 = V_5;
		NullCheck(L_83);
		int32_t L_84 = L_83->___DecimalPointPos_2;
		if ((!(((uint32_t)L_84) == ((uint32_t)(-1)))))
		{
			goto IL_0292;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_85 = V_5;
		int32_t L_86 = V_7;
		NullCheck(L_85);
		L_85->___DecimalPointPos_2 = L_86;
		goto IL_0292;
	}

IL_025d:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_87 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_88 = L_87;
		NullCheck(L_88);
		int32_t L_89 = L_88->___Percents_12;
		NullCheck(L_88);
		L_88->___Percents_12 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		goto IL_0292;
	}

IL_026e:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_90 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_91 = L_90;
		NullCheck(L_91);
		int32_t L_92 = L_91->___Permilles_13;
		NullCheck(L_91);
		L_91->___Permilles_13 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		goto IL_0292;
	}

IL_027f:
	{
		bool L_93 = V_1;
		if (!L_93)
		{
			goto IL_0292;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_94 = V_5;
		NullCheck(L_94);
		int32_t L_95 = L_94->___IntegerDigits_4;
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_0292;
		}
	}
	{
		int32_t L_96 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0292:
	{
		int32_t L_97 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_0298:
	{
		int32_t L_98 = V_7;
		int32_t L_99 = ___1_offset;
		int32_t L_100 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_98, L_99))) < ((int32_t)L_100)))
		{
			goto IL_001d;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_101 = V_5;
		NullCheck(L_101);
		int32_t L_102 = L_101->___ExponentDigits_8;
		if (L_102)
		{
			goto IL_02b5;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_103 = V_5;
		NullCheck(L_103);
		L_103->___UseExponent_7 = (bool)0;
		goto IL_02bd;
	}

IL_02b5:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_104 = V_5;
		NullCheck(L_104);
		L_104->___IntegerHeadSharpDigits_5 = 0;
	}

IL_02bd:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_105 = V_5;
		NullCheck(L_105);
		int32_t L_106 = L_105->___DecimalDigits_1;
		if (L_106)
		{
			goto IL_02ce;
		}
	}
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_107 = V_5;
		NullCheck(L_107);
		L_107->___DecimalPointPos_2 = (-1);
	}

IL_02ce:
	{
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_108 = V_5;
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_109 = L_108;
		NullCheck(L_109);
		int32_t L_110 = L_109->___DividePlaces_11;
		int32_t L_111 = V_6;
		NullCheck(L_109);
		L_109->___DividePlaces_11 = ((int32_t)il2cpp_codegen_add(L_110, ((int32_t)il2cpp_codegen_multiply(L_111, 3))));
		CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* L_112 = V_5;
		return L_112;
	}
}
// System.Text.StringBuilder NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* CustomInfo_Format_mBA292FC9028760623E601C223E84A873990CF9FF (CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* __this, String_t* ___0_format, int32_t ___1_offset, int32_t ___2_length, NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___3_nfi, bool ___4_positive, StringBuilder_t* ___5_sb_int, StringBuilder_t* ___6_sb_dec, StringBuilder_t* ___7_sb_exp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Il2CppChar V_17 = 0x0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		V_2 = (bool)1;
		V_3 = (bool)0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ___3_nfi;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = NumberFormatInfo_get_CurrencyGroupSizes_mA65056791CE7754317B7502465C488E2126591BA(L_1, NULL);
		V_7 = L_2;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_3 = ___3_nfi;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_3, NULL);
		V_8 = L_4;
		V_9 = 0;
		V_10 = 0;
		V_11 = 0;
		V_12 = 0;
		V_13 = 0;
		bool L_5 = __this->___UseGroup_0;
		if (!L_5)
		{
			goto IL_00e5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_7;
		NullCheck(L_6);
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t* L_7 = ___5_sb_int;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
		V_9 = L_8;
		V_15 = 0;
		goto IL_0071;
	}

IL_0057:
	{
		int32_t L_9 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_7;
		int32_t L_11 = V_15;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_10 = ((int32_t)il2cpp_codegen_add(L_9, L_13));
		int32_t L_14 = V_10;
		int32_t L_15 = V_9;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_16 = V_15;
		V_11 = L_16;
	}

IL_006b:
	{
		int32_t L_17 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0071:
	{
		int32_t L_18 = V_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_7;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0057;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_7;
		int32_t L_21 = V_11;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_13 = L_23;
		int32_t L_24 = V_9;
		int32_t L_25 = V_10;
		if ((((int32_t)L_24) > ((int32_t)L_25)))
		{
			goto IL_0089;
		}
	}
	{
		G_B10_0 = 0;
		goto IL_008e;
	}

IL_0089:
	{
		int32_t L_26 = V_9;
		int32_t L_27 = V_10;
		G_B10_0 = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
	}

IL_008e:
	{
		V_14 = G_B10_0;
		int32_t L_28 = V_13;
		if (L_28)
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_009c;
	}

IL_0096:
	{
		int32_t L_29 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_009c:
	{
		int32_t L_30 = V_11;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_7;
		int32_t L_32 = V_11;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (!L_34)
		{
			goto IL_0096;
		}
	}

IL_00a8:
	{
		int32_t L_35 = V_14;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_7;
		int32_t L_37 = V_11;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		G_B18_0 = L_39;
		goto IL_00b6;
	}

IL_00b4:
	{
		int32_t L_40 = V_14;
		G_B18_0 = L_40;
	}

IL_00b6:
	{
		V_13 = G_B18_0;
	}

IL_00b8:
	{
		int32_t L_41 = V_14;
		if (L_41)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_42 = V_13;
		V_12 = L_42;
		goto IL_00ec;
	}

IL_00c2:
	{
		int32_t L_43 = V_11;
		int32_t L_44 = V_14;
		int32_t L_45 = V_13;
		V_11 = ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)(L_44/L_45))));
		int32_t L_46 = V_14;
		int32_t L_47 = V_13;
		V_12 = ((int32_t)(L_46%L_47));
		int32_t L_48 = V_12;
		if (L_48)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_49 = V_13;
		V_12 = L_49;
		goto IL_00ec;
	}

IL_00dd:
	{
		int32_t L_50 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		goto IL_00ec;
	}

IL_00e5:
	{
		__this->___UseGroup_0 = (bool)0;
	}

IL_00ec:
	{
		int32_t L_51 = ___1_offset;
		V_16 = L_51;
		goto IL_03d2;
	}

IL_00f4:
	{
		String_t* L_52 = ___0_format;
		int32_t L_53 = V_16;
		NullCheck(L_52);
		Il2CppChar L_54;
		L_54 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_52, L_53, NULL);
		V_17 = L_54;
		Il2CppChar L_55 = V_17;
		Il2CppChar L_56 = V_1;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_010e;
		}
	}
	{
		Il2CppChar L_57 = V_17;
		if (!L_57)
		{
			goto IL_010e;
		}
	}
	{
		V_1 = 0;
		goto IL_03cc;
	}

IL_010e:
	{
		Il2CppChar L_58 = V_1;
		if (!L_58)
		{
			goto IL_011f;
		}
	}
	{
		StringBuilder_t* L_59 = V_0;
		Il2CppChar L_60 = V_17;
		NullCheck(L_59);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_59, L_60, NULL);
		goto IL_03cc;
	}

IL_011f:
	{
		Il2CppChar L_62 = V_17;
		if ((!(((uint32_t)L_62) <= ((uint32_t)((int32_t)69)))))
		{
			goto IL_0173;
		}
	}
	{
		Il2CppChar L_63 = V_17;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_63, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_01b7;
			}
			case 1:
			{
				goto IL_01ce;
			}
			case 2:
			{
				goto IL_03c3;
			}
			case 3:
			{
				goto IL_03a3;
			}
			case 4:
			{
				goto IL_03c3;
			}
			case 5:
			{
				goto IL_01b7;
			}
		}
	}
	{
		Il2CppChar L_64 = V_17;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_64, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_03cc;
			}
			case 1:
			{
				goto IL_03c3;
			}
			case 2:
			{
				goto IL_0350;
			}
			case 3:
			{
				goto IL_03c3;
			}
			case 4:
			{
				goto IL_01ce;
			}
		}
	}
	{
		Il2CppChar L_65 = V_17;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)69))))
		{
			goto IL_02a3;
		}
	}
	{
		goto IL_03c3;
	}

IL_0173:
	{
		Il2CppChar L_66 = V_17;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)92))))
		{
			goto IL_0193;
		}
	}
	{
		Il2CppChar L_67 = V_17;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)101))))
		{
			goto IL_02a3;
		}
	}
	{
		Il2CppChar L_68 = V_17;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)8240))))
		{
			goto IL_03b3;
		}
	}
	{
		goto IL_03c3;
	}

IL_0193:
	{
		int32_t L_69 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int32_t L_70 = V_16;
		int32_t L_71 = ___1_offset;
		int32_t L_72 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_70, L_71))) >= ((int32_t)L_72)))
		{
			goto IL_03cc;
		}
	}
	{
		StringBuilder_t* L_73 = V_0;
		String_t* L_74 = ___0_format;
		int32_t L_75 = V_16;
		NullCheck(L_74);
		Il2CppChar L_76;
		L_76 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_74, L_75, NULL);
		NullCheck(L_73);
		StringBuilder_t* L_77;
		L_77 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_73, L_76, NULL);
		goto IL_03cc;
	}

IL_01b7:
	{
		Il2CppChar L_78 = V_17;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)34))))
		{
			goto IL_01c6;
		}
	}
	{
		Il2CppChar L_79 = V_17;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_03cc;
		}
	}

IL_01c6:
	{
		Il2CppChar L_80 = V_17;
		V_1 = L_80;
		goto IL_03cc;
	}

IL_01ce:
	{
		bool L_81 = V_2;
		if (!L_81)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_82 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = __this->___IntegerDigits_4;
		int32_t L_84 = V_4;
		StringBuilder_t* L_85 = ___5_sb_int;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_85, NULL);
		int32_t L_87 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, L_84))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_86, L_87)))))
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar L_88 = V_17;
		if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_03cc;
		}
	}
	{
		goto IL_0250;
	}

IL_01fa:
	{
		StringBuilder_t* L_89 = V_0;
		StringBuilder_t* L_90 = ___5_sb_int;
		int32_t L_91 = V_5;
		int32_t L_92 = L_91;
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		NullCheck(L_90);
		Il2CppChar L_93;
		L_93 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_90, L_92, NULL);
		NullCheck(L_89);
		StringBuilder_t* L_94;
		L_94 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_89, L_93, NULL);
		bool L_95 = __this->___UseGroup_0;
		if (!L_95)
		{
			goto IL_0250;
		}
	}
	{
		int32_t L_96 = V_9;
		int32_t L_97 = ((int32_t)il2cpp_codegen_subtract(L_96, 1));
		V_9 = L_97;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0250;
		}
	}
	{
		int32_t L_98 = V_12;
		int32_t L_99 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
		V_12 = L_99;
		if (L_99)
		{
			goto IL_0250;
		}
	}
	{
		StringBuilder_t* L_100 = V_0;
		String_t* L_101 = V_8;
		NullCheck(L_100);
		StringBuilder_t* L_102;
		L_102 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_100, L_101, NULL);
		int32_t L_103 = V_11;
		int32_t L_104 = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
		V_11 = L_104;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_7;
		NullCheck(L_105);
		if ((((int32_t)L_104) >= ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_106 = V_11;
		if ((((int32_t)L_106) < ((int32_t)0)))
		{
			goto IL_024c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_7;
		int32_t L_108 = V_11;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_13 = L_110;
	}

IL_024c:
	{
		int32_t L_111 = V_13;
		V_12 = L_111;
	}

IL_0250:
	{
		int32_t L_112 = __this->___IntegerDigits_4;
		int32_t L_113 = V_4;
		int32_t L_114 = V_5;
		StringBuilder_t* L_115 = ___5_sb_int;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_115, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_112, L_113)), L_114))) < ((int32_t)L_116)))
		{
			goto IL_01fa;
		}
	}
	{
		goto IL_03cc;
	}

IL_026a:
	{
		bool L_117 = V_3;
		if (!L_117)
		{
			goto IL_0295;
		}
	}
	{
		int32_t L_118 = V_6;
		StringBuilder_t* L_119 = ___6_sb_dec;
		NullCheck(L_119);
		int32_t L_120;
		L_120 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_119, NULL);
		if ((((int32_t)L_118) >= ((int32_t)L_120)))
		{
			goto IL_03cc;
		}
	}
	{
		StringBuilder_t* L_121 = V_0;
		StringBuilder_t* L_122 = ___6_sb_dec;
		int32_t L_123 = V_6;
		int32_t L_124 = L_123;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		NullCheck(L_122);
		Il2CppChar L_125;
		L_125 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_122, L_124, NULL);
		NullCheck(L_121);
		StringBuilder_t* L_126;
		L_126 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_121, L_125, NULL);
		goto IL_03cc;
	}

IL_0295:
	{
		StringBuilder_t* L_127 = V_0;
		Il2CppChar L_128 = V_17;
		NullCheck(L_127);
		StringBuilder_t* L_129;
		L_129 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_127, L_128, NULL);
		goto IL_03cc;
	}

IL_02a3:
	{
		StringBuilder_t* L_130 = ___7_sb_exp;
		if (!L_130)
		{
			goto IL_02af;
		}
	}
	{
		bool L_131 = __this->___UseExponent_7;
		if (L_131)
		{
			goto IL_02bd;
		}
	}

IL_02af:
	{
		StringBuilder_t* L_132 = V_0;
		Il2CppChar L_133 = V_17;
		NullCheck(L_132);
		StringBuilder_t* L_134;
		L_134 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_132, L_133, NULL);
		goto IL_03cc;
	}

IL_02bd:
	{
		V_18 = (bool)1;
		V_19 = (bool)0;
		int32_t L_135 = V_16;
		V_20 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		goto IL_030b;
	}

IL_02cb:
	{
		String_t* L_136 = ___0_format;
		int32_t L_137 = V_20;
		NullCheck(L_136);
		Il2CppChar L_138;
		L_138 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_136, L_137, NULL);
		if ((!(((uint32_t)L_138) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_02dc;
		}
	}
	{
		V_19 = (bool)1;
		goto IL_0305;
	}

IL_02dc:
	{
		int32_t L_139 = V_20;
		int32_t L_140 = V_16;
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_140, 1))))))
		{
			goto IL_02fc;
		}
	}
	{
		String_t* L_141 = ___0_format;
		int32_t L_142 = V_20;
		NullCheck(L_141);
		Il2CppChar L_143;
		L_143 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_141, L_142, NULL);
		if ((((int32_t)L_143) == ((int32_t)((int32_t)43))))
		{
			goto IL_0305;
		}
	}
	{
		String_t* L_144 = ___0_format;
		int32_t L_145 = V_20;
		NullCheck(L_144);
		Il2CppChar L_146;
		L_146 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_144, L_145, NULL);
		if ((((int32_t)L_146) == ((int32_t)((int32_t)45))))
		{
			goto IL_0305;
		}
	}

IL_02fc:
	{
		bool L_147 = V_19;
		if (L_147)
		{
			goto IL_0312;
		}
	}
	{
		V_18 = (bool)0;
		goto IL_0312;
	}

IL_0305:
	{
		int32_t L_148 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_030b:
	{
		int32_t L_149 = V_20;
		int32_t L_150 = ___1_offset;
		int32_t L_151 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_149, L_150))) < ((int32_t)L_151)))
		{
			goto IL_02cb;
		}
	}

IL_0312:
	{
		bool L_152 = V_18;
		if (!L_152)
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_153 = V_20;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_153, 1));
		int32_t L_154 = __this->___DecimalPointPos_2;
		V_2 = (bool)((((int32_t)L_154) < ((int32_t)0))? 1 : 0);
		bool L_155 = V_2;
		V_3 = (bool)((((int32_t)L_155) == ((int32_t)0))? 1 : 0);
		StringBuilder_t* L_156 = V_0;
		Il2CppChar L_157 = V_17;
		NullCheck(L_156);
		StringBuilder_t* L_158;
		L_158 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_156, L_157, NULL);
		StringBuilder_t* L_159 = V_0;
		StringBuilder_t* L_160 = ___7_sb_exp;
		NullCheck(L_159);
		StringBuilder_t* L_161;
		L_161 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_159, L_160, NULL);
		___7_sb_exp = (StringBuilder_t*)NULL;
		goto IL_03cc;
	}

IL_0345:
	{
		StringBuilder_t* L_162 = V_0;
		Il2CppChar L_163 = V_17;
		NullCheck(L_162);
		StringBuilder_t* L_164;
		L_164 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_162, L_163, NULL);
		goto IL_03cc;
	}

IL_0350:
	{
		int32_t L_165 = __this->___DecimalPointPos_2;
		int32_t L_166 = V_16;
		if ((!(((uint32_t)L_165) == ((uint32_t)L_166))))
		{
			goto IL_039d;
		}
	}
	{
		int32_t L_167 = __this->___DecimalDigits_1;
		if ((((int32_t)L_167) <= ((int32_t)0)))
		{
			goto IL_0385;
		}
	}
	{
		goto IL_037a;
	}

IL_0365:
	{
		StringBuilder_t* L_168 = V_0;
		StringBuilder_t* L_169 = ___5_sb_int;
		int32_t L_170 = V_5;
		int32_t L_171 = L_170;
		V_5 = ((int32_t)il2cpp_codegen_add(L_171, 1));
		NullCheck(L_169);
		Il2CppChar L_172;
		L_172 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_169, L_171, NULL);
		NullCheck(L_168);
		StringBuilder_t* L_173;
		L_173 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_168, L_172, NULL);
	}

IL_037a:
	{
		int32_t L_174 = V_5;
		StringBuilder_t* L_175 = ___5_sb_int;
		NullCheck(L_175);
		int32_t L_176;
		L_176 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_175, NULL);
		if ((((int32_t)L_174) < ((int32_t)L_176)))
		{
			goto IL_0365;
		}
	}

IL_0385:
	{
		StringBuilder_t* L_177 = ___6_sb_dec;
		NullCheck(L_177);
		int32_t L_178;
		L_178 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_177, NULL);
		if ((((int32_t)L_178) <= ((int32_t)0)))
		{
			goto IL_039d;
		}
	}
	{
		StringBuilder_t* L_179 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_180 = ___3_nfi;
		NullCheck(L_180);
		String_t* L_181;
		L_181 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_180, NULL);
		NullCheck(L_179);
		StringBuilder_t* L_182;
		L_182 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_179, L_181, NULL);
	}

IL_039d:
	{
		V_2 = (bool)0;
		V_3 = (bool)1;
		goto IL_03cc;
	}

IL_03a3:
	{
		StringBuilder_t* L_183 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_184 = ___3_nfi;
		NullCheck(L_184);
		String_t* L_185;
		L_185 = NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline(L_184, NULL);
		NullCheck(L_183);
		StringBuilder_t* L_186;
		L_186 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_183, L_185, NULL);
		goto IL_03cc;
	}

IL_03b3:
	{
		StringBuilder_t* L_187 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_188 = ___3_nfi;
		NullCheck(L_188);
		String_t* L_189;
		L_189 = NumberFormatInfo_get_PerMilleSymbol_mBE43A9E5D7F05030C0258FB452BD94FD6E411533_inline(L_188, NULL);
		NullCheck(L_187);
		StringBuilder_t* L_190;
		L_190 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_187, L_189, NULL);
		goto IL_03cc;
	}

IL_03c3:
	{
		StringBuilder_t* L_191 = V_0;
		Il2CppChar L_192 = V_17;
		NullCheck(L_191);
		StringBuilder_t* L_193;
		L_193 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_191, L_192, NULL);
	}

IL_03cc:
	{
		int32_t L_194 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_194, 1));
	}

IL_03d2:
	{
		int32_t L_195 = V_16;
		int32_t L_196 = ___1_offset;
		int32_t L_197 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_195, L_196))) < ((int32_t)L_197)))
		{
			goto IL_00f4;
		}
	}
	{
		bool L_198 = ___4_positive;
		if (L_198)
		{
			goto IL_03ef;
		}
	}
	{
		StringBuilder_t* L_199 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_200 = ___3_nfi;
		NullCheck(L_200);
		String_t* L_201;
		L_201 = NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline(L_200, NULL);
		NullCheck(L_199);
		StringBuilder_t* L_202;
		L_202 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_199, 0, L_201, NULL);
	}

IL_03ef:
	{
		StringBuilder_t* L_203 = V_0;
		return L_203;
	}
}
// System.Void NumberFormatter/CustomInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomInfo__ctor_mED225968E251F15894887C88024E4D4F8A4906AD (CustomInfo_t0B62E05AD1D8607E4133784DF848285AB15EE8DD* __this, const RuntimeMethod* method) 
{
	{
		__this->___DecimalPointPos_2 = (-1);
		__this->___ExponentNegativeSignOnly_10 = (bool)1;
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
// System.Void StringPool::PreAlloc(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPool_PreAlloc_mF7AF818744A464AD58A5F4B531E9A948DED18065 (int32_t ___0_size, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_size;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___0_size;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___1_count;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(8, L_2, NULL);
		___1_count = L_3;
		V_0 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)NULL;
		il2cpp_codegen_runtime_class_init_inline(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_4 = ((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0;
		int32_t L_5 = ___0_size;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_7, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0045;
	}

IL_0030:
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_9 = V_0;
		int32_t L_10 = ___0_size;
		String_t* L_11;
		L_11 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)204), L_10, NULL);
		NullCheck(L_9);
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_9, L_11, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0045:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ___1_count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_004a:
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_15 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE(L_15, Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		V_0 = L_15;
		il2cpp_codegen_runtime_class_init_inline(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_16 = ((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0;
		int32_t L_17 = ___0_size;
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_18 = V_0;
		NullCheck(L_16);
		Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F(L_16, L_17, L_18, Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var);
		V_2 = 0;
		goto IL_0075;
	}

IL_0060:
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_19 = V_0;
		int32_t L_20 = ___0_size;
		String_t* L_21;
		L_21 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)204), L_20, NULL);
		NullCheck(L_19);
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_19, L_21, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0075:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = ___1_count;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0060;
		}
	}
	{
		return;
	}
}
// System.String StringPool::Alloc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringPool_Alloc_mE121774742D0438079CDC44A491955BBBC8B3C58 (int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* V_0 = NULL;
	{
		int32_t L_0 = ___0_size;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___0_size;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)1024))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_size;
		String_t* L_4;
		L_4 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)204), L_3, NULL);
		return L_4;
	}

IL_001d:
	{
		V_0 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)NULL;
		il2cpp_codegen_runtime_class_init_inline(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_5 = ((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0;
		int32_t L_6 = ___0_size;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_8, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB(L_10, Queue_1_Dequeue_mD1CC66D4AA0E4AA615FBD01B897BCB42EE89E9DB_RuntimeMethod_var);
		return L_11;
	}

IL_003e:
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_12 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE(L_12, Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		V_0 = L_12;
		il2cpp_codegen_runtime_class_init_inline(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_13 = ((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0;
		int32_t L_14 = ___0_size;
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_15 = V_0;
		NullCheck(L_13);
		Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F(L_13, L_14, L_15, Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var);
	}

IL_0050:
	{
		int32_t L_16 = ___0_size;
		String_t* L_17;
		L_17 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)204), L_16, NULL);
		return L_17;
	}
}
// System.Void StringPool::Collect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPool_Collect_mEAFDF2E73ED5658D879A6A7A3DEA29D806430D9D (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* V_1 = NULL;
	{
		String_t* L_0 = ___0_str;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		String_t* L_2 = ___0_str;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		V_1 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)NULL;
		il2cpp_codegen_runtime_class_init_inline(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_6 = ((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0;
		String_t* L_7 = ___0_str;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A(L_6, L_8, (&V_1), Dictionary_2_TryGetValue_mB5D25FB0659FD0B608FD24E59ECB4EA424D9CA5A_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_10 = (Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31*)il2cpp_codegen_object_new(Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE(L_10, Queue_1__ctor_mDDCE4EE6A52F7D218F7DD54BDA1F1649606C70AE_RuntimeMethod_var);
		V_1 = L_10;
		il2cpp_codegen_runtime_class_init_inline(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_11 = ((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0;
		int32_t L_12 = V_0;
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_13 = V_1;
		NullCheck(L_11);
		Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F(L_11, L_12, L_13, Dictionary_2_set_Item_mBF2E5BF1DE720628B75CC04F29C269508A2ACA4F_RuntimeMethod_var);
	}

IL_0044:
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_inline(L_14, Queue_1_get_Count_m4764E86DDE9F43FD517EF8675D1240B9B4A41B5D_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)8)))
		{
			goto IL_0054;
		}
	}
	{
		Queue_1_t55768C6731D974992BF9775CEA33AAFE7F51CF31* L_16 = V_1;
		String_t* L_17 = ___0_str;
		NullCheck(L_16);
		Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832(L_16, L_17, Queue_1_Enqueue_mE91EF674187E035F117B16FDF3B5F0815BD67832_RuntimeMethod_var);
	}

IL_0054:
	{
		return;
	}
}
// System.Void StringPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPool__cctor_m4FA5DE2FA42A00CE46BBE562A8E9C4A46B242399 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD3A2743AE977D53B2D02C0ACB2FAAFC597AF70E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7* L_0 = (Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7*)il2cpp_codegen_object_new(Dictionary_2_tF13C4A6589B4107BD155565B39AA46AFC9D60CF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD3A2743AE977D53B2D02C0ACB2FAAFC597AF70E2(L_0, Dictionary_2__ctor_mD3A2743AE977D53B2D02C0ACB2FAAFC597AF70E2_RuntimeMethod_var);
		((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_StaticFields*)il2cpp_codegen_static_fields_for(StringPool_tF000C93344FD9CF0ADCB3C485446700023F9D74C_il2cpp_TypeInfo_var))->___map_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CultureInfo_get_IsReadOnly_m53947CBF80905492B4AC82C8A148088E2DB8F8EF_inline (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_isReadOnly_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NumberFormatter_Release_mD6ABA86179A8F9387EC1EF9C85BCE0F343085686_inline (NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var);
		((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(NumberFormatter_tD364B4F95BC619953FD8A7E88ABC3FB18F7A0F4D_il2cpp_TypeInfo_var))->___threadNumberFormatter_24), (void*)__this);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NegativeSign_m7744D30B65FFC7D00CDD1CCF7E53D3722D350E7C_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___negativeSign_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m5E04D902AB388705BF7FED31630AF7730EFA34BE_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyDecimalDigits_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyPositivePattern_m253954FD1F79EB2F9B12070A348E8E1DB0E75263_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyPositivePattern_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencySymbol_m69E8700B6E102ADA1351AD4C6BBC7779D9F13F43_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencySymbol_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_CurrencyNegativePattern_m35EAAAC0517F13B43B444B82343F14D9B0A14FC4_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___currencyNegativePattern_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyGroupSeparator_mE8F7687A3D4812C75092E30554B4C15C974441BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyGroupSeparator_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_mBAD4DAC07DC995653374C16BFB02E6CF2CA121BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___currencyDecimalSeparator_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberDecimalDigits_m5EB881B449699981560942A65714C5D5CBA897BD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___numberDecimalDigits_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberDecimalSeparator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentDecimalDigits_m49B53E03F294674AA1B20B77C56E10721BA8643D_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___percentDecimalDigits_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentPositivePattern_m2720656715E7A19D1CEAD0155412B2EE01FC68FA_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___percentPositivePattern_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentSymbol_mB3F25C2B5F71574B7F4A0BEE95A7028E7A48CFC2_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___percentSymbol_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_PercentNegativePattern_m3EED4EC4B89339AA00581150F4999BCC3400CDAD_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___percentNegativePattern_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentGroupSeparator_m1321ACEA2239006587D132AF6445E55D733BABF9_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___percentGroupSeparator_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PercentDecimalSeparator_mB656F8F033BB700E4647AF14044C607F34634B80_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___percentDecimalSeparator_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NumberFormatInfo_get_NumberNegativePattern_mB2D78035F14DA736695A2476B33B70A8BE3DB772_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___numberNegativePattern_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PositiveSign_mEB874CC4589FD7B2F57CD3269AE6D9043A0C25EF_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___positiveSign_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_PerMilleSymbol_mBE43A9E5D7F05030C0258FB452BD94FD6E411533_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___perMilleSymbol_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
