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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729;
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.Notifications.Android.BundleJni
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.Notifications.Android.NotificationBuilderJni
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752;
// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7;
// Unity.Notifications.Android.NotificationJni
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654;
// Unity.Notifications.Android.NotificationManagerJni
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20;
// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE;
IL2CPP_EXTERN_C String_t* _stringLiteral02312B71918F038AE450FCB0BF85FB35831DC31D;
IL2CPP_EXTERN_C String_t* _stringLiteral033E8D8F95BF400864BD2ACEF47CE582680E75E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0396C61A0F5BED5C4D163CA34154518A154F9CC5;
IL2CPP_EXTERN_C String_t* _stringLiteral03DFB66E5D14DA03A079639D89444EBC2DA49E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9;
IL2CPP_EXTERN_C String_t* _stringLiteral05AFF8C43DBEA75E64A7AD340660B3E592F0036B;
IL2CPP_EXTERN_C String_t* _stringLiteral09DF0F4EA30887D5D6E2833D4C620AAAB11E1C34;
IL2CPP_EXTERN_C String_t* _stringLiteral0AF68D1AFD49CB4EAE16EEF562B95CDA9503D80B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4;
IL2CPP_EXTERN_C String_t* _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC;
IL2CPP_EXTERN_C String_t* _stringLiteral18A5D902CA6AE935C7E5AE7C0A682C2840299962;
IL2CPP_EXTERN_C String_t* _stringLiteral1F325E92CAF7A702576200BB93F020E0E67600DD;
IL2CPP_EXTERN_C String_t* _stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F;
IL2CPP_EXTERN_C String_t* _stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral26382D1C6FBEB1D1E3DEFF38694E94AE54023152;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E;
IL2CPP_EXTERN_C String_t* _stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976;
IL2CPP_EXTERN_C String_t* _stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29;
IL2CPP_EXTERN_C String_t* _stringLiteral35EA858EBEA1492F9EF3303EE0169F87CDEA9562;
IL2CPP_EXTERN_C String_t* _stringLiteral396F6FE98EEDE5658931E136BFD8B8DC080A8BD9;
IL2CPP_EXTERN_C String_t* _stringLiteral3A28AC380C88F10BBBCFF34436543133F6081A44;
IL2CPP_EXTERN_C String_t* _stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB52646F5B209FCB97D0BAF3FAB3B21B290EA42;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD;
IL2CPP_EXTERN_C String_t* _stringLiteral417033260ED9866C8F3942C4B186232283F80EBC;
IL2CPP_EXTERN_C String_t* _stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E;
IL2CPP_EXTERN_C String_t* _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A;
IL2CPP_EXTERN_C String_t* _stringLiteral430E6E4603830E40D9A72534D4A61157E83FFC89;
IL2CPP_EXTERN_C String_t* _stringLiteral43B8598DFA65D78E0D6420444B81EE822C8F99B3;
IL2CPP_EXTERN_C String_t* _stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB;
IL2CPP_EXTERN_C String_t* _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8212C561F69DEC091C46C708773C18B311822A;
IL2CPP_EXTERN_C String_t* _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral501806871C8368CE034D5E4560C3D6A32E2864E8;
IL2CPP_EXTERN_C String_t* _stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103;
IL2CPP_EXTERN_C String_t* _stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral61535C6D3C27938B30FE2DB29A665D6F1D93C101;
IL2CPP_EXTERN_C String_t* _stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD;
IL2CPP_EXTERN_C String_t* _stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805;
IL2CPP_EXTERN_C String_t* _stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16;
IL2CPP_EXTERN_C String_t* _stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D;
IL2CPP_EXTERN_C String_t* _stringLiteral77EFF4F4CAEEA7AB0E9270868BE4E7EDF20D2A6D;
IL2CPP_EXTERN_C String_t* _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83;
IL2CPP_EXTERN_C String_t* _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABF5AFD3781BDE143E9F08C49EFA38071384201;
IL2CPP_EXTERN_C String_t* _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D56777603D13DE0DE510705DC630AF80E83F083;
IL2CPP_EXTERN_C String_t* _stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A;
IL2CPP_EXTERN_C String_t* _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8723347D88389B5B9D84FAF9C94118595E76A8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral8A454FE5D40CFA47B41A7601EE4C7E5A97793ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B;
IL2CPP_EXTERN_C String_t* _stringLiteral957C39ACF343DCE5F7AB145168656E7F288B57EA;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812;
IL2CPP_EXTERN_C String_t* _stringLiteralA288610E4D4CA66B25A3D30E99F2259924083099;
IL2CPP_EXTERN_C String_t* _stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralA59539643944A464E30D7011A21734B72919F5BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7343D57E4FFEB2F5F2EA86484458A6A8752503E;
IL2CPP_EXTERN_C String_t* _stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814;
IL2CPP_EXTERN_C String_t* _stringLiteralAE95E08AFB79AEC96D3BDD6C9A3788BA259BF6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB2471E258F48879198FDEA7BA87494515B30D9FF;
IL2CPP_EXTERN_C String_t* _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F3A12A164FFA69A27D2D6B5705EADEEC5D64B6;
IL2CPP_EXTERN_C String_t* _stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99;
IL2CPP_EXTERN_C String_t* _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC558F6B52615D04F88C1A2FEADC63E72310DECB5;
IL2CPP_EXTERN_C String_t* _stringLiteralC824FF3925D18F01BCB0B304E5C5B5A8D68D89C8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B;
IL2CPP_EXTERN_C String_t* _stringLiteralCBD61AA457508E34A49244C75D8DEEC0740B84FE;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD63BE7049C988C9471492DDB23802773752B93BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6FF31FFC38A61B5DDA7B40E5CEFC7BA61DF54F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD809A69F87CBD2613B42995560344815E9CE81AA;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172;
IL2CPP_EXTERN_C String_t* _stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8;
IL2CPP_EXTERN_C String_t* _stringLiteralED77824C4E942D01BBA3961E822A4478B57D4FE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FE9FE00151D9517E6FBD69234A14C1A63495E2;
IL2CPP_EXTERN_C String_t* _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC;
IL2CPP_EXTERN_C String_t* _stringLiteralF482701BE7F377C0E33D5638FE26775E87212075;
IL2CPP_EXTERN_C String_t* _stringLiteralF7182F1CC8575A67104E0B04F4657F2F3FF26E6F;
IL2CPP_EXTERN_C String_t* _stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCF688AE29C8EBA59FC43EECD64FB2FCCA9AEBC;
IL2CPP_EXTERN_C String_t* _stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__55_0_m1BF57487F98298E956FDC79C2D655504EA2C5938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GroupAlertBehaviours_tC857504ABF5835A6033C1A8345A49C092389F237_0_0_0_var;
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701;;
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com;
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com;;
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke;
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752;;
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com;
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com;;
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke;
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke;;
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654;;
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com;
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com;;
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke;
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke;;
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1;;
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com;
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com;;
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke;
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke;;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6C2F9B6209550EEBD29D175C5E328703328DE669 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ____items_1;
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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Unity.Notifications.Android.AndroidNotificationCenter
struct AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A  : public RuntimeObject
{
};

// Unity.Notifications.Android.AndroidNotificationExtensions
struct AndroidNotificationExtensions_tDD1DEA2215C1127103C5D32508D0AA165DEAA7C9  : public RuntimeObject
{
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

// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>
struct Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____current_3;
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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC 
{
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_3;
	// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::<Importance>k__BackingField
	int32_t ___U3CImportanceU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanBypassDnd>k__BackingField
	bool ___U3CCanBypassDndU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanShowBadge>k__BackingField
	bool ___U3CCanShowBadgeU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableLights>k__BackingField
	bool ___U3CEnableLightsU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableVibration>k__BackingField
	bool ___U3CEnableVibrationU3Ek__BackingField_8;
	// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::<VibrationPattern>k__BackingField
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___U3CVibrationPatternU3Ek__BackingField_9;
	// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::<LockScreenVisibility>k__BackingField
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_10;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
	char* ___U3CDescriptionU3Ek__BackingField_2;
	char* ___U3CGroupU3Ek__BackingField_3;
	int32_t ___U3CImportanceU3Ek__BackingField_4;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_5;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_6;
	int32_t ___U3CEnableLightsU3Ek__BackingField_7;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_8;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_9;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_10;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CDescriptionU3Ek__BackingField_2;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_3;
	int32_t ___U3CImportanceU3Ek__BackingField_4;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_5;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_6;
	int32_t ___U3CEnableLightsU3Ek__BackingField_7;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_8;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_9;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_10;
};

// Unity.Notifications.Android.BigPictureStyle
struct BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948 
{
	// System.String Unity.Notifications.Android.BigPictureStyle::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.BigPictureStyle::<Picture>k__BackingField
	String_t* ___U3CPictureU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.BigPictureStyle::<ContentTitle>k__BackingField
	String_t* ___U3CContentTitleU3Ek__BackingField_2;
	// System.String Unity.Notifications.Android.BigPictureStyle::<ContentDescription>k__BackingField
	String_t* ___U3CContentDescriptionU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.BigPictureStyle::<SummaryText>k__BackingField
	String_t* ___U3CSummaryTextU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.BigPictureStyle::<ShowWhenCollapsed>k__BackingField
	bool ___U3CShowWhenCollapsedU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.BigPictureStyle
struct BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_pinvoke
{
	char* ___U3CLargeIconU3Ek__BackingField_0;
	char* ___U3CPictureU3Ek__BackingField_1;
	char* ___U3CContentTitleU3Ek__BackingField_2;
	char* ___U3CContentDescriptionU3Ek__BackingField_3;
	char* ___U3CSummaryTextU3Ek__BackingField_4;
	int32_t ___U3CShowWhenCollapsedU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Unity.Notifications.Android.BigPictureStyle
struct BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_com
{
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_0;
	Il2CppChar* ___U3CPictureU3Ek__BackingField_1;
	Il2CppChar* ___U3CContentTitleU3Ek__BackingField_2;
	Il2CppChar* ___U3CContentDescriptionU3Ek__BackingField_3;
	Il2CppChar* ___U3CSummaryTextU3Ek__BackingField_4;
	int32_t ___U3CShowWhenCollapsedU3Ek__BackingField_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Unity.Notifications.Android.BundleJni
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701 
{
	// System.String Unity.Notifications.Android.BundleJni::containsKey
	String_t* ___containsKey_0;
	// System.String Unity.Notifications.Android.BundleJni::getBoolean
	String_t* ___getBoolean_1;
	// System.String Unity.Notifications.Android.BundleJni::getInt
	String_t* ___getInt_2;
	// System.String Unity.Notifications.Android.BundleJni::getLong
	String_t* ___getLong_3;
	// System.String Unity.Notifications.Android.BundleJni::getString
	String_t* ___getString_4;
	// System.String Unity.Notifications.Android.BundleJni::putBoolean
	String_t* ___putBoolean_5;
	// System.String Unity.Notifications.Android.BundleJni::putInt
	String_t* ___putInt_6;
	// System.String Unity.Notifications.Android.BundleJni::putLong
	String_t* ___putLong_7;
	// System.String Unity.Notifications.Android.BundleJni::putString
	String_t* ___putString_8;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.BundleJni
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke
{
	char* ___containsKey_0;
	char* ___getBoolean_1;
	char* ___getInt_2;
	char* ___getLong_3;
	char* ___getString_4;
	char* ___putBoolean_5;
	char* ___putInt_6;
	char* ___putLong_7;
	char* ___putString_8;
};
// Native definition for COM marshalling of Unity.Notifications.Android.BundleJni
struct BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com
{
	Il2CppChar* ___containsKey_0;
	Il2CppChar* ___getBoolean_1;
	Il2CppChar* ___getInt_2;
	Il2CppChar* ___getLong_3;
	Il2CppChar* ___getString_4;
	Il2CppChar* ___putBoolean_5;
	Il2CppChar* ___putInt_6;
	Il2CppChar* ___putLong_7;
	Il2CppChar* ___putString_8;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Unity.Notifications.Android.NotificationBuilderJni
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752 
{
	// System.String Unity.Notifications.Android.NotificationBuilderJni::getExtras
	String_t* ___getExtras_0;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setContentTitle
	String_t* ___setContentTitle_1;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setContentText
	String_t* ___setContentText_2;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setAutoCancel
	String_t* ___setAutoCancel_3;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setNumber
	String_t* ___setNumber_4;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setStyle
	String_t* ___setStyle_5;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setWhen
	String_t* ___setWhen_6;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setGroup
	String_t* ___setGroup_7;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setGroupSummary
	String_t* ___setGroupSummary_8;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setSortKey
	String_t* ___setSortKey_9;
	// System.String Unity.Notifications.Android.NotificationBuilderJni::setShowWhen
	String_t* ___setShowWhen_10;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.NotificationBuilderJni
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke
{
	char* ___getExtras_0;
	char* ___setContentTitle_1;
	char* ___setContentText_2;
	char* ___setAutoCancel_3;
	char* ___setNumber_4;
	char* ___setStyle_5;
	char* ___setWhen_6;
	char* ___setGroup_7;
	char* ___setGroupSummary_8;
	char* ___setSortKey_9;
	char* ___setShowWhen_10;
};
// Native definition for COM marshalling of Unity.Notifications.Android.NotificationBuilderJni
struct NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com
{
	Il2CppChar* ___getExtras_0;
	Il2CppChar* ___setContentTitle_1;
	Il2CppChar* ___setContentText_2;
	Il2CppChar* ___setAutoCancel_3;
	Il2CppChar* ___setNumber_4;
	Il2CppChar* ___setStyle_5;
	Il2CppChar* ___setWhen_6;
	Il2CppChar* ___setGroup_7;
	Il2CppChar* ___setGroupSummary_8;
	Il2CppChar* ___setSortKey_9;
	Il2CppChar* ___setShowWhen_10;
};

// Unity.Notifications.Android.NotificationJni
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654 
{
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::EXTRA_TITLE
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_TITLE_0;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::EXTRA_TEXT
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_TEXT_1;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::EXTRA_SHOW_CHRONOMETER
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_SHOW_CHRONOMETER_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::EXTRA_BIG_TEXT
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_BIG_TEXT_3;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::EXTRA_SHOW_WHEN
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_SHOW_WHEN_4;
	// System.Int32 Unity.Notifications.Android.NotificationJni::FLAG_AUTO_CANCEL
	int32_t ___FLAG_AUTO_CANCEL_5;
	// System.Int32 Unity.Notifications.Android.NotificationJni::FLAG_GROUP_SUMMARY
	int32_t ___FLAG_GROUP_SUMMARY_6;
	// System.String Unity.Notifications.Android.NotificationJni::getGroup
	String_t* ___getGroup_7;
	// System.String Unity.Notifications.Android.NotificationJni::getSortKey
	String_t* ___getSortKey_8;
	// System.String Unity.Notifications.Android.NotificationJni::extras
	String_t* ___extras_9;
	// System.String Unity.Notifications.Android.NotificationJni::flags
	String_t* ___flags_10;
	// System.String Unity.Notifications.Android.NotificationJni::number
	String_t* ___number_11;
	// System.String Unity.Notifications.Android.NotificationJni::when
	String_t* ___when_12;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.NotificationJni
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_TITLE_0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_TEXT_1;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_SHOW_CHRONOMETER_2;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_BIG_TEXT_3;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_SHOW_WHEN_4;
	int32_t ___FLAG_AUTO_CANCEL_5;
	int32_t ___FLAG_GROUP_SUMMARY_6;
	char* ___getGroup_7;
	char* ___getSortKey_8;
	char* ___extras_9;
	char* ___flags_10;
	char* ___number_11;
	char* ___when_12;
};
// Native definition for COM marshalling of Unity.Notifications.Android.NotificationJni
struct NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_TITLE_0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_TEXT_1;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_SHOW_CHRONOMETER_2;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_BIG_TEXT_3;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___EXTRA_SHOW_WHEN_4;
	int32_t ___FLAG_AUTO_CANCEL_5;
	int32_t ___FLAG_GROUP_SUMMARY_6;
	Il2CppChar* ___getGroup_7;
	Il2CppChar* ___getSortKey_8;
	Il2CppChar* ___extras_9;
	Il2CppChar* ___flags_10;
	Il2CppChar* ___number_11;
	Il2CppChar* ___when_12;
};

// Unity.Notifications.Android.NotificationManagerJni
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1 
{
	// UnityEngine.AndroidJavaClass Unity.Notifications.Android.NotificationManagerJni::klass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___klass_0;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::self
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___self_1;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_FIRE_TIME
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_FIRE_TIME_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_ID
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_ID_3;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_INTENT_DATA
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_INTENT_DATA_4;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_LARGE_ICON
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_LARGE_ICON_5;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_REPEAT_INTERVAL
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_REPEAT_INTERVAL_6;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_NOTIFICATION
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_NOTIFICATION_7;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_SMALL_ICON
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SMALL_ICON_8;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_SHOW_IN_FOREGROUND
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SHOW_IN_FOREGROUND_9;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationManagerJni::KEY_BIG_PICTURE
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_BIG_PICTURE_10;
	// System.String Unity.Notifications.Android.NotificationManagerJni::KEY_BIG_LARGE_ICON
	String_t* ___KEY_BIG_LARGE_ICON_11;
	// System.String Unity.Notifications.Android.NotificationManagerJni::KEY_BIG_CONTENT_TITLE
	String_t* ___KEY_BIG_CONTENT_TITLE_12;
	// System.String Unity.Notifications.Android.NotificationManagerJni::KEY_BIG_SUMMARY_TEXT
	String_t* ___KEY_BIG_SUMMARY_TEXT_13;
	// System.String Unity.Notifications.Android.NotificationManagerJni::KEY_BIG_CONTENT_DESCRIPTION
	String_t* ___KEY_BIG_CONTENT_DESCRIPTION_14;
	// System.String Unity.Notifications.Android.NotificationManagerJni::KEY_BIG_SHOW_WHEN_COLLAPSED
	String_t* ___KEY_BIG_SHOW_WHEN_COLLAPSED_15;
	// System.String Unity.Notifications.Android.NotificationManagerJni::getNotificationFromIntent
	String_t* ___getNotificationFromIntent_16;
	// System.String Unity.Notifications.Android.NotificationManagerJni::setNotificationIcon
	String_t* ___setNotificationIcon_17;
	// System.String Unity.Notifications.Android.NotificationManagerJni::setNotificationColor
	String_t* ___setNotificationColor_18;
	// System.String Unity.Notifications.Android.NotificationManagerJni::getNotificationColor
	String_t* ___getNotificationColor_19;
	// System.String Unity.Notifications.Android.NotificationManagerJni::setNotificationUsesChronometer
	String_t* ___setNotificationUsesChronometer_20;
	// System.String Unity.Notifications.Android.NotificationManagerJni::setNotificationGroupAlertBehavior
	String_t* ___setNotificationGroupAlertBehavior_21;
	// System.String Unity.Notifications.Android.NotificationManagerJni::getNotificationGroupAlertBehavior
	String_t* ___getNotificationGroupAlertBehavior_22;
	// System.String Unity.Notifications.Android.NotificationManagerJni::getNotificationChannelId
	String_t* ___getNotificationChannelId_23;
	// System.String Unity.Notifications.Android.NotificationManagerJni::scheduleNotification
	String_t* ___scheduleNotification_24;
	// System.String Unity.Notifications.Android.NotificationManagerJni::createNotificationBuilder
	String_t* ___createNotificationBuilder_25;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.NotificationManagerJni
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___klass_0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___self_1;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_FIRE_TIME_2;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_ID_3;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_INTENT_DATA_4;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_LARGE_ICON_5;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_REPEAT_INTERVAL_6;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_NOTIFICATION_7;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SMALL_ICON_8;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SHOW_IN_FOREGROUND_9;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_BIG_PICTURE_10;
	char* ___KEY_BIG_LARGE_ICON_11;
	char* ___KEY_BIG_CONTENT_TITLE_12;
	char* ___KEY_BIG_SUMMARY_TEXT_13;
	char* ___KEY_BIG_CONTENT_DESCRIPTION_14;
	char* ___KEY_BIG_SHOW_WHEN_COLLAPSED_15;
	char* ___getNotificationFromIntent_16;
	char* ___setNotificationIcon_17;
	char* ___setNotificationColor_18;
	char* ___getNotificationColor_19;
	char* ___setNotificationUsesChronometer_20;
	char* ___setNotificationGroupAlertBehavior_21;
	char* ___getNotificationGroupAlertBehavior_22;
	char* ___getNotificationChannelId_23;
	char* ___scheduleNotification_24;
	char* ___createNotificationBuilder_25;
};
// Native definition for COM marshalling of Unity.Notifications.Android.NotificationManagerJni
struct NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___klass_0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___self_1;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_FIRE_TIME_2;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_ID_3;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_INTENT_DATA_4;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_LARGE_ICON_5;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_REPEAT_INTERVAL_6;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_NOTIFICATION_7;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SMALL_ICON_8;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SHOW_IN_FOREGROUND_9;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_BIG_PICTURE_10;
	Il2CppChar* ___KEY_BIG_LARGE_ICON_11;
	Il2CppChar* ___KEY_BIG_CONTENT_TITLE_12;
	Il2CppChar* ___KEY_BIG_SUMMARY_TEXT_13;
	Il2CppChar* ___KEY_BIG_CONTENT_DESCRIPTION_14;
	Il2CppChar* ___KEY_BIG_SHOW_WHEN_COLLAPSED_15;
	Il2CppChar* ___getNotificationFromIntent_16;
	Il2CppChar* ___setNotificationIcon_17;
	Il2CppChar* ___setNotificationColor_18;
	Il2CppChar* ___getNotificationColor_19;
	Il2CppChar* ___setNotificationUsesChronometer_20;
	Il2CppChar* ___setNotificationGroupAlertBehavior_21;
	Il2CppChar* ___getNotificationGroupAlertBehavior_22;
	Il2CppChar* ___getNotificationChannelId_23;
	Il2CppChar* ___scheduleNotification_24;
	Il2CppChar* ___createNotificationBuilder_25;
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

// System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>
struct Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948 ___value_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
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

// Unity.Notifications.Android.JniApi
struct JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E 
{
	// Unity.Notifications.Android.NotificationManagerJni Unity.Notifications.Android.JniApi::NotificationManager
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1 ___NotificationManager_0;
	// Unity.Notifications.Android.NotificationJni Unity.Notifications.Android.JniApi::Notification
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654 ___Notification_1;
	// Unity.Notifications.Android.NotificationBuilderJni Unity.Notifications.Android.JniApi::NotificationBuilder
	NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752 ___NotificationBuilder_2;
	// Unity.Notifications.Android.BundleJni Unity.Notifications.Android.JniApi::Bundle
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701 ___Bundle_3;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.JniApi
struct JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_pinvoke
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke ___NotificationManager_0;
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke ___Notification_1;
	NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke ___NotificationBuilder_2;
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke ___Bundle_3;
};
// Native definition for COM marshalling of Unity.Notifications.Android.JniApi
struct JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_com
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com ___NotificationManager_0;
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com ___Notification_1;
	NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com ___NotificationBuilder_2;
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com ___Bundle_3;
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

// Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 
{
	// System.String Unity.Notifications.Android.AndroidNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotification::<SmallIcon>k__BackingField
	String_t* ___U3CSmallIconU3Ek__BackingField_2;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::<FireTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.AndroidNotification::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_4;
	// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::<Style>k__BackingField
	int32_t ___U3CStyleU3Ek__BackingField_5;
	// System.Int32 Unity.Notifications.Android.AndroidNotification::<Number>k__BackingField
	int32_t ___U3CNumberU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShouldAutoCancel>k__BackingField
	bool ___U3CShouldAutoCancelU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<UsesStopwatch>k__BackingField
	bool ___U3CUsesStopwatchU3Ek__BackingField_8;
	// System.String Unity.Notifications.Android.AndroidNotification::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_9;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<GroupSummary>k__BackingField
	bool ___U3CGroupSummaryU3Ek__BackingField_10;
	// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::<GroupAlertBehaviour>k__BackingField
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	// System.String Unity.Notifications.Android.AndroidNotification::<SortKey>k__BackingField
	String_t* ___U3CSortKeyU3Ek__BackingField_12;
	// System.String Unity.Notifications.Android.AndroidNotification::<IntentData>k__BackingField
	String_t* ___U3CIntentDataU3Ek__BackingField_13;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowTimestamp>k__BackingField
	bool ___U3CShowTimestampU3Ek__BackingField_14;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowCustomTimestamp>k__BackingField
	bool ___U3CShowCustomTimestampU3Ek__BackingField_15;
	// UnityEngine.Color Unity.Notifications.Android.AndroidNotification::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	// System.TimeSpan Unity.Notifications.Android.AndroidNotification::m_RepeatInterval
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::m_CustomTimestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::m_SilentInForeground
	bool ___m_SilentInForeground_19;
	// System.Nullable`1<Unity.Notifications.Android.BigPictureStyle> Unity.Notifications.Android.AndroidNotification::m_BigPictureStyle
	Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F ___m_BigPictureStyle_20;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke
{
	char* ___U3CTitleU3Ek__BackingField_0;
	char* ___U3CTextU3Ek__BackingField_1;
	char* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	char* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	char* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	char* ___U3CSortKeyU3Ek__BackingField_12;
	char* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
	int32_t ___m_SilentInForeground_19;
	Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F ___m_BigPictureStyle_20;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com
{
	Il2CppChar* ___U3CTitleU3Ek__BackingField_0;
	Il2CppChar* ___U3CTextU3Ek__BackingField_1;
	Il2CppChar* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	Il2CppChar* ___U3CSortKeyU3Ek__BackingField_12;
	Il2CppChar* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
	int32_t ___m_SilentInForeground_19;
	Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F ___m_BigPictureStyle_20;
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

// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729  : public RuntimeObject
{
	// System.Int32 Unity.Notifications.Android.AndroidNotificationIntentData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationIntentData::<Channel>k__BackingField
	String_t* ___U3CChannelU3Ek__BackingField_1;
	// Unity.Notifications.Android.AndroidNotification Unity.Notifications.Android.AndroidNotificationIntentData::<Notification>k__BackingField
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___U3CNotificationU3Ek__BackingField_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationIntentData::<NativeNotification>k__BackingField
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___U3CNativeNotificationU3Ek__BackingField_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::m_ReceivedNotificationQueue
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* ___m_ReceivedNotificationQueue_5;
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::m_ReceivedNotificationList
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* ___m_ReceivedNotificationList_6;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Unity.Notifications.Android.AndroidNotificationCenter
struct AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields
{
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::API_NOTIFICATIONS_CAN_BE_BLOCKED
	int32_t ___API_NOTIFICATIONS_CAN_BE_BLOCKED_0;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::API_POST_NOTIFICATIONS_PERMISSION_REQUIRED
	int32_t ___API_POST_NOTIFICATIONS_PERMISSION_REQUIRED_1;
	// System.String Unity.Notifications.Android.AndroidNotificationCenter::PERMISSION_POST_NOTIFICATIONS
	String_t* ___PERMISSION_POST_NOTIFICATIONS_2;
	// System.String Unity.Notifications.Android.AndroidNotificationCenter::SETTING_POST_NOTIFICATIONS_PERMISSION
	String_t* ___SETTING_POST_NOTIFICATIONS_PERMISSION_3;
	// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback Unity.Notifications.Android.AndroidNotificationCenter::OnNotificationReceived
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* ___OnNotificationReceived_4;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_CurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___s_CurrentActivity_5;
	// Unity.Notifications.Android.JniApi Unity.Notifications.Android.AndroidNotificationCenter::s_Jni
	JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E ___s_Jni_6;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::s_DeviceApiLevel
	int32_t ___s_DeviceApiLevel_7;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::s_TargetApiLevel
	int32_t ___s_TargetApiLevel_8;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::s_Initialized
	bool ___s_Initialized_9;
};

// Unity.Notifications.Android.AndroidNotificationCenter

// Unity.Notifications.Android.AndroidNotificationExtensions

// Unity.Notifications.Android.AndroidNotificationExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields
{
	// Unity.Notifications.Android.AndroidNotificationCenter/<>c Unity.Notifications.Android.AndroidNotificationCenter/<>c::<>9
	U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* ___U3CU3E9_0;
};

// Unity.Notifications.Android.AndroidNotificationCenter/<>c

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// Unity.Notifications.Android.AndroidNotificationChannel

// Unity.Notifications.Android.AndroidNotificationChannel

// Unity.Notifications.Android.BigPictureStyle

// Unity.Notifications.Android.BigPictureStyle

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Unity.Notifications.Android.BundleJni

// Unity.Notifications.Android.BundleJni

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.DateTime
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

// System.DateTime

// System.Double

// System.Double

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

// Unity.Notifications.Android.NotificationBuilderJni

// Unity.Notifications.Android.NotificationBuilderJni

// Unity.Notifications.Android.NotificationJni

// Unity.Notifications.Android.NotificationJni

// Unity.Notifications.Android.NotificationManagerJni

// Unity.Notifications.Android.NotificationManagerJni

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>

// System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<System.TimeSpan>

// System.Nullable`1<System.TimeSpan>

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Unity.Notifications.Android.JniApi

// Unity.Notifications.Android.JniApi

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Notifications.Android.AndroidNotification

// Unity.Notifications.Android.AndroidNotification

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Unity.Notifications.Android.NotificationCallback

// Unity.Notifications.Android.NotificationCallback

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

// Unity.Notifications.Android.AndroidNotificationIntentData

// Unity.Notifications.Android.AndroidNotificationIntentData

// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback

// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields
{
	// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::instance
	AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* ___instance_4;
};

// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
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

IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_pinvoke(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_pinvoke_back(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke& marshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled);
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_pinvoke_cleanup(NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_pinvoke(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_pinvoke_back(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke& marshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled);
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_pinvoke_cleanup(NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_pinvoke(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_pinvoke_back(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke& marshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled);
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_pinvoke_cleanup(NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_pinvoke(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_pinvoke_back(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke& marshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled);
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_pinvoke_cleanup(BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_com(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_com_back(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com& marshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled);
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_com_cleanup(NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_com(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_com_back(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com& marshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled);
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_com_cleanup(NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_com(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_com_back(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com& marshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled);
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_com_cleanup(NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_com(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_com_back(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com& marshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled);
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_com_cleanup(BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com& marshaled);

// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_gshared_inline (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int64>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596_gshared (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* __this, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void Unity.Notifications.Android.BigPictureStyle::set_LargeIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_LargeIcon_m650AA29718800E5C1C7821E1C854007F6FFA4109_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.BigPictureStyle::set_Picture(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_Picture_m41C910CF0EB6CAD5E4D267FA924253450D046FDD_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.BigPictureStyle::set_ContentTitle(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_ContentTitle_mC20D870851C6B6D368B45FF04BC21FF09CE5DFCC_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.BigPictureStyle::set_ContentDescription(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_ContentDescription_m666A2D473FF1DB56A4FDCB0A07DE7421ED5B433A_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.BigPictureStyle::set_SummaryText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_SummaryText_m9C4A2C8EACB08930CD64D58D0E24126D4BFF3191_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.BigPictureStyle::set_ShowWhenCollapsed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_ShowWhenCollapsed_m98CE8B7C9AC730D46E7F207877EC576928F41F6D_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20 (int64_t ___0_timeSpan, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowCustomTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_CustomTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowInForeground_m71F7080AA848A067108E6E59D5028BD28EEBF5C9 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_inline (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F*, const RuntimeMethod*))Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_gshared_inline)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_BigPicture(System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_BigPicture_mEC33B3C89C44985CD8BF638EFEFD987241AA3349 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationCallback::onSentNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback_onSentNotification_m48606F004B51A51DAFD8700939BDDA33C7DDCF5F (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaProxy_Invoke_mCAE9C5E669AD50DE372494E12224FF1F31A43F1D (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_methodName, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___1_javaArgs, const RuntimeMethod* method) ;
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m5FE30FC8FD86F26AD0AC5694A43494164E0D7B55 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Void Unity.Notifications.Android.NotificationManagerJni::CollectMethods(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManagerJni_CollectMethods_m4D6DB433A2518E1A2F9462A2386368D4CE76546F (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationManagerJni::.ctor(UnityEngine.AndroidJavaClass,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManagerJni__ctor_m6F37E4CF31D26173F6772F40D1ACBFEE5AF4B589 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_obj, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.JniApi::FindMethod(UnityEngine.AndroidJavaClass,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, String_t* ___1_name, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AndroidNotificationExtensions_ToColor_m5C7C27A8A70FA43FC6904E6467CB728DBB0DD7B8 (int32_t ___0_color, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
inline void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared)(__this, ___0_value, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.NotificationManagerJni::GetNotificationColor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 NotificationManagerJni_GetNotificationColor_m6C7506EFFFCE6C1A77ABF9C6005F23E00D760892 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Int32 Unity.Notifications.Android.NotificationManagerJni::GetNotificationGroupAlertBehavior(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotificationManagerJni_GetNotificationGroupAlertBehavior_m63669F0CF71CD90554697607A0E02623F4DB7D89 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.String Unity.Notifications.Android.NotificationManagerJni::GetNotificationChannelId(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationManagerJni_GetNotificationChannelId_mD3940568F0AA0432330365A436527C7CC73628B8 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Group()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Group_m437B5A0AF019C5C9DB14B9075B07F85B8F772687_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationManagerJni::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManagerJni_RegisterNotificationChannel_m2287717194672598268CF5FEFFEC0FAB88302EFB (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___0_channel, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationJni::CollectConstants(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectConstants_m0853BC8F98965E5D001D410F923F40F0619A4529 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationJni::CollectMethods(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectMethods_m6700019E87EBC573F518A39DC9962E2953FD5A92 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationJni::CollectFields(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectFields_mE9F7C32CE3466DD39AE4FB8275ABDFBF0999DDDB (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationJni::CollectJni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectJni_m928D07CB1F88B744F74D9769C2D5C41C6D3D8CED (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared)(__this, ___0_fieldName, method);
}
// System.String Unity.Notifications.Android.JniApi::FindField(UnityEngine.AndroidJavaClass,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JniApi_FindField_m12D0D092AD2A6D441E5E9A46F05170021B30E1DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, String_t* ___1_name, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___0_fieldName, method);
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::Extras(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NotificationJni_Extras_m07C4106952429861A98249AF07DD3881CA28FE6B (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
inline int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared)(__this, ___0_fieldName, method);
}
// System.Int32 Unity.Notifications.Android.NotificationJni::Flags(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotificationJni_Flags_mB83386B5DD4AB41A11C764C0B57DFE8B3897F657 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.Android.NotificationJni::Number(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotificationJni_Number_m04C1760895E6D9FE5334CADE9A79F479EBB7CE8D (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.String Unity.Notifications.Android.NotificationJni::GetGroup(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationJni_GetGroup_mD319C77393EBCA352701EBAFFA186B26ED9D490A (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.NotificationJni::GetSortKey(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationJni_GetSortKey_mFC8EA047FA620FCC08740F51D225A49508479624 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int64>(System.String)
inline int64_t AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_gshared)(__this, ___0_fieldName, method);
}
// System.Int64 Unity.Notifications.Android.NotificationJni::When(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NotificationJni_When_m2B45ECE7EED2AE4943FF4F75AEF79B2DEE84F649 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.NotificationBuilderJni::CollectJni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBuilderJni_CollectJni_mEF05C194053743F75C33AD923E7719705C3754A7 (NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.BundleJni::CollectJni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundleJni_CollectJni_m0A3A53F366A67BC5E2118E63A74F87368E53E415 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Boolean Unity.Notifications.Android.BundleJni::ContainsKey(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundleJni_ContainsKey_m97F4A86715C874CC0C5E94A6B678943D3B11BC38 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.BundleJni::GetBoolean(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, bool ___2_defaultValue, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.BundleJni::GetBoolean(UnityEngine.AndroidJavaObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundleJni_GetBoolean_m4E8272A566160C74CB02454B7B6D6456C2BEDCCA (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, String_t* ___1_key, bool ___2_defaultValue, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.Android.BundleJni::GetInt(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BundleJni_GetInt_mB95B41F2EA9D979BF0895F7ACA7EEA85663BF963 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, int32_t ___2_defaultValue, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Int64 Unity.Notifications.Android.BundleJni::GetLong(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BundleJni_GetLong_m7CFD473890596791A03CF1F4BB3B6924149AFD15 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, int64_t ___2_defaultValue, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.BundleJni::GetString(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.BundleJni::GetString(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, String_t* ___1_key, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.JniApi::.ctor(UnityEngine.AndroidJavaClass,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JniApi__ctor_m4B0A801C84343FA62CEED8A6DAFBADDA17E67491 (JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_notificationManagerClass, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_notificationManager, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher>()
inline AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m48B6FEB30BE7B1DD1981F178B417486ADE9E709A (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13 (int64_t ___0_dateTime, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___0_value, method);
}
// System.Void System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>::.ctor(T)
inline void Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596 (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* __this, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F*, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948, const RuntimeMethod*))Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596_gshared)(__this, ___0_value, method);
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_mC3532E41409A2AD93B89C88F6E52E12AC064E348 (int32_t ___0_groupAlertBehaviour, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mC71DBF52CCA5391F4F0D04F329F96E834E847383 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, int32_t ___0_id, String_t* ___1_channelId, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___2_notification, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::set_NativeNotification(UnityEngine.AndroidJavaObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74_inline (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_value, const RuntimeMethod* method) ;
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notificationObj, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_inline (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m1C6581A2A364B5F84236592BEE8C44D9C06E356B (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6E71531692B5D59264A9AB9B2800CA786AD38E37 (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, int32_t ___7_kind, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775 (double ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Add(T)
inline void List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_inline (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::get_Count()
inline int32_t List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_inline (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::GetEnumerator()
inline Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::Dispose()
inline void Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::get_Current()
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_inline (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090* __this, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mBAD7E5C376AA4F1AE5823E333F17F784D5191B98 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::MoveNext()
inline bool Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Clear()
inline void List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_inline (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::.ctor()
inline void List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390 (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: Unity.Notifications.Android.BigPictureStyle
IL2CPP_EXTERN_C void BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshal_pinvoke(const BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948& unmarshaled, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CLargeIconU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CLargeIconU3Ek__BackingField_0);
	marshaled.___U3CPictureU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CPictureU3Ek__BackingField_1);
	marshaled.___U3CContentTitleU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CContentTitleU3Ek__BackingField_2);
	marshaled.___U3CContentDescriptionU3Ek__BackingField_3 = il2cpp_codegen_marshal_string(unmarshaled.___U3CContentDescriptionU3Ek__BackingField_3);
	marshaled.___U3CSummaryTextU3Ek__BackingField_4 = il2cpp_codegen_marshal_string(unmarshaled.___U3CSummaryTextU3Ek__BackingField_4);
	marshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5);
}
IL2CPP_EXTERN_C void BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshal_pinvoke_back(const BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_pinvoke& marshaled, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948& unmarshaled)
{
	unmarshaled.___U3CLargeIconU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CLargeIconU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CLargeIconU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CLargeIconU3Ek__BackingField_0));
	unmarshaled.___U3CPictureU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CPictureU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CPictureU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CPictureU3Ek__BackingField_1));
	unmarshaled.___U3CContentTitleU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CContentTitleU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CContentTitleU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CContentTitleU3Ek__BackingField_2));
	unmarshaled.___U3CContentDescriptionU3Ek__BackingField_3 = il2cpp_codegen_marshal_string_result(marshaled.___U3CContentDescriptionU3Ek__BackingField_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CContentDescriptionU3Ek__BackingField_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CContentDescriptionU3Ek__BackingField_3));
	unmarshaled.___U3CSummaryTextU3Ek__BackingField_4 = il2cpp_codegen_marshal_string_result(marshaled.___U3CSummaryTextU3Ek__BackingField_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSummaryTextU3Ek__BackingField_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CSummaryTextU3Ek__BackingField_4));
	bool unmarshaledU3CShowWhenCollapsedU3Ek__BackingField_temp_5 = false;
	unmarshaledU3CShowWhenCollapsedU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5);
	unmarshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5 = unmarshaledU3CShowWhenCollapsedU3Ek__BackingField_temp_5;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.BigPictureStyle
IL2CPP_EXTERN_C void BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshal_pinvoke_cleanup(BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CLargeIconU3Ek__BackingField_0);
	marshaled.___U3CLargeIconU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CPictureU3Ek__BackingField_1);
	marshaled.___U3CPictureU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CContentTitleU3Ek__BackingField_2);
	marshaled.___U3CContentTitleU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CContentDescriptionU3Ek__BackingField_3);
	marshaled.___U3CContentDescriptionU3Ek__BackingField_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CSummaryTextU3Ek__BackingField_4);
	marshaled.___U3CSummaryTextU3Ek__BackingField_4 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.BigPictureStyle
IL2CPP_EXTERN_C void BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshal_com(const BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948& unmarshaled, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_com& marshaled)
{
	marshaled.___U3CLargeIconU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CLargeIconU3Ek__BackingField_0);
	marshaled.___U3CPictureU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CPictureU3Ek__BackingField_1);
	marshaled.___U3CContentTitleU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CContentTitleU3Ek__BackingField_2);
	marshaled.___U3CContentDescriptionU3Ek__BackingField_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CContentDescriptionU3Ek__BackingField_3);
	marshaled.___U3CSummaryTextU3Ek__BackingField_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CSummaryTextU3Ek__BackingField_4);
	marshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5);
}
IL2CPP_EXTERN_C void BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshal_com_back(const BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_com& marshaled, BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948& unmarshaled)
{
	unmarshaled.___U3CLargeIconU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CLargeIconU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CLargeIconU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CLargeIconU3Ek__BackingField_0));
	unmarshaled.___U3CPictureU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CPictureU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CPictureU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CPictureU3Ek__BackingField_1));
	unmarshaled.___U3CContentTitleU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CContentTitleU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CContentTitleU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CContentTitleU3Ek__BackingField_2));
	unmarshaled.___U3CContentDescriptionU3Ek__BackingField_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CContentDescriptionU3Ek__BackingField_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CContentDescriptionU3Ek__BackingField_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CContentDescriptionU3Ek__BackingField_3));
	unmarshaled.___U3CSummaryTextU3Ek__BackingField_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSummaryTextU3Ek__BackingField_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CSummaryTextU3Ek__BackingField_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CSummaryTextU3Ek__BackingField_4));
	bool unmarshaledU3CShowWhenCollapsedU3Ek__BackingField_temp_5 = false;
	unmarshaledU3CShowWhenCollapsedU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5);
	unmarshaled.___U3CShowWhenCollapsedU3Ek__BackingField_5 = unmarshaledU3CShowWhenCollapsedU3Ek__BackingField_temp_5;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.BigPictureStyle
IL2CPP_EXTERN_C void BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshal_com_cleanup(BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CLargeIconU3Ek__BackingField_0);
	marshaled.___U3CLargeIconU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CPictureU3Ek__BackingField_1);
	marshaled.___U3CPictureU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CContentTitleU3Ek__BackingField_2);
	marshaled.___U3CContentTitleU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CContentDescriptionU3Ek__BackingField_3);
	marshaled.___U3CContentDescriptionU3Ek__BackingField_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CSummaryTextU3Ek__BackingField_4);
	marshaled.___U3CSummaryTextU3Ek__BackingField_4 = NULL;
}
// System.Void Unity.Notifications.Android.BigPictureStyle::set_LargeIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigPictureStyle_set_LargeIcon_m650AA29718800E5C1C7821E1C854007F6FFA4109 (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CLargeIconU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigPictureStyle_set_LargeIcon_m650AA29718800E5C1C7821E1C854007F6FFA4109_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948*>(__this + _offset);
	BigPictureStyle_set_LargeIcon_m650AA29718800E5C1C7821E1C854007F6FFA4109_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.BigPictureStyle::set_Picture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigPictureStyle_set_Picture_m41C910CF0EB6CAD5E4D267FA924253450D046FDD (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Picture { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPictureU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPictureU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigPictureStyle_set_Picture_m41C910CF0EB6CAD5E4D267FA924253450D046FDD_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948*>(__this + _offset);
	BigPictureStyle_set_Picture_m41C910CF0EB6CAD5E4D267FA924253450D046FDD_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.BigPictureStyle::set_ContentTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigPictureStyle_set_ContentTitle_mC20D870851C6B6D368B45FF04BC21FF09CE5DFCC (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ContentTitle { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CContentTitleU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentTitleU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigPictureStyle_set_ContentTitle_mC20D870851C6B6D368B45FF04BC21FF09CE5DFCC_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948*>(__this + _offset);
	BigPictureStyle_set_ContentTitle_mC20D870851C6B6D368B45FF04BC21FF09CE5DFCC_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.BigPictureStyle::set_ContentDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigPictureStyle_set_ContentDescription_m666A2D473FF1DB56A4FDCB0A07DE7421ED5B433A (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ContentDescription { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CContentDescriptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentDescriptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigPictureStyle_set_ContentDescription_m666A2D473FF1DB56A4FDCB0A07DE7421ED5B433A_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948*>(__this + _offset);
	BigPictureStyle_set_ContentDescription_m666A2D473FF1DB56A4FDCB0A07DE7421ED5B433A_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.BigPictureStyle::set_SummaryText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigPictureStyle_set_SummaryText_m9C4A2C8EACB08930CD64D58D0E24126D4BFF3191 (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SummaryText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSummaryTextU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSummaryTextU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BigPictureStyle_set_SummaryText_m9C4A2C8EACB08930CD64D58D0E24126D4BFF3191_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948*>(__this + _offset);
	BigPictureStyle_set_SummaryText_m9C4A2C8EACB08930CD64D58D0E24126D4BFF3191_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.BigPictureStyle::set_ShowWhenCollapsed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigPictureStyle_set_ShowWhenCollapsed_m98CE8B7C9AC730D46E7F207877EC576928F41F6D (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShowWhenCollapsed { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowWhenCollapsedU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void BigPictureStyle_set_ShowWhenCollapsed_m98CE8B7C9AC730D46E7F207877EC576928F41F6D_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948*>(__this + _offset);
	BigPictureStyle_set_ShowWhenCollapsed_m98CE8B7C9AC730D46E7F207877EC576928F41F6D_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_pinvoke(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_pinvoke_back(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke& marshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_pinvoke_cleanup(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_com(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_com_back(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com& marshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_com_cleanup(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com& marshaled)
{
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTitleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSmallIconU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSmallIconU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CFireTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B2_0 = NULL;
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B1_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B3_1 = NULL;
	{
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline((&___0_value), Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20(((int64_t)(-1)), NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0013:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___0_value), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->___m_RepeatInterval_17 = G_B3_0;
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53_AdjustorThunk (RuntimeObject* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CLargeIconU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline(_thisAdjusted, ___0_value, method);
}
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->___U3CStyleU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CStyleU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B2_0 = NULL;
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B3_1 = NULL;
	{
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___0_value), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_002c;
	}

IL_0025:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___0_value), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_002c:
	{
		G_B3_1->___m_Color_16 = G_B3_0;
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0_AdjustorThunk (RuntimeObject* __this, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CNumberU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShouldAutoCancelU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesStopwatchU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGroupU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGroupU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CGroupSummaryU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGroupAlertBehaviourU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSortKeyU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSortKeyU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIntentDataU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentDataU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowTimestampU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_CustomTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		// ShowCustomTimestamp = true;
		AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline(__this, (bool)1, NULL);
		// m_CustomTimestamp = value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___m_CustomTimestamp_18 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowInForeground_m71F7080AA848A067108E6E59D5028BD28EEBF5C9 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_SilentInForeground = !value;
		bool L_0 = ___0_value;
		__this->___m_SilentInForeground_19 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowInForeground_m71F7080AA848A067108E6E59D5028BD28EEBF5C9_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShowInForeground_m71F7080AA848A067108E6E59D5028BD28EEBF5C9(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_BigPicture(System.Nullable`1<Unity.Notifications.Android.BigPictureStyle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_BigPicture_mEC33B3C89C44985CD8BF638EFEFD987241AA3349 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_BigPictureStyle = value;
		Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F L_0 = ___0_value;
		__this->___m_BigPictureStyle_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_BigPictureStyle_20))->___value_1))->___U3CLargeIconU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_BigPictureStyle_20))->___value_1))->___U3CPictureU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_BigPictureStyle_20))->___value_1))->___U3CContentTitleU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_BigPictureStyle_20))->___value_1))->___U3CContentDescriptionU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_BigPictureStyle_20))->___value_1))->___U3CSummaryTextU3Ek__BackingField_4), (void*)NULL);
		#endif
		// if (m_BigPictureStyle.HasValue && Style == NotificationStyle.None)
		Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* L_1 = (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F*)(&__this->___m_BigPictureStyle_20);
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_inline(L_1, Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3;
		L_3 = AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline(__this, NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Style = NotificationStyle.BigPictureStyle;
		AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline(__this, 1, NULL);
		return;
	}

IL_0024:
	{
		// else if (!m_BigPictureStyle.HasValue && Style == NotificationStyle.BigPictureStyle)
		Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* L_4 = (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F*)(&__this->___m_BigPictureStyle_20);
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_inline(L_4, Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6;
		L_6 = AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline(__this, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}
	{
		// Style = NotificationStyle.None;
		AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline(__this, 0, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_BigPicture_mEC33B3C89C44985CD8BF638EFEFD987241AA3349_AdjustorThunk (RuntimeObject* __this, Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_BigPicture_mEC33B3C89C44985CD8BF638EFEFD987241AA3349(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowCustomTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowCustomTimestampU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m48B6FEB30BE7B1DD1981F178B417486ADE9E709A (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotificationCallback() : base("com.unity.androidnotifications.NotificationCallback")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationCallback::Invoke(System.String,UnityEngine.AndroidJavaObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NotificationCallback_Invoke_m2D75D150F5CE4EF4AF2DC2A810A50920DDA15C67 (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, String_t* ___0_methodName, AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F325E92CAF7A702576200BB93F020E0E67600DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (methodName.Equals("onSentNotification", StringComparison.InvariantCulture) && args != null && args.Length == 1)
		String_t* L_0 = ___0_methodName;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_0, _stringLiteral1F325E92CAF7A702576200BB93F020E0E67600DD, 2, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_2 = ___1_args;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_3 = ___1_args;
		NullCheck(L_3);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// onSentNotification(args[0]);
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_4 = ___1_args;
		NullCheck(L_4);
		int32_t L_5 = 0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NotificationCallback_onSentNotification_m48606F004B51A51DAFD8700939BDDA33C7DDCF5F(__this, L_6, NULL);
		// return null;
		return (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
	}

IL_0022:
	{
		// return base.Invoke(methodName, args);
		String_t* L_7 = ___0_methodName;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_8 = ___1_args;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaProxy_Invoke_mCAE9C5E669AD50DE372494E12224FF1F31A43F1D(__this, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Unity.Notifications.Android.NotificationCallback::onSentNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback_onSentNotification_m48606F004B51A51DAFD8700939BDDA33C7DDCF5F (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	{
		// AndroidReceivedNotificationMainThreadDispatcher.GetInstance().EnqueueReceivedNotification(notification);
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0;
		L_0 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline(NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_notification;
		NullCheck(L_0);
		AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m5FE30FC8FD86F26AD0AC5694A43494164E0D7B55(L_0, L_1, NULL);
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
// Conversion methods for marshalling of: Unity.Notifications.Android.NotificationManagerJni
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_pinvoke(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___klass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'klass' of type 'NotificationManagerJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___klass_0Exception, NULL);
}
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_pinvoke_back(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke& marshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled)
{
	Exception_t* ___klass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'klass' of type 'NotificationManagerJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___klass_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.NotificationManagerJni
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_pinvoke_cleanup(NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.Android.NotificationManagerJni
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_com(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com& marshaled)
{
	Exception_t* ___klass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'klass' of type 'NotificationManagerJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___klass_0Exception, NULL);
}
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_com_back(const NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com& marshaled, NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1& unmarshaled)
{
	Exception_t* ___klass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'klass' of type 'NotificationManagerJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___klass_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.NotificationManagerJni
IL2CPP_EXTERN_C void NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshal_com_cleanup(NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1_marshaled_com& marshaled)
{
}
// System.Void Unity.Notifications.Android.NotificationManagerJni::.ctor(UnityEngine.AndroidJavaClass,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManagerJni__ctor_m6F37E4CF31D26173F6772F40D1ACBFEE5AF4B589 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02312B71918F038AE450FCB0BF85FB35831DC31D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0396C61A0F5BED5C4D163CA34154518A154F9CC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26382D1C6FBEB1D1E3DEFF38694E94AE54023152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7343D57E4FFEB2F5F2EA86484458A6A8752503E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD809A69F87CBD2613B42995560344815E9CE81AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF482701BE7F377C0E33D5638FE26775E87212075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7182F1CC8575A67104E0B04F4657F2F3FF26E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// klass = clazz;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_clazz;
		__this->___klass_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___klass_0), (void*)L_0);
		// self = obj;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___1_obj;
		__this->___self_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___self_1), (void*)L_1);
		// getNotificationFromIntent = default;
		__this->___getNotificationFromIntent_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationFromIntent_16), (void*)(String_t*)NULL);
		// setNotificationIcon = default;
		__this->___setNotificationIcon_17 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationIcon_17), (void*)(String_t*)NULL);
		// setNotificationColor = default;
		__this->___setNotificationColor_18 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationColor_18), (void*)(String_t*)NULL);
		// getNotificationColor = default;
		__this->___getNotificationColor_19 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationColor_19), (void*)(String_t*)NULL);
		// setNotificationUsesChronometer = default;
		__this->___setNotificationUsesChronometer_20 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationUsesChronometer_20), (void*)(String_t*)NULL);
		// setNotificationGroupAlertBehavior = default;
		__this->___setNotificationGroupAlertBehavior_21 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationGroupAlertBehavior_21), (void*)(String_t*)NULL);
		// getNotificationGroupAlertBehavior = default;
		__this->___getNotificationGroupAlertBehavior_22 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationGroupAlertBehavior_22), (void*)(String_t*)NULL);
		// getNotificationChannelId = default;
		__this->___getNotificationChannelId_23 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationChannelId_23), (void*)(String_t*)NULL);
		// scheduleNotification = default;
		__this->___scheduleNotification_24 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scheduleNotification_24), (void*)(String_t*)NULL);
		// createNotificationBuilder = default;
		__this->___createNotificationBuilder_25 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___createNotificationBuilder_25), (void*)(String_t*)NULL);
		// KEY_FIRE_TIME = clazz.GetStatic<AndroidJavaObject>("KEY_FIRE_TIME");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ___0_clazz;
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_FIRE_TIME_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_FIRE_TIME_2), (void*)L_3);
		// KEY_ID = clazz.GetStatic<AndroidJavaObject>("KEY_ID");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ___0_clazz;
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_ID_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_ID_3), (void*)L_5);
		// KEY_INTENT_DATA = clazz.GetStatic<AndroidJavaObject>("KEY_INTENT_DATA");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = ___0_clazz;
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_6, _stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_INTENT_DATA_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_INTENT_DATA_4), (void*)L_7);
		// KEY_LARGE_ICON = clazz.GetStatic<AndroidJavaObject>("KEY_LARGE_ICON");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = ___0_clazz;
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_8, _stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_LARGE_ICON_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_LARGE_ICON_5), (void*)L_9);
		// KEY_REPEAT_INTERVAL = clazz.GetStatic<AndroidJavaObject>("KEY_REPEAT_INTERVAL");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = ___0_clazz;
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_10, _stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_REPEAT_INTERVAL_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_REPEAT_INTERVAL_6), (void*)L_11);
		// KEY_NOTIFICATION = clazz.GetStatic<AndroidJavaObject>("KEY_NOTIFICATION");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = ___0_clazz;
		NullCheck(L_12);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_12, _stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_NOTIFICATION_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_NOTIFICATION_7), (void*)L_13);
		// KEY_SMALL_ICON = clazz.GetStatic<AndroidJavaObject>("KEY_SMALL_ICON");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_14 = ___0_clazz;
		NullCheck(L_14);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15;
		L_15 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_14, _stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_SMALL_ICON_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_SMALL_ICON_8), (void*)L_15);
		// KEY_SHOW_IN_FOREGROUND = clazz.GetStatic<AndroidJavaObject>("KEY_SHOW_IN_FOREGROUND");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16 = ___0_clazz;
		NullCheck(L_16);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
		L_17 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_16, _stringLiteralF7182F1CC8575A67104E0B04F4657F2F3FF26E6F, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_SHOW_IN_FOREGROUND_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_SHOW_IN_FOREGROUND_9), (void*)L_17);
		// KEY_BIG_PICTURE = clazz.GetStatic<AndroidJavaObject>("KEY_BIG_PICTURE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_18 = ___0_clazz;
		NullCheck(L_18);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19;
		L_19 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_18, _stringLiteral26382D1C6FBEB1D1E3DEFF38694E94AE54023152, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___KEY_BIG_PICTURE_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_BIG_PICTURE_10), (void*)L_19);
		// KEY_BIG_LARGE_ICON = clazz.GetStatic<string>("KEY_BIG_LARGE_ICON");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_20 = ___0_clazz;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_20, _stringLiteralD809A69F87CBD2613B42995560344815E9CE81AA, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		__this->___KEY_BIG_LARGE_ICON_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_BIG_LARGE_ICON_11), (void*)L_21);
		// KEY_BIG_CONTENT_TITLE = clazz.GetStatic<string>("KEY_BIG_CONTENT_TITLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_22 = ___0_clazz;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_22, _stringLiteralA7343D57E4FFEB2F5F2EA86484458A6A8752503E, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		__this->___KEY_BIG_CONTENT_TITLE_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_BIG_CONTENT_TITLE_12), (void*)L_23);
		// KEY_BIG_SUMMARY_TEXT = clazz.GetStatic<string>("KEY_BIG_SUMMARY_TEXT");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_24 = ___0_clazz;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_24, _stringLiteral0396C61A0F5BED5C4D163CA34154518A154F9CC5, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		__this->___KEY_BIG_SUMMARY_TEXT_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_BIG_SUMMARY_TEXT_13), (void*)L_25);
		// KEY_BIG_CONTENT_DESCRIPTION = clazz.GetStatic<string>("KEY_BIG_CONTENT_DESCRIPTION");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_26 = ___0_clazz;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_26, _stringLiteralF482701BE7F377C0E33D5638FE26775E87212075, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		__this->___KEY_BIG_CONTENT_DESCRIPTION_14 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_BIG_CONTENT_DESCRIPTION_14), (void*)L_27);
		// KEY_BIG_SHOW_WHEN_COLLAPSED = clazz.GetStatic<string>("KEY_BIG_SHOW_WHEN_COLLAPSED");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_28 = ___0_clazz;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_28, _stringLiteral02312B71918F038AE450FCB0BF85FB35831DC31D, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		__this->___KEY_BIG_SHOW_WHEN_COLLAPSED_15 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KEY_BIG_SHOW_WHEN_COLLAPSED_15), (void*)L_29);
		// CollectMethods(clazz);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_30 = ___0_clazz;
		NotificationManagerJni_CollectMethods_m4D6DB433A2518E1A2F9462A2386368D4CE76546F(__this, L_30, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationManagerJni__ctor_m6F37E4CF31D26173F6772F40D1ACBFEE5AF4B589_AdjustorThunk (RuntimeObject* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_obj, const RuntimeMethod* method)
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*>(__this + _offset);
	NotificationManagerJni__ctor_m6F37E4CF31D26173F6772F40D1ACBFEE5AF4B589(_thisAdjusted, ___0_clazz, ___1_obj, method);
}
// System.Void Unity.Notifications.Android.NotificationManagerJni::CollectMethods(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManagerJni_CollectMethods_m4D6DB433A2518E1A2F9462A2386368D4CE76546F (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033E8D8F95BF400864BD2ACEF47CE582680E75E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03DFB66E5D14DA03A079639D89444EBC2DA49E3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AF68D1AFD49CB4EAE16EEF562B95CDA9503D80B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral396F6FE98EEDE5658931E136BFD8B8DC080A8BD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B8598DFA65D78E0D6420444B81EE822C8F99B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EFF4F4CAEEA7AB0E9270868BE4E7EDF20D2A6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A454FE5D40CFA47B41A7601EE4C7E5A97793ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE95E08AFB79AEC96D3BDD6C9A3788BA259BF6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD61AA457508E34A49244C75D8DEEC0740B84FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6FF31FFC38A61B5DDA7B40E5CEFC7BA61DF54F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getNotificationFromIntent = JniApi.FindMethod(clazz, "getNotificationFromIntent", "(Landroid/content/Intent;)Landroid/app/Notification;", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_clazz;
		String_t* L_1;
		L_1 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_0, _stringLiteral77EFF4F4CAEEA7AB0E9270868BE4E7EDF20D2A6D, _stringLiteral033E8D8F95BF400864BD2ACEF47CE582680E75E2, (bool)0, NULL);
		__this->___getNotificationFromIntent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationFromIntent_16), (void*)L_1);
		// setNotificationIcon = JniApi.FindMethod(clazz, "setNotificationIcon", "(Landroid/app/Notification$Builder;Ljava/lang/String;Ljava/lang/String;)V", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ___0_clazz;
		String_t* L_3;
		L_3 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_2, _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE, _stringLiteral43B8598DFA65D78E0D6420444B81EE822C8F99B3, (bool)1, NULL);
		__this->___setNotificationIcon_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationIcon_17), (void*)L_3);
		// setNotificationColor = JniApi.FindMethod(clazz, "setNotificationColor", "(Landroid/app/Notification$Builder;I)V", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ___0_clazz;
		String_t* L_5;
		L_5 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_4, _stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976, _stringLiteral03DFB66E5D14DA03A079639D89444EBC2DA49E3D, (bool)1, NULL);
		__this->___setNotificationColor_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationColor_18), (void*)L_5);
		// getNotificationColor = JniApi.FindMethod(clazz, "getNotificationColor", "(Landroid/app/Notification;)Ljava/lang/Integer;", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = ___0_clazz;
		String_t* L_7;
		L_7 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_6, _stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8, _stringLiteral0AF68D1AFD49CB4EAE16EEF562B95CDA9503D80B, (bool)1, NULL);
		__this->___getNotificationColor_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationColor_19), (void*)L_7);
		// setNotificationUsesChronometer = JniApi.FindMethod(clazz, "setNotificationUsesChronometer", "(Landroid/app/Notification$Builder;Z)V", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = ___0_clazz;
		String_t* L_9;
		L_9 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_8, _stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879, _stringLiteral396F6FE98EEDE5658931E136BFD8B8DC080A8BD9, (bool)1, NULL);
		__this->___setNotificationUsesChronometer_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationUsesChronometer_20), (void*)L_9);
		// setNotificationGroupAlertBehavior = JniApi.FindMethod(clazz, "setNotificationGroupAlertBehavior", "(Landroid/app/Notification$Builder;I)V", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = ___0_clazz;
		String_t* L_11;
		L_11 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_10, _stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A, _stringLiteral03DFB66E5D14DA03A079639D89444EBC2DA49E3D, (bool)1, NULL);
		__this->___setNotificationGroupAlertBehavior_21 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setNotificationGroupAlertBehavior_21), (void*)L_11);
		// getNotificationGroupAlertBehavior = JniApi.FindMethod(clazz, "getNotificationGroupAlertBehavior", "(Landroid/app/Notification;)I", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = ___0_clazz;
		String_t* L_13;
		L_13 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_12, _stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172, _stringLiteralD6FF31FFC38A61B5DDA7B40E5CEFC7BA61DF54F2, (bool)1, NULL);
		__this->___getNotificationGroupAlertBehavior_22 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationGroupAlertBehavior_22), (void*)L_13);
		// getNotificationChannelId = JniApi.FindMethod(clazz, "getNotificationChannelId", "(Landroid/app/Notification;)Ljava/lang/String;", true);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_14 = ___0_clazz;
		String_t* L_15;
		L_15 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_14, _stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99, _stringLiteral8A454FE5D40CFA47B41A7601EE4C7E5A97793ABA, (bool)1, NULL);
		__this->___getNotificationChannelId_23 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getNotificationChannelId_23), (void*)L_15);
		// scheduleNotification = JniApi.FindMethod(clazz, "scheduleNotification", "(Landroid/app/Notification$Builder;Z)I", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16 = ___0_clazz;
		String_t* L_17;
		L_17 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_16, _stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F, _stringLiteralCBD61AA457508E34A49244C75D8DEEC0740B84FE, (bool)0, NULL);
		__this->___scheduleNotification_24 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scheduleNotification_24), (void*)L_17);
		// createNotificationBuilder = JniApi.FindMethod(clazz, "createNotificationBuilder", "(Ljava/lang/String;)Landroid/app/Notification$Builder;", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_18 = ___0_clazz;
		String_t* L_19;
		L_19 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_18, _stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C, _stringLiteralAE95E08AFB79AEC96D3BDD6C9A3788BA259BF6DB, (bool)0, NULL);
		__this->___createNotificationBuilder_25 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___createNotificationBuilder_25), (void*)L_19);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationManagerJni_CollectMethods_m4D6DB433A2518E1A2F9462A2386368D4CE76546F_AdjustorThunk (RuntimeObject* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method)
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*>(__this + _offset);
	NotificationManagerJni_CollectMethods_m4D6DB433A2518E1A2F9462A2386368D4CE76546F(_thisAdjusted, ___0_clazz, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.NotificationManagerJni::GetNotificationColor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 NotificationManagerJni_GetNotificationColor_m6C7506EFFFCE6C1A77ABF9C6005F23E00D760892 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// using (var color = klass.CallStatic<AndroidJavaObject>(getNotificationColor, notification))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___klass_0;
		String_t* L_1 = __this->___getNotificationColor_19;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_notification;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, L_1, L_3, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0051;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
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
				// if (color == null)
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
				if (L_8)
				{
					goto IL_002b_1;
				}
			}
			{
				// return null;
				il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
				Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_9 = V_1;
				V_1 = L_9;
				goto IL_0052;
			}

IL_002b_1:
			{
				// return color.Call<int>("intValue").ToColor();
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
				L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_10);
				int32_t L_12;
				L_12 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_10, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_11, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
				L_13 = AndroidNotificationExtensions_ToColor_m5C7C27A8A70FA43FC6904E6467CB728DBB0DD7B8(L_12, NULL);
				Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_14;
				memset((&L_14), 0, sizeof(L_14));
				Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
				V_1 = L_14;
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
		// }
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 NotificationManagerJni_GetNotificationColor_m6C7506EFFFCE6C1A77ABF9C6005F23E00D760892_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*>(__this + _offset);
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 _returnValue;
	_returnValue = NotificationManagerJni_GetNotificationColor_m6C7506EFFFCE6C1A77ABF9C6005F23E00D760892(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.Int32 Unity.Notifications.Android.NotificationManagerJni::GetNotificationGroupAlertBehavior(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotificationManagerJni_GetNotificationGroupAlertBehavior_m63669F0CF71CD90554697607A0E02623F4DB7D89 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return klass.CallStatic<int>(getNotificationGroupAlertBehavior, notification);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___klass_0;
		String_t* L_1 = __this->___getNotificationGroupAlertBehavior_22;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_notification;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		int32_t L_5;
		L_5 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_0, L_1, L_3, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t NotificationManagerJni_GetNotificationGroupAlertBehavior_m63669F0CF71CD90554697607A0E02623F4DB7D89_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NotificationManagerJni_GetNotificationGroupAlertBehavior_m63669F0CF71CD90554697607A0E02623F4DB7D89(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.String Unity.Notifications.Android.NotificationManagerJni::GetNotificationChannelId(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationManagerJni_GetNotificationChannelId_mD3940568F0AA0432330365A436527C7CC73628B8 (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return klass.CallStatic<string>(getNotificationChannelId, notification);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___klass_0;
		String_t* L_1 = __this->___getNotificationChannelId_23;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_notification;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, L_1, L_3, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* NotificationManagerJni_GetNotificationChannelId_mD3940568F0AA0432330365A436527C7CC73628B8_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NotificationManagerJni_GetNotificationChannelId_mD3940568F0AA0432330365A436527C7CC73628B8(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.NotificationManagerJni::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManagerJni_RegisterNotificationChannel_m2287717194672598268CF5FEFFEC0FAB88302EFB (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___0_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// self.Call("registerNotificationChannel",
		//     channel.Id,
		//     channel.Name,
		//     (int)channel.Importance,
		//     channel.Description,
		//     channel.EnableLights,
		//     channel.EnableVibration,
		//     channel.CanBypassDnd,
		//     channel.CanShowBadge,
		//     channel.VibrationPattern,
		//     (int)channel.LockScreenVisibility,
		//     channel.Group
		// );
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___self_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___0_channel), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5;
		L_5 = AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline((&___0_channel), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7;
		L_7 = AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline((&___0_channel), NULL);
		int32_t L_8 = ((int32_t)L_7);
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		String_t* L_11;
		L_11 = AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline((&___0_channel), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		bool L_13;
		L_13 = AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline((&___0_channel), NULL);
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		bool L_17;
		L_17 = AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline((&___0_channel), NULL);
		bool L_18 = L_17;
		RuntimeObject* L_19 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		bool L_21;
		L_21 = AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline((&___0_channel), NULL);
		bool L_22 = L_21;
		RuntimeObject* L_23 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		bool L_25;
		L_25 = AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline((&___0_channel), NULL);
		bool L_26 = L_25;
		RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29;
		L_29 = AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline((&___0_channel), NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_28;
		int32_t L_31;
		L_31 = AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline((&___0_channel), NULL);
		int32_t L_32 = ((int32_t)L_31);
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_30;
		String_t* L_35;
		L_35 = AndroidNotificationChannel_get_Group_m437B5A0AF019C5C9DB14B9075B07F85B8F772687_inline((&___0_channel), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_35);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB, L_34, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationManagerJni_RegisterNotificationChannel_m2287717194672598268CF5FEFFEC0FAB88302EFB_AdjustorThunk (RuntimeObject* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___0_channel, const RuntimeMethod* method)
{
	NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*>(__this + _offset);
	NotificationManagerJni_RegisterNotificationChannel_m2287717194672598268CF5FEFFEC0FAB88302EFB(_thisAdjusted, ___0_channel, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.Android.NotificationJni
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_pinvoke(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke& marshaled)
{
	Exception_t* ___EXTRA_TITLE_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'EXTRA_TITLE' of type 'NotificationJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___EXTRA_TITLE_0Exception, NULL);
}
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_pinvoke_back(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke& marshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled)
{
	Exception_t* ___EXTRA_TITLE_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'EXTRA_TITLE' of type 'NotificationJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___EXTRA_TITLE_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.NotificationJni
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_pinvoke_cleanup(NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.Android.NotificationJni
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_com(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com& marshaled)
{
	Exception_t* ___EXTRA_TITLE_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'EXTRA_TITLE' of type 'NotificationJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___EXTRA_TITLE_0Exception, NULL);
}
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_com_back(const NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com& marshaled, NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654& unmarshaled)
{
	Exception_t* ___EXTRA_TITLE_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'EXTRA_TITLE' of type 'NotificationJni': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___EXTRA_TITLE_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.NotificationJni
IL2CPP_EXTERN_C void NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshal_com_cleanup(NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654_marshaled_com& marshaled)
{
}
// System.Void Unity.Notifications.Android.NotificationJni::CollectJni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectJni_m928D07CB1F88B744F74D9769C2D5C41C6D3D8CED (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// using (var notificationClass = new AndroidJavaClass("android.app.Notification"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_002b;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// CollectConstants(notificationClass);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
			NotificationJni_CollectConstants_m0853BC8F98965E5D001D410F923F40F0619A4529(__this, L_3, NULL);
			// CollectMethods(notificationClass);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
			NotificationJni_CollectMethods_m6700019E87EBC573F518A39DC9962E2953FD5A92(__this, L_4, NULL);
			// CollectFields(notificationClass);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_0;
			NotificationJni_CollectFields_mE9F7C32CE3466DD39AE4FB8275ABDFBF0999DDDB(__this, L_5, NULL);
			// }
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationJni_CollectJni_m928D07CB1F88B744F74D9769C2D5C41C6D3D8CED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	NotificationJni_CollectJni_m928D07CB1F88B744F74D9769C2D5C41C6D3D8CED(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.NotificationJni::CollectConstants(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectConstants_m0853BC8F98965E5D001D410F923F40F0619A4529 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA59539643944A464E30D7011A21734B72919F5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EXTRA_TITLE = clazz.GetStatic<AndroidJavaObject>("EXTRA_TITLE");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_clazz;
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___EXTRA_TITLE_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXTRA_TITLE_0), (void*)L_1);
		// EXTRA_TEXT = clazz.GetStatic<AndroidJavaObject>("EXTRA_TEXT");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ___0_clazz;
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___EXTRA_TEXT_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXTRA_TEXT_1), (void*)L_3);
		// EXTRA_SHOW_CHRONOMETER = clazz.GetStatic<AndroidJavaObject>("EXTRA_SHOW_CHRONOMETER");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ___0_clazz;
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___EXTRA_SHOW_CHRONOMETER_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXTRA_SHOW_CHRONOMETER_2), (void*)L_5);
		// EXTRA_BIG_TEXT = clazz.GetStatic<AndroidJavaObject>("EXTRA_BIG_TEXT");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = ___0_clazz;
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_6, _stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___EXTRA_BIG_TEXT_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXTRA_BIG_TEXT_3), (void*)L_7);
		// EXTRA_SHOW_WHEN = clazz.GetStatic<AndroidJavaObject>("EXTRA_SHOW_WHEN");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = ___0_clazz;
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_8, _stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		__this->___EXTRA_SHOW_WHEN_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EXTRA_SHOW_WHEN_4), (void*)L_9);
		// FLAG_AUTO_CANCEL = clazz.GetStatic<int>("FLAG_AUTO_CANCEL");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = ___0_clazz;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_10, _stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		__this->___FLAG_AUTO_CANCEL_5 = L_11;
		// FLAG_GROUP_SUMMARY = clazz.GetStatic<int>("FLAG_GROUP_SUMMARY");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = ___0_clazz;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_12, _stringLiteralA59539643944A464E30D7011A21734B72919F5BF, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		__this->___FLAG_GROUP_SUMMARY_6 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationJni_CollectConstants_m0853BC8F98965E5D001D410F923F40F0619A4529_AdjustorThunk (RuntimeObject* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	NotificationJni_CollectConstants_m0853BC8F98965E5D001D410F923F40F0619A4529(_thisAdjusted, ___0_clazz, method);
}
// System.Void Unity.Notifications.Android.NotificationJni::CollectMethods(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectMethods_m6700019E87EBC573F518A39DC9962E2953FD5A92 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getGroup = JniApi.FindMethod(clazz, "getGroup", "()Ljava/lang/String;", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_clazz;
		String_t* L_1;
		L_1 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_0, _stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB, _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56, (bool)0, NULL);
		__this->___getGroup_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getGroup_7), (void*)L_1);
		// getSortKey = JniApi.FindMethod(clazz, "getSortKey", "()Ljava/lang/String;", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ___0_clazz;
		String_t* L_3;
		L_3 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_2, _stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103, _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56, (bool)0, NULL);
		__this->___getSortKey_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getSortKey_8), (void*)L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationJni_CollectMethods_m6700019E87EBC573F518A39DC9962E2953FD5A92_AdjustorThunk (RuntimeObject* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	NotificationJni_CollectMethods_m6700019E87EBC573F518A39DC9962E2953FD5A92(_thisAdjusted, ___0_clazz, method);
}
// System.Void Unity.Notifications.Android.NotificationJni::CollectFields(UnityEngine.AndroidJavaClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationJni_CollectFields_mE9F7C32CE3466DD39AE4FB8275ABDFBF0999DDDB (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63BE7049C988C9471492DDB23802773752B93BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// extras = JniApi.FindField(clazz, "extras", "Landroid/os/Bundle;", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_clazz;
		String_t* L_1;
		L_1 = JniApi_FindField_m12D0D092AD2A6D441E5E9A46F05170021B30E1DD(L_0, _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7, _stringLiteralD63BE7049C988C9471492DDB23802773752B93BE, (bool)0, NULL);
		__this->___extras_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___extras_9), (void*)L_1);
		// flags = JniApi.FindField(clazz, "flags", "I", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ___0_clazz;
		String_t* L_3;
		L_3 = JniApi_FindField_m12D0D092AD2A6D441E5E9A46F05170021B30E1DD(L_2, _stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7, _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD, (bool)0, NULL);
		__this->___flags_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___flags_10), (void*)L_3);
		// number = JniApi.FindField(clazz, "number", "I", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ___0_clazz;
		String_t* L_5;
		L_5 = JniApi_FindField_m12D0D092AD2A6D441E5E9A46F05170021B30E1DD(L_4, _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, _stringLiteral6CB05FD18E12F98F81A204339D25DD82BC993FDD, (bool)0, NULL);
		__this->___number_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___number_11), (void*)L_5);
		// when = JniApi.FindField(clazz, "when", "J", false);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = ___0_clazz;
		String_t* L_7;
		L_7 = JniApi_FindField_m12D0D092AD2A6D441E5E9A46F05170021B30E1DD(L_6, _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9, _stringLiteral0EBD646B60E1C3FCE0203770591ED3C3D63537DC, (bool)0, NULL);
		__this->___when_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___when_12), (void*)L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationJni_CollectFields_mE9F7C32CE3466DD39AE4FB8275ABDFBF0999DDDB_AdjustorThunk (RuntimeObject* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	NotificationJni_CollectFields_mE9F7C32CE3466DD39AE4FB8275ABDFBF0999DDDB(_thisAdjusted, ___0_clazz, method);
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.NotificationJni::Extras(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NotificationJni_Extras_m07C4106952429861A98249AF07DD3881CA28FE6B (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return notification.Get<AndroidJavaObject>(extras);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		String_t* L_1 = __this->___extras_9;
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_0, L_1, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NotificationJni_Extras_m07C4106952429861A98249AF07DD3881CA28FE6B_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* _returnValue;
	_returnValue = NotificationJni_Extras_m07C4106952429861A98249AF07DD3881CA28FE6B(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.Int32 Unity.Notifications.Android.NotificationJni::Flags(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotificationJni_Flags_mB83386B5DD4AB41A11C764C0B57DFE8B3897F657 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return notification.Get<int>(flags);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		String_t* L_1 = __this->___flags_10;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB(L_0, L_1, AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NotificationJni_Flags_mB83386B5DD4AB41A11C764C0B57DFE8B3897F657_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NotificationJni_Flags_mB83386B5DD4AB41A11C764C0B57DFE8B3897F657(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.Int32 Unity.Notifications.Android.NotificationJni::Number(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotificationJni_Number_m04C1760895E6D9FE5334CADE9A79F479EBB7CE8D (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return notification.Get<int>(number);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		String_t* L_1 = __this->___number_11;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB(L_0, L_1, AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NotificationJni_Number_m04C1760895E6D9FE5334CADE9A79F479EBB7CE8D_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NotificationJni_Number_m04C1760895E6D9FE5334CADE9A79F479EBB7CE8D(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.String Unity.Notifications.Android.NotificationJni::GetGroup(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationJni_GetGroup_mD319C77393EBCA352701EBAFFA186B26ED9D490A (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return notification.Call<string>(getGroup);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		String_t* L_1 = __this->___getGroup_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* NotificationJni_GetGroup_mD319C77393EBCA352701EBAFFA186B26ED9D490A_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NotificationJni_GetGroup_mD319C77393EBCA352701EBAFFA186B26ED9D490A(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.String Unity.Notifications.Android.NotificationJni::GetSortKey(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotificationJni_GetSortKey_mFC8EA047FA620FCC08740F51D225A49508479624 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return notification.Call<string>(getSortKey);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		String_t* L_1 = __this->___getSortKey_8;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* NotificationJni_GetSortKey_mFC8EA047FA620FCC08740F51D225A49508479624_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NotificationJni_GetSortKey_mFC8EA047FA620FCC08740F51D225A49508479624(_thisAdjusted, ___0_notification, method);
	return _returnValue;
}
// System.Int64 Unity.Notifications.Android.NotificationJni::When(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NotificationJni_When_m2B45ECE7EED2AE4943FF4F75AEF79B2DEE84F649 (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return notification.Get<long>(when);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		String_t* L_1 = __this->___when_12;
		NullCheck(L_0);
		int64_t L_2;
		L_2 = AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244(L_0, L_1, AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int64_t NotificationJni_When_m2B45ECE7EED2AE4943FF4F75AEF79B2DEE84F649_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method)
{
	NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NotificationJni_When_m2B45ECE7EED2AE4943FF4F75AEF79B2DEE84F649(_thisAdjusted, ___0_notification, method);
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
// Conversion methods for marshalling of: Unity.Notifications.Android.NotificationBuilderJni
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_pinvoke(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke& marshaled)
{
	marshaled.___getExtras_0 = il2cpp_codegen_marshal_string(unmarshaled.___getExtras_0);
	marshaled.___setContentTitle_1 = il2cpp_codegen_marshal_string(unmarshaled.___setContentTitle_1);
	marshaled.___setContentText_2 = il2cpp_codegen_marshal_string(unmarshaled.___setContentText_2);
	marshaled.___setAutoCancel_3 = il2cpp_codegen_marshal_string(unmarshaled.___setAutoCancel_3);
	marshaled.___setNumber_4 = il2cpp_codegen_marshal_string(unmarshaled.___setNumber_4);
	marshaled.___setStyle_5 = il2cpp_codegen_marshal_string(unmarshaled.___setStyle_5);
	marshaled.___setWhen_6 = il2cpp_codegen_marshal_string(unmarshaled.___setWhen_6);
	marshaled.___setGroup_7 = il2cpp_codegen_marshal_string(unmarshaled.___setGroup_7);
	marshaled.___setGroupSummary_8 = il2cpp_codegen_marshal_string(unmarshaled.___setGroupSummary_8);
	marshaled.___setSortKey_9 = il2cpp_codegen_marshal_string(unmarshaled.___setSortKey_9);
	marshaled.___setShowWhen_10 = il2cpp_codegen_marshal_string(unmarshaled.___setShowWhen_10);
}
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_pinvoke_back(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke& marshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled)
{
	unmarshaled.___getExtras_0 = il2cpp_codegen_marshal_string_result(marshaled.___getExtras_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getExtras_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___getExtras_0));
	unmarshaled.___setContentTitle_1 = il2cpp_codegen_marshal_string_result(marshaled.___setContentTitle_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setContentTitle_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setContentTitle_1));
	unmarshaled.___setContentText_2 = il2cpp_codegen_marshal_string_result(marshaled.___setContentText_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setContentText_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setContentText_2));
	unmarshaled.___setAutoCancel_3 = il2cpp_codegen_marshal_string_result(marshaled.___setAutoCancel_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setAutoCancel_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setAutoCancel_3));
	unmarshaled.___setNumber_4 = il2cpp_codegen_marshal_string_result(marshaled.___setNumber_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setNumber_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setNumber_4));
	unmarshaled.___setStyle_5 = il2cpp_codegen_marshal_string_result(marshaled.___setStyle_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setStyle_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setStyle_5));
	unmarshaled.___setWhen_6 = il2cpp_codegen_marshal_string_result(marshaled.___setWhen_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setWhen_6), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setWhen_6));
	unmarshaled.___setGroup_7 = il2cpp_codegen_marshal_string_result(marshaled.___setGroup_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setGroup_7), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setGroup_7));
	unmarshaled.___setGroupSummary_8 = il2cpp_codegen_marshal_string_result(marshaled.___setGroupSummary_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setGroupSummary_8), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setGroupSummary_8));
	unmarshaled.___setSortKey_9 = il2cpp_codegen_marshal_string_result(marshaled.___setSortKey_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setSortKey_9), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setSortKey_9));
	unmarshaled.___setShowWhen_10 = il2cpp_codegen_marshal_string_result(marshaled.___setShowWhen_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setShowWhen_10), (void*)il2cpp_codegen_marshal_string_result(marshaled.___setShowWhen_10));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.NotificationBuilderJni
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_pinvoke_cleanup(NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___getExtras_0);
	marshaled.___getExtras_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setContentTitle_1);
	marshaled.___setContentTitle_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setContentText_2);
	marshaled.___setContentText_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setAutoCancel_3);
	marshaled.___setAutoCancel_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setNumber_4);
	marshaled.___setNumber_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setStyle_5);
	marshaled.___setStyle_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setWhen_6);
	marshaled.___setWhen_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setGroup_7);
	marshaled.___setGroup_7 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setGroupSummary_8);
	marshaled.___setGroupSummary_8 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setSortKey_9);
	marshaled.___setSortKey_9 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___setShowWhen_10);
	marshaled.___setShowWhen_10 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.NotificationBuilderJni
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_com(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com& marshaled)
{
	marshaled.___getExtras_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___getExtras_0);
	marshaled.___setContentTitle_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___setContentTitle_1);
	marshaled.___setContentText_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___setContentText_2);
	marshaled.___setAutoCancel_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___setAutoCancel_3);
	marshaled.___setNumber_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___setNumber_4);
	marshaled.___setStyle_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___setStyle_5);
	marshaled.___setWhen_6 = il2cpp_codegen_marshal_bstring(unmarshaled.___setWhen_6);
	marshaled.___setGroup_7 = il2cpp_codegen_marshal_bstring(unmarshaled.___setGroup_7);
	marshaled.___setGroupSummary_8 = il2cpp_codegen_marshal_bstring(unmarshaled.___setGroupSummary_8);
	marshaled.___setSortKey_9 = il2cpp_codegen_marshal_bstring(unmarshaled.___setSortKey_9);
	marshaled.___setShowWhen_10 = il2cpp_codegen_marshal_bstring(unmarshaled.___setShowWhen_10);
}
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_com_back(const NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com& marshaled, NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752& unmarshaled)
{
	unmarshaled.___getExtras_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___getExtras_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getExtras_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___getExtras_0));
	unmarshaled.___setContentTitle_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___setContentTitle_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setContentTitle_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setContentTitle_1));
	unmarshaled.___setContentText_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___setContentText_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setContentText_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setContentText_2));
	unmarshaled.___setAutoCancel_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___setAutoCancel_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setAutoCancel_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setAutoCancel_3));
	unmarshaled.___setNumber_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___setNumber_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setNumber_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setNumber_4));
	unmarshaled.___setStyle_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___setStyle_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setStyle_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setStyle_5));
	unmarshaled.___setWhen_6 = il2cpp_codegen_marshal_bstring_result(marshaled.___setWhen_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setWhen_6), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setWhen_6));
	unmarshaled.___setGroup_7 = il2cpp_codegen_marshal_bstring_result(marshaled.___setGroup_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setGroup_7), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setGroup_7));
	unmarshaled.___setGroupSummary_8 = il2cpp_codegen_marshal_bstring_result(marshaled.___setGroupSummary_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setGroupSummary_8), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setGroupSummary_8));
	unmarshaled.___setSortKey_9 = il2cpp_codegen_marshal_bstring_result(marshaled.___setSortKey_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setSortKey_9), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setSortKey_9));
	unmarshaled.___setShowWhen_10 = il2cpp_codegen_marshal_bstring_result(marshaled.___setShowWhen_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___setShowWhen_10), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___setShowWhen_10));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.NotificationBuilderJni
IL2CPP_EXTERN_C void NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshal_com_cleanup(NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___getExtras_0);
	marshaled.___getExtras_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setContentTitle_1);
	marshaled.___setContentTitle_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setContentText_2);
	marshaled.___setContentText_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setAutoCancel_3);
	marshaled.___setAutoCancel_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setNumber_4);
	marshaled.___setNumber_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setStyle_5);
	marshaled.___setStyle_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setWhen_6);
	marshaled.___setWhen_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setGroup_7);
	marshaled.___setGroup_7 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setGroupSummary_8);
	marshaled.___setGroupSummary_8 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setSortKey_9);
	marshaled.___setSortKey_9 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___setShowWhen_10);
	marshaled.___setShowWhen_10 = NULL;
}
// System.Void Unity.Notifications.Android.NotificationBuilderJni::CollectJni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationBuilderJni_CollectJni_mEF05C194053743F75C33AD923E7719705C3754A7 (NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35EA858EBEA1492F9EF3303EE0169F87CDEA9562);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A28AC380C88F10BBBCFF34436543133F6081A44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB52646F5B209FCB97D0BAF3FAB3B21B290EA42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral417033260ED9866C8F3942C4B186232283F80EBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ABF5AFD3781BDE143E9F08C49EFA38071384201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA288610E4D4CA66B25A3D30E99F2259924083099);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE95E08AFB79AEC96D3BDD6C9A3788BA259BF6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F3A12A164FFA69A27D2D6B5705EADEEC5D64B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1FE9FE00151D9517E6FBD69234A14C1A63495E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// using (var clazz = new AndroidJavaClass("android.app.Notification$Builder"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralB6F3A12A164FFA69A27D2D6B5705EADEEC5D64B6, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010a:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0113;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0113:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// getExtras = JniApi.FindMethod(clazz, "getExtras", "()Landroid/os/Bundle;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
			String_t* L_4;
			L_4 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_3, _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC, _stringLiteralA288610E4D4CA66B25A3D30E99F2259924083099, (bool)0, NULL);
			__this->___getExtras_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___getExtras_0), (void*)L_4);
			// setContentTitle = JniApi.FindMethod(clazz, "setContentTitle", "(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_0;
			String_t* L_6;
			L_6 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_5, _stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5, _stringLiteral3CB52646F5B209FCB97D0BAF3FAB3B21B290EA42, (bool)0, NULL);
			__this->___setContentTitle_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setContentTitle_1), (void*)L_6);
			// setContentText = JniApi.FindMethod(clazz, "setContentText", "(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = V_0;
			String_t* L_8;
			L_8 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_7, _stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D, _stringLiteral3CB52646F5B209FCB97D0BAF3FAB3B21B290EA42, (bool)0, NULL);
			__this->___setContentText_2 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setContentText_2), (void*)L_8);
			// setAutoCancel = JniApi.FindMethod(clazz, "setAutoCancel", "(Z)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_9 = V_0;
			String_t* L_10;
			L_10 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_9, _stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B, _stringLiteralF1FE9FE00151D9517E6FBD69234A14C1A63495E2, (bool)0, NULL);
			__this->___setAutoCancel_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setAutoCancel_3), (void*)L_10);
			// setNumber = JniApi.FindMethod(clazz, "setNumber", "(I)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = V_0;
			String_t* L_12;
			L_12 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_11, _stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6, _stringLiteral7ABF5AFD3781BDE143E9F08C49EFA38071384201, (bool)0, NULL);
			__this->___setNumber_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setNumber_4), (void*)L_12);
			// setStyle = JniApi.FindMethod(clazz, "setStyle", "(Landroid/app/Notification$Style;)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = V_0;
			String_t* L_14;
			L_14 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_13, _stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E, _stringLiteral35EA858EBEA1492F9EF3303EE0169F87CDEA9562, (bool)0, NULL);
			__this->___setStyle_5 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setStyle_5), (void*)L_14);
			// setWhen = JniApi.FindMethod(clazz, "setWhen", "(J)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_15 = V_0;
			String_t* L_16;
			L_16 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_15, _stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C, _stringLiteral3A28AC380C88F10BBBCFF34436543133F6081A44, (bool)0, NULL);
			__this->___setWhen_6 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setWhen_6), (void*)L_16);
			// setGroup = JniApi.FindMethod(clazz, "setGroup", "(Ljava/lang/String;)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_17 = V_0;
			String_t* L_18;
			L_18 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_17, _stringLiteral417033260ED9866C8F3942C4B186232283F80EBC, _stringLiteralAE95E08AFB79AEC96D3BDD6C9A3788BA259BF6DB, (bool)0, NULL);
			__this->___setGroup_7 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setGroup_7), (void*)L_18);
			// setGroupSummary = JniApi.FindMethod(clazz, "setGroupSummary", "(Z)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = V_0;
			String_t* L_20;
			L_20 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_19, _stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B, _stringLiteralF1FE9FE00151D9517E6FBD69234A14C1A63495E2, (bool)0, NULL);
			__this->___setGroupSummary_8 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setGroupSummary_8), (void*)L_20);
			// setSortKey = JniApi.FindMethod(clazz, "setSortKey", "(Ljava/lang/String;)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_21 = V_0;
			String_t* L_22;
			L_22 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_21, _stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C, _stringLiteralAE95E08AFB79AEC96D3BDD6C9A3788BA259BF6DB, (bool)0, NULL);
			__this->___setSortKey_9 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setSortKey_9), (void*)L_22);
			// setShowWhen = JniApi.FindMethod(clazz, "setShowWhen", "(Z)Landroid/app/Notification$Builder;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_23 = V_0;
			String_t* L_24;
			L_24 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_23, _stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6, _stringLiteralF1FE9FE00151D9517E6FBD69234A14C1A63495E2, (bool)0, NULL);
			__this->___setShowWhen_10 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___setShowWhen_10), (void*)L_24);
			// }
			goto IL_0114;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0114:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NotificationBuilderJni_CollectJni_mEF05C194053743F75C33AD923E7719705C3754A7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752*>(__this + _offset);
	NotificationBuilderJni_CollectJni_mEF05C194053743F75C33AD923E7719705C3754A7(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.Android.BundleJni
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_pinvoke(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke& marshaled)
{
	marshaled.___containsKey_0 = il2cpp_codegen_marshal_string(unmarshaled.___containsKey_0);
	marshaled.___getBoolean_1 = il2cpp_codegen_marshal_string(unmarshaled.___getBoolean_1);
	marshaled.___getInt_2 = il2cpp_codegen_marshal_string(unmarshaled.___getInt_2);
	marshaled.___getLong_3 = il2cpp_codegen_marshal_string(unmarshaled.___getLong_3);
	marshaled.___getString_4 = il2cpp_codegen_marshal_string(unmarshaled.___getString_4);
	marshaled.___putBoolean_5 = il2cpp_codegen_marshal_string(unmarshaled.___putBoolean_5);
	marshaled.___putInt_6 = il2cpp_codegen_marshal_string(unmarshaled.___putInt_6);
	marshaled.___putLong_7 = il2cpp_codegen_marshal_string(unmarshaled.___putLong_7);
	marshaled.___putString_8 = il2cpp_codegen_marshal_string(unmarshaled.___putString_8);
}
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_pinvoke_back(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke& marshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled)
{
	unmarshaled.___containsKey_0 = il2cpp_codegen_marshal_string_result(marshaled.___containsKey_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___containsKey_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___containsKey_0));
	unmarshaled.___getBoolean_1 = il2cpp_codegen_marshal_string_result(marshaled.___getBoolean_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getBoolean_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___getBoolean_1));
	unmarshaled.___getInt_2 = il2cpp_codegen_marshal_string_result(marshaled.___getInt_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getInt_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___getInt_2));
	unmarshaled.___getLong_3 = il2cpp_codegen_marshal_string_result(marshaled.___getLong_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getLong_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___getLong_3));
	unmarshaled.___getString_4 = il2cpp_codegen_marshal_string_result(marshaled.___getString_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getString_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___getString_4));
	unmarshaled.___putBoolean_5 = il2cpp_codegen_marshal_string_result(marshaled.___putBoolean_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putBoolean_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___putBoolean_5));
	unmarshaled.___putInt_6 = il2cpp_codegen_marshal_string_result(marshaled.___putInt_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putInt_6), (void*)il2cpp_codegen_marshal_string_result(marshaled.___putInt_6));
	unmarshaled.___putLong_7 = il2cpp_codegen_marshal_string_result(marshaled.___putLong_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putLong_7), (void*)il2cpp_codegen_marshal_string_result(marshaled.___putLong_7));
	unmarshaled.___putString_8 = il2cpp_codegen_marshal_string_result(marshaled.___putString_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putString_8), (void*)il2cpp_codegen_marshal_string_result(marshaled.___putString_8));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.BundleJni
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_pinvoke_cleanup(BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___containsKey_0);
	marshaled.___containsKey_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___getBoolean_1);
	marshaled.___getBoolean_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___getInt_2);
	marshaled.___getInt_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___getLong_3);
	marshaled.___getLong_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___getString_4);
	marshaled.___getString_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___putBoolean_5);
	marshaled.___putBoolean_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___putInt_6);
	marshaled.___putInt_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___putLong_7);
	marshaled.___putLong_7 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___putString_8);
	marshaled.___putString_8 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.BundleJni
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_com(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com& marshaled)
{
	marshaled.___containsKey_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___containsKey_0);
	marshaled.___getBoolean_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___getBoolean_1);
	marshaled.___getInt_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___getInt_2);
	marshaled.___getLong_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___getLong_3);
	marshaled.___getString_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___getString_4);
	marshaled.___putBoolean_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___putBoolean_5);
	marshaled.___putInt_6 = il2cpp_codegen_marshal_bstring(unmarshaled.___putInt_6);
	marshaled.___putLong_7 = il2cpp_codegen_marshal_bstring(unmarshaled.___putLong_7);
	marshaled.___putString_8 = il2cpp_codegen_marshal_bstring(unmarshaled.___putString_8);
}
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_com_back(const BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com& marshaled, BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701& unmarshaled)
{
	unmarshaled.___containsKey_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___containsKey_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___containsKey_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___containsKey_0));
	unmarshaled.___getBoolean_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___getBoolean_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getBoolean_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___getBoolean_1));
	unmarshaled.___getInt_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___getInt_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getInt_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___getInt_2));
	unmarshaled.___getLong_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___getLong_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getLong_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___getLong_3));
	unmarshaled.___getString_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___getString_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___getString_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___getString_4));
	unmarshaled.___putBoolean_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___putBoolean_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putBoolean_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___putBoolean_5));
	unmarshaled.___putInt_6 = il2cpp_codegen_marshal_bstring_result(marshaled.___putInt_6);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putInt_6), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___putInt_6));
	unmarshaled.___putLong_7 = il2cpp_codegen_marshal_bstring_result(marshaled.___putLong_7);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putLong_7), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___putLong_7));
	unmarshaled.___putString_8 = il2cpp_codegen_marshal_bstring_result(marshaled.___putString_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___putString_8), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___putString_8));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.BundleJni
IL2CPP_EXTERN_C void BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshal_com_cleanup(BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___containsKey_0);
	marshaled.___containsKey_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___getBoolean_1);
	marshaled.___getBoolean_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___getInt_2);
	marshaled.___getInt_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___getLong_3);
	marshaled.___getLong_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___getString_4);
	marshaled.___getString_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___putBoolean_5);
	marshaled.___putBoolean_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___putInt_6);
	marshaled.___putInt_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___putLong_7);
	marshaled.___putLong_7 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___putString_8);
	marshaled.___putString_8 = NULL;
}
// System.Void Unity.Notifications.Android.BundleJni::CollectJni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BundleJni_CollectJni_m0A3A53F366A67BC5E2118E63A74F87368E53E415 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05AFF8C43DBEA75E64A7AD340660B3E592F0036B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18A5D902CA6AE935C7E5AE7C0A682C2840299962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral430E6E4603830E40D9A72534D4A61157E83FFC89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F8212C561F69DEC091C46C708773C18B311822A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral501806871C8368CE034D5E4560C3D6A32E2864E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D56777603D13DE0DE510705DC630AF80E83F083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8723347D88389B5B9D84FAF9C94118595E76A8D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral957C39ACF343DCE5F7AB145168656E7F288B57EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC558F6B52615D04F88C1A2FEADC63E72310DECB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC824FF3925D18F01BCB0B304E5C5B5A8D68D89C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED77824C4E942D01BBA3961E822A4478B57D4FE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	{
		// using (var clazz = new AndroidJavaClass("android/os/Bundle"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral18A5D902CA6AE935C7E5AE7C0A682C2840299962, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dc:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_00e5;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_00e5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// containsKey = JniApi.FindMethod(clazz, "containsKey", "(Ljava/lang/String;)Z", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
			String_t* L_4;
			L_4 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_3, _stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2, _stringLiteral8723347D88389B5B9D84FAF9C94118595E76A8D9, (bool)0, NULL);
			__this->___containsKey_0 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___containsKey_0), (void*)L_4);
			// getBoolean = JniApi.FindMethod(clazz, "getBoolean", "(Ljava/lang/String;Z)Z", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_0;
			String_t* L_6;
			L_6 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_5, _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4, _stringLiteralC558F6B52615D04F88C1A2FEADC63E72310DECB5, (bool)0, NULL);
			__this->___getBoolean_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___getBoolean_1), (void*)L_6);
			// getInt = JniApi.FindMethod(clazz, "getInt", "(Ljava/lang/String;I)I", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = V_0;
			String_t* L_8;
			L_8 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_7, _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F, _stringLiteralED77824C4E942D01BBA3961E822A4478B57D4FE0, (bool)0, NULL);
			__this->___getInt_2 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___getInt_2), (void*)L_8);
			// getLong = JniApi.FindMethod(clazz, "getLong", "(Ljava/lang/String;J)J", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_9 = V_0;
			String_t* L_10;
			L_10 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_9, _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A, _stringLiteral4F8212C561F69DEC091C46C708773C18B311822A, (bool)0, NULL);
			__this->___getLong_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___getLong_3), (void*)L_10);
			// getString = JniApi.FindMethod(clazz, "getString", "(Ljava/lang/String;)Ljava/lang/String;", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = V_0;
			String_t* L_12;
			L_12 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_11, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, _stringLiteral957C39ACF343DCE5F7AB145168656E7F288B57EA, (bool)0, NULL);
			__this->___getString_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___getString_4), (void*)L_12);
			// putBoolean = JniApi.FindMethod(clazz, "putBoolean", "(Ljava/lang/String;Z)V", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = V_0;
			String_t* L_14;
			L_14 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_13, _stringLiteralC824FF3925D18F01BCB0B304E5C5B5A8D68D89C8, _stringLiteral501806871C8368CE034D5E4560C3D6A32E2864E8, (bool)0, NULL);
			__this->___putBoolean_5 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___putBoolean_5), (void*)L_14);
			// putInt = JniApi.FindMethod(clazz, "putInt", "(Ljava/lang/String;I)V", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_15 = V_0;
			String_t* L_16;
			L_16 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_15, _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E, _stringLiteral05AFF8C43DBEA75E64A7AD340660B3E592F0036B, (bool)0, NULL);
			__this->___putInt_6 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___putInt_6), (void*)L_16);
			// putLong = JniApi.FindMethod(clazz, "putLong", "(Ljava/lang/String;J)V", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_17 = V_0;
			String_t* L_18;
			L_18 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_17, _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC, _stringLiteral7D56777603D13DE0DE510705DC630AF80E83F083, (bool)0, NULL);
			__this->___putLong_7 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___putLong_7), (void*)L_18);
			// putString = JniApi.FindMethod(clazz, "putString", "(Ljava/lang/String;Ljava/lang/String;)V", false);
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = V_0;
			String_t* L_20;
			L_20 = JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D(L_19, _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3, _stringLiteral430E6E4603830E40D9A72534D4A61157E83FFC89, (bool)0, NULL);
			__this->___putString_8 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___putString_8), (void*)L_20);
			// }
			goto IL_00e6;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BundleJni_CollectJni_m0A3A53F366A67BC5E2118E63A74F87368E53E415_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	BundleJni_CollectJni_m0A3A53F366A67BC5E2118E63A74F87368E53E415(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.Android.BundleJni::ContainsKey(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundleJni_ContainsKey_m97F4A86715C874CC0C5E94A6B678943D3B11BC38 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<bool>(containsKey, key);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___containsKey_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, L_1, L_3, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool BundleJni_ContainsKey_m97F4A86715C874CC0C5E94A6B678943D3B11BC38_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	bool _returnValue;
	_returnValue = BundleJni_ContainsKey_m97F4A86715C874CC0C5E94A6B678943D3B11BC38(_thisAdjusted, ___0_bundle, ___1_key, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.BundleJni::GetBoolean(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, bool ___2_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<bool>(getBoolean, key, defaultValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___getBoolean_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		bool L_6 = ___2_defaultValue;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_0);
		bool L_9;
		L_9 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, L_1, L_5, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, bool ___2_defaultValue, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	bool _returnValue;
	_returnValue = BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D(_thisAdjusted, ___0_bundle, ___1_key, ___2_defaultValue, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.BundleJni::GetBoolean(UnityEngine.AndroidJavaObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BundleJni_GetBoolean_m4E8272A566160C74CB02454B7B6D6456C2BEDCCA (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, String_t* ___1_key, bool ___2_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<bool>(getBoolean, key, defaultValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___getBoolean_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		bool L_6 = ___2_defaultValue;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_0);
		bool L_9;
		L_9 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, L_1, L_5, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool BundleJni_GetBoolean_m4E8272A566160C74CB02454B7B6D6456C2BEDCCA_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, String_t* ___1_key, bool ___2_defaultValue, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	bool _returnValue;
	_returnValue = BundleJni_GetBoolean_m4E8272A566160C74CB02454B7B6D6456C2BEDCCA(_thisAdjusted, ___0_bundle, ___1_key, ___2_defaultValue, method);
	return _returnValue;
}
// System.Int32 Unity.Notifications.Android.BundleJni::GetInt(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BundleJni_GetInt_mB95B41F2EA9D979BF0895F7ACA7EEA85663BF963 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, int32_t ___2_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<int>(getInt, key, defaultValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___getInt_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		int32_t L_6 = ___2_defaultValue;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_0);
		int32_t L_9;
		L_9 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_0, L_1, L_5, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t BundleJni_GetInt_mB95B41F2EA9D979BF0895F7ACA7EEA85663BF963_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, int32_t ___2_defaultValue, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BundleJni_GetInt_mB95B41F2EA9D979BF0895F7ACA7EEA85663BF963(_thisAdjusted, ___0_bundle, ___1_key, ___2_defaultValue, method);
	return _returnValue;
}
// System.Int64 Unity.Notifications.Android.BundleJni::GetLong(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BundleJni_GetLong_m7CFD473890596791A03CF1F4BB3B6924149AFD15 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, int64_t ___2_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<long>(getLong, key, defaultValue);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___getLong_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		int64_t L_6 = ___2_defaultValue;
		int64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(L_0);
		int64_t L_9;
		L_9 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_0, L_1, L_5, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  int64_t BundleJni_GetLong_m7CFD473890596791A03CF1F4BB3B6924149AFD15_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, int64_t ___2_defaultValue, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = BundleJni_GetLong_m7CFD473890596791A03CF1F4BB3B6924149AFD15(_thisAdjusted, ___0_bundle, ___1_key, ___2_defaultValue, method);
	return _returnValue;
}
// System.String Unity.Notifications.Android.BundleJni::GetString(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<string>(getString, key);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___getString_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_key, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(_thisAdjusted, ___0_bundle, ___1_key, method);
	return _returnValue;
}
// System.String Unity.Notifications.Android.BundleJni::GetString(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4 (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return bundle.Call<string>(getString, key);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_bundle;
		String_t* L_1 = __this->___getString_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___1_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4_AdjustorThunk (RuntimeObject* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_bundle, String_t* ___1_key, const RuntimeMethod* method)
{
	BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4(_thisAdjusted, ___0_bundle, ___1_key, method);
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








// Conversion methods for marshalling of: Unity.Notifications.Android.JniApi
IL2CPP_EXTERN_C void JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshal_pinvoke(const JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E& unmarshaled, JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___NotificationManager_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NotificationManager' of type 'JniApi'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NotificationManager_0Exception, NULL);
}
IL2CPP_EXTERN_C void JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshal_pinvoke_back(const JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_pinvoke& marshaled, JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E& unmarshaled)
{
	Exception_t* ___NotificationManager_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NotificationManager' of type 'JniApi'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NotificationManager_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.JniApi
IL2CPP_EXTERN_C void JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshal_pinvoke_cleanup(JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_pinvoke& marshaled)
{
}








// Conversion methods for marshalling of: Unity.Notifications.Android.JniApi
IL2CPP_EXTERN_C void JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshal_com(const JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E& unmarshaled, JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_com& marshaled)
{
	Exception_t* ___NotificationManager_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NotificationManager' of type 'JniApi'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NotificationManager_0Exception, NULL);
}
IL2CPP_EXTERN_C void JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshal_com_back(const JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_com& marshaled, JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E& unmarshaled)
{
	Exception_t* ___NotificationManager_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NotificationManager' of type 'JniApi'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NotificationManager_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.JniApi
IL2CPP_EXTERN_C void JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshal_com_cleanup(JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E_marshaled_com& marshaled)
{
}
// System.Void Unity.Notifications.Android.JniApi::.ctor(UnityEngine.AndroidJavaClass,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JniApi__ctor_m4B0A801C84343FA62CEED8A6DAFBADDA17E67491 (JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_notificationManagerClass, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_notificationManager, const RuntimeMethod* method) 
{
	{
		// NotificationManager = new NotificationManagerJni(notificationManagerClass, notificationManager);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ___0_notificationManagerClass;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___1_notificationManager;
		NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NotificationManagerJni__ctor_m6F37E4CF31D26173F6772F40D1ACBFEE5AF4B589((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->___NotificationManager_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___klass_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___self_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_FIRE_TIME_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_ID_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_INTENT_DATA_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_LARGE_ICON_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_REPEAT_INTERVAL_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_NOTIFICATION_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_SMALL_ICON_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_SHOW_IN_FOREGROUND_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_BIG_PICTURE_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_BIG_LARGE_ICON_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_BIG_CONTENT_TITLE_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_BIG_SUMMARY_TEXT_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_BIG_CONTENT_DESCRIPTION_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___KEY_BIG_SHOW_WHEN_COLLAPSED_15), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___getNotificationFromIntent_16), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___setNotificationIcon_17), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___setNotificationColor_18), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___getNotificationColor_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___setNotificationUsesChronometer_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___setNotificationGroupAlertBehavior_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___getNotificationGroupAlertBehavior_22), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___getNotificationChannelId_23), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___scheduleNotification_24), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___NotificationManager_0))->___createNotificationBuilder_25), (void*)NULL);
		#endif
		// Notification = default;
		NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_3 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&__this->___Notification_1);
		il2cpp_codegen_initobj(L_3, sizeof(NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654));
		// Notification.CollectJni();
		NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_4 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&__this->___Notification_1);
		NotificationJni_CollectJni_m928D07CB1F88B744F74D9769C2D5C41C6D3D8CED(L_4, NULL);
		// NotificationBuilder = default;
		NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752* L_5 = (NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752*)(&__this->___NotificationBuilder_2);
		il2cpp_codegen_initobj(L_5, sizeof(NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752));
		// NotificationBuilder.CollectJni();
		NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752* L_6 = (NotificationBuilderJni_tC5EB229D0E08E461B60644CBBBAE3881DBDD2752*)(&__this->___NotificationBuilder_2);
		NotificationBuilderJni_CollectJni_mEF05C194053743F75C33AD923E7719705C3754A7(L_6, NULL);
		// Bundle = default;
		BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_7 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&__this->___Bundle_3);
		il2cpp_codegen_initobj(L_7, sizeof(BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701));
		// Bundle.CollectJni();
		BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_8 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&__this->___Bundle_3);
		BundleJni_CollectJni_m0A3A53F366A67BC5E2118E63A74F87368E53E415(L_8, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void JniApi__ctor_m4B0A801C84343FA62CEED8A6DAFBADDA17E67491_AdjustorThunk (RuntimeObject* __this, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_notificationManagerClass, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_notificationManager, const RuntimeMethod* method)
{
	JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E*>(__this + _offset);
	JniApi__ctor_m4B0A801C84343FA62CEED8A6DAFBADDA17E67491(_thisAdjusted, ___0_notificationManagerClass, ___1_notificationManager, method);
}
// System.String Unity.Notifications.Android.JniApi::FindField(UnityEngine.AndroidJavaClass,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JniApi_FindField_m12D0D092AD2A6D441E5E9A46F05170021B30E1DD (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, String_t* ___1_name, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	{
		// return name;
		String_t* L_0 = ___1_name;
		return L_0;
	}
}
// System.String Unity.Notifications.Android.JniApi::FindMethod(UnityEngine.AndroidJavaClass,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JniApi_FindMethod_m7B990016763D958F1C694F93DC4A7A054C610F2D (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___0_clazz, String_t* ___1_name, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) 
{
	{
		// return name;
		String_t* L_0 = ___1_name;
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
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09DF0F4EA30887D5D6E2833D4C620AAAB11E1C34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2471E258F48879198FDEA7BA87494515B30D9FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA743314C99A7A945A299B6748725F14C02714B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCF688AE29C8EBA59FC43EECD64FB2FCCA9AEBC);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_3 = NULL;
	{
		// if (s_Initialized)
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// if (AndroidReceivedNotificationMainThreadDispatcher.GetInstance() == null)
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_1;
		L_1 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// var receivedNotificationDispatcher = new GameObject("AndroidReceivedNotificationMainThreadDispatcher");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9, NULL);
		// receivedNotificationDispatcher.AddComponent<AndroidReceivedNotificationMainThreadDispatcher>();
		NullCheck(L_3);
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_4;
		L_4 = GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E(L_3, GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E_RuntimeMethod_var);
	}

IL_0026:
	{
		// using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_5, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = V_2;
					if (!L_6)
					{
						goto IL_004c;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// s_CurrentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = V_2;
			NullCheck(L_8);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
			L_9 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_8, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_5 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_5), (void*)L_9);
			goto IL_004d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// var notificationManagerClass = new AndroidJavaClass("com.unity.androidnotifications.UnityNotificationManager");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B, NULL);
		V_0 = L_10;
		// var notificationManager = notificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationManagerImpl", s_CurrentActivity, new NotificationCallback());
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* L_16 = (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7*)il2cpp_codegen_object_new(NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		NotificationCallback__ctor_m48B6FEB30BE7B1DD1981F178B417486ADE9E709A(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
		L_17 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_11, _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A, L_15, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_1 = L_17;
		// s_Jni = new JniApi(notificationManagerClass, notificationManager);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_18 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_1;
		JniApi_tB6AD56CE1342D28AE36EE491803BCD1AED31F22E L_20;
		memset((&L_20), 0, sizeof(L_20));
		JniApi__ctor_m4B0A801C84343FA62CEED8A6DAFBADDA17E67491((&L_20), L_18, L_19, /*hidden argument*/NULL);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___klass_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___self_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_FIRE_TIME_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_ID_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_INTENT_DATA_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_LARGE_ICON_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_REPEAT_INTERVAL_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_NOTIFICATION_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_SMALL_ICON_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_SHOW_IN_FOREGROUND_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_BIG_PICTURE_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_BIG_LARGE_ICON_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_BIG_CONTENT_TITLE_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_BIG_SUMMARY_TEXT_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_BIG_CONTENT_DESCRIPTION_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___KEY_BIG_SHOW_WHEN_COLLAPSED_15), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___getNotificationFromIntent_16), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___setNotificationIcon_17), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___setNotificationColor_18), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___getNotificationColor_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___setNotificationUsesChronometer_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___setNotificationGroupAlertBehavior_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___getNotificationGroupAlertBehavior_22), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___getNotificationChannelId_23), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___scheduleNotification_24), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationManager_0))->___createNotificationBuilder_25), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___EXTRA_TITLE_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___EXTRA_TEXT_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___EXTRA_SHOW_CHRONOMETER_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___EXTRA_BIG_TEXT_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___EXTRA_SHOW_WHEN_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___getGroup_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___getSortKey_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___extras_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___flags_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___number_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Notification_1))->___when_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___getExtras_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setContentTitle_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setContentText_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setAutoCancel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setNumber_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setStyle_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setWhen_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setGroup_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setGroupSummary_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setSortKey_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___NotificationBuilder_2))->___setShowWhen_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___containsKey_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___getBoolean_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___getInt_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___getLong_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___getString_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___putBoolean_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___putInt_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___putLong_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6))->___Bundle_3))->___putString_8), (void*)NULL);
		#endif
		// using (var version = new AndroidJavaClass("android/os/Build$VERSION"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_21 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_21, _stringLiteralB2471E258F48879198FDEA7BA87494515B30D9FF, NULL);
		V_3 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a3:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_22 = V_3;
					if (!L_22)
					{
						goto IL_00ac;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_23 = V_3;
					NullCheck(L_23);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
				}

IL_00ac:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// s_DeviceApiLevel = version.GetStatic<int>("SDK_INT");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_24 = V_3;
			NullCheck(L_24);
			int32_t L_25;
			L_25 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_24, _stringLiteral09DF0F4EA30887D5D6E2833D4C620AAAB11E1C34, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_DeviceApiLevel_7 = L_25;
			goto IL_00ad;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ad:
	{
		// s_TargetApiLevel = notificationManager.Call<int>("getTargetSdk");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27;
		L_27 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_26);
		int32_t L_28;
		L_28 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_26, _stringLiteralFCCF688AE29C8EBA59FC43EECD64FB2FCCA9AEBC, L_27, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_TargetApiLevel_8 = L_28;
		// s_Initialized = true;
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_9 = (bool)1;
		// return s_Initialized;
		bool L_29 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_9;
		return L_29;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___0_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
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
		// if (string.IsNullOrEmpty(channel.Id))
		String_t* L_1;
		L_1 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___0_channel), NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new Exception("Cannot register notification channel, the channel ID is not specified.");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (string.IsNullOrEmpty(channel.Name))
		String_t* L_4;
		L_4 = AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline((&___0_channel), NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Name is not set.", channel.Id));
		String_t* L_6;
		L_6 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___0_channel), NULL);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814)), L_6, NULL);
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var)));
	}

IL_0046:
	{
		// if (string.IsNullOrEmpty(channel.Description))
		String_t* L_9;
		L_9 = AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline((&___0_channel), NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Description is not set.", channel.Id));
		String_t* L_11;
		L_11 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___0_channel), NULL);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2)), L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var)));
	}

IL_006b:
	{
		// s_Jni.NotificationManager.RegisterNotificationChannel(channel);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_14 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_15 = ___0_channel;
		NotificationManagerJni_RegisterNotificationChannel_m2287717194672598268CF5FEFFEC0FAB88302EFB(L_14, L_15, NULL);
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notificationObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* V_6 = NULL;
	BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// using (var extras = s_Jni.Notification.Extras(notificationObj))
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_0 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_notificationObj;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = NotificationJni_Extras_m07C4106952429861A98249AF07DD3881CA28FE6B(L_0, L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0446:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					if (!L_3)
					{
						goto IL_044f;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_044f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var id = s_Jni.Bundle.GetInt(extras, s_Jni.NotificationManager.KEY_ID, -1);
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_5 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_7 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = L_7->___KEY_ID_3;
				int32_t L_9;
				L_9 = BundleJni_GetInt_mB95B41F2EA9D979BF0895F7ACA7EEA85663BF963(L_5, L_6, L_8, (-1), NULL);
				V_1 = L_9;
				// if (id == -1)
				int32_t L_10 = V_1;
				if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
				{
					goto IL_003e_1;
				}
			}
			{
				// return null;
				V_6 = (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*)NULL;
				goto IL_0450;
			}

IL_003e_1:
			{
				// var channelId = s_Jni.NotificationManager.GetNotificationChannelId(notificationObj);
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_11 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_notificationObj;
				String_t* L_13;
				L_13 = NotificationManagerJni_GetNotificationChannelId_mD3940568F0AA0432330365A436527C7CC73628B8(L_11, L_12, NULL);
				V_2 = L_13;
				// int flags = s_Jni.Notification.Flags(notificationObj);
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_14 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = ___0_notificationObj;
				int32_t L_16;
				L_16 = NotificationJni_Flags_mB83386B5DD4AB41A11C764C0B57DFE8B3897F657(L_14, L_15, NULL);
				V_3 = L_16;
				// var notification = new AndroidNotification();
				il2cpp_codegen_initobj((&V_4), sizeof(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18));
				// notification.Title = s_Jni.Bundle.GetString(extras, s_Jni.Notification.EXTRA_TITLE);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_17 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_0;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_19 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = L_19->___EXTRA_TITLE_0;
				String_t* L_21;
				L_21 = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(L_17, L_18, L_20, NULL);
				AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline((&V_4), L_21, NULL);
				// notification.Text = s_Jni.Bundle.GetString(extras, s_Jni.Notification.EXTRA_TEXT);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_22 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_0;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_24 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = L_24->___EXTRA_TEXT_1;
				String_t* L_26;
				L_26 = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(L_22, L_23, L_25, NULL);
				AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline((&V_4), L_26, NULL);
				// notification.SmallIcon = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_SMALL_ICON);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_27 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_29 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = L_29->___KEY_SMALL_ICON_8;
				String_t* L_31;
				L_31 = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(L_27, L_28, L_30, NULL);
				AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline((&V_4), L_31, NULL);
				// notification.LargeIcon = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_LARGE_ICON);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_32 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_33 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_34 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_35 = L_34->___KEY_LARGE_ICON_5;
				String_t* L_36;
				L_36 = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(L_32, L_33, L_35, NULL);
				AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline((&V_4), L_36, NULL);
				// notification.ShouldAutoCancel = 0 != (flags & s_Jni.Notification.FLAG_AUTO_CANCEL);
				int32_t L_37 = V_3;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_38 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				int32_t L_39 = L_38->___FLAG_AUTO_CANCEL_5;
				AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline((&V_4), (bool)((!(((uint32_t)((int32_t)(L_37&L_39))) <= ((uint32_t)0)))? 1 : 0), NULL);
				// notification.UsesStopwatch = s_Jni.Bundle.GetBoolean(extras, s_Jni.Notification.EXTRA_SHOW_CHRONOMETER, false);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_40 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = V_0;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_42 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_43 = L_42->___EXTRA_SHOW_CHRONOMETER_2;
				bool L_44;
				L_44 = BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D(L_40, L_41, L_43, (bool)0, NULL);
				AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline((&V_4), L_44, NULL);
				// notification.FireTime = s_Jni.Bundle.GetLong(extras, s_Jni.NotificationManager.KEY_FIRE_TIME, -1L).ToDatetime();
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_45 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_46 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_47 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_48 = L_47->___KEY_FIRE_TIME_2;
				int64_t L_49;
				L_49 = BundleJni_GetLong_m7CFD473890596791A03CF1F4BB3B6924149AFD15(L_45, L_46, L_48, ((int64_t)(-1)), NULL);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_50;
				L_50 = AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13(L_49, NULL);
				AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline((&V_4), L_50, NULL);
				// notification.RepeatInterval = s_Jni.Bundle.GetLong(extras, s_Jni.NotificationManager.KEY_REPEAT_INTERVAL, -1L).ToTimeSpan();
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_51 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_52 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_53 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = L_53->___KEY_REPEAT_INTERVAL_6;
				int64_t L_55;
				L_55 = BundleJni_GetLong_m7CFD473890596791A03CF1F4BB3B6924149AFD15(L_51, L_52, L_54, ((int64_t)(-1)), NULL);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_56;
				L_56 = AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20(L_55, NULL);
				Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_57;
				memset((&L_57), 0, sizeof(L_57));
				Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_57), L_56, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
				AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53((&V_4), L_57, NULL);
				// notification.ShowInForeground = s_Jni.Bundle.GetBoolean(extras, s_Jni.NotificationManager.KEY_SHOW_IN_FOREGROUND, true);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_58 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_59 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_60 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = L_60->___KEY_SHOW_IN_FOREGROUND_9;
				bool L_62;
				L_62 = BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D(L_58, L_59, L_61, (bool)1, NULL);
				AndroidNotification_set_ShowInForeground_m71F7080AA848A067108E6E59D5028BD28EEBF5C9((&V_4), L_62, NULL);
				// if (s_Jni.Bundle.ContainsKey(extras, s_Jni.Notification.EXTRA_BIG_TEXT))
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_63 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_64 = V_0;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_65 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_66 = L_65->___EXTRA_BIG_TEXT_3;
				bool L_67;
				L_67 = BundleJni_ContainsKey_m97F4A86715C874CC0C5E94A6B678943D3B11BC38(L_63, L_64, L_66, NULL);
				if (!L_67)
				{
					goto IL_01f3_1;
				}
			}
			{
				// notification.Style = NotificationStyle.BigTextStyle;
				AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline((&V_4), 2, NULL);
				goto IL_0226_1;
			}

IL_01f3_1:
			{
				// else if (s_Jni.Bundle.ContainsKey(extras, s_Jni.NotificationManager.KEY_BIG_PICTURE))
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_68 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_70 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_71 = L_70->___KEY_BIG_PICTURE_10;
				bool L_72;
				L_72 = BundleJni_ContainsKey_m97F4A86715C874CC0C5E94A6B678943D3B11BC38(L_68, L_69, L_71, NULL);
				if (!L_72)
				{
					goto IL_021e_1;
				}
			}
			{
				// notification.Style = NotificationStyle.BigPictureStyle;
				AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline((&V_4), 1, NULL);
				goto IL_0226_1;
			}

IL_021e_1:
			{
				// notification.Style = NotificationStyle.None;
				AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline((&V_4), 0, NULL);
			}

IL_0226_1:
			{
				// if (notification.Style == NotificationStyle.BigPictureStyle)
				int32_t L_73;
				L_73 = AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline((&V_4), NULL);
				if ((!(((uint32_t)L_73) == ((uint32_t)1))))
				{
					goto IL_032e_1;
				}
			}
			{
				// var bigPicture = new BigPictureStyle();
				il2cpp_codegen_initobj((&V_7), sizeof(BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948));
				// bigPicture.Picture = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_BIG_PICTURE);
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_74 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_75 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_76 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = L_76->___KEY_BIG_PICTURE_10;
				String_t* L_78;
				L_78 = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(L_74, L_75, L_77, NULL);
				BigPictureStyle_set_Picture_m41C910CF0EB6CAD5E4D267FA924253450D046FDD_inline((&V_7), L_78, NULL);
				// bigPicture.LargeIcon = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_BIG_LARGE_ICON);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_79 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_81 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				String_t* L_82 = L_81->___KEY_BIG_LARGE_ICON_11;
				String_t* L_83;
				L_83 = BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4(L_79, L_80, L_82, NULL);
				BigPictureStyle_set_LargeIcon_m650AA29718800E5C1C7821E1C854007F6FFA4109_inline((&V_7), L_83, NULL);
				// bigPicture.ContentTitle = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_BIG_CONTENT_TITLE);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_84 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_85 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_86 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				String_t* L_87 = L_86->___KEY_BIG_CONTENT_TITLE_12;
				String_t* L_88;
				L_88 = BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4(L_84, L_85, L_87, NULL);
				BigPictureStyle_set_ContentTitle_mC20D870851C6B6D368B45FF04BC21FF09CE5DFCC_inline((&V_7), L_88, NULL);
				// bigPicture.ContentDescription = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_BIG_CONTENT_DESCRIPTION);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_89 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_91 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				String_t* L_92 = L_91->___KEY_BIG_CONTENT_DESCRIPTION_14;
				String_t* L_93;
				L_93 = BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4(L_89, L_90, L_92, NULL);
				BigPictureStyle_set_ContentDescription_m666A2D473FF1DB56A4FDCB0A07DE7421ED5B433A_inline((&V_7), L_93, NULL);
				// bigPicture.SummaryText = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_BIG_SUMMARY_TEXT);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_94 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_96 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				String_t* L_97 = L_96->___KEY_BIG_SUMMARY_TEXT_13;
				String_t* L_98;
				L_98 = BundleJni_GetString_m40235874C89312020D1AF2D31C6C44C2C07806F4(L_94, L_95, L_97, NULL);
				BigPictureStyle_set_SummaryText_m9C4A2C8EACB08930CD64D58D0E24126D4BFF3191_inline((&V_7), L_98, NULL);
				// bigPicture.ShowWhenCollapsed = s_Jni.Bundle.GetBoolean(extras, s_Jni.NotificationManager.KEY_BIG_SHOW_WHEN_COLLAPSED, false);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_99 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_100 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_101 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				String_t* L_102 = L_101->___KEY_BIG_SHOW_WHEN_COLLAPSED_15;
				bool L_103;
				L_103 = BundleJni_GetBoolean_m4E8272A566160C74CB02454B7B6D6456C2BEDCCA(L_99, L_100, L_102, (bool)0, NULL);
				BigPictureStyle_set_ShowWhenCollapsed_m98CE8B7C9AC730D46E7F207877EC576928F41F6D_inline((&V_7), L_103, NULL);
				// notification.BigPicture = bigPicture;
				BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948 L_104 = V_7;
				Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F L_105;
				memset((&L_105), 0, sizeof(L_105));
				Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596((&L_105), L_104, /*hidden argument*/Nullable_1__ctor_m10E37AF09A91B6BE6592B840D2E341171E833596_RuntimeMethod_var);
				AndroidNotification_set_BigPicture_mEC33B3C89C44985CD8BF638EFEFD987241AA3349((&V_4), L_105, NULL);
			}

IL_032e_1:
			{
				// notification.Color = s_Jni.NotificationManager.GetNotificationColor(notificationObj);
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_106 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_107 = ___0_notificationObj;
				Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_108;
				L_108 = NotificationManagerJni_GetNotificationColor_m6C7506EFFFCE6C1A77ABF9C6005F23E00D760892(L_106, L_107, NULL);
				AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0((&V_4), L_108, NULL);
				// notification.Number = s_Jni.Notification.Number(notificationObj);
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_109 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_110 = ___0_notificationObj;
				int32_t L_111;
				L_111 = NotificationJni_Number_m04C1760895E6D9FE5334CADE9A79F479EBB7CE8D(L_109, L_110, NULL);
				AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline((&V_4), L_111, NULL);
				// notification.IntentData = s_Jni.Bundle.GetString(extras, s_Jni.NotificationManager.KEY_INTENT_DATA);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_112 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_113 = V_0;
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_114 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_115 = L_114->___KEY_INTENT_DATA_4;
				String_t* L_116;
				L_116 = BundleJni_GetString_mB958FCB77B630633828DD07732182FFC695CC47E(L_112, L_113, L_115, NULL);
				AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline((&V_4), L_116, NULL);
				// notification.Group = s_Jni.Notification.GetGroup(notificationObj);
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_117 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = ___0_notificationObj;
				String_t* L_119;
				L_119 = NotificationJni_GetGroup_mD319C77393EBCA352701EBAFFA186B26ED9D490A(L_117, L_118, NULL);
				AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline((&V_4), L_119, NULL);
				// notification.GroupSummary = 0 != (flags & s_Jni.Notification.FLAG_GROUP_SUMMARY);
				int32_t L_120 = V_3;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_121 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				int32_t L_122 = L_121->___FLAG_GROUP_SUMMARY_6;
				AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline((&V_4), (bool)((!(((uint32_t)((int32_t)(L_120&L_122))) <= ((uint32_t)0)))? 1 : 0), NULL);
				// notification.SortKey = s_Jni.Notification.GetSortKey(notificationObj);
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_123 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_124 = ___0_notificationObj;
				String_t* L_125;
				L_125 = NotificationJni_GetSortKey_mFC8EA047FA620FCC08740F51D225A49508479624(L_123, L_124, NULL);
				AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline((&V_4), L_125, NULL);
				// notification.GroupAlertBehaviour = s_Jni.NotificationManager.GetNotificationGroupAlertBehavior(notificationObj).ToGroupAlertBehaviours();
				NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1* L_126 = (NotificationManagerJni_t1F9428BF0AD0E63A1650F9E32A470918D864A5C1*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___NotificationManager_0);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_127 = ___0_notificationObj;
				int32_t L_128;
				L_128 = NotificationManagerJni_GetNotificationGroupAlertBehavior_m63669F0CF71CD90554697607A0E02623F4DB7D89(L_126, L_127, NULL);
				int32_t L_129;
				L_129 = AndroidNotificationExtensions_ToGroupAlertBehaviours_mC3532E41409A2AD93B89C88F6E52E12AC064E348(L_128, NULL);
				AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline((&V_4), L_129, NULL);
				// var showTimestamp = s_Jni.Bundle.GetBoolean(extras, s_Jni.Notification.EXTRA_SHOW_WHEN, false);
				BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701* L_130 = (BundleJni_t578C7BD49F759A34A0B1B324FD7CAB3A57CB0701*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Bundle_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_131 = V_0;
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_132 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_133 = L_132->___EXTRA_SHOW_WHEN_4;
				bool L_134;
				L_134 = BundleJni_GetBoolean_mBD144FE088069A2BDA68ADEC5F4AA35CBDA44A0D(L_130, L_131, L_133, (bool)0, NULL);
				V_5 = L_134;
				// notification.ShowTimestamp = showTimestamp;
				bool L_135 = V_5;
				AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline((&V_4), L_135, NULL);
				// if (showTimestamp)
				bool L_136 = V_5;
				if (!L_136)
				{
					goto IL_0432_1;
				}
			}
			{
				// notification.CustomTimestamp = s_Jni.Notification.When(notificationObj).ToDatetime();
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654* L_137 = (NotificationJni_t5252FE73A2521DFB853BCA6E1E81318D380B5654*)(&(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Jni_6)->___Notification_1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_138 = ___0_notificationObj;
				int64_t L_139;
				L_139 = NotificationJni_When_m2B45ECE7EED2AE4943FF4F75AEF79B2DEE84F649(L_137, L_138, NULL);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_140;
				L_140 = AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13(L_139, NULL);
				AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB((&V_4), L_140, NULL);
			}

IL_0432_1:
			{
				// var data = new AndroidNotificationIntentData(id, channelId, notification);
				int32_t L_141 = V_1;
				String_t* L_142 = V_2;
				AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_143 = V_4;
				AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_144 = (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*)il2cpp_codegen_object_new(AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729_il2cpp_TypeInfo_var);
				NullCheck(L_144);
				AndroidNotificationIntentData__ctor_mC71DBF52CCA5391F4F0D04F329F96E834E847383(L_144, L_141, L_142, L_143, NULL);
				// data.NativeNotification = notificationObj;
				AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_145 = L_144;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_146 = ___0_notificationObj;
				NullCheck(L_145);
				AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74_inline(L_145, L_146, NULL);
				// return data;
				V_6 = L_145;
				goto IL_0450;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0450:
	{
		// }
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_147 = V_6;
		return L_147;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mBAD7E5C376AA4F1AE5823E333F17F784D5191B98 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* V_0 = NULL;
	{
		// var data = GetNotificationData(notification);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_notification;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_1;
		L_1 = AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A(L_0, NULL);
		V_0 = L_1;
		// OnNotificationReceived(data);
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_2 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_4;
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter__cctor_m7D790FF1D3EBAB7D2D7BC7514DB39EAA46EF8FFD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__55_0_m1BF57487F98298E956FDC79C2D655504EA2C5938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61535C6D3C27938B30FE2DB29A665D6F1D93C101);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int API_NOTIFICATIONS_CAN_BE_BLOCKED = 24;
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___API_NOTIFICATIONS_CAN_BE_BLOCKED_0 = ((int32_t)24);
		// private static int API_POST_NOTIFICATIONS_PERMISSION_REQUIRED = 33;
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___API_POST_NOTIFICATIONS_PERMISSION_REQUIRED_1 = ((int32_t)33);
		// internal static string PERMISSION_POST_NOTIFICATIONS = "android.permission.POST_NOTIFICATIONS";
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___PERMISSION_POST_NOTIFICATIONS_2 = _stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___PERMISSION_POST_NOTIFICATIONS_2), (void*)_stringLiteral9AA19FA11729D14DDFFF88AB940E187C47936812);
		// public static string SETTING_POST_NOTIFICATIONS_PERMISSION = "com.unity.androidnotifications.PostNotificationsPermission";
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___SETTING_POST_NOTIFICATIONS_PERMISSION_3 = _stringLiteral61535C6D3C27938B30FE2DB29A665D6F1D93C101;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___SETTING_POST_NOTIFICATIONS_PERMISSION_3), (void*)_stringLiteral61535C6D3C27938B30FE2DB29A665D6F1D93C101);
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* L_0 = ((U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_1 = (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)il2cpp_codegen_object_new(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotificationReceivedCallback__ctor_m1C6581A2A364B5F84236592BEE8C44D9C06E356B(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__55_0_m1BF57487F98298E956FDC79C2D655504EA2C5938_RuntimeMethod_var), NULL);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_4), (void*)L_1);
		// private static bool s_Initialized = false;
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_9 = (bool)0;
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
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_Multicast(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* currentDelegate = reinterpret_cast<NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInst(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStatic(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStaticInvoker(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	InvokerActionInvoker1< AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_data);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_ClosedStaticInvoker(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_data);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenVirtual(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_data);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInterface(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_data);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericVirtual(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	GenericVirtualActionInvoker0::Invoke(method, ___0_data);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericInterface(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_data);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m1C6581A2A364B5F84236592BEE8C44D9C06E356B (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_Multicast;
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4 (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB706452B2559848DAC4032647E21CF1A31496DEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* L_0 = (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20*)il2cpp_codegen_object_new(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6E71531692B5D59264A9AB9B2800CA786AD38E37(L_0, NULL);
		((U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6E71531692B5D59264A9AB9B2800CA786AD38E37 (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::<.cctor>b__55_0(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__55_0_m1BF57487F98298E956FDC79C2D655504EA2C5938 (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate { };
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
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_pinvoke(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CGroupU3Ek__BackingField_3 = il2cpp_codegen_marshal_string(unmarshaled.___U3CGroupU3Ek__BackingField_3);
	marshaled.___U3CImportanceU3Ek__BackingField_4 = unmarshaled.___U3CImportanceU3Ek__BackingField_4;
	marshaled.___U3CCanBypassDndU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.___U3CCanBypassDndU3Ek__BackingField_5);
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_6);
	marshaled.___U3CEnableLightsU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.___U3CEnableLightsU3Ek__BackingField_7);
	marshaled.___U3CEnableVibrationU3Ek__BackingField_8 = static_cast<int32_t>(unmarshaled.___U3CEnableVibrationU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_9 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.___U3CVibrationPatternU3Ek__BackingField_9);
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10 = unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10;
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_pinvoke_back(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke& marshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CIdU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CDescriptionU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	unmarshaled.___U3CGroupU3Ek__BackingField_3 = il2cpp_codegen_marshal_string_result(marshaled.___U3CGroupU3Ek__BackingField_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CGroupU3Ek__BackingField_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CGroupU3Ek__BackingField_3));
	int32_t unmarshaledU3CImportanceU3Ek__BackingField_temp_4 = 0;
	unmarshaledU3CImportanceU3Ek__BackingField_temp_4 = marshaled.___U3CImportanceU3Ek__BackingField_4;
	unmarshaled.___U3CImportanceU3Ek__BackingField_4 = unmarshaledU3CImportanceU3Ek__BackingField_temp_4;
	bool unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_5 = false;
	unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_5);
	unmarshaled.___U3CCanBypassDndU3Ek__BackingField_5 = unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_5;
	bool unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_6 = false;
	unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_6);
	unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_6 = unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_6;
	bool unmarshaledU3CEnableLightsU3Ek__BackingField_temp_7 = false;
	unmarshaledU3CEnableLightsU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_7);
	unmarshaled.___U3CEnableLightsU3Ek__BackingField_7 = unmarshaledU3CEnableLightsU3Ek__BackingField_temp_7;
	bool unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_8 = false;
	unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_8 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_8);
	unmarshaled.___U3CEnableVibrationU3Ek__BackingField_8 = unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_8;
	unmarshaled.___U3CVibrationPatternU3Ek__BackingField_9 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CVibrationPatternU3Ek__BackingField_9), (void*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_9));
	int32_t unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_10 = 0;
	unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_10 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10;
	unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10 = unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_10;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_pinvoke_cleanup(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CGroupU3Ek__BackingField_3);
	marshaled.___U3CGroupU3Ek__BackingField_3 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_9);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_9 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_com(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CGroupU3Ek__BackingField_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CGroupU3Ek__BackingField_3);
	marshaled.___U3CImportanceU3Ek__BackingField_4 = unmarshaled.___U3CImportanceU3Ek__BackingField_4;
	marshaled.___U3CCanBypassDndU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.___U3CCanBypassDndU3Ek__BackingField_5);
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_6);
	marshaled.___U3CEnableLightsU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.___U3CEnableLightsU3Ek__BackingField_7);
	marshaled.___U3CEnableVibrationU3Ek__BackingField_8 = static_cast<int32_t>(unmarshaled.___U3CEnableVibrationU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_9 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.___U3CVibrationPatternU3Ek__BackingField_9);
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10 = unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10;
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_com_back(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com& marshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CIdU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CDescriptionU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	unmarshaled.___U3CGroupU3Ek__BackingField_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CGroupU3Ek__BackingField_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CGroupU3Ek__BackingField_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CGroupU3Ek__BackingField_3));
	int32_t unmarshaledU3CImportanceU3Ek__BackingField_temp_4 = 0;
	unmarshaledU3CImportanceU3Ek__BackingField_temp_4 = marshaled.___U3CImportanceU3Ek__BackingField_4;
	unmarshaled.___U3CImportanceU3Ek__BackingField_4 = unmarshaledU3CImportanceU3Ek__BackingField_temp_4;
	bool unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_5 = false;
	unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_5);
	unmarshaled.___U3CCanBypassDndU3Ek__BackingField_5 = unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_5;
	bool unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_6 = false;
	unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_6);
	unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_6 = unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_6;
	bool unmarshaledU3CEnableLightsU3Ek__BackingField_temp_7 = false;
	unmarshaledU3CEnableLightsU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_7);
	unmarshaled.___U3CEnableLightsU3Ek__BackingField_7 = unmarshaledU3CEnableLightsU3Ek__BackingField_temp_7;
	bool unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_8 = false;
	unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_8 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_8);
	unmarshaled.___U3CEnableVibrationU3Ek__BackingField_8 = unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_8;
	unmarshaled.___U3CVibrationPatternU3Ek__BackingField_9 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_9);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CVibrationPatternU3Ek__BackingField_9), (void*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_9));
	int32_t unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_10 = 0;
	unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_10 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10;
	unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_10 = unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_10;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_com_cleanup(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CGroupU3Ek__BackingField_3);
	marshaled.___U3CGroupU3Ek__BackingField_3 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_9);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_9 = NULL;
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline(_thisAdjusted, ___0_value, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline(_thisAdjusted, ___0_value, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline(_thisAdjusted, ___0_value, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Group_m437B5A0AF019C5C9DB14B9075B07F85B8F772687 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->___U3CGroupU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Group_m437B5A0AF019C5C9DB14B9075B07F85B8F772687_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Group_m437B5A0AF019C5C9DB14B9075B07F85B8F772687_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->___U3CImportanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CImportanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->___U3CCanBypassDndU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->___U3CCanShowBadgeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->___U3CEnableLightsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->___U3CEnableVibrationU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___U3CVibrationPatternU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* _returnValue;
	_returnValue = AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->___U3CLockScreenVisibilityU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline(_thisAdjusted, method);
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
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_mC3532E41409A2AD93B89C88F6E52E12AC064E348 (int32_t ___0_groupAlertBehaviour, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupAlertBehaviours_tC857504ABF5835A6033C1A8345A49C092389F237_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(GroupAlertBehaviours), groupAlertBehaviour))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GroupAlertBehaviours_tC857504ABF5835A6033C1A8345A49C092389F237_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___0_groupAlertBehaviour;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (GroupAlertBehaviours)groupAlertBehaviour;
		int32_t L_6 = ___0_groupAlertBehaviour;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return GroupAlertBehaviours.GroupAlertAll;
		return (int32_t)(0);
	}
}
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AndroidNotificationExtensions_ToColor_m5C7C27A8A70FA43FC6904E6467CB728DBB0DD7B8 (int32_t ___0_color, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int a = (color >> 24) & 0xff;
		int32_t L_0 = ___0_color;
		V_0 = ((int32_t)(((int32_t)(L_0>>((int32_t)24)))&((int32_t)255)));
		// int r = (color >> 16) & 0xff;
		int32_t L_1 = ___0_color;
		// int g = (color >> 8) & 0xff;
		int32_t L_2 = ___0_color;
		V_1 = ((int32_t)(((int32_t)(L_2>>8))&((int32_t)255)));
		// int b = (color) & 0xff;
		int32_t L_3 = ___0_color;
		V_2 = ((int32_t)(L_3&((int32_t)255)));
		// return new Color32((byte)r, (byte)g, (byte)b, (byte)a);
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_1>>((int32_t)16)))&((int32_t)255)))), (uint8_t)((int32_t)(uint8_t)L_4), (uint8_t)((int32_t)(uint8_t)L_5), (uint8_t)((int32_t)(uint8_t)L_6), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		return L_8;
	}
}
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13 (int64_t ___0_dateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, NULL);
		// return origin.AddMilliseconds(dateTime).ToLocalTime();
		int64_t L_0 = ___0_dateTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&V_0), ((double)L_0), NULL);
		V_1 = L_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_1), NULL);
		return L_2;
	}
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20 (int64_t ___0_timeSpan, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromMilliseconds(timeSpan);
		int64_t L_0 = ___0_timeSpan;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775(((double)L_0), NULL);
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
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::set_NativeNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_value;
		__this->___U3CNativeNotificationU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeNotificationU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mC71DBF52CCA5391F4F0D04F329F96E834E847383 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, int32_t ___0_id, String_t* ___1_channelId, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___2_notification, const RuntimeMethod* method) 
{
	{
		// public AndroidNotificationIntentData(int id, string channelId, AndroidNotification notification)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = id;
		int32_t L_0 = ___0_id;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		// Channel = channelId;
		String_t* L_1 = ___1_channelId;
		__this->___U3CChannelU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChannelU3Ek__BackingField_1), (void*)L_1);
		// Notification = notification;
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_2 = ___2_notification;
		__this->___U3CNotificationU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CTitleU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CTextU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CSmallIconU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CLargeIconU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CGroupU3Ek__BackingField_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CSortKeyU3Ek__BackingField_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CIntentDataU3Ek__BackingField_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___m_BigPictureStyle_20))->___value_1))->___U3CLargeIconU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___m_BigPictureStyle_20))->___value_1))->___U3CPictureU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___m_BigPictureStyle_20))->___value_1))->___U3CContentTitleU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___m_BigPictureStyle_20))->___value_1))->___U3CContentDescriptionU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___m_BigPictureStyle_20))->___value_1))->___U3CSummaryTextU3Ek__BackingField_4), (void*)NULL);
		#endif
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
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m5FE30FC8FD86F26AD0AC5694A43494164E0D7B55 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_notification, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0023;
					}
				}
				{
					AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// m_ReceivedNotificationQueue.Add(notification);
			List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_3 = __this->___m_ReceivedNotificationQueue_5;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_notification;
			NullCheck(L_3);
			List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_inline(L_3, L_4, List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_RuntimeMethod_var);
			// }
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Update_mCF4D8CD56EFBC3A03AC72E192CF11A4A0BB7AE3B (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* V_0 = NULL;
	bool V_1 = false;
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* V_2 = NULL;
	Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0040;
					}
				}
				{
					AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0040:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				// if (m_ReceivedNotificationQueue.Count == 0)
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_3 = __this->___m_ReceivedNotificationQueue_5;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_inline(L_3, List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001b_1;
				}
			}
			{
				// return;
				goto IL_008c;
			}

IL_001b_1:
			{
				// var temp = m_ReceivedNotificationQueue;
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_5 = __this->___m_ReceivedNotificationQueue_5;
				V_2 = L_5;
				// m_ReceivedNotificationQueue = m_ReceivedNotificationList;
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_6 = __this->___m_ReceivedNotificationList_6;
				__this->___m_ReceivedNotificationQueue_5 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationQueue_5), (void*)L_6);
				// m_ReceivedNotificationList = temp;
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_7 = V_2;
				__this->___m_ReceivedNotificationList_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationList_6), (void*)L_7);
				// }
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// foreach (var notification in m_ReceivedNotificationList)
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_8 = __this->___m_ReceivedNotificationList_6;
		NullCheck(L_8);
		Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 L_9;
		L_9 = List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D(L_8, List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE((&V_3), Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_004f_1:
			{
				// foreach (var notification in m_ReceivedNotificationList)
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
				L_10 = Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_inline((&V_3), Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_RuntimeMethod_var);
				V_4 = L_10;
			}
			try
			{// begin try (depth: 2)
				// AndroidNotificationCenter.ReceivedNotificationCallback(notification);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_4;
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidNotificationCenter_ReceivedNotificationCallback_mBAD7E5C376AA4F1AE5823E333F17F784D5191B98(L_11, NULL);
				// }
				goto IL_0068_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0061_1;
				}
				throw e;
			}

CATCH_0061_1:
			{// begin catch(System.Exception)
				Exception_t* L_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				// Debug.LogException(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_12, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0068_1;
			}// end catch (depth: 2)

IL_0068_1:
			{
				// foreach (var notification in m_ReceivedNotificationList)
				bool L_13;
				L_13 = Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC((&V_3), Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		// m_ReceivedNotificationList.Clear();
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_14 = __this->___m_ReceivedNotificationList_6;
		NullCheck(L_14);
		List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_inline(L_14, List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_RuntimeMethod_var);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Awake_mD872600A1E79A1A4D281EE64784AC85F854844DE (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_OnDestroy_mE59CAE879E6ABF3BF07AEC00D714BA054954F7C5 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4 = (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4), (void*)(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher__ctor_m4EA7888A40DBD74FCC19C2ED7D0278CCE4D8E9B1 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<AndroidJavaObject> m_ReceivedNotificationQueue = new List<AndroidJavaObject>();
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_0 = (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*)il2cpp_codegen_object_new(List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390(L_0, List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var);
		__this->___m_ReceivedNotificationQueue_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationQueue_5), (void*)L_0);
		// private List<AndroidJavaObject> m_ReceivedNotificationList = new List<AndroidJavaObject>();
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_1 = (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*)il2cpp_codegen_object_new(List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390(L_1, List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var);
		__this->___m_ReceivedNotificationList_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationList_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_LargeIcon_m650AA29718800E5C1C7821E1C854007F6FFA4109_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CLargeIconU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_Picture_m41C910CF0EB6CAD5E4D267FA924253450D046FDD_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Picture { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPictureU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPictureU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_ContentTitle_mC20D870851C6B6D368B45FF04BC21FF09CE5DFCC_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ContentTitle { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CContentTitleU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentTitleU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_ContentDescription_m666A2D473FF1DB56A4FDCB0A07DE7421ED5B433A_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ContentDescription { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CContentDescriptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentDescriptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_SummaryText_m9C4A2C8EACB08930CD64D58D0E24126D4BFF3191_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SummaryText { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSummaryTextU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSummaryTextU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BigPictureStyle_set_ShowWhenCollapsed_m98CE8B7C9AC730D46E7F207877EC576928F41F6D_inline (BigPictureStyle_t06EB848EE24FCB075EC4C8C1583A16CA1F454948* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShowWhenCollapsed { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowWhenCollapsedU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTitleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSmallIconU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSmallIconU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CFireTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CLargeIconU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->___U3CStyleU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CStyleU3Ek__BackingField_5 = L_0;
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CNumberU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShouldAutoCancelU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesStopwatchU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CGroupU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGroupU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CGroupSummaryU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CGroupAlertBehaviourU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CSortKeyU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSortKeyU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIntentDataU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentDataU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowTimestampU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CShowCustomTimestampU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->___U3CImportanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->___U3CEnableLightsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->___U3CEnableVibrationU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->___U3CCanBypassDndU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->___U3CCanShowBadgeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___U3CVibrationPatternU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->___U3CLockScreenVisibilityU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Group_m437B5A0AF019C5C9DB14B9075B07F85B8F772687_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->___U3CGroupU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74_inline (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_value;
		__this->___U3CNativeNotificationU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeNotificationU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_inline (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CImportanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9877585702B67F8BA1947B51F4631614D6A3044F_gshared_inline (Nullable_1_t205AC5F81B295644EF141E6849012ECD7E78282F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
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
