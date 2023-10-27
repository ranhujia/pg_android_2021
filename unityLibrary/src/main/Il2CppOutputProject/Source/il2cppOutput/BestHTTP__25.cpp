#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t062FA002B67620C38D4B8ABE97BB0944C9D08012;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_tA504C861750EFDCE8F414B29A46C558F1E4D4BD9;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
struct ECEndomorphism_t6B4D3815F37454A99866FED0C08B6A2DDC543B71;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
struct ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
struct FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t62356F4C3771ED6460429EAB0C796DE9FC06A82C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest
struct IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.Field.IFiniteField
struct IFiniteField_t29D6CD2EA99DBC82C2DD6FE03D689A9AD74629D9;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_tFCD59F2C036B8BBCED979611AD40A53569CB1D92;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine
struct SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine
struct SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine
struct SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4;
// System.String
struct String_t;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine
struct TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
struct TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher
struct Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____1674D0631A2E37B60EC748BC3899FEE1550C108AF30B85CE96A70C5CA4682D03_24_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_131_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____874805F2B76BD7887959F02FE0B2A8C07C1E1D41F41AAD4D2AA1D0AB21A1780F_147_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____9AC0C32A73444A448170AE1EFE7F69A0D3A7F6E1335FA0E112D9F96EB7EE3CC7_167_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____A589B8F1C215FA773BA2724EB825E8B2D1792FB955349574454E18C63537F2A6_183_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACD542E0A3C9F6F5F927608EB8D67601FB1F06C;
IL2CPP_EXTERN_C String_t* _stringLiteral0CECB4252188823B622C9B595E368C07831C1FA9;
IL2CPP_EXTERN_C String_t* _stringLiteral14230403A1CFC5A19F854BBF8DBA3B9A2CF7E7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277;
IL2CPP_EXTERN_C String_t* _stringLiteral19A7034042434538838BF70971EC853B1C495314;
IL2CPP_EXTERN_C String_t* _stringLiteral19B0BF1A5CB94084D5D4B38EEC683FDF8DB6FDC3;
IL2CPP_EXTERN_C String_t* _stringLiteral1EEC7A46AB1FF146779BA52B5BCAF9EE5C677E31;
IL2CPP_EXTERN_C String_t* _stringLiteral25170142FB4F3488DD4A97779A090DDE52AC8358;
IL2CPP_EXTERN_C String_t* _stringLiteral2872CE200AF678DAC1BDABD521199451F3CC11FA;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral37EE95486CB11E75528EB47FCD56D907FBE6F34C;
IL2CPP_EXTERN_C String_t* _stringLiteral4690523A3F07C01F5A658C98771DE79551536F47;
IL2CPP_EXTERN_C String_t* _stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral4A0FABAE51E3B4BABEF37449D8A7FE638A975502;
IL2CPP_EXTERN_C String_t* _stringLiteral50BFF92E761A73E06C17597C8A180D7C5EEF92AB;
IL2CPP_EXTERN_C String_t* _stringLiteral52C87AE284E4E522A650221F2C4D41E4C9790B61;
IL2CPP_EXTERN_C String_t* _stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382;
IL2CPP_EXTERN_C String_t* _stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC2A08F30023C6460F14108C58D275A5F58ED73;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral77B5FAF23AFEE6B8E228BD4414C16F21E192E810;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4162EFF5CAB0D794CB0E5966FF20B269E903EA;
IL2CPP_EXTERN_C String_t* _stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32;
IL2CPP_EXTERN_C String_t* _stringLiteral9F954BE9FD9E999DA1677DADC6D2CAB27412A282;
IL2CPP_EXTERN_C String_t* _stringLiteralA00666B082ECFBED37CF7EF580BCCF7C15F6A8FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAE08318E20C8ACEB5B4568444350437DE7261C37;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
IL2CPP_EXTERN_C String_t* _stringLiteralC894542CC15E7FDD0B254592D14D3E16EB7762B6;
IL2CPP_EXTERN_C String_t* _stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D26C9F26A712F62A6BE84B1E41F4C6BE837C16;
IL2CPP_EXTERN_C String_t* _stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralFE004A5E158484C188AA92B5BB521E3CD282D19F;
IL2CPP_EXTERN_C const RuntimeMethod* SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SM2Engine_Init_mBD3781066E335AD062E33B2CD247BF73344EFD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SM4Engine_ProcessBlock_mA0EEA5203EA853DAD5942145977C45A31AC9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerpentEngineBase_Init_m3CABBC4C176244D4B9C1B665027347B1B811B5BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerpentEngineBase_ProcessBlock_m56479C3F07A30E3F5A4EEF23432FB0F7377DA0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipjackEngine_Init_mD285CB99F7D30692EB97953905A79DF0F6002EEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipjackEngine_ProcessBlock_m74D4B3826DD77254A994BD4294B16C44C6CCB51E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeaEngine_Init_m4869AF2806F31B9ED0A0CF6B78D1D7ACE569A2B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeaEngine_ProcessBlock_m48DA047CE522F2D72642708600393998381E9E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TnepresEngine_MakeWorkingKey_mA88B6D9DC946D3993075A7FDB6A2F002214EC604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_Init_m657A3D704EF33BC7E5F2876E256B9463E65CAA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_ProcessBlock_m55BCF5286E04760E20413E196EB75958D7BEB852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
struct AbstractECMultiplier_tD573C05A87A7E675DFEA5CF160AC50DC426BA681  : public RuntimeObject
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_t9134C4F441DBDCE2DEA38C294FA2E337628AA552  : public RuntimeObject
{
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter::privateKey
	bool ___privateKey_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C  : public RuntimeObject
{
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::magnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude_31;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::sign
	int32_t ___sign_32;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::nBits
	int32_t ___nBits_33;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::nBitLength
	int32_t ___nBitLength_34;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::mQuote
	int32_t ___mQuote_35;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.Field.IFiniteField BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_field
	RuntimeObject* ___m_field_8;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_a
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_a_9;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_b
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_b_10;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_order
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___m_order_11;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_cofactor
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___m_cofactor_12;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_coord
	int32_t ___m_coord_13;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Endo.ECEndomorphism BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_endomorphism
	RuntimeObject* ___m_endomorphism_14;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::m_multiplier
	RuntimeObject* ___m_multiplier_15;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::curve
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___curve_0;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed_1;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::g
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___g_2;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::n
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___n_3;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::h
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___h_4;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::hInv
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___hInv_5;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D  : public RuntimeObject
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::m_curve
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___m_curve_1;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::m_x
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_x_2;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::m_y
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_y_3;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::m_zs
	ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___m_zs_4;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::m_withCompression
	bool ___m_withCompression_5;
	// System.Collections.IDictionary BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::m_preCompTable
	RuntimeObject* ___m_preCompTable_6;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5  : public RuntimeObject
{
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58  : public RuntimeObject
{
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::parameters
	RuntimeObject* ___parameters_0;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::random
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___random_1;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine
struct SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::mDigest
	RuntimeObject* ___mDigest_0;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::mForEncryption
	bool ___mForEncryption_1;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::mECKey
	ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* ___mECKey_2;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::mECParams
	ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ___mECParams_3;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::mCurveLength
	int32_t ___mCurveLength_4;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::mRandom
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___mRandom_5;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine
struct SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29  : public RuntimeObject
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::rk
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rk_4;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112  : public RuntimeObject
{
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::encrypting
	bool ___encrypting_3;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::wKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey_4;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X0
	int32_t ___X0_5;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X1
	int32_t ___X1_6;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X2
	int32_t ___X2_7;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X3
	int32_t ___X3_8;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine
struct SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4  : public RuntimeObject
{
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key0
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key0_2;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key1_3;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key2_4;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::key3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key3_5;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::encrypting
	bool ___encrypting_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine
struct TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF  : public RuntimeObject
{
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::_a
	uint32_t ____a_4;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::_b
	uint32_t ____b_5;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::_c
	uint32_t ____c_6;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::_d
	uint32_t ____d_7;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::_initialised
	bool ____initialised_8;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::_forEncryption
	bool ____forEncryption_9;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC  : public RuntimeObject
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeBytes
	int32_t ___blocksizeBytes_14;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeWords
	int32_t ___blocksizeWords_15;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::currentBlock
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___currentBlock_16;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_17;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_18;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::cipher
	ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* ___cipher_19;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::forEncryption
	bool ___forEncryption_20;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
struct TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE  : public RuntimeObject
{
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::tweak
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tweak_0;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::key
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* ___key_1;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD  : public RuntimeObject
{
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::encrypting
	bool ___encrypting_36;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS0
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS0_37;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS1_38;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS2_39;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS3_40;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSubKeys
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSubKeys_41;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSBox
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSBox_42;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::k64Cnt
	int32_t ___k64Cnt_43;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_44;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747  : public RuntimeObject
{
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_0;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_1;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
struct ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE  : public AsymmetricKeyParameter_t9134C4F441DBDCE2DEA38C294FA2E337628AA552
{
	// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::algorithm
	String_t* ___algorithm_2;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::parameters
	ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ___parameters_3;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::publicKeyParamSet
	DerObjectIdentifier_tA504C861750EFDCE8F414B29A46C558F1E4D4BD9* ___publicKeyParamSet_4;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
struct FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902  : public AbstractECMultiplier_tD573C05A87A7E675DFEA5CF160AC50DC426BA681
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::V
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___V_6;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::inwords
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inwords_7;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::xOff
	int32_t ___xOff_8;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::W
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___W_9;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Prng.IRandomGenerator BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_7;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743  : public SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506  : public ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher
struct Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27  : public ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849  : public ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
struct ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD  : public ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::d
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___d_5;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
struct ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B  : public ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::q
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___q_5;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349  : public Exception_t
{
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251  : public CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404  : public CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_StaticFields
{
	// System.Int32[][] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::primeLists
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists_0;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::primeProducts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts_1;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::ZeroMagnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude_4;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::ZeroEncoding
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding_5;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::SMALL_CONSTANTS
	BigIntegerU5BU5D_t062FA002B67620C38D4B8ABE97BB0944C9D08012* ___SMALL_CONSTANTS_6;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::Zero
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Zero_7;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::One
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___One_8;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::Two
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Two_9;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::Three
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Three_10;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::Four
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Four_11;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::Ten
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Ten_12;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::BitLengthTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable_13;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix2
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix2_18;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix2E
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix2E_19;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix8
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix8_20;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix8E
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix8E_21;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix10
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix10_22;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix10E
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix10E_23;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix16
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix16_24;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::radix16E
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix16E_25;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::RandomSource
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___RandomSource_26;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::ExpWindowThresholds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds_27;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B_StaticFields
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::EMPTY_ZS
	ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___EMPTY_ZS_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine
struct SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields
{
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::Sbox
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sbox_1;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::CK
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___CK_2;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::FK
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___FK_3;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::BlockSize
	int32_t ___BlockSize_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine
struct SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields
{
	// System.Int16[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::ftable
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ftable_1;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields
{
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD9
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD9_10;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD17
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD17_11;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD5
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD5_12;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD3_13;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields
{
	// System.Byte[,] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::P
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* ___P_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher

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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
struct ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_StaticFields
{
	// System.String[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::algorithms
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___algorithms_1;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier

// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::T
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T_10;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest

// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6_StaticFields
{
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_5;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___master_6;
	// System.Double BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_8;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.ArgumentException

// System.ArgumentException

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.InvalidCipherTextException

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.InvalidCipherTextException

// System.InvalidOperationException

// System.InvalidOperationException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
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
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638  : public RuntimeArray
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
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5 (KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3 (int32_t ___0_x, int32_t ___1_bits, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9 (int32_t ___0_x, int32_t ___1_bits, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::G(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::H(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest__ctor_m95C3E5DE913191266CB039DD72EBAB1B59C9263B (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine__ctor_m3177A39E90B088011B4A0C602FDA2DA603E2657C (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_m3706EE54311F6BD833CB80C71C1C18BD2D48E227_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECKeyParameters::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline (ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* __this, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline (ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B* __this, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_H()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_IsInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Random()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ParametersWithRandom_get_Random_mEA11E3BF8C0CEAD478D02EE8BD106BC9A6BC9C5E_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_Curve()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Encrypt_m4BD2633FBA351F4772F9CF8B622CF670765F201A (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedPointCombMultiplier__ctor_mF6FF1308D0C5F9EC3A779976BAE2295DC8A6E4E3 (FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::NextK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* SM2Engine_NextK_m151328D30F29D64CF9C54593D3D27AA521548968 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECDomainParameters_get_G_m168D02E316313C80F26DAC3F8CB67E8F8C613D86_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Kdf(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest,BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___1_c1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_encData, const RuntimeMethod* method) ;
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::NotEncrypted(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SM2Engine_NotEncrypted_m4AD1189FECEBE3B6366F5F4D70B1F47A3AD6B9C0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_inOff, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::AddFieldElement(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest,BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_v, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Security.DigestUtilities::DoFinal(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DigestUtilities_DoFinal_mACA582EC7255EEA9FA9074BD481290544B78167B (RuntimeObject* ___0_digest, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Arrays::ConcatenateAll(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_ConcatenateAll_mE5ECBC80ABB913D26B1A18E1552CFFAFF89B17A7 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_vs, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m2085540DA711A26F169A56E49C5F0F36435B77E9 (InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters::get_D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECPrivateKeyParameters_get_D_m519EB228A8E14620BD059187CAC803C94AA09B80_inline (ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, uint8_t ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Xor(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Xor_m832C50925B3C5CC66990FE276F5679E3048F5E20 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_kdfOut, int32_t ___2_dOff, int32_t ___3_dRemaining, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_N()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::get_BitLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_m290E225C377B0A19E6B9B644F15A83EF92FB87E5 (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mEFB2C55989F98B6419177D303BA633734B0E580F (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, int32_t ___0_sizeInBits, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_random, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::get_SignValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger::CompareTo(BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m201F16A26E0FB9676E7184CCAA410AC13BB00031 (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___0_value, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Integers::RotateLeft(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E (uint32_t ___0_i, int32_t ___1_distance, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::tau(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835 (uint32_t ___0_A, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::L_ap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_ap_mB32C4F2D4E783853371203B8268F83F8CE62A50A (uint32_t ___0_B, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::T_ap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, uint32_t ___0_Z, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::L(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_mBDBC3D6621C33DE0C06DC7629F3160D0B9559A12 (uint32_t ___0_B, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::ExpandKey(System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_ExpandKey_m51540329CD2335767F3FF512449781761956CDD3 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, bool ___0_forEncryption, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::T(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425 (uint32_t ___0_Z, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::setKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_setKey_m7E612BEEAFCFC5F18FDFBAABAC8F1E3A81834D67 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_decryptBlock_m014D246CBA7E26B4C39167A999CC8AAB30F55E82 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_encryptBlock_mBD3FEF30F2DA99C6832321A4D7162D81B871C482 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher__ctor_mFAC4FD5F04BC1BF3E51B29BB4615C8DDDFD93EC0 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_m7FD107C58329018301B495FBE359BA679DD0A451 (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_m937D03ED4ADD92C0FFFAA69B1C932075428F4B50 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.KeyParameter BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* TweakableBlockCipherParameters_get_Key_m9532CACCD9CFE5FBA4EC3613A960C9EEDB7F0626_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters::get_Tweak()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TweakableBlockCipherParameters_get_Tweak_m76D8F6B45EBE3419E4831A7E6E0A50898BB9BEC3_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_off, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___0_forEncryption, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_key, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_tweak, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetKey(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_key, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetTweak(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_tweak, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374 (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_inWords, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::WordToBytes(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3 (uint64_t ___0_word, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083 (ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::RotlXor(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) ;
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::XorRotr(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1 (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_m8E2575758EAF86D04B4A066F4536CC3294422DAC (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_mCE0387ED1F262DD20EA7F28DEEB333A8BCC18655 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_mFA996A8B8A641EA807D6E60D63D563A258CAA2E8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m64EF5D08A927C8453D3070AFD7673675C1DBA7F8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_k0, int32_t ___1_k1, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_k32, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_inData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, int32_t ___2_offset, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mE0BC0E375CF661A5CB87B76CDBE421CFF0A80A37 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_m8E2575758EAF86D04B4A066F4536CC3294422DAC (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	{
		// protected SerpentEngineBase()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Init_m3CABBC4C176244D4B9C1B665027347B1B811B5BE (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, bool ___0_encrypting, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(parameters is KeyParameter))
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		// throw new ArgumentException("invalid parameter passed to " + AlgorithmName + " init - " + BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.GetTypeName(parameters));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_AlgorithmName() */, __this);
		RuntimeObject* L_2 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A0FABAE51E3B4BABEF37449D8A7FE638A975502)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2872CE200AF678DAC1BDABD521199451F3CC11FA)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerpentEngineBase_Init_m3CABBC4C176244D4B9C1B665027347B1B811B5BE_RuntimeMethod_var)));
	}

IL_0029:
	{
		// this.encrypting = encrypting;
		bool L_6 = ___0_encrypting;
		__this->___encrypting_3 = L_6;
		// this.wKey = MakeWorkingKey(((KeyParameter)parameters).GetKey());
		RuntimeObject* L_7 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9;
		L_9 = VirtualFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::MakeWorkingKey(System.Byte[]) */, __this, L_8);
		__this->___wKey_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wKey_4), (void*)L_9);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerpentEngineBase_get_AlgorithmName_mFAF37D5A71D1EC3589677DEBBD8878DE98C33BB4 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BFF92E761A73E06C17597C8A180D7C5EEF92AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Serpent"; }
		return _stringLiteral50BFF92E761A73E06C17597C8A180D7C5EEF92AB;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerpentEngineBase_get_IsPartialBlockOkay_m20F508AF24CF81BD67F594EF6CA166C9580F6E0C (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_GetBlockSize_m52B73154F45D3522F7C00FB9C3AF3C7E2DEE9842 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BlockSize;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var))->___BlockSize_0;
		return L_0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_ProcessBlock_m56479C3F07A30E3F5A4EEF23432FB0F7377DA0C1 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (wKey == null)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___wKey_4;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// throw new InvalidOperationException(AlgorithmName + " not initialised");
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerpentEngineBase_ProcessBlock_m56479C3F07A30E3F5A4EEF23432FB0F7377DA0C1_RuntimeMethod_var)));
	}

IL_001e:
	{
		// Check.DataLength(input, inOff, BlockSize, "input buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_6 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var))->___BlockSize_0;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_4, L_5, L_6, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		// Check.OutputLength(output, outOff, BlockSize, "output buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_output;
		int32_t L_8 = ___3_outOff;
		int32_t L_9 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var))->___BlockSize_0;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_7, L_8, L_9, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		// if (encrypting)
		bool L_10 = __this->___encrypting_3;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// EncryptBlock(input, inOff, output, outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_input;
		int32_t L_12 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_output;
		int32_t L_14 = ___3_outOff;
		VirtualActionInvoker4< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_11, L_12, L_13, L_14);
		goto IL_0061;
	}

IL_0056:
	{
		// DecryptBlock(input, inOff, output, outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___2_output;
		int32_t L_18 = ___3_outOff;
		VirtualActionInvoker4< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_15, L_16, L_17, L_18);
	}

IL_0061:
	{
		// return BlockSize;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_19 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var))->___BlockSize_0;
		return L_19;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Reset_m945C88F0254B7CF4B15F2152A1947A43DF5CCA99 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3 (int32_t ___0_x, int32_t ___1_bits, const RuntimeMethod* method) 
{
	{
		// return ((x << bits) | (int) ((uint)x >> (32 - bits)));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_bits;
		int32_t L_2 = ___0_x;
		int32_t L_3 = ___1_bits;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateRight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9 (int32_t ___0_x, int32_t ___1_bits, const RuntimeMethod* method) 
{
	{
		// return ( (int)((uint)x >> bits) | (x << (32 - bits)));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_bits;
		int32_t L_2 = ___0_x;
		int32_t L_3 = ___1_bits;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)(L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int t1 = a ^ d;
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___3_d;
		V_0 = ((int32_t)(L_0^L_1));
		// int t3 = c ^ t1;
		int32_t L_2 = ___2_c;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2^L_3));
		// int t4 = b ^ t3;
		int32_t L_4 = ___1_b;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		// X3 = (a & d) ^ t4;
		int32_t L_6 = ___0_a;
		int32_t L_7 = ___3_d;
		int32_t L_8 = V_2;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_6&L_7))^L_8));
		// int t7 = a ^ (b & t1);
		int32_t L_9 = ___0_a;
		int32_t L_10 = ___1_b;
		int32_t L_11 = V_0;
		V_3 = ((int32_t)(L_9^((int32_t)(L_10&L_11))));
		// X2 = t4 ^ (c | t7);
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_c;
		int32_t L_14 = V_3;
		__this->___X2_7 = ((int32_t)(L_12^((int32_t)(L_13|L_14))));
		// int t12 = X3 & (t3 ^ t7);
		int32_t L_15 = __this->___X3_8;
		int32_t L_16 = V_1;
		int32_t L_17 = V_3;
		V_4 = ((int32_t)(L_15&((int32_t)(L_16^L_17))));
		// X1 = (~t3) ^ t12;
		int32_t L_18 = V_1;
		int32_t L_19 = V_4;
		__this->___X1_6 = ((int32_t)(((~L_18))^L_19));
		// X0 = t12 ^ (~t7);
		int32_t L_20 = V_4;
		int32_t L_21 = V_3;
		__this->___X0_5 = ((int32_t)(L_20^((~L_21))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int t1 = ~a;
		int32_t L_0 = ___0_a;
		V_0 = ((~L_0));
		// int t2 = a ^ b;
		int32_t L_1 = ___0_a;
		int32_t L_2 = ___1_b;
		V_1 = ((int32_t)(L_1^L_2));
		// int t4 = d ^ (t1 | t2);
		int32_t L_3 = ___3_d;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_3^((int32_t)(L_4|L_5))));
		// int t5 = c ^ t4;
		int32_t L_6 = ___2_c;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6^L_7));
		// X2 = t2 ^ t5;
		int32_t L_8 = V_1;
		int32_t L_9 = V_3;
		__this->___X2_7 = ((int32_t)(L_8^L_9));
		// int t8 = t1 ^ (d & t2);
		int32_t L_10 = V_0;
		int32_t L_11 = ___3_d;
		int32_t L_12 = V_1;
		V_4 = ((int32_t)(L_10^((int32_t)(L_11&L_12))));
		// X1 = t4 ^ (X2 & t8);
		int32_t L_13 = V_2;
		int32_t L_14 = __this->___X2_7;
		int32_t L_15 = V_4;
		__this->___X1_6 = ((int32_t)(L_13^((int32_t)(L_14&L_15))));
		// X3 = (a & t4) ^ (t5 | X1);
		int32_t L_16 = ___0_a;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = __this->___X1_6;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_16&L_17))^((int32_t)(L_18|L_19))));
		// X0 = X3 ^ (t5 ^ t8);
		int32_t L_20 = __this->___X3_8;
		int32_t L_21 = V_3;
		int32_t L_22 = V_4;
		__this->___X0_5 = ((int32_t)(L_20^((int32_t)(L_21^L_22))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int t2 = b ^ (~a);
		int32_t L_0 = ___1_b;
		int32_t L_1 = ___0_a;
		V_0 = ((int32_t)(L_0^((~L_1))));
		// int t5 = c ^ (a | t2);
		int32_t L_2 = ___2_c;
		int32_t L_3 = ___0_a;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_2^((int32_t)(L_3|L_4))));
		// X2 = d ^ t5;
		int32_t L_5 = ___3_d;
		int32_t L_6 = V_1;
		__this->___X2_7 = ((int32_t)(L_5^L_6));
		// int t7 = b ^ (d | t2);
		int32_t L_7 = ___1_b;
		int32_t L_8 = ___3_d;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)(L_7^((int32_t)(L_8|L_9))));
		// int t8 = t2 ^ X2;
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___X2_7;
		V_3 = ((int32_t)(L_10^L_11));
		// X3 = t8 ^ (t5 & t7);
		int32_t L_12 = V_3;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		__this->___X3_8 = ((int32_t)(L_12^((int32_t)(L_13&L_14))));
		// int t11 = t5 ^ t7;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		V_4 = ((int32_t)(L_15^L_16));
		// X1 = X3 ^ t11;
		int32_t L_17 = __this->___X3_8;
		int32_t L_18 = V_4;
		__this->___X1_6 = ((int32_t)(L_17^L_18));
		// X0 = t5 ^ (t8 & t11);
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = V_4;
		__this->___X0_5 = ((int32_t)(L_19^((int32_t)(L_20&L_21))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int t1 = b ^ d;
		int32_t L_0 = ___1_b;
		int32_t L_1 = ___3_d;
		V_0 = ((int32_t)(L_0^L_1));
		// int t3 = a ^ (b & t1);
		int32_t L_2 = ___0_a;
		int32_t L_3 = ___1_b;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_2^((int32_t)(L_3&L_4))));
		// int t4 = t1 ^ t3;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(L_5^L_6));
		// X3 = c ^ t4;
		int32_t L_7 = ___2_c;
		int32_t L_8 = V_2;
		__this->___X3_8 = ((int32_t)(L_7^L_8));
		// int t7 = b ^ (t1 & t3);
		int32_t L_9 = ___1_b;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_3 = ((int32_t)(L_9^((int32_t)(L_10&L_11))));
		// int t8 = X3 | t7;
		int32_t L_12 = __this->___X3_8;
		int32_t L_13 = V_3;
		V_4 = ((int32_t)(L_12|L_13));
		// X1 = t3 ^ t8;
		int32_t L_14 = V_1;
		int32_t L_15 = V_4;
		__this->___X1_6 = ((int32_t)(L_14^L_15));
		// int t10 = ~X1;
		int32_t L_16 = __this->___X1_6;
		V_5 = ((~L_16));
		// int t11 = X3 ^ t7;
		int32_t L_17 = __this->___X3_8;
		int32_t L_18 = V_3;
		V_6 = ((int32_t)(L_17^L_18));
		// X0 = t10 ^ t11;
		int32_t L_19 = V_5;
		int32_t L_20 = V_6;
		__this->___X0_5 = ((int32_t)(L_19^L_20));
		// X2 = t4 ^ (t10 | t11);
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		int32_t L_23 = V_6;
		__this->___X2_7 = ((int32_t)(L_21^((int32_t)(L_22|L_23))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// int t1 = ~a;
		int32_t L_0 = ___0_a;
		V_0 = ((~L_0));
		// int t2 = b ^ d;
		int32_t L_1 = ___1_b;
		int32_t L_2 = ___3_d;
		V_1 = ((int32_t)(L_1^L_2));
		// int t3 = c & t1;
		int32_t L_3 = ___2_c;
		int32_t L_4 = V_0;
		V_2 = ((int32_t)(L_3&L_4));
		// X0 = t2 ^ t3;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		__this->___X0_5 = ((int32_t)(L_5^L_6));
		// int t5 = c ^ t1;
		int32_t L_7 = ___2_c;
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7^L_8));
		// int t6 = c ^ X0;
		int32_t L_9 = ___2_c;
		int32_t L_10 = __this->___X0_5;
		V_4 = ((int32_t)(L_9^L_10));
		// int t7 = b & t6;
		int32_t L_11 = ___1_b;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_11&L_12));
		// X3 = t5 ^ t7;
		int32_t L_13 = V_3;
		int32_t L_14 = V_5;
		__this->___X3_8 = ((int32_t)(L_13^L_14));
		// X2 = a ^ ((d | t7) & (X0 | t5));
		int32_t L_15 = ___0_a;
		int32_t L_16 = ___3_d;
		int32_t L_17 = V_5;
		int32_t L_18 = __this->___X0_5;
		int32_t L_19 = V_3;
		__this->___X2_7 = ((int32_t)(L_15^((int32_t)(((int32_t)(L_16|L_17))&((int32_t)(L_18|L_19))))));
		// X1 = (t2 ^ X3) ^ (X2 ^ (d | t1));
		int32_t L_20 = V_1;
		int32_t L_21 = __this->___X3_8;
		int32_t L_22 = __this->___X2_7;
		int32_t L_23 = ___3_d;
		int32_t L_24 = V_0;
		__this->___X1_6 = ((int32_t)(((int32_t)(L_20^L_21))^((int32_t)(L_22^((int32_t)(L_23|L_24))))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// int t1 = b ^ d;
		int32_t L_0 = ___1_b;
		int32_t L_1 = ___3_d;
		V_0 = ((int32_t)(L_0^L_1));
		// int t2 = ~t1;
		int32_t L_2 = V_0;
		V_1 = ((~L_2));
		// int t3 = a ^ c;
		int32_t L_3 = ___0_a;
		int32_t L_4 = ___2_c;
		V_2 = ((int32_t)(L_3^L_4));
		// int t4 = c ^ t1;
		int32_t L_5 = ___2_c;
		int32_t L_6 = V_0;
		V_3 = ((int32_t)(L_5^L_6));
		// int t5 = b & t4;
		int32_t L_7 = ___1_b;
		int32_t L_8 = V_3;
		V_4 = ((int32_t)(L_7&L_8));
		// X0 = t3 ^ t5;
		int32_t L_9 = V_2;
		int32_t L_10 = V_4;
		__this->___X0_5 = ((int32_t)(L_9^L_10));
		// int t7 = a | t2;
		int32_t L_11 = ___0_a;
		int32_t L_12 = V_1;
		V_5 = ((int32_t)(L_11|L_12));
		// int t8 = d ^ t7;
		int32_t L_13 = ___3_d;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13^L_14));
		// int t9 = t3 | t8;
		int32_t L_15 = V_2;
		int32_t L_16 = V_6;
		V_7 = ((int32_t)(L_15|L_16));
		// X3 = t1 ^ t9;
		int32_t L_17 = V_0;
		int32_t L_18 = V_7;
		__this->___X3_8 = ((int32_t)(L_17^L_18));
		// int t11 = ~t4;
		int32_t L_19 = V_3;
		V_8 = ((~L_19));
		// int t12 = X0 | X3;
		int32_t L_20 = __this->___X0_5;
		int32_t L_21 = __this->___X3_8;
		V_9 = ((int32_t)(L_20|L_21));
		// X1 = t11 ^ t12;
		int32_t L_22 = V_8;
		int32_t L_23 = V_9;
		__this->___X1_6 = ((int32_t)(L_22^L_23));
		// X2 = (d & t11) ^ (t3 ^ t12);
		int32_t L_24 = ___3_d;
		int32_t L_25 = V_8;
		int32_t L_26 = V_2;
		int32_t L_27 = V_9;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_24&L_25))^((int32_t)(L_26^L_27))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = a ^ b;
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		V_0 = ((int32_t)(L_0^L_1));
		// int t2 = a & c;
		int32_t L_2 = ___0_a;
		int32_t L_3 = ___2_c;
		// int t3 = a | d;
		int32_t L_4 = ___0_a;
		int32_t L_5 = ___3_d;
		V_1 = ((int32_t)(L_4|L_5));
		// int t4 = c ^ d;
		int32_t L_6 = ___2_c;
		int32_t L_7 = ___3_d;
		V_2 = ((int32_t)(L_6^L_7));
		// int t5 = t1 & t3;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)(L_8&L_9));
		// int t6 = t2 | t5;
		int32_t L_10 = V_3;
		V_4 = ((int32_t)(((int32_t)(L_2&L_3))|L_10));
		// X2 = t4 ^ t6;
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		__this->___X2_7 = ((int32_t)(L_11^L_12));
		// int t8 = b ^ t3;
		int32_t L_13 = ___1_b;
		int32_t L_14 = V_1;
		V_5 = ((int32_t)(L_13^L_14));
		// int t9 = t6 ^ t8;
		int32_t L_15 = V_4;
		int32_t L_16 = V_5;
		V_6 = ((int32_t)(L_15^L_16));
		// int t10 = t4 & t9;
		int32_t L_17 = V_2;
		int32_t L_18 = V_6;
		V_7 = ((int32_t)(L_17&L_18));
		// X0 = t1 ^ t10;
		int32_t L_19 = V_0;
		int32_t L_20 = V_7;
		__this->___X0_5 = ((int32_t)(L_19^L_20));
		// int t12 = X2 & X0;
		int32_t L_21 = __this->___X2_7;
		int32_t L_22 = __this->___X0_5;
		V_8 = ((int32_t)(L_21&L_22));
		// X1 = t9 ^ t12;
		int32_t L_23 = V_6;
		int32_t L_24 = V_8;
		__this->___X1_6 = ((int32_t)(L_23^L_24));
		// X3 = (b | d) ^ (t4 ^ t12);
		int32_t L_25 = ___1_b;
		int32_t L_26 = ___3_d;
		int32_t L_27 = V_2;
		int32_t L_28 = V_8;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_25|L_26))^((int32_t)(L_27^L_28))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = a | b;
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		// int t2 = b ^ c;
		int32_t L_2 = ___1_b;
		int32_t L_3 = ___2_c;
		V_0 = ((int32_t)(L_2^L_3));
		// int t3 = b & t2;
		int32_t L_4 = ___1_b;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(L_4&L_5));
		// int t4 = a ^ t3;
		int32_t L_6 = ___0_a;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)(L_6^L_7));
		// int t5 = c ^ t4;
		int32_t L_8 = ___2_c;
		int32_t L_9 = V_2;
		V_3 = ((int32_t)(L_8^L_9));
		// int t6 = d | t4;
		int32_t L_10 = ___3_d;
		int32_t L_11 = V_2;
		V_4 = ((int32_t)(L_10|L_11));
		// X0 = t2 ^ t6;
		int32_t L_12 = V_0;
		int32_t L_13 = V_4;
		__this->___X0_5 = ((int32_t)(L_12^L_13));
		// int t8 = t2 | t6;
		int32_t L_14 = V_0;
		int32_t L_15 = V_4;
		V_5 = ((int32_t)(L_14|L_15));
		// int t9 = d ^ t8;
		int32_t L_16 = ___3_d;
		int32_t L_17 = V_5;
		V_6 = ((int32_t)(L_16^L_17));
		// X2 = t5 ^ t9;
		int32_t L_18 = V_3;
		int32_t L_19 = V_6;
		__this->___X2_7 = ((int32_t)(L_18^L_19));
		// int t11 = t1 ^ t9;
		int32_t L_20 = V_6;
		V_7 = ((int32_t)(((int32_t)(L_0|L_1))^L_20));
		// int t12 = X0 & t11;
		int32_t L_21 = __this->___X0_5;
		int32_t L_22 = V_7;
		V_8 = ((int32_t)(L_21&L_22));
		// X3 = t4 ^ t12;
		int32_t L_23 = V_2;
		int32_t L_24 = V_8;
		__this->___X3_8 = ((int32_t)(L_23^L_24));
		// X1 = X3 ^ (X0 ^ t11);
		int32_t L_25 = __this->___X3_8;
		int32_t L_26 = __this->___X0_5;
		int32_t L_27 = V_7;
		__this->___X1_6 = ((int32_t)(L_25^((int32_t)(L_26^L_27))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = a ^ d;
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___3_d;
		V_0 = ((int32_t)(L_0^L_1));
		// int t2 = d & t1;
		int32_t L_2 = ___3_d;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2&L_3));
		// int t3 = c ^ t2;
		int32_t L_4 = ___2_c;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		// int t4 = b | t3;
		int32_t L_6 = ___1_b;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6|L_7));
		// X3 = t1 ^ t4;
		int32_t L_8 = V_0;
		int32_t L_9 = V_3;
		__this->___X3_8 = ((int32_t)(L_8^L_9));
		// int t6 = ~b;
		int32_t L_10 = ___1_b;
		V_4 = ((~L_10));
		// int t7 = t1 | t6;
		int32_t L_11 = V_0;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_11|L_12));
		// X0 = t3 ^ t7;
		int32_t L_13 = V_2;
		int32_t L_14 = V_5;
		__this->___X0_5 = ((int32_t)(L_13^L_14));
		// int t9 = a & X0;
		int32_t L_15 = ___0_a;
		int32_t L_16 = __this->___X0_5;
		V_6 = ((int32_t)(L_15&L_16));
		// int t10 = t1 ^ t6;
		int32_t L_17 = V_0;
		int32_t L_18 = V_4;
		V_7 = ((int32_t)(L_17^L_18));
		// int t11 = t4 & t10;
		int32_t L_19 = V_3;
		int32_t L_20 = V_7;
		V_8 = ((int32_t)(L_19&L_20));
		// X2 = t9 ^ t11;
		int32_t L_21 = V_6;
		int32_t L_22 = V_8;
		__this->___X2_7 = ((int32_t)(L_21^L_22));
		// X1 = (a ^ t3) ^ (t10 & X2);
		int32_t L_23 = ___0_a;
		int32_t L_24 = V_2;
		int32_t L_25 = V_7;
		int32_t L_26 = __this->___X2_7;
		__this->___X1_6 = ((int32_t)(((int32_t)(L_23^L_24))^((int32_t)(L_25&L_26))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = c | d;
		int32_t L_0 = ___2_c;
		int32_t L_1 = ___3_d;
		V_0 = ((int32_t)(L_0|L_1));
		// int t2 = a & t1;
		int32_t L_2 = ___0_a;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2&L_3));
		// int t3 = b ^ t2;
		int32_t L_4 = ___1_b;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		// int t4 = a & t3;
		int32_t L_6 = ___0_a;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6&L_7));
		// int t5 = c ^ t4;
		int32_t L_8 = ___2_c;
		int32_t L_9 = V_3;
		V_4 = ((int32_t)(L_8^L_9));
		// X1 = d ^ t5;
		int32_t L_10 = ___3_d;
		int32_t L_11 = V_4;
		__this->___X1_6 = ((int32_t)(L_10^L_11));
		// int t7 = ~a;
		int32_t L_12 = ___0_a;
		V_5 = ((~L_12));
		// int t8 = t5 & X1;
		int32_t L_13 = V_4;
		int32_t L_14 = __this->___X1_6;
		V_6 = ((int32_t)(L_13&L_14));
		// X3 = t3 ^ t8;
		int32_t L_15 = V_2;
		int32_t L_16 = V_6;
		__this->___X3_8 = ((int32_t)(L_15^L_16));
		// int t10 = X1 | t7;
		int32_t L_17 = __this->___X1_6;
		int32_t L_18 = V_5;
		V_7 = ((int32_t)(L_17|L_18));
		// int t11 = d ^ t10;
		int32_t L_19 = ___3_d;
		int32_t L_20 = V_7;
		V_8 = ((int32_t)(L_19^L_20));
		// X0 = X3 ^ t11;
		int32_t L_21 = __this->___X3_8;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		// X2 = (t3 & t11) ^ (X1 ^ t7);
		int32_t L_23 = V_2;
		int32_t L_24 = V_8;
		int32_t L_25 = __this->___X1_6;
		int32_t L_26 = V_5;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_23&L_24))^((int32_t)(L_25^L_26))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = ~a;
		int32_t L_0 = ___0_a;
		V_0 = ((~L_0));
		// int t2 = a ^ b;
		int32_t L_1 = ___0_a;
		int32_t L_2 = ___1_b;
		// int t3 = a ^ d;
		int32_t L_3 = ___0_a;
		int32_t L_4 = ___3_d;
		V_1 = ((int32_t)(L_3^L_4));
		// int t4 = c ^ t1;
		int32_t L_5 = ___2_c;
		int32_t L_6 = V_0;
		V_2 = ((int32_t)(L_5^L_6));
		// int t5 = t2 | t3;
		int32_t L_7 = ((int32_t)(L_1^L_2));
		int32_t L_8 = V_1;
		V_3 = ((int32_t)(L_7|L_8));
		// X0 = t4 ^ t5;
		int32_t L_9 = V_2;
		int32_t L_10 = V_3;
		__this->___X0_5 = ((int32_t)(L_9^L_10));
		// int t7 = d & X0;
		int32_t L_11 = ___3_d;
		int32_t L_12 = __this->___X0_5;
		V_4 = ((int32_t)(L_11&L_12));
		// int t8 = t2 ^ X0;
		int32_t L_13 = L_7;
		int32_t L_14 = __this->___X0_5;
		V_5 = ((int32_t)(L_13^L_14));
		// X1 = t7 ^ t8;
		int32_t L_15 = V_4;
		int32_t L_16 = V_5;
		__this->___X1_6 = ((int32_t)(L_15^L_16));
		// int t10 = t1 | X0;
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___X0_5;
		V_6 = ((int32_t)(L_17|L_18));
		// int t11 = t2 | t7;
		int32_t L_19 = V_4;
		V_7 = ((int32_t)(L_13|L_19));
		// int t12 = t3 ^ t10;
		int32_t L_20 = V_1;
		int32_t L_21 = V_6;
		V_8 = ((int32_t)(L_20^L_21));
		// X2 = t11 ^ t12;
		int32_t L_22 = V_7;
		int32_t L_23 = V_8;
		__this->___X2_7 = ((int32_t)(L_22^L_23));
		// X3 = (b ^ t7) ^ (X1 & t12);
		int32_t L_24 = ___1_b;
		int32_t L_25 = V_4;
		int32_t L_26 = __this->___X1_6;
		int32_t L_27 = V_8;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_24^L_25))^((int32_t)(L_26&L_27))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = ~c;
		int32_t L_0 = ___2_c;
		V_0 = ((~L_0));
		// int t2 = b & t1;
		int32_t L_1 = ___1_b;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_1&L_2));
		// int t3 = d ^ t2;
		int32_t L_3 = ___3_d;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)(L_3^L_4));
		// int t4 = a & t3;
		int32_t L_5 = ___0_a;
		int32_t L_6 = V_2;
		V_3 = ((int32_t)(L_5&L_6));
		// int t5 = b ^ t1;
		int32_t L_7 = ___1_b;
		int32_t L_8 = V_0;
		V_4 = ((int32_t)(L_7^L_8));
		// X3 = t4 ^ t5;
		int32_t L_9 = V_3;
		int32_t L_10 = V_4;
		__this->___X3_8 = ((int32_t)(L_9^L_10));
		// int t7 = b | X3;
		int32_t L_11 = ___1_b;
		int32_t L_12 = __this->___X3_8;
		V_5 = ((int32_t)(L_11|L_12));
		// int t8 = a & t7;
		int32_t L_13 = ___0_a;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13&L_14));
		// X1 = t3 ^ t8;
		int32_t L_15 = V_2;
		int32_t L_16 = V_6;
		__this->___X1_6 = ((int32_t)(L_15^L_16));
		// int t10 = a | d;
		int32_t L_17 = ___0_a;
		int32_t L_18 = ___3_d;
		V_7 = ((int32_t)(L_17|L_18));
		// int t11 = t1 ^ t7;
		int32_t L_19 = V_0;
		int32_t L_20 = V_5;
		V_8 = ((int32_t)(L_19^L_20));
		// X0 = t10 ^ t11;
		int32_t L_21 = V_7;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		// X2 = (b & t10) ^ (t4 | (a ^ c));
		int32_t L_23 = ___1_b;
		int32_t L_24 = V_7;
		int32_t L_25 = V_3;
		int32_t L_26 = ___0_a;
		int32_t L_27 = ___2_c;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_23&L_24))^((int32_t)(L_25|((int32_t)(L_26^L_27))))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int t1 = ~a;
		int32_t L_0 = ___0_a;
		// int t2 = a ^ d;
		int32_t L_1 = ___0_a;
		int32_t L_2 = ___3_d;
		V_0 = ((int32_t)(L_1^L_2));
		// int t3 = b ^ t2;
		int32_t L_3 = ___1_b;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_3^L_4));
		// int t4 = t1 | t2;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)(((~L_0))|L_5));
		// int t5 = c ^ t4;
		int32_t L_6 = ___2_c;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6^L_7));
		// X1 = b ^ t5;
		int32_t L_8 = ___1_b;
		int32_t L_9 = V_3;
		__this->___X1_6 = ((int32_t)(L_8^L_9));
		// int t7 = t2 | X1;
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___X1_6;
		V_4 = ((int32_t)(L_10|L_11));
		// int t8 = d ^ t7;
		int32_t L_12 = ___3_d;
		int32_t L_13 = V_4;
		V_5 = ((int32_t)(L_12^L_13));
		// int t9 = t5 & t8;
		int32_t L_14 = V_3;
		int32_t L_15 = V_5;
		V_6 = ((int32_t)(L_14&L_15));
		// X2 = t3 ^ t9;
		int32_t L_16 = V_1;
		int32_t L_17 = V_6;
		__this->___X2_7 = ((int32_t)(L_16^L_17));
		// int t11 = t5 ^ t8;
		int32_t L_18 = V_3;
		int32_t L_19 = V_5;
		V_7 = ((int32_t)(L_18^L_19));
		// X0 = X2 ^ t11;
		int32_t L_20 = __this->___X2_7;
		int32_t L_21 = V_7;
		__this->___X0_5 = ((int32_t)(L_20^L_21));
		// X3 = (~t5) ^ (t3 & t11);
		int32_t L_22 = V_3;
		int32_t L_23 = V_1;
		int32_t L_24 = V_7;
		__this->___X3_8 = ((int32_t)(((~L_22))^((int32_t)(L_23&L_24))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int t1 = ~a;
		int32_t L_0 = ___0_a;
		V_0 = ((~L_0));
		// int t2 = a ^ b;
		int32_t L_1 = ___0_a;
		int32_t L_2 = ___1_b;
		V_1 = ((int32_t)(L_1^L_2));
		// int t3 = c ^ t2;
		int32_t L_3 = ___2_c;
		int32_t L_4 = V_1;
		V_2 = ((int32_t)(L_3^L_4));
		// int t4 = c | t1;
		int32_t L_5 = ___2_c;
		int32_t L_6 = V_0;
		V_3 = ((int32_t)(L_5|L_6));
		// int t5 = d ^ t4;
		int32_t L_7 = ___3_d;
		int32_t L_8 = V_3;
		V_4 = ((int32_t)(L_7^L_8));
		// X1 = t3 ^ t5;
		int32_t L_9 = V_2;
		int32_t L_10 = V_4;
		__this->___X1_6 = ((int32_t)(L_9^L_10));
		// int t7 = t3 & t5;
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_11&L_12));
		// int t8 = t2 ^ t7;
		int32_t L_13 = V_1;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_13^L_14));
		// int t9 = b | t8;
		int32_t L_15 = ___1_b;
		int32_t L_16 = V_6;
		V_7 = ((int32_t)(L_15|L_16));
		// X3 = t5 ^ t9;
		int32_t L_17 = V_4;
		int32_t L_18 = V_7;
		__this->___X3_8 = ((int32_t)(L_17^L_18));
		// int t11 = b | X3;
		int32_t L_19 = ___1_b;
		int32_t L_20 = __this->___X3_8;
		V_8 = ((int32_t)(L_19|L_20));
		// X0 = t8 ^ t11;
		int32_t L_21 = V_6;
		int32_t L_22 = V_8;
		__this->___X0_5 = ((int32_t)(L_21^L_22));
		// X2 = (d & t1) ^ (t3 ^ t11);
		int32_t L_23 = ___3_d;
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = V_8;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_23&L_24))^((int32_t)(L_25^L_26))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// int t1 = b ^ c;
		int32_t L_0 = ___1_b;
		int32_t L_1 = ___2_c;
		V_0 = ((int32_t)(L_0^L_1));
		// int t2 = c & t1;
		int32_t L_2 = ___2_c;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2&L_3));
		// int t3 = d ^ t2;
		int32_t L_4 = ___3_d;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(L_4^L_5));
		// int t4 = a ^ t3;
		int32_t L_6 = ___0_a;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_6^L_7));
		// int t5 = d | t1;
		int32_t L_8 = ___3_d;
		int32_t L_9 = V_0;
		V_4 = ((int32_t)(L_8|L_9));
		// int t6 = t4 & t5;
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		V_5 = ((int32_t)(L_10&L_11));
		// X1 = b ^ t6;
		int32_t L_12 = ___1_b;
		int32_t L_13 = V_5;
		__this->___X1_6 = ((int32_t)(L_12^L_13));
		// int t8 = t3 | X1;
		int32_t L_14 = V_2;
		int32_t L_15 = __this->___X1_6;
		V_6 = ((int32_t)(L_14|L_15));
		// int t9 = a & t4;
		int32_t L_16 = ___0_a;
		int32_t L_17 = V_3;
		V_7 = ((int32_t)(L_16&L_17));
		// X3 = t1 ^ t9;
		int32_t L_18 = V_0;
		int32_t L_19 = V_7;
		__this->___X3_8 = ((int32_t)(L_18^L_19));
		// int t11 = t4 ^ t8;
		int32_t L_20 = V_3;
		int32_t L_21 = V_6;
		V_8 = ((int32_t)(L_20^L_21));
		// int t12 = X3 & t11;
		int32_t L_22 = __this->___X3_8;
		int32_t L_23 = V_8;
		V_9 = ((int32_t)(L_22&L_23));
		// X2 = t3 ^ t12;
		int32_t L_24 = V_2;
		int32_t L_25 = V_9;
		__this->___X2_7 = ((int32_t)(L_24^L_25));
		// X0 = (~t11) ^ (X3 & X2);
		int32_t L_26 = V_8;
		int32_t L_27 = __this->___X3_8;
		int32_t L_28 = __this->___X2_7;
		__this->___X0_5 = ((int32_t)(((~L_26))^((int32_t)(L_27&L_28))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int t3 = c | (a & b);
		int32_t L_0 = ___2_c;
		int32_t L_1 = ___0_a;
		int32_t L_2 = ___1_b;
		V_0 = ((int32_t)(L_0|((int32_t)(L_1&L_2))));
		// int t4 = d & (a | b);
		int32_t L_3 = ___3_d;
		int32_t L_4 = ___0_a;
		int32_t L_5 = ___1_b;
		V_1 = ((int32_t)(L_3&((int32_t)(L_4|L_5))));
		// X3 = t3 ^ t4;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		__this->___X3_8 = ((int32_t)(L_6^L_7));
		// int t6 = ~d;
		int32_t L_8 = ___3_d;
		V_2 = ((~L_8));
		// int t7 = b ^ t4;
		int32_t L_9 = ___1_b;
		int32_t L_10 = V_1;
		V_3 = ((int32_t)(L_9^L_10));
		// int t9 = t7 | (X3 ^ t6);
		int32_t L_11 = V_3;
		int32_t L_12 = __this->___X3_8;
		int32_t L_13 = V_2;
		V_4 = ((int32_t)(L_11|((int32_t)(L_12^L_13))));
		// X1 = a ^ t9;
		int32_t L_14 = ___0_a;
		int32_t L_15 = V_4;
		__this->___X1_6 = ((int32_t)(L_14^L_15));
		// X0 = (c ^ t7) ^ (d | X1);
		int32_t L_16 = ___2_c;
		int32_t L_17 = V_3;
		int32_t L_18 = ___3_d;
		int32_t L_19 = __this->___X1_6;
		__this->___X0_5 = ((int32_t)(((int32_t)(L_16^L_17))^((int32_t)(L_18|L_19))));
		// X2 = (t3 ^ X1) ^ (X0 ^ (a & X3));
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___X1_6;
		int32_t L_22 = __this->___X0_5;
		int32_t L_23 = ___0_a;
		int32_t L_24 = __this->___X3_8;
		__this->___X2_7 = ((int32_t)(((int32_t)(L_20^L_21))^((int32_t)(L_22^((int32_t)(L_23&L_24))))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int x0 = RotateLeft(X0, 13);
		int32_t L_0 = __this->___X0_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(L_0, ((int32_t)13), NULL);
		V_0 = L_1;
		// int x2 = RotateLeft(X2, 3);
		int32_t L_2 = __this->___X2_7;
		int32_t L_3;
		L_3 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(L_2, 3, NULL);
		V_1 = L_3;
		// int x1 = X1 ^ x0 ^ x2;
		int32_t L_4 = __this->___X1_6;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(((int32_t)(L_4^L_5))^L_6));
		// int x3 = X3 ^ x2 ^ x0 << 3;
		int32_t L_7 = __this->___X3_8;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_3 = ((int32_t)(((int32_t)(L_7^L_8))^((int32_t)(L_9<<3))));
		// X1 = RotateLeft(x1, 1);
		int32_t L_10 = V_2;
		int32_t L_11;
		L_11 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(L_10, 1, NULL);
		__this->___X1_6 = L_11;
		// X3 = RotateLeft(x3, 7);
		int32_t L_12 = V_3;
		int32_t L_13;
		L_13 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(L_12, 7, NULL);
		__this->___X3_8 = L_13;
		// X0 = RotateLeft(x0 ^ X1 ^ X3, 5);
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___X1_6;
		int32_t L_16 = __this->___X3_8;
		int32_t L_17;
		L_17 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(((int32_t)(((int32_t)(L_14^L_15))^L_16)), 5, NULL);
		__this->___X0_5 = L_17;
		// X2 = RotateLeft(x2 ^ X3 ^ (X1 << 7), 22);
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___X3_8;
		int32_t L_20 = __this->___X1_6;
		int32_t L_21;
		L_21 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(((int32_t)(((int32_t)(L_18^L_19))^((int32_t)(L_20<<7)))), ((int32_t)22), NULL);
		__this->___X2_7 = L_21;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int x2 = RotateRight(X2, 22) ^ X3 ^ (X1 << 7);
		int32_t L_0 = __this->___X2_7;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9(L_0, ((int32_t)22), NULL);
		int32_t L_2 = __this->___X3_8;
		int32_t L_3 = __this->___X1_6;
		V_0 = ((int32_t)(((int32_t)(L_1^L_2))^((int32_t)(L_3<<7))));
		// int x0 = RotateRight(X0, 5) ^ X1 ^ X3;
		int32_t L_4 = __this->___X0_5;
		int32_t L_5;
		L_5 = SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9(L_4, 5, NULL);
		int32_t L_6 = __this->___X1_6;
		int32_t L_7 = __this->___X3_8;
		V_1 = ((int32_t)(((int32_t)(L_5^L_6))^L_7));
		// int x3 = RotateRight(X3, 7);
		int32_t L_8 = __this->___X3_8;
		int32_t L_9;
		L_9 = SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9(L_8, 7, NULL);
		V_2 = L_9;
		// int x1 = RotateRight(X1, 1);
		int32_t L_10 = __this->___X1_6;
		int32_t L_11;
		L_11 = SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9(L_10, 1, NULL);
		V_3 = L_11;
		// X3 = x3 ^ x2 ^ x0 << 3;
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		__this->___X3_8 = ((int32_t)(((int32_t)(L_12^L_13))^((int32_t)(L_14<<3))));
		// X1 = x1 ^ x0 ^ x2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		__this->___X1_6 = ((int32_t)(((int32_t)(L_15^L_16))^L_17));
		// X2 = RotateRight(x2, 3);
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9(L_18, 3, NULL);
		__this->___X2_7 = L_19;
		// X0 = RotateRight(x0, 13);
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = SerpentEngineBase_RotateRight_m29EA7409EA72DC91FC987C4FE7B61197E097D5D9(L_20, ((int32_t)13), NULL);
		__this->___X0_5 = L_21;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__cctor_mE97C257C6C61DD2C3C494B7EB4CCCA92D62FC363 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly int BlockSize = 16;
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields*)il2cpp_codegen_static_fields_for(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var))->___BlockSize_0 = ((int32_t)16);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine_Init_mD285CB99F7D30692EB97953905A79DF0F6002EEB (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!(parameters is KeyParameter))
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException("invalid parameter passed to SKIPJACK init - " + BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.GetTypeName(parameters));
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52C87AE284E4E522A650221F2C4D41E4C9790B61)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipjackEngine_Init_mD285CB99F7D30692EB97953905A79DF0F6002EEB_RuntimeMethod_var)));
	}

IL_001e:
	{
		// byte[] keyBytes = ((KeyParameter)parameters).GetKey();
		RuntimeObject* L_5 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_5, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_5, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_6;
		// this.encrypting = forEncryption;
		bool L_7 = ___0_forEncryption;
		__this->___encrypting_6 = L_7;
		// this.key0 = new int[32];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key0_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key0_2), (void*)L_8);
		// this.key1 = new int[32];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key1_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key1_3), (void*)L_9);
		// this.key2 = new int[32];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key2_4), (void*)L_10);
		// this.key3 = new int[32];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key3_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key3_5), (void*)L_11);
		// for (int i = 0; i < 32; i ++)
		V_1 = 0;
		goto IL_00cb;
	}

IL_0069:
	{
		// key0[i] = keyBytes[(i * 4) % 10] & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___key0_2;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_15, 4))%((int32_t)10)));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)((int32_t)L_17&((int32_t)255))));
		// key1[i] = keyBytes[(i * 4 + 1) % 10] & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___key1_3;
		int32_t L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 1))%((int32_t)10)));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)((int32_t)L_23&((int32_t)255))));
		// key2[i] = keyBytes[(i * 4 + 2) % 10] & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___key2_4;
		int32_t L_25 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_27, 4)), 2))%((int32_t)10)));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)((int32_t)((int32_t)L_29&((int32_t)255))));
		// key3[i] = keyBytes[(i * 4 + 3) % 10] & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___key3_5;
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_33, 4)), 3))%((int32_t)10)));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)((int32_t)L_35&((int32_t)255))));
		// for (int i = 0; i < 32; i ++)
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00cb:
	{
		// for (int i = 0; i < 32; i ++)
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)32))))
		{
			goto IL_0069;
		}
	}
	{
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkipjackEngine_get_AlgorithmName_m373EB628F2C7CBABDD26395EF002AFB189F7F608 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SKIPJACK"; }
		return _stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkipjackEngine_get_IsPartialBlockOkay_mFB04B08F596C455D90BA30ED4BE4BD730B9F1E57 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_GetBlockSize_m51BCBA04297F72C464CE1100E733618C564C9A60 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		// return BLOCK_SIZE;
		return 8;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_ProcessBlock_m74D4B3826DD77254A994BD4294B16C44C6CCB51E (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key1 == null)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___key1_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("SKIPJACK engine not initialised");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3D26C9F26A712F62A6BE84B1E41F4C6BE837C16)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipjackEngine_ProcessBlock_m74D4B3826DD77254A994BD4294B16C44C6CCB51E_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Check.DataLength(input, inOff, BLOCK_SIZE, "input buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_2, L_3, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		// Check.OutputLength(output, outOff, BLOCK_SIZE, "output buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_4, L_5, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		// if (encrypting)
		bool L_6 = __this->___encrypting_6;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// EncryptBlock(input, inOff, output, outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_input;
		int32_t L_8 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_output;
		int32_t L_10 = ___3_outOff;
		int32_t L_11;
		L_11 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(16 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_7, L_8, L_9, L_10);
		goto IL_0050;
	}

IL_0044:
	{
		// DecryptBlock(input, inOff, output, outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_output;
		int32_t L_15 = ___3_outOff;
		int32_t L_16;
		L_16 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, __this, L_12, L_13, L_14, L_15);
	}

IL_0050:
	{
		// return BLOCK_SIZE;
		return 8;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine_Reset_m95B2E9C4CE21F9C9381F32A9BE421C8788D3341E (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::G(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// g1 = (w >> 8) & 0xff;
		int32_t L_0 = ___1_w;
		V_0 = ((int32_t)(((int32_t)(L_0>>8))&((int32_t)255)));
		// g2 = w & 0xff;
		int32_t L_1 = ___1_w;
		V_1 = ((int32_t)(L_1&((int32_t)255)));
		// g3 = ftable[g2 ^ key0[k]] ^ g1;
		il2cpp_codegen_runtime_class_init_inline(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___key0_2;
		int32_t L_5 = ___0_k;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		int32_t L_8 = ((int32_t)(L_3^L_7));
		int16_t L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_2 = ((int32_t)((int32_t)L_9^L_10));
		// g4 = ftable[g3 ^ key1[k]] ^ g2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___key1_3;
		int32_t L_14 = ___0_k;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		int32_t L_17 = ((int32_t)(L_12^L_16));
		int16_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		V_3 = ((int32_t)((int32_t)L_18^L_19));
		// g5 = ftable[g4 ^ key2[k]] ^ g3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___key2_4;
		int32_t L_23 = ___0_k;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		int32_t L_26 = ((int32_t)(L_21^L_25));
		int16_t L_27 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_2;
		V_4 = ((int32_t)((int32_t)L_27^L_28));
		// g6 = ftable[g5 ^ key3[k]] ^ g4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___key3_5;
		int32_t L_32 = ___0_k;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		int32_t L_35 = ((int32_t)(L_30^L_34));
		int16_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		V_5 = ((int32_t)((int32_t)L_36^L_37));
		// return ((g5 << 8) + g6);
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_38<<8)), L_39));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_EncryptBlock_m5F075767760E4D648451CB67053510B24FD234B5 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int w1 = (input[inOff + 0] << 8) + (input[inOff + 1] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		// int w2 = (input[inOff + 2] << 8) + (input[inOff + 3] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_11<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		// int w3 = (input[inOff + 4] << 8) + (input[inOff + 5] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_input;
		int32_t L_17 = ___1_inOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_input;
		int32_t L_21 = ___1_inOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		// int w4 = (input[inOff + 6] << 8) + (input[inOff + 7] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_input;
		int32_t L_29 = ___1_inOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		// int k = 0;
		V_4 = 0;
		// for (int t = 0; t < 2; t++)
		V_5 = 0;
		goto IL_00ba;
	}

IL_0056:
	{
		// for(int i = 0; i < 8; i++)
		V_6 = 0;
		goto IL_0082;
	}

IL_005b:
	{
		// int tmp = w4;
		int32_t L_32 = V_3;
		V_7 = L_32;
		// w4 = w3;
		int32_t L_33 = V_2;
		V_3 = L_33;
		// w3 = w2;
		int32_t L_34 = V_1;
		V_2 = L_34;
		// w2 = G(k, w1);
		int32_t L_35 = V_4;
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B(__this, L_35, L_36, NULL);
		V_1 = L_37;
		// w1 = w2 ^ tmp ^ (k + 1);
		int32_t L_38 = V_1;
		int32_t L_39 = V_7;
		int32_t L_40 = V_4;
		V_0 = ((int32_t)(((int32_t)(L_38^L_39))^((int32_t)il2cpp_codegen_add(L_40, 1))));
		// k++;
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		// for(int i = 0; i < 8; i++)
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0082:
	{
		// for(int i = 0; i < 8; i++)
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) < ((int32_t)8)))
		{
			goto IL_005b;
		}
	}
	{
		// for(int i = 0; i < 8; i++)
		V_8 = 0;
		goto IL_00af;
	}

IL_008c:
	{
		// int tmp = w4;
		int32_t L_44 = V_3;
		// w4 = w3;
		int32_t L_45 = V_2;
		V_3 = L_45;
		// w3 = w1 ^ w2 ^ (k + 1);
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		int32_t L_48 = V_4;
		V_2 = ((int32_t)(((int32_t)(L_46^L_47))^((int32_t)il2cpp_codegen_add(L_48, 1))));
		// w2 = G(k, w1);
		int32_t L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51;
		L_51 = SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B(__this, L_49, L_50, NULL);
		V_1 = L_51;
		// w1 = tmp;
		V_0 = L_44;
		// k++;
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		// for(int i = 0; i < 8; i++)
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00af:
	{
		// for(int i = 0; i < 8; i++)
		int32_t L_54 = V_8;
		if ((((int32_t)L_54) < ((int32_t)8)))
		{
			goto IL_008c;
		}
	}
	{
		// for (int t = 0; t < 2; t++)
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00ba:
	{
		// for (int t = 0; t < 2; t++)
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) < ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		// outBytes[outOff + 0] = (byte)((w1 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_outBytes;
		int32_t L_58 = ___3_outOff;
		int32_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_59>>8))));
		// outBytes[outOff + 1] = (byte)(w1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___2_outBytes;
		int32_t L_61 = ___3_outOff;
		int32_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 1))), (uint8_t)((int32_t)(uint8_t)L_62));
		// outBytes[outOff + 2] = (byte)((w2 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___2_outBytes;
		int32_t L_64 = ___3_outOff;
		int32_t L_65 = V_1;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_65>>8))));
		// outBytes[outOff + 3] = (byte)(w2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_outBytes;
		int32_t L_67 = ___3_outOff;
		int32_t L_68 = V_1;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 3))), (uint8_t)((int32_t)(uint8_t)L_68));
		// outBytes[outOff + 4] = (byte)((w3 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___2_outBytes;
		int32_t L_70 = ___3_outOff;
		int32_t L_71 = V_2;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, 4))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_71>>8))));
		// outBytes[outOff + 5] = (byte)(w3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___2_outBytes;
		int32_t L_73 = ___3_outOff;
		int32_t L_74 = V_2;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 5))), (uint8_t)((int32_t)(uint8_t)L_74));
		// outBytes[outOff + 6] = (byte)((w4 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___2_outBytes;
		int32_t L_76 = ___3_outOff;
		int32_t L_77 = V_3;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 6))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_77>>8))));
		// outBytes[outOff + 7] = (byte)(w4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___2_outBytes;
		int32_t L_79 = ___3_outOff;
		int32_t L_80 = V_3;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_79, 7))), (uint8_t)((int32_t)(uint8_t)L_80));
		// return BLOCK_SIZE;
		return 8;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::H(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// h1 = w & 0xff;
		int32_t L_0 = ___1_w;
		V_0 = ((int32_t)(L_0&((int32_t)255)));
		// h2 = (w >> 8) & 0xff;
		int32_t L_1 = ___1_w;
		V_1 = ((int32_t)(((int32_t)(L_1>>8))&((int32_t)255)));
		// h3 = ftable[h2 ^ key3[k]] ^ h1;
		il2cpp_codegen_runtime_class_init_inline(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___key3_5;
		int32_t L_5 = ___0_k;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		int32_t L_8 = ((int32_t)(L_3^L_7));
		int16_t L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_2 = ((int32_t)((int32_t)L_9^L_10));
		// h4 = ftable[h3 ^ key2[k]] ^ h2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___key2_4;
		int32_t L_14 = ___0_k;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		int32_t L_17 = ((int32_t)(L_12^L_16));
		int16_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		V_3 = ((int32_t)((int32_t)L_18^L_19));
		// h5 = ftable[h4 ^ key1[k]] ^ h3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___key1_3;
		int32_t L_23 = ___0_k;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		int32_t L_26 = ((int32_t)(L_21^L_25));
		int16_t L_27 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_2;
		V_4 = ((int32_t)((int32_t)L_27^L_28));
		// h6 = ftable[h5 ^ key0[k]] ^ h4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___key0_2;
		int32_t L_32 = ___0_k;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		int32_t L_35 = ((int32_t)(L_30^L_34));
		int16_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		// return ((h6 << 8) + h5);
		int32_t L_38 = V_4;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_36^L_37))<<8)), L_38));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_DecryptBlock_m8647B93B321D45E77346A05A051E461DC901ADEB (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int w2 = (input[inOff + 0] << 8) + (input[inOff + 1] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		// int w1 = (input[inOff + 2] << 8) + (input[inOff + 3] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_11<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		// int w4 = (input[inOff + 4] << 8) + (input[inOff + 5] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_input;
		int32_t L_17 = ___1_inOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_input;
		int32_t L_21 = ___1_inOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		// int w3 = (input[inOff + 6] << 8) + (input[inOff + 7] & 0xff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_input;
		int32_t L_29 = ___1_inOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		// int k = 31;
		V_4 = ((int32_t)31);
		// for (int t = 0; t < 2; t++)
		V_5 = 0;
		goto IL_00bb;
	}

IL_0057:
	{
		// for(int i = 0; i < 8; i++)
		V_6 = 0;
		goto IL_0083;
	}

IL_005c:
	{
		// int tmp = w4;
		int32_t L_32 = V_2;
		V_7 = L_32;
		// w4 = w3;
		int32_t L_33 = V_3;
		V_2 = L_33;
		// w3 = w2;
		int32_t L_34 = V_0;
		V_3 = L_34;
		// w2 = H(k, w1);
		int32_t L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C(__this, L_35, L_36, NULL);
		V_0 = L_37;
		// w1 = w2 ^ tmp ^ (k + 1);
		int32_t L_38 = V_0;
		int32_t L_39 = V_7;
		int32_t L_40 = V_4;
		V_1 = ((int32_t)(((int32_t)(L_38^L_39))^((int32_t)il2cpp_codegen_add(L_40, 1))));
		// k--;
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		// for(int i = 0; i < 8; i++)
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0083:
	{
		// for(int i = 0; i < 8; i++)
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) < ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		// for(int i = 0; i < 8; i++)
		V_8 = 0;
		goto IL_00b0;
	}

IL_008d:
	{
		// int tmp = w4;
		int32_t L_44 = V_2;
		// w4 = w3;
		int32_t L_45 = V_3;
		V_2 = L_45;
		// w3 = w1 ^ w2 ^ (k + 1);
		int32_t L_46 = V_1;
		int32_t L_47 = V_0;
		int32_t L_48 = V_4;
		V_3 = ((int32_t)(((int32_t)(L_46^L_47))^((int32_t)il2cpp_codegen_add(L_48, 1))));
		// w2 = H(k, w1);
		int32_t L_49 = V_4;
		int32_t L_50 = V_1;
		int32_t L_51;
		L_51 = SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C(__this, L_49, L_50, NULL);
		V_0 = L_51;
		// w1 = tmp;
		V_1 = L_44;
		// k--;
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		// for(int i = 0; i < 8; i++)
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00b0:
	{
		// for(int i = 0; i < 8; i++)
		int32_t L_54 = V_8;
		if ((((int32_t)L_54) < ((int32_t)8)))
		{
			goto IL_008d;
		}
	}
	{
		// for (int t = 0; t < 2; t++)
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00bb:
	{
		// for (int t = 0; t < 2; t++)
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) < ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		// outBytes[outOff + 0] = (byte)((w2 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_outBytes;
		int32_t L_58 = ___3_outOff;
		int32_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_59>>8))));
		// outBytes[outOff + 1] = (byte)(w2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___2_outBytes;
		int32_t L_61 = ___3_outOff;
		int32_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 1))), (uint8_t)((int32_t)(uint8_t)L_62));
		// outBytes[outOff + 2] = (byte)((w1 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___2_outBytes;
		int32_t L_64 = ___3_outOff;
		int32_t L_65 = V_1;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_65>>8))));
		// outBytes[outOff + 3] = (byte)(w1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_outBytes;
		int32_t L_67 = ___3_outOff;
		int32_t L_68 = V_1;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 3))), (uint8_t)((int32_t)(uint8_t)L_68));
		// outBytes[outOff + 4] = (byte)((w4 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___2_outBytes;
		int32_t L_70 = ___3_outOff;
		int32_t L_71 = V_2;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, 4))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_71>>8))));
		// outBytes[outOff + 5] = (byte)(w4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___2_outBytes;
		int32_t L_73 = ___3_outOff;
		int32_t L_74 = V_2;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 5))), (uint8_t)((int32_t)(uint8_t)L_74));
		// outBytes[outOff + 6] = (byte)((w3 >> 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___2_outBytes;
		int32_t L_76 = ___3_outOff;
		int32_t L_77 = V_3;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 6))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_77>>8))));
		// outBytes[outOff + 7] = (byte)(w3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___2_outBytes;
		int32_t L_79 = ___3_outOff;
		int32_t L_80 = V_3;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_79, 7))), (uint8_t)((int32_t)(uint8_t)L_80));
		// return BLOCK_SIZE;
		return 8;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine__ctor_mC2683B844B26C570432D0987F52BA9EB5A933E3D (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SkipjackEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine__cctor_mC27FF03CCF5BD33DF04EE1258EB74C269AE34AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____9AC0C32A73444A448170AE1EFE7F69A0D3A7F6E1335FA0E112D9F96EB7EE3CC7_167_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly short [] ftable =
		// {
		//     0xa3, 0xd7, 0x09, 0x83, 0xf8, 0x48, 0xf6, 0xf4, 0xb3, 0x21, 0x15, 0x78, 0x99, 0xb1, 0xaf, 0xf9,
		//     0xe7, 0x2d, 0x4d, 0x8a, 0xce, 0x4c, 0xca, 0x2e, 0x52, 0x95, 0xd9, 0x1e, 0x4e, 0x38, 0x44, 0x28,
		//     0x0a, 0xdf, 0x02, 0xa0, 0x17, 0xf1, 0x60, 0x68, 0x12, 0xb7, 0x7a, 0xc3, 0xe9, 0xfa, 0x3d, 0x53,
		//     0x96, 0x84, 0x6b, 0xba, 0xf2, 0x63, 0x9a, 0x19, 0x7c, 0xae, 0xe5, 0xf5, 0xf7, 0x16, 0x6a, 0xa2,
		//     0x39, 0xb6, 0x7b, 0x0f, 0xc1, 0x93, 0x81, 0x1b, 0xee, 0xb4, 0x1a, 0xea, 0xd0, 0x91, 0x2f, 0xb8,
		//     0x55, 0xb9, 0xda, 0x85, 0x3f, 0x41, 0xbf, 0xe0, 0x5a, 0x58, 0x80, 0x5f, 0x66, 0x0b, 0xd8, 0x90,
		//     0x35, 0xd5, 0xc0, 0xa7, 0x33, 0x06, 0x65, 0x69, 0x45, 0x00, 0x94, 0x56, 0x6d, 0x98, 0x9b, 0x76,
		//     0x97, 0xfc, 0xb2, 0xc2, 0xb0, 0xfe, 0xdb, 0x20, 0xe1, 0xeb, 0xd6, 0xe4, 0xdd, 0x47, 0x4a, 0x1d,
		//     0x42, 0xed, 0x9e, 0x6e, 0x49, 0x3c, 0xcd, 0x43, 0x27, 0xd2, 0x07, 0xd4, 0xde, 0xc7, 0x67, 0x18,
		//     0x89, 0xcb, 0x30, 0x1f, 0x8d, 0xc6, 0x8f, 0xaa, 0xc8, 0x74, 0xdc, 0xc9, 0x5d, 0x5c, 0x31, 0xa4,
		//     0x70, 0x88, 0x61, 0x2c, 0x9f, 0x0d, 0x2b, 0x87, 0x50, 0x82, 0x54, 0x64, 0x26, 0x7d, 0x03, 0x40,
		//     0x34, 0x4b, 0x1c, 0x73, 0xd1, 0xc4, 0xfd, 0x3b, 0xcc, 0xfb, 0x7f, 0xab, 0xe6, 0x3e, 0x5b, 0xa5,
		//     0xad, 0x04, 0x23, 0x9c, 0x14, 0x51, 0x22, 0xf0, 0x29, 0x79, 0x71, 0x7e, 0xff, 0x8c, 0x0e, 0xe2,
		//     0x0c, 0xef, 0xbc, 0x72, 0x75, 0x6f, 0x37, 0xa1, 0xec, 0xd3, 0x8e, 0x62, 0x8b, 0x86, 0x10, 0xe8,
		//     0x08, 0x77, 0x11, 0xbe, 0x92, 0x4f, 0x24, 0xc5, 0x32, 0x36, 0x9d, 0xcf, 0xf3, 0xa6, 0xbb, 0xac,
		//     0x5e, 0x6c, 0xa9, 0x13, 0x57, 0x25, 0xb5, 0xe3, 0xbd, 0xa8, 0x3a, 0x01, 0x05, 0x59, 0x2a, 0x46
		// };
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____9AC0C32A73444A448170AE1EFE7F69A0D3A7F6E1335FA0E112D9F96EB7EE3CC7_167_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable_1), (void*)L_1);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine__ctor_m258B8BB57AE4A1B083A4C8ACFA6CF9F78D16AE25 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new SM3Digest())
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_0 = (SM3Digest_t183E330F597B8D4496163054F79D647449092E00*)il2cpp_codegen_object_new(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SM3Digest__ctor_m95C3E5DE913191266CB039DD72EBAB1B59C9263B(L_0, NULL);
		SM2Engine__ctor_m3177A39E90B088011B4A0C602FDA2DA603E2657C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine__ctor_m3177A39E90B088011B4A0C602FDA2DA603E2657C (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, const RuntimeMethod* method) 
{
	{
		// public SM2Engine(IDigest digest)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.mDigest = digest;
		RuntimeObject* L_0 = ___0_digest;
		__this->___mDigest_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDigest_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Init_mBD3781066E335AD062E33B2CD247BF73344EFD5C (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, bool ___0_forEncryption, RuntimeObject* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* V_0 = NULL;
	{
		// this.mForEncryption = forEncryption;
		bool L_0 = ___0_forEncryption;
		__this->___mForEncryption_1 = L_0;
		// if (forEncryption)
		bool L_1 = ___0_forEncryption;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// ParametersWithRandom rParam = (ParametersWithRandom)param;
		RuntimeObject* L_2 = ___1_param;
		V_0 = ((ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7*)CastclassClass((RuntimeObject*)L_2, ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7_il2cpp_TypeInfo_var));
		// mECKey = (ECKeyParameters)rParam.Parameters;
		ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ParametersWithRandom_get_Parameters_m3706EE54311F6BD833CB80C71C1C18BD2D48E227_inline(L_3, NULL);
		__this->___mECKey_2 = ((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_4, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECKey_2), (void*)((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_4, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var)));
		// mECParams = mECKey.Parameters;
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_5 = __this->___mECKey_2;
		NullCheck(L_5);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_6;
		L_6 = ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline(L_5, NULL);
		__this->___mECParams_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECParams_3), (void*)L_6);
		// ECPoint s = ((ECPublicKeyParameters)mECKey).Q.Multiply(mECParams.H);
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_7 = __this->___mECKey_2;
		NullCheck(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_7, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)));
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_8;
		L_8 = ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_7, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)), NULL);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_9 = __this->___mECParams_3;
		NullCheck(L_9);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_10;
		L_10 = ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline(L_9, NULL);
		NullCheck(L_8);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_11;
		L_11 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Multiply(BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger) */, L_8, L_10);
		// if (s.IsInfinity)
		NullCheck(L_11);
		bool L_12;
		L_12 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_11, NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// throw new ArgumentException("invalid key: [h]Q at infinity");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B5FAF23AFEE6B8E228BD4414C16F21E192E810)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM2Engine_Init_mBD3781066E335AD062E33B2CD247BF73344EFD5C_RuntimeMethod_var)));
	}

IL_0065:
	{
		// mRandom = rParam.Random;
		ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* L_14 = V_0;
		NullCheck(L_14);
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_15;
		L_15 = ParametersWithRandom_get_Random_mEA11E3BF8C0CEAD478D02EE8BD106BC9A6BC9C5E_inline(L_14, NULL);
		__this->___mRandom_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRandom_5), (void*)L_15);
		goto IL_0090;
	}

IL_0073:
	{
		// mECKey = (ECKeyParameters)param;
		RuntimeObject* L_16 = ___1_param;
		__this->___mECKey_2 = ((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_16, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECKey_2), (void*)((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_16, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var)));
		// mECParams = mECKey.Parameters;
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_17 = __this->___mECKey_2;
		NullCheck(L_17);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_18;
		L_18 = ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline(L_17, NULL);
		__this->___mECParams_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECParams_3), (void*)L_18);
	}

IL_0090:
	{
		// mCurveLength = (mECParams.Curve.FieldSize + 7) / 8;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_19 = __this->___mECParams_3;
		NullCheck(L_19);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_20;
		L_20 = ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::get_FieldSize() */, L_20);
		__this->___mCurveLength_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 7))/8));
		// }
		return;
	}
}
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_ProcessBlock_mD10F77A30431FAE9CAFE251D7849D13F7A367D8B (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	{
		// if (mForEncryption)
		bool L_0 = __this->___mForEncryption_1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return Encrypt(input, inOff, inLen);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = SM2Engine_Encrypt_m4BD2633FBA351F4772F9CF8B622CF670765F201A(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		// return Decrypt(input, inOff, inLen);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		int32_t L_6 = ___1_inOff;
		int32_t L_7 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0(__this, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::CreateBasePointMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SM2Engine_CreateBasePointMultiplier_m3EE8BB269C2141396EBD0A88143547F8B7822CD1 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FixedPointCombMultiplier();
		FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902* L_0 = (FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902*)il2cpp_codegen_object_new(FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FixedPointCombMultiplier__ctor_mF6FF1308D0C5F9EC3A779976BAE2295DC8A6E4E3(L_0, NULL);
		return L_0;
	}
}
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Encrypt_m4BD2633FBA351F4772F9CF8B622CF670765F201A (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* V_5 = NULL;
	{
		// byte[] c2 = new byte[inLen];
		int32_t L_0 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Array.Copy(input, inOff, c2, 0, c2.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// ECMultiplier multiplier = CreateBasePointMultiplier();
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::CreateBasePointMultiplier() */, __this);
		V_1 = L_6;
	}

IL_001a:
	{
		// BigInteger k = NextK();
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_7;
		L_7 = SM2Engine_NextK_m151328D30F29D64CF9C54593D3D27AA521548968(__this, NULL);
		V_5 = L_7;
		// ECPoint c1P = multiplier.Multiply(mECParams.G, k).Normalize();
		RuntimeObject* L_8 = V_1;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_9 = __this->___mECParams_3;
		NullCheck(L_9);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_10;
		L_10 = ECDomainParameters_get_G_m168D02E316313C80F26DAC3F8CB67E8F8C613D86_inline(L_9, NULL);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_11 = V_5;
		NullCheck(L_8);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_12;
		L_12 = InterfaceFuncInvoker2< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(0 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier::Multiply(BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint,BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger) */, ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F_il2cpp_TypeInfo_var, L_8, L_10, L_11);
		NullCheck(L_12);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_13;
		L_13 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Normalize() */, L_12);
		// c1 = c1P.GetEncoded(false);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(26 /* System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::GetEncoded(System.Boolean) */, L_13, (bool)0);
		V_2 = L_14;
		// kPB = ((ECPublicKeyParameters)mECKey).Q.Multiply(k).Normalize();
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_15 = __this->___mECKey_2;
		NullCheck(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_15, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)));
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_16;
		L_16 = ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_15, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)), NULL);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_17 = V_5;
		NullCheck(L_16);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_18;
		L_18 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Multiply(BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger) */, L_16, L_17);
		NullCheck(L_18);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_19;
		L_19 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Normalize() */, L_18);
		V_3 = L_19;
		// Kdf(mDigest, kPB, c2);
		RuntimeObject* L_20 = __this->___mDigest_0;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7(__this, L_20, L_21, L_22, NULL);
		// while (NotEncrypted(c2, input, inOff));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		bool L_26;
		L_26 = SM2Engine_NotEncrypted_m4AD1189FECEBE3B6366F5F4D70B1F47A3AD6B9C0(__this, L_23, L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_001a;
		}
	}
	{
		// AddFieldElement(mDigest, kPB.AffineXCoord);
		RuntimeObject* L_27 = __this->___mDigest_0;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_28 = V_3;
		NullCheck(L_28);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29;
		L_29 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineXCoord() */, L_28);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_27, L_29, NULL);
		// mDigest.BlockUpdate(input, inOff, inLen);
		RuntimeObject* L_30 = __this->___mDigest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_input;
		int32_t L_32 = ___1_inOff;
		int32_t L_33 = ___2_inLen;
		NullCheck(L_30);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_30, L_31, L_32, L_33);
		// AddFieldElement(mDigest, kPB.AffineYCoord);
		RuntimeObject* L_34 = __this->___mDigest_0;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_35 = V_3;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineYCoord() */, L_35);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_34, L_36, NULL);
		// byte[] c3 = DigestUtilities.DoFinal(mDigest);
		RuntimeObject* L_37 = __this->___mDigest_0;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = DigestUtilities_DoFinal_mACA582EC7255EEA9FA9074BD481290544B78167B(L_37, NULL);
		V_4 = L_38;
		// return Arrays.ConcatenateAll(c1, c2, c3);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_39 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_40 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_2;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_41);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_43);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_44 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_45);
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = Arrays_ConcatenateAll_mE5ECBC80ABB913D26B1A18E1552CFFAFF89B17A7(L_44, NULL);
		return L_46;
	}
}
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// byte[] c1 = new byte[mCurveLength * 2 + 1];
		int32_t L_0 = __this->___mCurveLength_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1)));
		V_0 = L_1;
		// Array.Copy(input, inOff, c1, 0, c1.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// ECPoint c1P = mECParams.Curve.DecodePoint(c1);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_6 = __this->___mECParams_3;
		NullCheck(L_6);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_7;
		L_7 = ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_7);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_9;
		L_9 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECCurve::DecodePoint(System.Byte[]) */, L_7, L_8);
		V_1 = L_9;
		// ECPoint s = c1P.Multiply(mECParams.H);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_10 = V_1;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_11 = __this->___mECParams_3;
		NullCheck(L_11);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_12;
		L_12 = ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline(L_11, NULL);
		NullCheck(L_10);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_13;
		L_13 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Multiply(BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger) */, L_10, L_12);
		// if (s.IsInfinity)
		NullCheck(L_13);
		bool L_14;
		L_14 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_13, NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		// throw new InvalidCipherTextException("[h]C1 at infinity");
		InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404* L_15 = (InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidCipherTextException__ctor_m2085540DA711A26F169A56E49C5F0F36435B77E9(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37EE95486CB11E75528EB47FCD56D907FBE6F34C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0_RuntimeMethod_var)));
	}

IL_0051:
	{
		// c1P = c1P.Multiply(((ECPrivateKeyParameters)mECKey).D).Normalize();
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_16 = V_1;
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_17 = __this->___mECKey_2;
		NullCheck(((ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD*)CastclassClass((RuntimeObject*)L_17, ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var)));
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_18;
		L_18 = ECPrivateKeyParameters_get_D_m519EB228A8E14620BD059187CAC803C94AA09B80_inline(((ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD*)CastclassClass((RuntimeObject*)L_17, ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_16);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_19;
		L_19 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Multiply(BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger) */, L_16, L_18);
		NullCheck(L_19);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_20;
		L_20 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::Normalize() */, L_19);
		V_1 = L_20;
		// byte[] c2 = new byte[inLen - c1.Length - mDigest.GetDigestSize()];
		int32_t L_21 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23 = __this->___mDigest_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)(((RuntimeArray*)L_22)->max_length)))), L_24)));
		V_2 = L_25;
		// Array.Copy(input, inOff + c1.Length, c2, 0, c2.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_input;
		int32_t L_27 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_30);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)(((RuntimeArray*)L_28)->max_length)))), (RuntimeArray*)L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)), NULL);
		// Kdf(mDigest, c1P, c2);
		RuntimeObject* L_31 = __this->___mDigest_0;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7(__this, L_31, L_32, L_33, NULL);
		// AddFieldElement(mDigest, c1P.AffineXCoord);
		RuntimeObject* L_34 = __this->___mDigest_0;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_35 = V_1;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineXCoord() */, L_35);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_34, L_36, NULL);
		// mDigest.BlockUpdate(c2, 0, c2.Length);
		RuntimeObject* L_37 = __this->___mDigest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		NullCheck(L_39);
		NullCheck(L_37);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_37, L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)));
		// AddFieldElement(mDigest, c1P.AffineYCoord);
		RuntimeObject* L_40 = __this->___mDigest_0;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_41 = V_1;
		NullCheck(L_41);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42;
		L_42 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineYCoord() */, L_41);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_40, L_42, NULL);
		// byte[] c3 = DigestUtilities.DoFinal(mDigest);
		RuntimeObject* L_43 = __this->___mDigest_0;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = DigestUtilities_DoFinal_mACA582EC7255EEA9FA9074BD481290544B78167B(L_43, NULL);
		V_3 = L_44;
		// int check = 0;
		V_4 = 0;
		// for (int i = 0; i != c3.Length; i++)
		V_5 = 0;
		goto IL_0108;
	}

IL_00ea:
	{
		// check |= c3[i] ^ input[inOff + c1.Length + c2.Length + i];
		int32_t L_45 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_3;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___0_input;
		int32_t L_51 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_2;
		NullCheck(L_53);
		int32_t L_54 = V_5;
		NullCheck(L_50);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_51, ((int32_t)(((RuntimeArray*)L_52)->max_length)))), ((int32_t)(((RuntimeArray*)L_53)->max_length)))), L_54));
		uint8_t L_56 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = ((int32_t)(L_45|((int32_t)((int32_t)L_49^(int32_t)L_56))));
		// for (int i = 0; i != c3.Length; i++)
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0108:
	{
		// for (int i = 0; i != c3.Length; i++)
		int32_t L_58 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_3;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		// Arrays.Fill(c1, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9(L_60, (uint8_t)0, NULL);
		// Arrays.Fill(c3, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_3;
		Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9(L_61, (uint8_t)0, NULL);
		// if (check != 0)
		int32_t L_62 = V_4;
		if (!L_62)
		{
			goto IL_0133;
		}
	}
	{
		// Arrays.Fill(c2, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_2;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var)));
		Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9(L_63, (uint8_t)0, NULL);
		// throw new InvalidCipherTextException("invalid cipher text");
		InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404* L_64 = (InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404_il2cpp_TypeInfo_var)));
		NullCheck(L_64);
		InvalidCipherTextException__ctor_m2085540DA711A26F169A56E49C5F0F36435B77E9(L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A4162EFF5CAB0D794CB0E5966FF20B269E903EA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0_RuntimeMethod_var)));
	}

IL_0133:
	{
		// return c2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		return L_65;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::NotEncrypted(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SM2Engine_NotEncrypted_m4AD1189FECEBE3B6366F5F4D70B1F47A3AD6B9C0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_inOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i != encData.Length; i++)
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		// if (encData[i] != input[inOff + i])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_encData;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_input;
		int32_t L_5 = ___2_inOff;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_3) == ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// for (int i = 0; i != encData.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0014:
	{
		// for (int i = 0; i != encData.Length; i++)
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_encData;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Kdf(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest,BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___1_c1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_encData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int digestSize = digest.GetDigestSize();
		RuntimeObject* L_0 = ___0_digest;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// byte[] buf = new byte[System.Math.Max(4, digestSize)];
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(4, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// int off = 0;
		V_2 = 0;
		// IMemoable memo = digest as IMemoable;
		RuntimeObject* L_5 = ___0_digest;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var));
		// IMemoable copy = null;
		V_4 = (RuntimeObject*)NULL;
		// if (memo != null)
		RuntimeObject* L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// AddFieldElement(digest, c1.AffineXCoord);
		RuntimeObject* L_7 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_8 = ___1_c1;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9;
		L_9 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineXCoord() */, L_8);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_7, L_9, NULL);
		// AddFieldElement(digest, c1.AffineYCoord);
		RuntimeObject* L_10 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_11 = ___1_c1;
		NullCheck(L_11);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12;
		L_12 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineYCoord() */, L_11);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_10, L_12, NULL);
		// copy = memo.Copy();
		RuntimeObject* L_13 = V_3;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable::Copy() */, IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var, L_13);
		V_4 = L_14;
	}

IL_0045:
	{
		// uint ct = 0;
		V_5 = 0;
		goto IL_00ae;
	}

IL_004a:
	{
		// if (memo != null)
		RuntimeObject* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		// memo.Reset(copy);
		RuntimeObject* L_16 = V_3;
		RuntimeObject* L_17 = V_4;
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable) */, IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var, L_16, L_17);
		goto IL_0071;
	}

IL_0057:
	{
		// AddFieldElement(digest, c1.AffineXCoord);
		RuntimeObject* L_18 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_19 = ___1_c1;
		NullCheck(L_19);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20;
		L_20 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineXCoord() */, L_19);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_18, L_20, NULL);
		// AddFieldElement(digest, c1.AffineYCoord);
		RuntimeObject* L_21 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_22 = ___1_c1;
		NullCheck(L_22);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23;
		L_23 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10 /* BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECPoint::get_AffineYCoord() */, L_22);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_21, L_23, NULL);
	}

IL_0071:
	{
		// Pack.UInt32_To_BE(++ct, buf, 0);
		uint32_t L_24 = V_5;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		V_5 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_25, L_26, 0, NULL);
		// digest.BlockUpdate(buf, 0, 4);
		RuntimeObject* L_27 = ___0_digest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_27, L_28, 0, 4);
		// digest.DoFinal(buf, 0);
		RuntimeObject* L_29 = ___0_digest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_29, L_30, 0);
		// int xorLen = System.Math.Min(digestSize, encData.Length - off);
		int32_t L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___2_encData;
		NullCheck(L_33);
		int32_t L_34 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_32, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34)), NULL);
		V_6 = L_35;
		// Xor(encData, buf, off, xorLen);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___2_encData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		int32_t L_38 = V_2;
		int32_t L_39 = V_6;
		SM2Engine_Xor_m832C50925B3C5CC66990FE276F5679E3048F5E20(__this, L_36, L_37, L_38, L_39, NULL);
		// off += xorLen;
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, L_41));
	}

IL_00ae:
	{
		// while (off < encData.Length)
		int32_t L_42 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___2_encData;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::Xor(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Xor_m832C50925B3C5CC66990FE276F5679E3048F5E20 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_kdfOut, int32_t ___2_dOff, int32_t ___3_dRemaining, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i != dRemaining; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// data[dOff + i] ^= kdfOut[i];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		int32_t L_1 = ___2_dOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		uint8_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))));
		int32_t L_4 = *((uint8_t*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_kdfOut;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^(int32_t)L_8)));
		// for (int i = 0; i != dRemaining; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0019:
	{
		// for (int i = 0; i != dRemaining; i++)
		int32_t L_10 = V_0;
		int32_t L_11 = ___3_dRemaining;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::NextK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* SM2Engine_NextK_m151328D30F29D64CF9C54593D3D27AA521548968 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* V_1 = NULL;
	{
		// int qBitLength = mECParams.N.BitLength;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_0 = __this->___mECParams_3;
		NullCheck(L_0);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_1;
		L_1 = ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BigInteger_get_BitLength_m290E225C377B0A19E6B9B644F15A83EF92FB87E5(L_1, NULL);
		V_0 = L_2;
	}

IL_0011:
	{
		// k = new BigInteger(qBitLength, mRandom);
		int32_t L_3 = V_0;
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_4 = __this->___mRandom_5;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_5 = (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C*)il2cpp_codegen_object_new(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BigInteger__ctor_mEFB2C55989F98B6419177D303BA633734B0E580F(L_5, L_3, L_4, NULL);
		V_1 = L_5;
		// while (k.SignValue == 0 || k.CompareTo(mECParams.N) >= 0);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_8 = V_1;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_9 = __this->___mECParams_3;
		NullCheck(L_9);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_10;
		L_10 = ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline(L_9, NULL);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = BigInteger_CompareTo_m201F16A26E0FB9676E7184CCAA410AC13BB00031(L_8, L_10, NULL);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return k;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_12 = V_1;
		return L_12;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM2Engine::AddFieldElement(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest,BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] p = v.GetEncoded();
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___1_v;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(26 /* System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Math.EC.ECFieldElement::GetEncoded() */, L_0);
		V_0 = L_1;
		// digest.BlockUpdate(p, 0, p.Length);
		RuntimeObject* L_2 = ___0_digest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
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
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::tau(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835 (uint32_t ___0_A, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		// uint b0 = Sbox[A >> 24];
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox_1;
		uint32_t L_1 = ___0_A;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((uint32_t)L_1>>((int32_t)24)));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// uint b1 = Sbox[(A >> 16) & 0xFF];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox_1;
		uint32_t L_5 = ___0_A;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255)));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// uint b2 = Sbox[(A >> 8) & 0xFF];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox_1;
		uint32_t L_9 = ___0_A;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// uint b3 = Sbox[A & 0xFF];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox_1;
		uint32_t L_13 = ___0_A;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)L_13&((int32_t)255)));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// return (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_16<<((int32_t)16)))))|((int32_t)((int32_t)L_17<<8))))|(int32_t)L_18));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::L_ap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_ap_mB32C4F2D4E783853371203B8268F83F8CE62A50A (uint32_t ___0_B, const RuntimeMethod* method) 
{
	{
		// return B ^ Integers.RotateLeft(B, 13) ^ Integers.RotateLeft(B, 23);
		uint32_t L_0 = ___0_B;
		uint32_t L_1 = ___0_B;
		uint32_t L_2;
		L_2 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_1, ((int32_t)13), NULL);
		uint32_t L_3 = ___0_B;
		uint32_t L_4;
		L_4 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_3, ((int32_t)23), NULL);
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::T_ap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, uint32_t ___0_Z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return L_ap(tau(Z));
		uint32_t L_0 = ___0_Z;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835(L_0, NULL);
		uint32_t L_2;
		L_2 = SM4Engine_L_ap_mB32C4F2D4E783853371203B8268F83F8CE62A50A(L_1, NULL);
		return L_2;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::ExpandKey(System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_ExpandKey_m51540329CD2335767F3FF512449781761956CDD3 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, bool ___0_forEncryption, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// uint K0 = Pack.BE_To_UInt32(key,  0) ^ FK[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_key;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK_3;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_4));
		// uint K1 = Pack.BE_To_UInt32(key,  4) ^ FK[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_key;
		uint32_t L_6;
		L_6 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_5, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK_3;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_9));
		// uint K2 = Pack.BE_To_UInt32(key,  8) ^ FK[2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_key;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_10, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK_3;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = ((int32_t)((int32_t)L_11^(int32_t)L_14));
		// uint K3 = Pack.BE_To_UInt32(key, 12) ^ FK[3];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___1_key;
		uint32_t L_16;
		L_16 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_15, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK_3;
		NullCheck(L_17);
		int32_t L_18 = 3;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int32_t)((int32_t)L_16^(int32_t)L_19));
		// if (forEncryption)
		bool L_20 = ___0_forEncryption;
		if (!L_20)
		{
			goto IL_013e;
		}
	}
	{
		// rk[0] = K0 ^ T_ap(K1    ^ K2    ^ K3    ^ CK[0]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___rk_4;
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_1;
		uint32_t L_24 = V_2;
		uint32_t L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_26);
		int32_t L_27 = 0;
		uint32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		uint32_t L_29;
		L_29 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_23^(int32_t)L_24))^(int32_t)L_25))^(int32_t)L_28)), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_22^(int32_t)L_29)));
		// rk[1] = K1 ^ T_ap(K2    ^ K3    ^ rk[0] ^ CK[1]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___rk_4;
		uint32_t L_31 = V_1;
		uint32_t L_32 = V_2;
		uint32_t L_33 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___rk_4;
		NullCheck(L_34);
		int32_t L_35 = 0;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_37);
		int32_t L_38 = 1;
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint32_t L_40;
		L_40 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_32^(int32_t)L_33))^(int32_t)L_36))^(int32_t)L_39)), NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_31^(int32_t)L_40)));
		// rk[2] = K2 ^ T_ap(K3    ^ rk[0] ^ rk[1] ^ CK[2]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___rk_4;
		uint32_t L_42 = V_2;
		uint32_t L_43 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___rk_4;
		NullCheck(L_44);
		int32_t L_45 = 0;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___rk_4;
		NullCheck(L_47);
		int32_t L_48 = 1;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_50);
		int32_t L_51 = 2;
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		uint32_t L_53;
		L_53 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_43^(int32_t)L_46))^(int32_t)L_49))^(int32_t)L_52)), NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_42^(int32_t)L_53)));
		// rk[3] = K3 ^ T_ap(rk[0] ^ rk[1] ^ rk[2] ^ CK[3]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___rk_4;
		uint32_t L_55 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = __this->___rk_4;
		NullCheck(L_56);
		int32_t L_57 = 0;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = __this->___rk_4;
		NullCheck(L_59);
		int32_t L_60 = 1;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->___rk_4;
		NullCheck(L_62);
		int32_t L_63 = 2;
		uint32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_65);
		int32_t L_66 = 3;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		uint32_t L_68;
		L_68 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_58^(int32_t)L_61))^(int32_t)L_64))^(int32_t)L_67)), NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_55^(int32_t)L_68)));
		// for (int i = 4; i < 32; ++i)
		V_4 = 4;
		goto IL_0137;
	}

IL_00ea:
	{
		// rk[i] = rk[i - 4] ^ T_ap(rk[i - 3] ^ rk[i - 2] ^ rk[i - 1] ^ CK[i]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = __this->___rk_4;
		int32_t L_70 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = __this->___rk_4;
		int32_t L_72 = V_4;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 4));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = __this->___rk_4;
		int32_t L_76 = V_4;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_subtract(L_76, 3));
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->___rk_4;
		int32_t L_80 = V_4;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_subtract(L_80, 2));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = __this->___rk_4;
		int32_t L_84 = V_4;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_subtract(L_84, 1));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		uint32_t L_91;
		L_91 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_78^(int32_t)L_82))^(int32_t)L_86))^(int32_t)L_90)), NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint32_t)((int32_t)((int32_t)L_74^(int32_t)L_91)));
		// for (int i = 4; i < 32; ++i)
		int32_t L_92 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0137:
	{
		// for (int i = 4; i < 32; ++i)
		int32_t L_93 = V_4;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)32))))
		{
			goto IL_00ea;
		}
	}
	{
		return;
	}

IL_013e:
	{
		// rk[31] = K0 ^ T_ap(K1     ^ K2     ^ K3     ^ CK[0]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = __this->___rk_4;
		uint32_t L_95 = V_0;
		uint32_t L_96 = V_1;
		uint32_t L_97 = V_2;
		uint32_t L_98 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_99);
		int32_t L_100 = 0;
		uint32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		uint32_t L_102;
		L_102 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_96^(int32_t)L_97))^(int32_t)L_98))^(int32_t)L_101)), NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint32_t)((int32_t)((int32_t)L_95^(int32_t)L_102)));
		// rk[30] = K1 ^ T_ap(K2     ^ K3     ^ rk[31] ^ CK[1]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = __this->___rk_4;
		uint32_t L_104 = V_1;
		uint32_t L_105 = V_2;
		uint32_t L_106 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = __this->___rk_4;
		NullCheck(L_107);
		int32_t L_108 = ((int32_t)31);
		uint32_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_110);
		int32_t L_111 = 1;
		uint32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		uint32_t L_113;
		L_113 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_105^(int32_t)L_106))^(int32_t)L_109))^(int32_t)L_112)), NULL);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (uint32_t)((int32_t)((int32_t)L_104^(int32_t)L_113)));
		// rk[29] = K2 ^ T_ap(K3     ^ rk[31] ^ rk[30] ^ CK[2]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = __this->___rk_4;
		uint32_t L_115 = V_2;
		uint32_t L_116 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->___rk_4;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)31);
		uint32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = __this->___rk_4;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)30);
		uint32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_123);
		int32_t L_124 = 2;
		uint32_t L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		uint32_t L_126;
		L_126 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_116^(int32_t)L_119))^(int32_t)L_122))^(int32_t)L_125)), NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (uint32_t)((int32_t)((int32_t)L_115^(int32_t)L_126)));
		// rk[28] = K3 ^ T_ap(rk[31] ^ rk[30] ^ rk[29] ^ CK[3]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = __this->___rk_4;
		uint32_t L_128 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = __this->___rk_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)31);
		uint32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->___rk_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		uint32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = __this->___rk_4;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)29);
		uint32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		NullCheck(L_138);
		int32_t L_139 = 3;
		uint32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		uint32_t L_141;
		L_141 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_131^(int32_t)L_134))^(int32_t)L_137))^(int32_t)L_140)), NULL);
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (uint32_t)((int32_t)((int32_t)L_128^(int32_t)L_141)));
		// for (int i = 27; i >= 0; --i)
		V_5 = ((int32_t)27);
		goto IL_023c;
	}

IL_01ec:
	{
		// rk[i] = rk[i + 4] ^ T_ap(rk[i + 3] ^ rk[i + 2] ^ rk[i + 1] ^ CK[31 - i]);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_142 = __this->___rk_4;
		int32_t L_143 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = __this->___rk_4;
		int32_t L_145 = V_5;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(L_145, 4));
		uint32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = __this->___rk_4;
		int32_t L_149 = V_5;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, 3));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = __this->___rk_4;
		int32_t L_153 = V_5;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(L_153, 2));
		uint32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_156 = __this->___rk_4;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		uint32_t L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_subtract(((int32_t)31), L_161));
		uint32_t L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		uint32_t L_164;
		L_164 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_151^(int32_t)L_155))^(int32_t)L_159))^(int32_t)L_163)), NULL);
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(L_143), (uint32_t)((int32_t)((int32_t)L_147^(int32_t)L_164)));
		// for (int i = 27; i >= 0; --i)
		int32_t L_165 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_165, 1));
	}

IL_023c:
	{
		// for (int i = 27; i >= 0; --i)
		int32_t L_166 = V_5;
		if ((((int32_t)L_166) >= ((int32_t)0)))
		{
			goto IL_01ec;
		}
	}
	{
		// }
		return;
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::L(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_mBDBC3D6621C33DE0C06DC7629F3160D0B9559A12 (uint32_t ___0_B, const RuntimeMethod* method) 
{
	{
		// return B ^ Integers.RotateLeft(B, 2) ^ Integers.RotateLeft(B, 10) ^ Integers.RotateLeft(B, 18) ^ Integers.RotateLeft(B, 24);
		uint32_t L_0 = ___0_B;
		uint32_t L_1 = ___0_B;
		uint32_t L_2;
		L_2 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_1, 2, NULL);
		uint32_t L_3 = ___0_B;
		uint32_t L_4;
		L_4 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_3, ((int32_t)10), NULL);
		uint32_t L_5 = ___0_B;
		uint32_t L_6;
		L_6 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_5, ((int32_t)18), NULL);
		uint32_t L_7 = ___0_B;
		uint32_t L_8;
		L_8 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_7, ((int32_t)24), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4))^(int32_t)L_6))^(int32_t)L_8));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::T(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425 (uint32_t ___0_Z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return L(tau(Z));
		uint32_t L_0 = ___0_Z;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835(L_0, NULL);
		uint32_t L_2;
		L_2 = SM4Engine_L_mBDBC3D6621C33DE0C06DC7629F3160D0B9559A12(L_1, NULL);
		return L_2;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// KeyParameter keyParameter = parameters as KeyParameter;
		RuntimeObject* L_0 = ___1_parameters;
		V_0 = ((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var));
		// if (null == keyParameter)
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_1 = V_0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// throw new ArgumentException("invalid parameter passed to SM4 init - " + BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.GetTypeName(parameters), "parameters");
		RuntimeObject* L_2 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE08318E20C8ACEB5B4568444350437DE7261C37)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55_RuntimeMethod_var)));
	}

IL_0025:
	{
		// byte[] key = keyParameter.GetKey();
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_6, NULL);
		V_1 = L_7;
		// if (key.Length != 16)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0043;
		}
	}
	{
		// throw new ArgumentException("SM4 requires a 128 bit key", "parameters");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19B0BF1A5CB94084D5D4B38EEC683FDF8DB6FDC3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55_RuntimeMethod_var)));
	}

IL_0043:
	{
		// if (null == rk)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___rk_4;
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		// rk = new uint[32];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___rk_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rk_4), (void*)L_11);
	}

IL_0058:
	{
		// ExpandKey(forEncryption, key);
		bool L_12 = ___0_forEncryption;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		SM4Engine_ExpandKey_m51540329CD2335767F3FF512449781761956CDD3(__this, L_12, L_13, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SM4Engine_get_AlgorithmName_mDECD162566C5062C641D51B498DCA0BACDAF461F (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD542E0A3C9F6F5F927608EB8D67601FB1F06C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SM4"; }
		return _stringLiteral0ACD542E0A3C9F6F5F927608EB8D67601FB1F06C;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SM4Engine_get_IsPartialBlockOkay_m08A8D749D873E25DA3B9EE5E9C95FF61455251B1 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SM4Engine_GetBlockSize_mA9EAD88E79912E80E11EBB8A6842B36D24544F01 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		// return BlockSize;
		return ((int32_t)16);
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SM4Engine_ProcessBlock_mA0EEA5203EA853DAD5942145977C45A31AC9B384 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (null == rk)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___rk_4;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("SM4 not initialised");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EEC7A46AB1FF146779BA52B5BCAF9EE5C677E31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM4Engine_ProcessBlock_mA0EEA5203EA853DAD5942145977C45A31AC9B384_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Check.DataLength(input, inOff, BlockSize, "input buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		// Check.OutputLength(output, outOff, BlockSize, "output buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		// uint X0 = Pack.BE_To_UInt32(input, inOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_6, L_7, NULL);
		V_0 = L_8;
		// uint X1 = Pack.BE_To_UInt32(input, inOff + 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		V_1 = L_11;
		// uint X2 = Pack.BE_To_UInt32(input, inOff + 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		uint32_t L_14;
		L_14 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		V_2 = L_14;
		// uint X3 = Pack.BE_To_UInt32(input, inOff + 12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = ___1_inOff;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)12))), NULL);
		V_3 = L_17;
		// for (int i = 0; i < 32; i += 4)
		V_4 = 0;
		goto IL_00c4;
	}

IL_005c:
	{
		// X0 ^= T(X1 ^ X2 ^ X3 ^ rk[i    ]);  // F0
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_1;
		uint32_t L_20 = V_2;
		uint32_t L_21 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___rk_4;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		uint32_t L_26;
		L_26 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_19^(int32_t)L_20))^(int32_t)L_21))^(int32_t)L_25)), NULL);
		V_0 = ((int32_t)((int32_t)L_18^(int32_t)L_26));
		// X1 ^= T(X2 ^ X3 ^ X0 ^ rk[i + 1]);  // F1
		uint32_t L_27 = V_1;
		uint32_t L_28 = V_2;
		uint32_t L_29 = V_3;
		uint32_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___rk_4;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint32_t L_35;
		L_35 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_28^(int32_t)L_29))^(int32_t)L_30))^(int32_t)L_34)), NULL);
		V_1 = ((int32_t)((int32_t)L_27^(int32_t)L_35));
		// X2 ^= T(X3 ^ X0 ^ X1 ^ rk[i + 2]);  // F2
		uint32_t L_36 = V_2;
		uint32_t L_37 = V_3;
		uint32_t L_38 = V_0;
		uint32_t L_39 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___rk_4;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		uint32_t L_44;
		L_44 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_37^(int32_t)L_38))^(int32_t)L_39))^(int32_t)L_43)), NULL);
		V_2 = ((int32_t)((int32_t)L_36^(int32_t)L_44));
		// X3 ^= T(X0 ^ X1 ^ X2 ^ rk[i + 3]);  // F3
		uint32_t L_45 = V_3;
		uint32_t L_46 = V_0;
		uint32_t L_47 = V_1;
		uint32_t L_48 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = __this->___rk_4;
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		uint32_t L_53;
		L_53 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_46^(int32_t)L_47))^(int32_t)L_48))^(int32_t)L_52)), NULL);
		V_3 = ((int32_t)((int32_t)L_45^(int32_t)L_53));
		// for (int i = 0; i < 32; i += 4)
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, 4));
	}

IL_00c4:
	{
		// for (int i = 0; i < 32; i += 4)
		int32_t L_55 = V_4;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)32))))
		{
			goto IL_005c;
		}
	}
	{
		// Pack.UInt32_To_BE(X3, output, outOff);
		uint32_t L_56 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_output;
		int32_t L_58 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_56, L_57, L_58, NULL);
		// Pack.UInt32_To_BE(X2, output, outOff + 4);
		uint32_t L_59 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___2_output;
		int32_t L_61 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_59, L_60, ((int32_t)il2cpp_codegen_add(L_61, 4)), NULL);
		// Pack.UInt32_To_BE(X1, output, outOff + 8);
		uint32_t L_62 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___2_output;
		int32_t L_64 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_62, L_63, ((int32_t)il2cpp_codegen_add(L_64, 8)), NULL);
		// Pack.UInt32_To_BE(X0, output, outOff + 12);
		uint32_t L_65 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_output;
		int32_t L_67 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_65, L_66, ((int32_t)il2cpp_codegen_add(L_67, ((int32_t)12))), NULL);
		// return BlockSize;
		return ((int32_t)16);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_Reset_mC5A8275F2D72E3D78D58E92210B67FDFEED83EA0 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine__ctor_mFD69B3CC331AD41F93A9BB1C0D8639037E9B1C72 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.SM4Engine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine__cctor_mB70BC3777BE46885BF3C6372231945316D6D9029 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____1674D0631A2E37B60EC748BC3899FEE1550C108AF30B85CE96A70C5CA4682D03_24_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____874805F2B76BD7887959F02FE0B2A8C07C1E1D41F41AAD4D2AA1D0AB21A1780F_147_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____A589B8F1C215FA773BA2724EB825E8B2D1792FB955349574454E18C63537F2A6_183_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] Sbox =
		// {
		//     0xd6, 0x90, 0xe9, 0xfe, 0xcc, 0xe1, 0x3d, 0xb7, 0x16, 0xb6, 0x14, 0xc2, 0x28, 0xfb, 0x2c, 0x05,
		//     0x2b, 0x67, 0x9a, 0x76, 0x2a, 0xbe, 0x04, 0xc3, 0xaa, 0x44, 0x13, 0x26, 0x49, 0x86, 0x06, 0x99,
		//     0x9c, 0x42, 0x50, 0xf4, 0x91, 0xef, 0x98, 0x7a, 0x33, 0x54, 0x0b, 0x43, 0xed, 0xcf, 0xac, 0x62,
		//     0xe4, 0xb3, 0x1c, 0xa9, 0xc9, 0x08, 0xe8, 0x95, 0x80, 0xdf, 0x94, 0xfa, 0x75, 0x8f, 0x3f, 0xa6,
		//     0x47, 0x07, 0xa7, 0xfc, 0xf3, 0x73, 0x17, 0xba, 0x83, 0x59, 0x3c, 0x19, 0xe6, 0x85, 0x4f, 0xa8,
		//     0x68, 0x6b, 0x81, 0xb2, 0x71, 0x64, 0xda, 0x8b, 0xf8, 0xeb, 0x0f, 0x4b, 0x70, 0x56, 0x9d, 0x35,
		//     0x1e, 0x24, 0x0e, 0x5e, 0x63, 0x58, 0xd1, 0xa2, 0x25, 0x22, 0x7c, 0x3b, 0x01, 0x21, 0x78, 0x87,
		//     0xd4, 0x00, 0x46, 0x57, 0x9f, 0xd3, 0x27, 0x52, 0x4c, 0x36, 0x02, 0xe7, 0xa0, 0xc4, 0xc8, 0x9e,
		//     0xea, 0xbf, 0x8a, 0xd2, 0x40, 0xc7, 0x38, 0xb5, 0xa3, 0xf7, 0xf2, 0xce, 0xf9, 0x61, 0x15, 0xa1,
		//     0xe0, 0xae, 0x5d, 0xa4, 0x9b, 0x34, 0x1a, 0x55, 0xad, 0x93, 0x32, 0x30, 0xf5, 0x8c, 0xb1, 0xe3,
		//     0x1d, 0xf6, 0xe2, 0x2e, 0x82, 0x66, 0xca, 0x60, 0xc0, 0x29, 0x23, 0xab, 0x0d, 0x53, 0x4e, 0x6f,
		//     0xd5, 0xdb, 0x37, 0x45, 0xde, 0xfd, 0x8e, 0x2f, 0x03, 0xff, 0x6a, 0x72, 0x6d, 0x6c, 0x5b, 0x51,
		//     0x8d, 0x1b, 0xaf, 0x92, 0xbb, 0xdd, 0xbc, 0x7f, 0x11, 0xd9, 0x5c, 0x41, 0x1f, 0x10, 0x5a, 0xd8,
		//     0x0a, 0xc1, 0x31, 0x88, 0xa5, 0xcd, 0x7b, 0xbd, 0x2d, 0x74, 0xd0, 0x12, 0xb8, 0xe5, 0xb4, 0xb0,
		//     0x89, 0x69, 0x97, 0x4a, 0x0c, 0x96, 0x77, 0x7e, 0x65, 0xb9, 0xf1, 0x09, 0xc5, 0x6e, 0xc6, 0x84,
		//     0x18, 0xf0, 0x7d, 0xec, 0x3a, 0xdc, 0x4d, 0x20, 0x79, 0xee, 0x5f, 0x3e, 0xd7, 0xcb, 0x39, 0x48
		// };
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____1674D0631A2E37B60EC748BC3899FEE1550C108AF30B85CE96A70C5CA4682D03_24_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox_1), (void*)L_1);
		// private static readonly uint[] CK =
		// {
		//     0x00070e15, 0x1c232a31, 0x383f464d, 0x545b6269,
		//     0x70777e85, 0x8c939aa1, 0xa8afb6bd, 0xc4cbd2d9,
		//     0xe0e7eef5, 0xfc030a11, 0x181f262d, 0x343b4249,
		//     0x50575e65, 0x6c737a81, 0x888f969d, 0xa4abb2b9,
		//     0xc0c7ced5, 0xdce3eaf1, 0xf8ff060d, 0x141b2229,
		//     0x30373e45, 0x4c535a61, 0x686f767d, 0x848b9299,
		//     0xa0a7aeb5, 0xbcc3cad1, 0xd8dfe6ed, 0xf4fb0209,
		//     0x10171e25, 0x2c333a41, 0x484f565d, 0x646b7279
		// };
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____A589B8F1C215FA773BA2724EB825E8B2D1792FB955349574454E18C63537F2A6_183_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK_2), (void*)L_4);
		// private static readonly uint[] FK =
		// {
		//     0xa3b1bac6, 0x56aa3350, 0x677d9197, 0xb27022dc
		// };
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____874805F2B76BD7887959F02FE0B2A8C07C1E1D41F41AAD4D2AA1D0AB21A1780F_147_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK_3), (void*)L_7);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine__ctor_m0BABD07A0A06EE39927C2764B253EAF5261D0677 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		// public TeaEngine()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _initialised = false;
		__this->____initialised_8 = (bool)0;
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TeaEngine_get_AlgorithmName_m986A3940A5AED7FB504406B96C397E53A2B69A5F (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "TEA"; }
		return _stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TeaEngine_get_IsPartialBlockOkay_mD37EB4F1A6683AD069B25B20CAA23D8DEBFAC6B3 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_GetBlockSize_mFCC3D4F91BD844138FD81810C5BF993E1CF013BD (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		// return block_size;
		return 8;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_Init_m4869AF2806F31B9ED0A0CF6B78D1D7ACE569A2B1 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* V_0 = NULL;
	{
		// if (!(parameters is KeyParameter))
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException("invalid parameter passed to TEA init - "
		//     + BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.GetTypeName(parameters));
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TeaEngine_Init_m4869AF2806F31B9ED0A0CF6B78D1D7ACE569A2B1_RuntimeMethod_var)));
	}

IL_001e:
	{
		// _forEncryption = forEncryption;
		bool L_5 = ___0_forEncryption;
		__this->____forEncryption_9 = L_5;
		// _initialised = true;
		__this->____initialised_8 = (bool)1;
		// KeyParameter p = (KeyParameter) parameters;
		RuntimeObject* L_6 = ___1_parameters;
		V_0 = ((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var));
		// setKey(p.GetKey());
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_7, NULL);
		TeaEngine_setKey_m7E612BEEAFCFC5F18FDFBAABAC8F1E3A81834D67(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_ProcessBlock_m48DA047CE522F2D72642708600393998381E9E94 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initialised)
		bool L_0 = __this->____initialised_8;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// throw new InvalidOperationException(AlgorithmName + " not initialised");
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TeaEngine_ProcessBlock_m48DA047CE522F2D72642708600393998381E9E94_RuntimeMethod_var)));
	}

IL_001e:
	{
		// Check.DataLength(inBytes, inOff, block_size, "input buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_inBytes;
		int32_t L_5 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_4, L_5, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		// Check.OutputLength(outBytes, outOff, block_size, "output buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_outBytes;
		int32_t L_7 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_6, L_7, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		// return _forEncryption
		//     ?    encryptBlock(inBytes, inOff, outBytes, outOff)
		//     :    decryptBlock(inBytes, inOff, outBytes, outOff);
		bool L_8 = __this->____forEncryption_9;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_inBytes;
		int32_t L_10 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_outBytes;
		int32_t L_12 = ___3_outOff;
		int32_t L_13;
		L_13 = TeaEngine_decryptBlock_m014D246CBA7E26B4C39167A999CC8AAB30F55E82(__this, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_inBytes;
		int32_t L_15 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_outBytes;
		int32_t L_17 = ___3_outOff;
		int32_t L_18;
		L_18 = TeaEngine_encryptBlock_mBD3FEF30F2DA99C6832321A4D7162D81B871C482(__this, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_Reset_m0832D047B410C7CDCD212614ACFDB8B053F647CB (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::setKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_setKey_m7E612BEEAFCFC5F18FDFBAABAC8F1E3A81834D67 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	{
		// _a = Pack.BE_To_UInt32(key, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_key;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, 0, NULL);
		__this->____a_4 = L_1;
		// _b = Pack.BE_To_UInt32(key, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_key;
		uint32_t L_3;
		L_3 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_2, 4, NULL);
		__this->____b_5 = L_3;
		// _c = Pack.BE_To_UInt32(key, 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_key;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_4, 8, NULL);
		__this->____c_6 = L_5;
		// _d = Pack.BE_To_UInt32(key, 12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_key;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_6, ((int32_t)12), NULL);
		__this->____d_7 = L_7;
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_encryptBlock_mBD3FEF30F2DA99C6832321A4D7162D81B871C482 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// uint v0 = Pack.BE_To_UInt32(inBytes, inOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		V_0 = L_2;
		// uint v1 = Pack.BE_To_UInt32(inBytes, inOff + 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inBytes;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		// uint sum = 0;
		V_2 = 0;
		// for (int i = 0; i != rounds; i++)
		V_3 = 0;
		goto IL_005c;
	}

IL_0018:
	{
		// sum += delta;
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)-1640531527)));
		// v0  += ((v1 << 4) + _a) ^ (v1 + sum) ^ ((v1 >> 5) + _b);
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = __this->____a_4;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		uint32_t L_12 = V_1;
		uint32_t L_13 = __this->____b_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<4)), (int32_t)L_9))^((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_12>>5)), (int32_t)L_13))))));
		// v1  += ((v0 << 4) + _c) ^ (v0 + sum) ^ ((v0 >> 5) + _d);
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_0;
		uint32_t L_16 = __this->____c_6;
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_2;
		uint32_t L_19 = V_0;
		uint32_t L_20 = __this->____d_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_15<<4)), (int32_t)L_16))^((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_19>>5)), (int32_t)L_20))))));
		// for (int i = 0; i != rounds; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005c:
	{
		// for (int i = 0; i != rounds; i++)
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0018;
		}
	}
	{
		// Pack.UInt32_To_BE(v0, outBytes, outOff);
		uint32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_23, L_24, L_25, NULL);
		// Pack.UInt32_To_BE(v1, outBytes, outOff + 4);
		uint32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___2_outBytes;
		int32_t L_28 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_26, L_27, ((int32_t)il2cpp_codegen_add(L_28, 4)), NULL);
		// return block_size;
		return 8;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TeaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_decryptBlock_m014D246CBA7E26B4C39167A999CC8AAB30F55E82 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// uint v0 = Pack.BE_To_UInt32(inBytes, inOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		V_0 = L_2;
		// uint v1 = Pack.BE_To_UInt32(inBytes, inOff + 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inBytes;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		// uint sum = d_sum;
		V_2 = ((int32_t)-957401312);
		// for (int i = 0; i != rounds; i++)
		V_3 = 0;
		goto IL_0060;
	}

IL_001c:
	{
		// v1  -= ((v0 << 4) + _c) ^ (v0 + sum) ^ ((v0 >> 5) + _d);
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		uint32_t L_8 = __this->____c_6;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_0;
		uint32_t L_12 = __this->____d_7;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_7<<4)), (int32_t)L_8))^((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_11>>5)), (int32_t)L_12))))));
		// v0  -= ((v1 << 4) + _a) ^ (v1 + sum) ^ ((v1 >> 5) + _b);
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_1;
		uint32_t L_15 = __this->____a_4;
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_2;
		uint32_t L_18 = V_1;
		uint32_t L_19 = __this->____b_5;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_14<<4)), (int32_t)L_15))^((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_18>>5)), (int32_t)L_19))))));
		// sum -= delta;
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, ((int32_t)-1640531527)));
		// for (int i = 0; i != rounds; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0060:
	{
		// for (int i = 0; i != rounds; i++)
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001c;
		}
	}
	{
		// Pack.UInt32_To_BE(v0, outBytes, outOff);
		uint32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_23, L_24, L_25, NULL);
		// Pack.UInt32_To_BE(v1, outBytes, outOff + 4);
		uint32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___2_outBytes;
		int32_t L_28 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_26, L_27, ((int32_t)il2cpp_codegen_add(L_28, 4)), NULL);
		// return block_size;
		return 8;
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__cctor_m92B9913DC3525B4698E7DED5564EDB9F7647245D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// private static readonly int[] MOD9 = new int[MAX_ROUNDS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10), (void*)L_0);
		// private static readonly int[] MOD17 = new int[MOD9.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17_11), (void*)L_2);
		// private static readonly int[] MOD5 = new int[MOD9.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5_12), (void*)L_4);
		// private static readonly int[] MOD3 = new int[MOD9.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13), (void*)L_6);
		// for (int i = 0; i < MOD9.Length; i++)
		V_0 = 0;
		goto IL_0071;
	}

IL_0043:
	{
		// MOD17[i] = i % 17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17_11;
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)((int32_t)(L_9%((int32_t)17))));
		// MOD9[i] = i % 9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)((int32_t)(L_12%((int32_t)9))));
		// MOD5[i] = i % 5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5_12;
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)((int32_t)(L_15%5)));
		// MOD3[i] = i % 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		int32_t L_17 = V_0;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)((int32_t)(L_18%3)));
		// for (int i = 0; i < MOD9.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0071:
	{
		// for (int i = 0; i < MOD9.Length; i++)
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, int32_t ___0_blocksizeBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ulong[] t = new ulong[5];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___t_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_17), (void*)L_0);
		// public ThreefishEngine(int blocksizeBits)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.blocksizeBytes = (blocksizeBits / 8);
		int32_t L_1 = ___0_blocksizeBits;
		__this->___blocksizeBytes_14 = ((int32_t)(L_1/8));
		// this.blocksizeWords = (this.blocksizeBytes / 8);
		int32_t L_2 = __this->___blocksizeBytes_14;
		__this->___blocksizeWords_15 = ((int32_t)(L_2/8));
		// this.currentBlock = new ulong[blocksizeWords];
		int32_t L_3 = __this->___blocksizeWords_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___currentBlock_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock_16), (void*)L_4);
		// this.kw = new ulong[2 * blocksizeWords + 1];
		int32_t L_5 = __this->___blocksizeWords_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_5)), 1)));
		__this->___kw_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw_18), (void*)L_6);
		int32_t L_7 = ___0_blocksizeBits;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)256))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = ___0_blocksizeBits;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)512))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = ___0_blocksizeBits;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_00b1;
	}

IL_0069:
	{
		// cipher = new Threefish256Cipher(kw, t);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___t_17;
		Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* L_12 = (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27*)il2cpp_codegen_object_new(Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Threefish256Cipher__ctor_mFAC4FD5F04BC1BF3E51B29BB4615C8DDDFD93EC0(L_12, L_10, L_11, NULL);
		__this->___cipher_19 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_19), (void*)L_12);
		// break;
		return;
	}

IL_0081:
	{
		// cipher = new Threefish512Cipher(kw, t);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = __this->___t_17;
		Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* L_15 = (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849*)il2cpp_codegen_object_new(Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Threefish512Cipher__ctor_m7FD107C58329018301B495FBE359BA679DD0A451(L_15, L_13, L_14, NULL);
		__this->___cipher_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_19), (void*)L_15);
		// break;
		return;
	}

IL_0099:
	{
		// cipher = new Threefish1024Cipher(kw, t);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->___t_17;
		Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* L_18 = (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506*)il2cpp_codegen_object_new(Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Threefish1024Cipher__ctor_m937D03ED4ADD92C0FFFAA69B1C932075428F4B50(L_18, L_16, L_17, NULL);
		__this->___cipher_19 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_19), (void*)L_18);
		// break;
		return;
	}

IL_00b1:
	{
		// throw new ArgumentException(
		//     "Invalid blocksize - Threefish is defined with block size of 256, 512, or 1024 bits");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE004A5E158484C188AA92B5BB521E3CD282D19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91_RuntimeMethod_var)));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (parameters is TweakableBlockCipherParameters)
		RuntimeObject* L_0 = ___1_parameters;
		if (!((TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE*)IsInstClass((RuntimeObject*)L_0, TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		// TweakableBlockCipherParameters tParams = (TweakableBlockCipherParameters)parameters;
		RuntimeObject* L_1 = ___1_parameters;
		// keyBytes = tParams.Key.GetKey();
		TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* L_2 = ((TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE*)CastclassClass((RuntimeObject*)L_1, TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_3;
		L_3 = TweakableBlockCipherParameters_get_Key_m9532CACCD9CFE5FBA4EC3613A960C9EEDB7F0626_inline(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_3, NULL);
		V_0 = L_4;
		// tweakBytes = tParams.Tweak;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TweakableBlockCipherParameters_get_Tweak_m76D8F6B45EBE3419E4831A7E6E0A50898BB9BEC3_inline(L_2, NULL);
		V_1 = L_5;
		goto IL_0050;
	}

IL_0022:
	{
		// else if (parameters is KeyParameter)
		RuntimeObject* L_6 = ___1_parameters;
		if (!((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		// keyBytes = ((KeyParameter)parameters).GetKey();
		RuntimeObject* L_7 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_8;
		// tweakBytes = null;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0050;
	}

IL_003a:
	{
		// throw new ArgumentException("Invalid parameter passed to Threefish init - "
		//     + BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.GetTypeName(parameters));
		RuntimeObject* L_9 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_10;
		L_10 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25170142FB4F3488DD4A97779A090DDE52AC8358)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var)));
	}

IL_0050:
	{
		// ulong[] keyWords = null;
		V_2 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		// ulong[] tweakWords = null;
		V_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		// if (keyBytes != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		if (!L_13)
		{
			goto IL_00b2;
		}
	}
	{
		// if (keyBytes.Length != this.blocksizeBytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = __this->___blocksizeBytes_14;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) == ((int32_t)L_15)))
		{
			goto IL_0086;
		}
	}
	{
		// throw new ArgumentException("Threefish key must be same size as block (" + blocksizeBytes
		//                             + " bytes)");
		int32_t L_16 = __this->___blocksizeBytes_14;
		V_4 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32)), L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14230403A1CFC5A19F854BBF8DBA3B9A2CF7E7AF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var)));
	}

IL_0086:
	{
		// keyWords = new ulong[blocksizeWords];
		int32_t L_20 = __this->___blocksizeWords_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_2 = L_21;
		// for (int i = 0; i < keyWords.Length; i++)
		V_5 = 0;
		goto IL_00ab;
	}

IL_0097:
	{
		// keyWords[i] = BytesToWord(keyBytes, i * 8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = V_2;
		int32_t L_23 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		int32_t L_25 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_26;
		L_26 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 8)), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint64_t)L_26);
		// for (int i = 0; i < keyWords.Length; i++)
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00ab:
	{
		// for (int i = 0; i < keyWords.Length; i++)
		int32_t L_28 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0097;
		}
	}

IL_00b2:
	{
		// if (tweakBytes != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		if (!L_30)
		{
			goto IL_00f7;
		}
	}
	{
		// if (tweakBytes.Length != TWEAK_SIZE_BYTES)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_00dc;
		}
	}
	{
		// throw new ArgumentException("Threefish tweak must be " + TWEAK_SIZE_BYTES + " bytes");
		V_4 = ((int32_t)16);
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_33;
		L_33 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA00666B082ECFBED37CF7EF580BCCF7C15F6A8FE)), L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F954BE9FD9E999DA1677DADC6D2CAB27412A282)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var)));
	}

IL_00dc:
	{
		// tweakWords = new ulong[]{BytesToWord(tweakBytes, 0), BytesToWord(tweakBytes, 8)};
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_38;
		L_38 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_37, 0, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = L_36;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_1;
		uint64_t L_41;
		L_41 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_40, 8, NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_41);
		V_3 = L_39;
	}

IL_00f7:
	{
		// Init(forEncryption, keyWords, tweakWords);
		bool L_42 = ___0_forEncryption;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = V_3;
		ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA(__this, L_42, L_43, L_44, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___0_forEncryption, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_key, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_tweak, const RuntimeMethod* method) 
{
	{
		// this.forEncryption = forEncryption;
		bool L_0 = ___0_forEncryption;
		__this->___forEncryption_20 = L_0;
		// if (key != null)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_key;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// SetKey(key);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___1_key;
		ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32(__this, L_2, NULL);
	}

IL_0011:
	{
		// if (tweak != null)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___2_tweak;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// SetTweak(tweak);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___2_tweak;
		ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9(__this, L_4, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetKey(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_key, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (key.Length != this.blocksizeWords)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_key;
		NullCheck(L_0);
		int32_t L_1 = __this->___blocksizeWords_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		// throw new ArgumentException("Threefish key must be same size as block (" + blocksizeWords
		//                             + " words)");
		int32_t L_2 = __this->___blocksizeWords_15;
		V_1 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0CECB4252188823B622C9B595E368C07831C1FA9)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32_RuntimeMethod_var)));
	}

IL_002e:
	{
		// ulong knw = C_240;
		V_0 = ((int64_t)2004413935125273122LL);
		// for (int i = 0; i < blocksizeWords; i++)
		V_2 = 0;
		goto IL_0056;
	}

IL_003c:
	{
		// kw[i] = key[i];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___kw_18;
		int32_t L_7 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_key;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_11);
		// knw = knw ^ kw[i];
		uint64_t L_12 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___kw_18;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int64_t L_16 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)((int64_t)L_12^L_16));
		// for (int i = 0; i < blocksizeWords; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		// for (int i = 0; i < blocksizeWords; i++)
		int32_t L_18 = V_2;
		int32_t L_19 = __this->___blocksizeWords_15;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_003c;
		}
	}
	{
		// kw[blocksizeWords] = knw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___kw_18;
		int32_t L_21 = __this->___blocksizeWords_15;
		uint64_t L_22 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint64_t)L_22);
		// Array.Copy(kw, 0, kw, blocksizeWords + 1, blocksizeWords);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___kw_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = __this->___kw_18;
		int32_t L_25 = __this->___blocksizeWords_15;
		int32_t L_26 = __this->___blocksizeWords_15;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_23, 0, (RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), L_26, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::SetTweak(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_tweak, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (tweak.Length != TWEAK_SIZE_WORDS)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_tweak;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Tweak must be " + TWEAK_SIZE_WORDS + " words.");
		V_0 = 2;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC2A08F30023C6460F14108C58D275A5F58ED73)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A7034042434538838BF70971EC853B1C495314)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9_RuntimeMethod_var)));
	}

IL_0024:
	{
		// t[0] = tweak[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_tweak;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_7);
		// t[1] = tweak[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_tweak;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_11);
		// t[2] = t[0] ^ t[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___t_17;
		NullCheck(L_13);
		int32_t L_14 = 0;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___t_17;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int64_t L_18 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)((int64_t)(L_15^L_18)));
		// t[3] = t[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___t_17;
		NullCheck(L_20);
		int32_t L_21 = 0;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_22);
		// t[4] = t[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___t_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = __this->___t_17;
		NullCheck(L_24);
		int32_t L_25 = 1;
		int64_t L_26 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_26);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreefishEngine_get_AlgorithmName_mB090109E4A1736FE74721F6FDD475307EDC6DA67 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return "Threefish-" + (blocksizeBytes * 8); }
		int32_t L_0 = __this->___blocksizeBytes_14;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C, L_1, NULL);
		return L_2;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreefishEngine_get_IsPartialBlockOkay_m2E31D672DDBA10E06C7B95320CA2EA3E578EA3BE (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_GetBlockSize_m505640F42EBEE27DF7E76B5C5711275D178F9D88 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	{
		// return blocksizeBytes;
		int32_t L_0 = __this->___blocksizeBytes_14;
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Reset_m07DA13B419D00A6A44155F65303AB6A25EDDDF8F (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if ((outOff + blocksizeBytes) > outBytes.Length)
		int32_t L_0 = ___3_outOff;
		int32_t L_1 = __this->___blocksizeBytes_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_outBytes;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// throw new DataLengthException("Output buffer too short");
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_3 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if ((inOff + blocksizeBytes) > inBytes.Length)
		int32_t L_4 = ___1_inOff;
		int32_t L_5 = __this->___blocksizeBytes_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_inBytes;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		// throw new DataLengthException("Input buffer too short");
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_7 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD_RuntimeMethod_var)));
	}

IL_0031:
	{
		// for (int i = 0; i < blocksizeBytes; i += 8)
		V_0 = 0;
		goto IL_004c;
	}

IL_0035:
	{
		// currentBlock[i >> 3] = BytesToWord(inBytes, inOff + i);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___currentBlock_16;
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_inBytes;
		int32_t L_11 = ___1_inOff;
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_13;
		L_13 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_10, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_9>>3))), (uint64_t)L_13);
		// for (int i = 0; i < blocksizeBytes; i += 8)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 8));
	}

IL_004c:
	{
		// for (int i = 0; i < blocksizeBytes; i += 8)
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___blocksizeBytes_14;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0035;
		}
	}
	{
		// ProcessBlock(this.currentBlock, this.currentBlock);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->___currentBlock_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = __this->___currentBlock_16;
		int32_t L_19;
		L_19 = ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961(__this, L_17, L_18, NULL);
		// for (int i = 0; i < blocksizeBytes; i += 8)
		V_1 = 0;
		goto IL_0084;
	}

IL_006c:
	{
		// WordToBytes(this.currentBlock[i >> 3], outBytes, outOff + i);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___currentBlock_16;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(L_21>>3));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		int32_t L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3(L_23, L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), NULL);
		// for (int i = 0; i < blocksizeBytes; i += 8)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 8));
	}

IL_0084:
	{
		// for (int i = 0; i < blocksizeBytes; i += 8)
		int32_t L_28 = V_1;
		int32_t L_29 = __this->___blocksizeBytes_14;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_006c;
		}
	}
	{
		// return blocksizeBytes;
		int32_t L_30 = __this->___blocksizeBytes_14;
		return L_30;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_inWords, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	{
		// if (kw[blocksizeWords] == 0)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___kw_18;
		int32_t L_1 = __this->___blocksizeWords_15;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// throw new InvalidOperationException("Threefish engine not initialised");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC894542CC15E7FDD0B254592D14D3E16EB7762B6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (inWords.Length != blocksizeWords)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_inWords;
		NullCheck(L_5);
		int32_t L_6 = __this->___blocksizeWords_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		// throw new DataLengthException("Input buffer too short");
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_7 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var)));
	}

IL_0030:
	{
		// if (outWords.Length != blocksizeWords)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_outWords;
		NullCheck(L_8);
		int32_t L_9 = __this->___blocksizeWords_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		// throw new DataLengthException("Output buffer too short");
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_10 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var)));
	}

IL_0046:
	{
		// if (forEncryption)
		bool L_11 = __this->___forEncryption_20;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		// cipher.EncryptBlock(inWords, outWords);
		ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* L_12 = __this->___cipher_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_inWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___1_outWords;
		NullCheck(L_12);
		VirtualActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(4 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::EncryptBlock(System.UInt64[],System.UInt64[]) */, L_12, L_13, L_14);
		goto IL_006a;
	}

IL_005d:
	{
		// cipher.DecryptBlock(inWords, outWords);
		ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* L_15 = __this->___cipher_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___0_inWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___1_outWords;
		NullCheck(L_15);
		VirtualActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(5 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::DecryptBlock(System.UInt64[],System.UInt64[]) */, L_15, L_16, L_17);
	}

IL_006a:
	{
		// return blocksizeWords;
		int32_t L_18 = __this->___blocksizeWords_15;
		return L_18;
	}
}
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_off, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if ((off + 8) > bytes.Length)
		int32_t L_0 = ___1_off;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 8))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// int index = off;
		int32_t L_3 = ___1_off;
		V_0 = L_3;
		// word = (bytes[index++] & 0xffUL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bytes;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// word |= (bytes[index++] & 0xffUL) << 8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bytes;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// word |= (bytes[index++] & 0xffUL) << 16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bytes;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		// word |= (bytes[index++] & 0xffUL) << 24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_bytes;
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		// word |= (bytes[index++] & 0xffUL) << 32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_bytes;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		// word |= (bytes[index++] & 0xffUL) << 40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_bytes;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		// word |= (bytes[index++] & 0xffUL) << 48;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_bytes;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// word |= (bytes[index++] & 0xffUL) << 56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___0_bytes;
		int32_t L_40 = V_0;
		int32_t L_41 = L_40;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		NullCheck(L_39);
		int32_t L_42 = L_41;
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		// return word;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_8)&((int64_t)((int32_t)255))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_13)&((int64_t)((int32_t)255))))<<8))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_18)&((int64_t)((int32_t)255))))<<((int32_t)16)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_23)&((int64_t)((int32_t)255))))<<((int32_t)24)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_28)&((int64_t)((int32_t)255))))<<((int32_t)32)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_33)&((int64_t)((int32_t)255))))<<((int32_t)40)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_38)&((int64_t)((int32_t)255))))<<((int32_t)48)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_43)&((int64_t)((int32_t)255))))<<((int32_t)56)))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::WordToBytes(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3 (uint64_t ___0_word, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_off, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if ((off + 8) > bytes.Length)
		int32_t L_0 = ___2_off;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_bytes;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 8))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3_RuntimeMethod_var)));
	}

IL_000e:
	{
		// int index = off;
		int32_t L_3 = ___2_off;
		V_0 = L_3;
		// bytes[index++] = (byte)word;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_bytes;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint64_t L_7 = ___0_word;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)L_7));
		// bytes[index++] = (byte)(word >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_bytes;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		uint64_t L_11 = ___0_word;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_11>>8))));
		// bytes[index++] = (byte)(word >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_bytes;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint64_t L_15 = ___0_word;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_15>>((int32_t)16)))));
		// bytes[index++] = (byte)(word >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___1_bytes;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint64_t L_19 = ___0_word;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_19>>((int32_t)24)))));
		// bytes[index++] = (byte)(word >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___1_bytes;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint64_t L_23 = ___0_word;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_23>>((int32_t)32)))));
		// bytes[index++] = (byte)(word >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___1_bytes;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		uint64_t L_27 = ___0_word;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_27>>((int32_t)40)))));
		// bytes[index++] = (byte)(word >> 48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___1_bytes;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint64_t L_31 = ___0_word;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_31>>((int32_t)48)))));
		// bytes[index++] = (byte)(word >> 56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_bytes;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		uint64_t L_35 = ___0_word;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_35>>((int32_t)56)))));
		// }
		return;
	}
}
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::RotlXor(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) 
{
	{
		// return ((x << n) | (x >> (64 - n))) ^ xor;
		uint64_t L_0 = ___0_x;
		int32_t L_1 = ___1_n;
		uint64_t L_2 = ___0_x;
		int32_t L_3 = ___1_n;
		uint64_t L_4 = ___2_xor;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)(L_1&((int32_t)63)))))|((int64_t)((uint64_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))))^(int64_t)L_4));
	}
}
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::XorRotr(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1 (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// ulong xored = x ^ xor;
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___2_xor;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)L_1));
		// return (xored >> n) | (xored << (64 - n));
		uint64_t L_2 = V_0;
		int32_t L_3 = ___1_n;
		uint64_t L_4 = V_0;
		int32_t L_5 = ___1_n;
		return ((int64_t)(((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))|((int64_t)((int64_t)L_4<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_5))&((int32_t)63)))))));
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083 (ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		// protected ThreefishCipher(ulong[] kw, ulong[] t)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.kw = kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		__this->___kw_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw_1), (void*)L_0);
		// this.t = t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		__this->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_1);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher__ctor_mFAC4FD5F04BC1BF3E51B29BB4615C8DDDFD93EC0 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		// : base(kw, t)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// ulong[] kw = this.kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw_1;
		V_0 = L_0;
		// ulong[] t = this.t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t_0;
		V_1 = L_1;
		// int[] mod5 = MOD5;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5_12;
		V_2 = L_2;
		// int[] mod3 = MOD3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		// if (kw.Length != 9)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (t.Length != 5)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3_RuntimeMethod_var)));
	}

IL_0033:
	{
		// ulong b0 = block[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// ulong b1 = block[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// ulong b2 = block[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// ulong b3 = block[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// b0 += kw[0];
		uint64_t L_20 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, L_23));
		// b1 += kw[1] + t[0];
		uint64_t L_24 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		int64_t L_30 = (int64_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)il2cpp_codegen_add(L_27, L_30))));
		// b2 += kw[2] + t[1];
		uint64_t L_31 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 2;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = 1;
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)il2cpp_codegen_add(L_34, L_37))));
		// b3 += kw[3];
		uint64_t L_38 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 3;
		int64_t L_41 = (int64_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_38, L_41));
		// for (int d = 1; d < (ROUNDS_256 / 4); d += 2)
		V_8 = 1;
		goto IL_0233;
	}

IL_0077:
	{
		// int dm5 = mod5[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		int32_t L_43 = V_8;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_9 = L_45;
		// int dm3 = mod3[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_10 = L_49;
		// b1 = RotlXor(b1, ROTATION_0_0, b0 += b1);
		uint64_t L_50 = V_5;
		uint64_t L_51 = V_4;
		uint64_t L_52 = V_5;
		int64_t L_53 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, (int64_t)L_52));
		V_4 = L_53;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_54;
		L_54 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_50, ((int32_t)14), L_53, NULL);
		V_5 = L_54;
		// b3 = RotlXor(b3, ROTATION_0_1, b2 += b3);
		uint64_t L_55 = V_7;
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_7;
		int64_t L_58 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, (int64_t)L_57));
		V_6 = L_58;
		uint64_t L_59;
		L_59 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_55, ((int32_t)16), L_58, NULL);
		V_7 = L_59;
		// b3 = RotlXor(b3, ROTATION_1_0, b0 += b3);
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_4;
		uint64_t L_62 = V_7;
		int64_t L_63 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)L_62));
		V_4 = L_63;
		uint64_t L_64;
		L_64 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_60, ((int32_t)52), L_63, NULL);
		V_7 = L_64;
		// b1 = RotlXor(b1, ROTATION_1_1, b2 += b1);
		uint64_t L_65 = V_5;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int64_t L_68 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, (int64_t)L_67));
		V_6 = L_68;
		uint64_t L_69;
		L_69 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_65, ((int32_t)57), L_68, NULL);
		V_5 = L_69;
		// b1 = RotlXor(b1, ROTATION_2_0, b0 += b1);
		uint64_t L_70 = V_5;
		uint64_t L_71 = V_4;
		uint64_t L_72 = V_5;
		int64_t L_73 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, (int64_t)L_72));
		V_4 = L_73;
		uint64_t L_74;
		L_74 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_70, ((int32_t)23), L_73, NULL);
		V_5 = L_74;
		// b3 = RotlXor(b3, ROTATION_2_1, b2 += b3);
		uint64_t L_75 = V_7;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_7;
		int64_t L_78 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)L_77));
		V_6 = L_78;
		uint64_t L_79;
		L_79 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_75, ((int32_t)40), L_78, NULL);
		V_7 = L_79;
		// b3 = RotlXor(b3, ROTATION_3_0, b0 += b3);
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_4;
		uint64_t L_82 = V_7;
		int64_t L_83 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, (int64_t)L_82));
		V_4 = L_83;
		uint64_t L_84;
		L_84 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_80, 5, L_83, NULL);
		V_7 = L_84;
		// b1 = RotlXor(b1, ROTATION_3_1, b2 += b1);
		uint64_t L_85 = V_5;
		uint64_t L_86 = V_6;
		uint64_t L_87 = V_5;
		int64_t L_88 = ((int64_t)il2cpp_codegen_add((int64_t)L_86, (int64_t)L_87));
		V_6 = L_88;
		uint64_t L_89;
		L_89 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_85, ((int32_t)37), L_88, NULL);
		V_5 = L_89;
		// b0 += kw[dm5];
		uint64_t L_90 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = V_0;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int64_t L_94 = (int64_t)(L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, L_94));
		// b1 += kw[dm5 + 1] + t[dm3];
		uint64_t L_95 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = V_0;
		int32_t L_97 = V_9;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		int64_t L_99 = (int64_t)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_1;
		int32_t L_101 = V_10;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_add(L_99, L_103))));
		// b2 += kw[dm5 + 2] + t[dm3 + 1];
		uint64_t L_104 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_9;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, 2));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_1;
		int32_t L_110 = V_10;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int64_t L_112 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(L_108, L_112))));
		// b3 += kw[dm5 + 3] + (uint)d;
		uint64_t L_113 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = V_0;
		int32_t L_115 = V_9;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 3));
		int64_t L_117 = (int64_t)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		int32_t L_118 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_add(L_117, ((int64_t)(uint64_t)((uint32_t)L_118))))));
		// b1 = RotlXor(b1, ROTATION_4_0, b0 += b1);
		uint64_t L_119 = V_5;
		uint64_t L_120 = V_4;
		uint64_t L_121 = V_5;
		int64_t L_122 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, (int64_t)L_121));
		V_4 = L_122;
		uint64_t L_123;
		L_123 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_119, ((int32_t)25), L_122, NULL);
		V_5 = L_123;
		// b3 = RotlXor(b3, ROTATION_4_1, b2 += b3);
		uint64_t L_124 = V_7;
		uint64_t L_125 = V_6;
		uint64_t L_126 = V_7;
		int64_t L_127 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_126));
		V_6 = L_127;
		uint64_t L_128;
		L_128 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_124, ((int32_t)33), L_127, NULL);
		V_7 = L_128;
		// b3 = RotlXor(b3, ROTATION_5_0, b0 += b3);
		uint64_t L_129 = V_7;
		uint64_t L_130 = V_4;
		uint64_t L_131 = V_7;
		int64_t L_132 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, (int64_t)L_131));
		V_4 = L_132;
		uint64_t L_133;
		L_133 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_129, ((int32_t)46), L_132, NULL);
		V_7 = L_133;
		// b1 = RotlXor(b1, ROTATION_5_1, b2 += b1);
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_6;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_6 = L_137;
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_134, ((int32_t)12), L_137, NULL);
		V_5 = L_138;
		// b1 = RotlXor(b1, ROTATION_6_0, b0 += b1);
		uint64_t L_139 = V_5;
		uint64_t L_140 = V_4;
		uint64_t L_141 = V_5;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_4 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_139, ((int32_t)58), L_142, NULL);
		V_5 = L_143;
		// b3 = RotlXor(b3, ROTATION_6_1, b2 += b3);
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_6;
		uint64_t L_146 = V_7;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_6 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_144, ((int32_t)22), L_147, NULL);
		V_7 = L_148;
		// b3 = RotlXor(b3, ROTATION_7_0, b0 += b3);
		uint64_t L_149 = V_7;
		uint64_t L_150 = V_4;
		uint64_t L_151 = V_7;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_4 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_149, ((int32_t)32), L_152, NULL);
		V_7 = L_153;
		// b1 = RotlXor(b1, ROTATION_7_1, b2 += b1);
		uint64_t L_154 = V_5;
		uint64_t L_155 = V_6;
		uint64_t L_156 = V_5;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_6 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_154, ((int32_t)32), L_157, NULL);
		V_5 = L_158;
		// b0 += kw[dm5 + 1];
		uint64_t L_159 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_160 = V_0;
		int32_t L_161 = V_9;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		int64_t L_163 = (int64_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, L_163));
		// b1 += kw[dm5 + 2] + t[dm3 + 1];
		uint64_t L_164 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_165 = V_0;
		int32_t L_166 = V_9;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 2));
		int64_t L_168 = (int64_t)(L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_1;
		int32_t L_170 = V_10;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_164, ((int64_t)il2cpp_codegen_add(L_168, L_172))));
		// b2 += kw[dm5 + 3] + t[dm3 + 2];
		uint64_t L_173 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_9;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_178 = V_1;
		int32_t L_179 = V_10;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_add(L_179, 2));
		int64_t L_181 = (int64_t)(L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_add(L_177, L_181))));
		// b3 += kw[dm5 + 4] + (uint)d + 1;
		uint64_t L_182 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = V_0;
		int32_t L_184 = V_9;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_add(L_184, 4));
		int64_t L_186 = (int64_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_182, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_186, ((int64_t)(uint64_t)((uint32_t)L_187)))), ((int64_t)1)))));
		// for (int d = 1; d < (ROUNDS_256 / 4); d += 2)
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_188, 2));
	}

IL_0233:
	{
		// for (int d = 1; d < (ROUNDS_256 / 4); d += 2)
		int32_t L_189 = V_8;
		if ((((int32_t)L_189) < ((int32_t)((int32_t)18))))
		{
			goto IL_0077;
		}
	}
	{
		// outWords[0] = b0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = ___1_outWords;
		uint64_t L_191 = V_4;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_191);
		// outWords[1] = b1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = ___1_outWords;
		uint64_t L_193 = V_5;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_193);
		// outWords[2] = b2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = ___1_outWords;
		uint64_t L_195 = V_6;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_195);
		// outWords[3] = b3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_196 = ___1_outWords;
		uint64_t L_197 = V_7;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_197);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish256Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// ulong[] kw = this.kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw_1;
		V_0 = L_0;
		// ulong[] t = this.t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t_0;
		V_1 = L_1;
		// int[] mod5 = MOD5;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5_12;
		V_2 = L_2;
		// int[] mod3 = MOD3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		// if (kw.Length != 9)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (t.Length != 5)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83_RuntimeMethod_var)));
	}

IL_0033:
	{
		// ulong b0 = block[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// ulong b1 = block[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// ulong b2 = block[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// ulong b3 = block[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// for (int d = (ROUNDS_256 / 4) - 1; d >= 1; d -= 2)
		V_8 = ((int32_t)17);
		goto IL_021c;
	}

IL_0050:
	{
		// int dm5 = mod5[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		int32_t L_21 = V_8;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_9 = L_23;
		// int dm3 = mod3[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_10 = L_27;
		// b0 -= kw[dm5 + 1];
		uint64_t L_28 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_0;
		int32_t L_30 = V_9;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int64_t L_32 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_28, L_32));
		// b1 -= kw[dm5 + 2] + t[dm3 + 1];
		uint64_t L_33 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_0;
		int32_t L_35 = V_9;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		int64_t L_37 = (int64_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = V_1;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int64_t L_41 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_33, ((int64_t)il2cpp_codegen_add(L_37, L_41))));
		// b2 -= kw[dm5 + 3] + t[dm3 + 2];
		uint64_t L_42 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = V_0;
		int32_t L_44 = V_9;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 3));
		int64_t L_46 = (int64_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = V_1;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		int64_t L_50 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_42, ((int64_t)il2cpp_codegen_add(L_46, L_50))));
		// b3 -= kw[dm5 + 4] + (uint)d + 1;
		uint64_t L_51 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_0;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 4));
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_51, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_55, ((int64_t)(uint64_t)((uint32_t)L_56)))), ((int64_t)1)))));
		// b3 = XorRotr(b3, ROTATION_7_0, b0);
		uint64_t L_57 = V_7;
		uint64_t L_58 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_59;
		L_59 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_57, ((int32_t)32), L_58, NULL);
		V_7 = L_59;
		// b0 -= b3;
		uint64_t L_60 = V_4;
		uint64_t L_61 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, (int64_t)L_61));
		// b1 = XorRotr(b1, ROTATION_7_1, b2);
		uint64_t L_62 = V_5;
		uint64_t L_63 = V_6;
		uint64_t L_64;
		L_64 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_62, ((int32_t)32), L_63, NULL);
		V_5 = L_64;
		// b2 -= b1;
		uint64_t L_65 = V_6;
		uint64_t L_66 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, (int64_t)L_66));
		// b1 = XorRotr(b1, ROTATION_6_0, b0);
		uint64_t L_67 = V_5;
		uint64_t L_68 = V_4;
		uint64_t L_69;
		L_69 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_67, ((int32_t)58), L_68, NULL);
		V_5 = L_69;
		// b0 -= b1;
		uint64_t L_70 = V_4;
		uint64_t L_71 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_70, (int64_t)L_71));
		// b3 = XorRotr(b3, ROTATION_6_1, b2);
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_6;
		uint64_t L_74;
		L_74 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_72, ((int32_t)22), L_73, NULL);
		V_7 = L_74;
		// b2 -= b3;
		uint64_t L_75 = V_6;
		uint64_t L_76 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_75, (int64_t)L_76));
		// b3 = XorRotr(b3, ROTATION_5_0, b0);
		uint64_t L_77 = V_7;
		uint64_t L_78 = V_4;
		uint64_t L_79;
		L_79 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_77, ((int32_t)46), L_78, NULL);
		V_7 = L_79;
		// b0 -= b3;
		uint64_t L_80 = V_4;
		uint64_t L_81 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_80, (int64_t)L_81));
		// b1 = XorRotr(b1, ROTATION_5_1, b2);
		uint64_t L_82 = V_5;
		uint64_t L_83 = V_6;
		uint64_t L_84;
		L_84 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_82, ((int32_t)12), L_83, NULL);
		V_5 = L_84;
		// b2 -= b1;
		uint64_t L_85 = V_6;
		uint64_t L_86 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_85, (int64_t)L_86));
		// b1 = XorRotr(b1, ROTATION_4_0, b0);
		uint64_t L_87 = V_5;
		uint64_t L_88 = V_4;
		uint64_t L_89;
		L_89 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_87, ((int32_t)25), L_88, NULL);
		V_5 = L_89;
		// b0 -= b1;
		uint64_t L_90 = V_4;
		uint64_t L_91 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_90, (int64_t)L_91));
		// b3 = XorRotr(b3, ROTATION_4_1, b2);
		uint64_t L_92 = V_7;
		uint64_t L_93 = V_6;
		uint64_t L_94;
		L_94 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_92, ((int32_t)33), L_93, NULL);
		V_7 = L_94;
		// b2 -= b3;
		uint64_t L_95 = V_6;
		uint64_t L_96 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_95, (int64_t)L_96));
		// b0 -= kw[dm5];
		uint64_t L_97 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = V_0;
		int32_t L_99 = V_9;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		int64_t L_101 = (int64_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, L_101));
		// b1 -= kw[dm5 + 1] + t[dm3];
		uint64_t L_102 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = V_0;
		int32_t L_104 = V_9;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int64_t L_106 = (int64_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = V_1;
		int32_t L_108 = V_10;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int64_t L_110 = (int64_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, ((int64_t)il2cpp_codegen_add(L_106, L_110))));
		// b2 -= kw[dm5 + 2] + t[dm3 + 1];
		uint64_t L_111 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_0;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 2));
		int64_t L_115 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_1;
		int32_t L_117 = V_10;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		int64_t L_119 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_111, ((int64_t)il2cpp_codegen_add(L_115, L_119))));
		// b3 -= kw[dm5 + 3] + (uint)d;
		uint64_t L_120 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_121 = V_0;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 3));
		int64_t L_124 = (int64_t)(L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_120, ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)(uint64_t)((uint32_t)L_125))))));
		// b3 = XorRotr(b3, ROTATION_3_0, b0);
		uint64_t L_126 = V_7;
		uint64_t L_127 = V_4;
		uint64_t L_128;
		L_128 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_126, 5, L_127, NULL);
		V_7 = L_128;
		// b0 -= b3;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, (int64_t)L_130));
		// b1 = XorRotr(b1, ROTATION_3_1, b2);
		uint64_t L_131 = V_5;
		uint64_t L_132 = V_6;
		uint64_t L_133;
		L_133 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_131, ((int32_t)37), L_132, NULL);
		V_5 = L_133;
		// b2 -= b1;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_134, (int64_t)L_135));
		// b1 = XorRotr(b1, ROTATION_2_0, b0);
		uint64_t L_136 = V_5;
		uint64_t L_137 = V_4;
		uint64_t L_138;
		L_138 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_136, ((int32_t)23), L_137, NULL);
		V_5 = L_138;
		// b0 -= b1;
		uint64_t L_139 = V_4;
		uint64_t L_140 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_139, (int64_t)L_140));
		// b3 = XorRotr(b3, ROTATION_2_1, b2);
		uint64_t L_141 = V_7;
		uint64_t L_142 = V_6;
		uint64_t L_143;
		L_143 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_141, ((int32_t)40), L_142, NULL);
		V_7 = L_143;
		// b2 -= b3;
		uint64_t L_144 = V_6;
		uint64_t L_145 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_144, (int64_t)L_145));
		// b3 = XorRotr(b3, ROTATION_1_0, b0);
		uint64_t L_146 = V_7;
		uint64_t L_147 = V_4;
		uint64_t L_148;
		L_148 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_146, ((int32_t)52), L_147, NULL);
		V_7 = L_148;
		// b0 -= b3;
		uint64_t L_149 = V_4;
		uint64_t L_150 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_149, (int64_t)L_150));
		// b1 = XorRotr(b1, ROTATION_1_1, b2);
		uint64_t L_151 = V_5;
		uint64_t L_152 = V_6;
		uint64_t L_153;
		L_153 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_151, ((int32_t)57), L_152, NULL);
		V_5 = L_153;
		// b2 -= b1;
		uint64_t L_154 = V_6;
		uint64_t L_155 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_154, (int64_t)L_155));
		// b1 = XorRotr(b1, ROTATION_0_0, b0);
		uint64_t L_156 = V_5;
		uint64_t L_157 = V_4;
		uint64_t L_158;
		L_158 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_156, ((int32_t)14), L_157, NULL);
		V_5 = L_158;
		// b0 -= b1;
		uint64_t L_159 = V_4;
		uint64_t L_160 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_159, (int64_t)L_160));
		// b3 = XorRotr(b3, ROTATION_0_1, b2);
		uint64_t L_161 = V_7;
		uint64_t L_162 = V_6;
		uint64_t L_163;
		L_163 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_161, ((int32_t)16), L_162, NULL);
		V_7 = L_163;
		// b2 -= b3;
		uint64_t L_164 = V_6;
		uint64_t L_165 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_164, (int64_t)L_165));
		// for (int d = (ROUNDS_256 / 4) - 1; d >= 1; d -= 2)
		int32_t L_166 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_166, 2));
	}

IL_021c:
	{
		// for (int d = (ROUNDS_256 / 4) - 1; d >= 1; d -= 2)
		int32_t L_167 = V_8;
		if ((((int32_t)L_167) >= ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		// b0 -= kw[0];
		uint64_t L_168 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = 0;
		int64_t L_171 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_168, L_171));
		// b1 -= kw[1] + t[0];
		uint64_t L_172 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_173 = V_0;
		NullCheck(L_173);
		int32_t L_174 = 1;
		int64_t L_175 = (int64_t)(L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176 = V_1;
		NullCheck(L_176);
		int32_t L_177 = 0;
		int64_t L_178 = (int64_t)(L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_172, ((int64_t)il2cpp_codegen_add(L_175, L_178))));
		// b2 -= kw[2] + t[1];
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		NullCheck(L_180);
		int32_t L_181 = 2;
		int64_t L_182 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = V_1;
		NullCheck(L_183);
		int32_t L_184 = 1;
		int64_t L_185 = (int64_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, ((int64_t)il2cpp_codegen_add(L_182, L_185))));
		// b3 -= kw[3];
		uint64_t L_186 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_187 = V_0;
		NullCheck(L_187);
		int32_t L_188 = 3;
		int64_t L_189 = (int64_t)(L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, L_189));
		// state[0] = b0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = ___1_state;
		uint64_t L_191 = V_4;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_191);
		// state[1] = b1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = ___1_state;
		uint64_t L_193 = V_5;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_193);
		// state[2] = b2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = ___1_state;
		uint64_t L_195 = V_6;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_195);
		// state[3] = b3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_196 = ___1_state;
		uint64_t L_197 = V_7;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_197);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_m7FD107C58329018301B495FBE359BA679DD0A451 (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		// : base(kw, t)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		// ulong[] kw = this.kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw_1;
		V_0 = L_0;
		// ulong[] t = this.t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t_0;
		V_1 = L_1;
		// int[] mod9 = MOD9;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		// int[] mod3 = MOD3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		// if (kw.Length != 17)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (t.Length != 5)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B_RuntimeMethod_var)));
	}

IL_0033:
	{
		// ulong b0 = block[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// ulong b1 = block[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// ulong b2 = block[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// ulong b3 = block[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// ulong b4 = block[4];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		// ulong b5 = block[5];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		// ulong b6 = block[6];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		// ulong b7 = block[7];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		// b0 += kw[0];
		uint64_t L_32 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, L_35));
		// b1 += kw[1];
		uint64_t L_36 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int64_t L_39 = (int64_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, L_39));
		// b2 += kw[2];
		uint64_t L_40 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = 2;
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, L_43));
		// b3 += kw[3];
		uint64_t L_44 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, L_47));
		// b4 += kw[4];
		uint64_t L_48 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 4;
		int64_t L_51 = (int64_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, L_51));
		// b5 += kw[5] + t[0];
		uint64_t L_52 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 5;
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int64_t L_58 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(L_55, L_58))));
		// b6 += kw[6] + t[1];
		uint64_t L_59 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 6;
		int64_t L_62 = (int64_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 1;
		int64_t L_65 = (int64_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)il2cpp_codegen_add(L_62, L_65))));
		// b7 += kw[7];
		uint64_t L_66 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = 7;
		int64_t L_69 = (int64_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, L_69));
		// for (int d = 1; d < (ROUNDS_512 / 4); d += 2)
		V_12 = 1;
		goto IL_03ef;
	}

IL_00ab:
	{
		// int dm9 = mod9[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_2;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_13 = L_73;
		// int dm3 = mod3[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_3;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_14 = L_77;
		// b1 = RotlXor(b1, ROTATION_0_0, b0 += b1);
		uint64_t L_78 = V_5;
		uint64_t L_79 = V_4;
		uint64_t L_80 = V_5;
		int64_t L_81 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)L_80));
		V_4 = L_81;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_82;
		L_82 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_78, ((int32_t)46), L_81, NULL);
		V_5 = L_82;
		// b3 = RotlXor(b3, ROTATION_0_1, b2 += b3);
		uint64_t L_83 = V_7;
		uint64_t L_84 = V_6;
		uint64_t L_85 = V_7;
		int64_t L_86 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)L_85));
		V_6 = L_86;
		uint64_t L_87;
		L_87 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_83, ((int32_t)36), L_86, NULL);
		V_7 = L_87;
		// b5 = RotlXor(b5, ROTATION_0_2, b4 += b5);
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		int64_t L_91 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)L_90));
		V_8 = L_91;
		uint64_t L_92;
		L_92 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_88, ((int32_t)19), L_91, NULL);
		V_9 = L_92;
		// b7 = RotlXor(b7, ROTATION_0_3, b6 += b7);
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		int64_t L_96 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, (int64_t)L_95));
		V_10 = L_96;
		uint64_t L_97;
		L_97 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_93, ((int32_t)37), L_96, NULL);
		V_11 = L_97;
		// b1 = RotlXor(b1, ROTATION_1_0, b2 += b1);
		uint64_t L_98 = V_5;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		int64_t L_101 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, (int64_t)L_100));
		V_6 = L_101;
		uint64_t L_102;
		L_102 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_98, ((int32_t)33), L_101, NULL);
		V_5 = L_102;
		// b7 = RotlXor(b7, ROTATION_1_1, b4 += b7);
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_11;
		int64_t L_106 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, (int64_t)L_105));
		V_8 = L_106;
		uint64_t L_107;
		L_107 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_103, ((int32_t)27), L_106, NULL);
		V_11 = L_107;
		// b5 = RotlXor(b5, ROTATION_1_2, b6 += b5);
		uint64_t L_108 = V_9;
		uint64_t L_109 = V_10;
		uint64_t L_110 = V_9;
		int64_t L_111 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)L_110));
		V_10 = L_111;
		uint64_t L_112;
		L_112 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_108, ((int32_t)14), L_111, NULL);
		V_9 = L_112;
		// b3 = RotlXor(b3, ROTATION_1_3, b0 += b3);
		uint64_t L_113 = V_7;
		uint64_t L_114 = V_4;
		uint64_t L_115 = V_7;
		int64_t L_116 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, (int64_t)L_115));
		V_4 = L_116;
		uint64_t L_117;
		L_117 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_113, ((int32_t)42), L_116, NULL);
		V_7 = L_117;
		// b1 = RotlXor(b1, ROTATION_2_0, b4 += b1);
		uint64_t L_118 = V_5;
		uint64_t L_119 = V_8;
		uint64_t L_120 = V_5;
		int64_t L_121 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, (int64_t)L_120));
		V_8 = L_121;
		uint64_t L_122;
		L_122 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_118, ((int32_t)17), L_121, NULL);
		V_5 = L_122;
		// b3 = RotlXor(b3, ROTATION_2_1, b6 += b3);
		uint64_t L_123 = V_7;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_7;
		int64_t L_126 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, (int64_t)L_125));
		V_10 = L_126;
		uint64_t L_127;
		L_127 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_123, ((int32_t)49), L_126, NULL);
		V_7 = L_127;
		// b5 = RotlXor(b5, ROTATION_2_2, b0 += b5);
		uint64_t L_128 = V_9;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_9;
		int64_t L_131 = ((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)L_130));
		V_4 = L_131;
		uint64_t L_132;
		L_132 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_128, ((int32_t)36), L_131, NULL);
		V_9 = L_132;
		// b7 = RotlXor(b7, ROTATION_2_3, b2 += b7);
		uint64_t L_133 = V_11;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_11;
		int64_t L_136 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)L_135));
		V_6 = L_136;
		uint64_t L_137;
		L_137 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_133, ((int32_t)39), L_136, NULL);
		V_11 = L_137;
		// b1 = RotlXor(b1, ROTATION_3_0, b6 += b1);
		uint64_t L_138 = V_5;
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_5;
		int64_t L_141 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, (int64_t)L_140));
		V_10 = L_141;
		uint64_t L_142;
		L_142 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_138, ((int32_t)44), L_141, NULL);
		V_5 = L_142;
		// b7 = RotlXor(b7, ROTATION_3_1, b0 += b7);
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_4;
		uint64_t L_145 = V_11;
		int64_t L_146 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, (int64_t)L_145));
		V_4 = L_146;
		uint64_t L_147;
		L_147 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_143, ((int32_t)9), L_146, NULL);
		V_11 = L_147;
		// b5 = RotlXor(b5, ROTATION_3_2, b2 += b5);
		uint64_t L_148 = V_9;
		uint64_t L_149 = V_6;
		uint64_t L_150 = V_9;
		int64_t L_151 = ((int64_t)il2cpp_codegen_add((int64_t)L_149, (int64_t)L_150));
		V_6 = L_151;
		uint64_t L_152;
		L_152 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_148, ((int32_t)54), L_151, NULL);
		V_9 = L_152;
		// b3 = RotlXor(b3, ROTATION_3_3, b4 += b3);
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_8;
		uint64_t L_155 = V_7;
		int64_t L_156 = ((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)L_155));
		V_8 = L_156;
		uint64_t L_157;
		L_157 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_153, ((int32_t)56), L_156, NULL);
		V_7 = L_157;
		// b0 += kw[dm9];
		uint64_t L_158 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = V_0;
		int32_t L_160 = V_13;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		int64_t L_162 = (int64_t)(L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, L_162));
		// b1 += kw[dm9 + 1];
		uint64_t L_163 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = V_0;
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 1));
		int64_t L_167 = (int64_t)(L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, L_167));
		// b2 += kw[dm9 + 2];
		uint64_t L_168 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		int32_t L_170 = V_13;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 2));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, L_172));
		// b3 += kw[dm9 + 3];
		uint64_t L_173 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_13;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, L_177));
		// b4 += kw[dm9 + 4];
		uint64_t L_178 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = V_0;
		int32_t L_180 = V_13;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		int64_t L_182 = (int64_t)(L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, L_182));
		// b5 += kw[dm9 + 5] + t[dm3];
		uint64_t L_183 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_184 = V_0;
		int32_t L_185 = V_13;
		NullCheck(L_184);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 5));
		int64_t L_187 = (int64_t)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = V_1;
		int32_t L_189 = V_14;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		int64_t L_191 = (int64_t)(L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(L_187, L_191))));
		// b6 += kw[dm9 + 6] + t[dm3 + 1];
		uint64_t L_192 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_193 = V_0;
		int32_t L_194 = V_13;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		int64_t L_196 = (int64_t)(L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = V_1;
		int32_t L_198 = V_14;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int64_t L_200 = (int64_t)(L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_add(L_196, L_200))));
		// b7 += kw[dm9 + 7] + (uint)d;
		uint64_t L_201 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_202 = V_0;
		int32_t L_203 = V_13;
		NullCheck(L_202);
		int32_t L_204 = ((int32_t)il2cpp_codegen_add(L_203, 7));
		int64_t L_205 = (int64_t)(L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		int32_t L_206 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_201, ((int64_t)il2cpp_codegen_add(L_205, ((int64_t)(uint64_t)((uint32_t)L_206))))));
		// b1 = RotlXor(b1, ROTATION_4_0, b0 += b1);
		uint64_t L_207 = V_5;
		uint64_t L_208 = V_4;
		uint64_t L_209 = V_5;
		int64_t L_210 = ((int64_t)il2cpp_codegen_add((int64_t)L_208, (int64_t)L_209));
		V_4 = L_210;
		uint64_t L_211;
		L_211 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_207, ((int32_t)39), L_210, NULL);
		V_5 = L_211;
		// b3 = RotlXor(b3, ROTATION_4_1, b2 += b3);
		uint64_t L_212 = V_7;
		uint64_t L_213 = V_6;
		uint64_t L_214 = V_7;
		int64_t L_215 = ((int64_t)il2cpp_codegen_add((int64_t)L_213, (int64_t)L_214));
		V_6 = L_215;
		uint64_t L_216;
		L_216 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_212, ((int32_t)30), L_215, NULL);
		V_7 = L_216;
		// b5 = RotlXor(b5, ROTATION_4_2, b4 += b5);
		uint64_t L_217 = V_9;
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_9;
		int64_t L_220 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, (int64_t)L_219));
		V_8 = L_220;
		uint64_t L_221;
		L_221 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_217, ((int32_t)34), L_220, NULL);
		V_9 = L_221;
		// b7 = RotlXor(b7, ROTATION_4_3, b6 += b7);
		uint64_t L_222 = V_11;
		uint64_t L_223 = V_10;
		uint64_t L_224 = V_11;
		int64_t L_225 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)L_224));
		V_10 = L_225;
		uint64_t L_226;
		L_226 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_222, ((int32_t)24), L_225, NULL);
		V_11 = L_226;
		// b1 = RotlXor(b1, ROTATION_5_0, b2 += b1);
		uint64_t L_227 = V_5;
		uint64_t L_228 = V_6;
		uint64_t L_229 = V_5;
		int64_t L_230 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, (int64_t)L_229));
		V_6 = L_230;
		uint64_t L_231;
		L_231 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_227, ((int32_t)13), L_230, NULL);
		V_5 = L_231;
		// b7 = RotlXor(b7, ROTATION_5_1, b4 += b7);
		uint64_t L_232 = V_11;
		uint64_t L_233 = V_8;
		uint64_t L_234 = V_11;
		int64_t L_235 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, (int64_t)L_234));
		V_8 = L_235;
		uint64_t L_236;
		L_236 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_232, ((int32_t)50), L_235, NULL);
		V_11 = L_236;
		// b5 = RotlXor(b5, ROTATION_5_2, b6 += b5);
		uint64_t L_237 = V_9;
		uint64_t L_238 = V_10;
		uint64_t L_239 = V_9;
		int64_t L_240 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, (int64_t)L_239));
		V_10 = L_240;
		uint64_t L_241;
		L_241 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_237, ((int32_t)10), L_240, NULL);
		V_9 = L_241;
		// b3 = RotlXor(b3, ROTATION_5_3, b0 += b3);
		uint64_t L_242 = V_7;
		uint64_t L_243 = V_4;
		uint64_t L_244 = V_7;
		int64_t L_245 = ((int64_t)il2cpp_codegen_add((int64_t)L_243, (int64_t)L_244));
		V_4 = L_245;
		uint64_t L_246;
		L_246 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_242, ((int32_t)17), L_245, NULL);
		V_7 = L_246;
		// b1 = RotlXor(b1, ROTATION_6_0, b4 += b1);
		uint64_t L_247 = V_5;
		uint64_t L_248 = V_8;
		uint64_t L_249 = V_5;
		int64_t L_250 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, (int64_t)L_249));
		V_8 = L_250;
		uint64_t L_251;
		L_251 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_247, ((int32_t)25), L_250, NULL);
		V_5 = L_251;
		// b3 = RotlXor(b3, ROTATION_6_1, b6 += b3);
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_10;
		uint64_t L_254 = V_7;
		int64_t L_255 = ((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)L_254));
		V_10 = L_255;
		uint64_t L_256;
		L_256 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_252, ((int32_t)29), L_255, NULL);
		V_7 = L_256;
		// b5 = RotlXor(b5, ROTATION_6_2, b0 += b5);
		uint64_t L_257 = V_9;
		uint64_t L_258 = V_4;
		uint64_t L_259 = V_9;
		int64_t L_260 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, (int64_t)L_259));
		V_4 = L_260;
		uint64_t L_261;
		L_261 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_257, ((int32_t)39), L_260, NULL);
		V_9 = L_261;
		// b7 = RotlXor(b7, ROTATION_6_3, b2 += b7);
		uint64_t L_262 = V_11;
		uint64_t L_263 = V_6;
		uint64_t L_264 = V_11;
		int64_t L_265 = ((int64_t)il2cpp_codegen_add((int64_t)L_263, (int64_t)L_264));
		V_6 = L_265;
		uint64_t L_266;
		L_266 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_262, ((int32_t)43), L_265, NULL);
		V_11 = L_266;
		// b1 = RotlXor(b1, ROTATION_7_0, b6 += b1);
		uint64_t L_267 = V_5;
		uint64_t L_268 = V_10;
		uint64_t L_269 = V_5;
		int64_t L_270 = ((int64_t)il2cpp_codegen_add((int64_t)L_268, (int64_t)L_269));
		V_10 = L_270;
		uint64_t L_271;
		L_271 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_267, 8, L_270, NULL);
		V_5 = L_271;
		// b7 = RotlXor(b7, ROTATION_7_1, b0 += b7);
		uint64_t L_272 = V_11;
		uint64_t L_273 = V_4;
		uint64_t L_274 = V_11;
		int64_t L_275 = ((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)L_274));
		V_4 = L_275;
		uint64_t L_276;
		L_276 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_272, ((int32_t)35), L_275, NULL);
		V_11 = L_276;
		// b5 = RotlXor(b5, ROTATION_7_2, b2 += b5);
		uint64_t L_277 = V_9;
		uint64_t L_278 = V_6;
		uint64_t L_279 = V_9;
		int64_t L_280 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)L_279));
		V_6 = L_280;
		uint64_t L_281;
		L_281 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_277, ((int32_t)56), L_280, NULL);
		V_9 = L_281;
		// b3 = RotlXor(b3, ROTATION_7_3, b4 += b3);
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_8;
		uint64_t L_284 = V_7;
		int64_t L_285 = ((int64_t)il2cpp_codegen_add((int64_t)L_283, (int64_t)L_284));
		V_8 = L_285;
		uint64_t L_286;
		L_286 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_282, ((int32_t)22), L_285, NULL);
		V_7 = L_286;
		// b0 += kw[dm9 + 1];
		uint64_t L_287 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_288 = V_0;
		int32_t L_289 = V_13;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 1));
		int64_t L_291 = (int64_t)(L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_287, L_291));
		// b1 += kw[dm9 + 2];
		uint64_t L_292 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_293 = V_0;
		int32_t L_294 = V_13;
		NullCheck(L_293);
		int32_t L_295 = ((int32_t)il2cpp_codegen_add(L_294, 2));
		int64_t L_296 = (int64_t)(L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, L_296));
		// b2 += kw[dm9 + 3];
		uint64_t L_297 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_298 = V_0;
		int32_t L_299 = V_13;
		NullCheck(L_298);
		int32_t L_300 = ((int32_t)il2cpp_codegen_add(L_299, 3));
		int64_t L_301 = (int64_t)(L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_297, L_301));
		// b3 += kw[dm9 + 4];
		uint64_t L_302 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_303 = V_0;
		int32_t L_304 = V_13;
		NullCheck(L_303);
		int32_t L_305 = ((int32_t)il2cpp_codegen_add(L_304, 4));
		int64_t L_306 = (int64_t)(L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, L_306));
		// b4 += kw[dm9 + 5];
		uint64_t L_307 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_308 = V_0;
		int32_t L_309 = V_13;
		NullCheck(L_308);
		int32_t L_310 = ((int32_t)il2cpp_codegen_add(L_309, 5));
		int64_t L_311 = (int64_t)(L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_307, L_311));
		// b5 += kw[dm9 + 6] + t[dm3 + 1];
		uint64_t L_312 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		int32_t L_314 = V_13;
		NullCheck(L_313);
		int32_t L_315 = ((int32_t)il2cpp_codegen_add(L_314, 6));
		int64_t L_316 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_1;
		int32_t L_318 = V_14;
		NullCheck(L_317);
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		int64_t L_320 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_add(L_316, L_320))));
		// b6 += kw[dm9 + 7] + t[dm3 + 2];
		uint64_t L_321 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_322 = V_0;
		int32_t L_323 = V_13;
		NullCheck(L_322);
		int32_t L_324 = ((int32_t)il2cpp_codegen_add(L_323, 7));
		int64_t L_325 = (int64_t)(L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_326 = V_1;
		int32_t L_327 = V_14;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)il2cpp_codegen_add(L_327, 2));
		int64_t L_329 = (int64_t)(L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_321, ((int64_t)il2cpp_codegen_add(L_325, L_329))));
		// b7 += kw[dm9 + 8] + (uint)d + 1;
		uint64_t L_330 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_0;
		int32_t L_332 = V_13;
		NullCheck(L_331);
		int32_t L_333 = ((int32_t)il2cpp_codegen_add(L_332, 8));
		int64_t L_334 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_330, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_334, ((int64_t)(uint64_t)((uint32_t)L_335)))), ((int64_t)1)))));
		// for (int d = 1; d < (ROUNDS_512 / 4); d += 2)
		int32_t L_336 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_336, 2));
	}

IL_03ef:
	{
		// for (int d = 1; d < (ROUNDS_512 / 4); d += 2)
		int32_t L_337 = V_12;
		if ((((int32_t)L_337) < ((int32_t)((int32_t)18))))
		{
			goto IL_00ab;
		}
	}
	{
		// outWords[0] = b0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___1_outWords;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		// outWords[1] = b1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___1_outWords;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		// outWords[2] = b2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___1_outWords;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		// outWords[3] = b3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___1_outWords;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		// outWords[4] = b4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___1_outWords;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		// outWords[5] = b5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___1_outWords;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		// outWords[6] = b6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___1_outWords;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		// outWords[7] = b7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___1_outWords;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		// ulong[] kw = this.kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw_1;
		V_0 = L_0;
		// ulong[] t = this.t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t_0;
		V_1 = L_1;
		// int[] mod9 = MOD9;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		// int[] mod3 = MOD3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		// if (kw.Length != 17)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (t.Length != 5)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D_RuntimeMethod_var)));
	}

IL_0033:
	{
		// ulong b0 = block[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// ulong b1 = block[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// ulong b2 = block[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// ulong b3 = block[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// ulong b4 = block[4];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		// ulong b5 = block[5];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		// ulong b6 = block[6];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		// ulong b7 = block[7];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		// for (int d = (ROUNDS_512 / 4) - 1; d >= 1; d -= 2)
		V_12 = ((int32_t)17);
		goto IL_03c8;
	}

IL_0064:
	{
		// int dm9 = mod9[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		int32_t L_33 = V_12;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		// int dm3 = mod3[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_3;
		int32_t L_37 = V_12;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_14 = L_39;
		// b0 -= kw[dm9 + 1];
		uint64_t L_40 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		int32_t L_42 = V_13;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int64_t L_44 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_40, L_44));
		// b1 -= kw[dm9 + 2];
		uint64_t L_45 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = V_0;
		int32_t L_47 = V_13;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		int64_t L_49 = (int64_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_45, L_49));
		// b2 -= kw[dm9 + 3];
		uint64_t L_50 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = V_0;
		int32_t L_52 = V_13;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		int64_t L_54 = (int64_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_50, L_54));
		// b3 -= kw[dm9 + 4];
		uint64_t L_55 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_0;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 4));
		int64_t L_59 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_55, L_59));
		// b4 -= kw[dm9 + 5];
		uint64_t L_60 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = V_13;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 5));
		int64_t L_64 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, L_64));
		// b5 -= kw[dm9 + 6] + t[dm3 + 1];
		uint64_t L_65 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = V_0;
		int32_t L_67 = V_13;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
		int64_t L_69 = (int64_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_1;
		int32_t L_71 = V_14;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, ((int64_t)il2cpp_codegen_add(L_69, L_73))));
		// b6 -= kw[dm9 + 7] + t[dm3 + 2];
		uint64_t L_74 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_13;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 7));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = V_1;
		int32_t L_80 = V_14;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		int64_t L_82 = (int64_t)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, ((int64_t)il2cpp_codegen_add(L_78, L_82))));
		// b7 -= kw[dm9 + 8] + (uint)d + 1;
		uint64_t L_83 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = V_0;
		int32_t L_85 = V_13;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 8));
		int64_t L_87 = (int64_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_87, ((int64_t)(uint64_t)((uint32_t)L_88)))), ((int64_t)1)))));
		// b1 = XorRotr(b1, ROTATION_7_0, b6);
		uint64_t L_89 = V_5;
		uint64_t L_90 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_91;
		L_91 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_89, 8, L_90, NULL);
		V_5 = L_91;
		// b6 -= b1;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_92, (int64_t)L_93));
		// b7 = XorRotr(b7, ROTATION_7_1, b0);
		uint64_t L_94 = V_11;
		uint64_t L_95 = V_4;
		uint64_t L_96;
		L_96 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_94, ((int32_t)35), L_95, NULL);
		V_11 = L_96;
		// b0 -= b7;
		uint64_t L_97 = V_4;
		uint64_t L_98 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, (int64_t)L_98));
		// b5 = XorRotr(b5, ROTATION_7_2, b2);
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_6;
		uint64_t L_101;
		L_101 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_99, ((int32_t)56), L_100, NULL);
		V_9 = L_101;
		// b2 -= b5;
		uint64_t L_102 = V_6;
		uint64_t L_103 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, (int64_t)L_103));
		// b3 = XorRotr(b3, ROTATION_7_3, b4);
		uint64_t L_104 = V_7;
		uint64_t L_105 = V_8;
		uint64_t L_106;
		L_106 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_104, ((int32_t)22), L_105, NULL);
		V_7 = L_106;
		// b4 -= b3;
		uint64_t L_107 = V_8;
		uint64_t L_108 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_107, (int64_t)L_108));
		// b1 = XorRotr(b1, ROTATION_6_0, b4);
		uint64_t L_109 = V_5;
		uint64_t L_110 = V_8;
		uint64_t L_111;
		L_111 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_109, ((int32_t)25), L_110, NULL);
		V_5 = L_111;
		// b4 -= b1;
		uint64_t L_112 = V_8;
		uint64_t L_113 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_112, (int64_t)L_113));
		// b3 = XorRotr(b3, ROTATION_6_1, b6);
		uint64_t L_114 = V_7;
		uint64_t L_115 = V_10;
		uint64_t L_116;
		L_116 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_114, ((int32_t)29), L_115, NULL);
		V_7 = L_116;
		// b6 -= b3;
		uint64_t L_117 = V_10;
		uint64_t L_118 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_117, (int64_t)L_118));
		// b5 = XorRotr(b5, ROTATION_6_2, b0);
		uint64_t L_119 = V_9;
		uint64_t L_120 = V_4;
		uint64_t L_121;
		L_121 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_119, ((int32_t)39), L_120, NULL);
		V_9 = L_121;
		// b0 -= b5;
		uint64_t L_122 = V_4;
		uint64_t L_123 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_122, (int64_t)L_123));
		// b7 = XorRotr(b7, ROTATION_6_3, b2);
		uint64_t L_124 = V_11;
		uint64_t L_125 = V_6;
		uint64_t L_126;
		L_126 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_124, ((int32_t)43), L_125, NULL);
		V_11 = L_126;
		// b2 -= b7;
		uint64_t L_127 = V_6;
		uint64_t L_128 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_127, (int64_t)L_128));
		// b1 = XorRotr(b1, ROTATION_5_0, b2);
		uint64_t L_129 = V_5;
		uint64_t L_130 = V_6;
		uint64_t L_131;
		L_131 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_129, ((int32_t)13), L_130, NULL);
		V_5 = L_131;
		// b2 -= b1;
		uint64_t L_132 = V_6;
		uint64_t L_133 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_132, (int64_t)L_133));
		// b7 = XorRotr(b7, ROTATION_5_1, b4);
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_8;
		uint64_t L_136;
		L_136 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_134, ((int32_t)50), L_135, NULL);
		V_11 = L_136;
		// b4 -= b7;
		uint64_t L_137 = V_8;
		uint64_t L_138 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_137, (int64_t)L_138));
		// b5 = XorRotr(b5, ROTATION_5_2, b6);
		uint64_t L_139 = V_9;
		uint64_t L_140 = V_10;
		uint64_t L_141;
		L_141 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_139, ((int32_t)10), L_140, NULL);
		V_9 = L_141;
		// b6 -= b5;
		uint64_t L_142 = V_10;
		uint64_t L_143 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_142, (int64_t)L_143));
		// b3 = XorRotr(b3, ROTATION_5_3, b0);
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_4;
		uint64_t L_146;
		L_146 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_144, ((int32_t)17), L_145, NULL);
		V_7 = L_146;
		// b0 -= b3;
		uint64_t L_147 = V_4;
		uint64_t L_148 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, (int64_t)L_148));
		// b1 = XorRotr(b1, ROTATION_4_0, b0);
		uint64_t L_149 = V_5;
		uint64_t L_150 = V_4;
		uint64_t L_151;
		L_151 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_149, ((int32_t)39), L_150, NULL);
		V_5 = L_151;
		// b0 -= b1;
		uint64_t L_152 = V_4;
		uint64_t L_153 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_152, (int64_t)L_153));
		// b3 = XorRotr(b3, ROTATION_4_1, b2);
		uint64_t L_154 = V_7;
		uint64_t L_155 = V_6;
		uint64_t L_156;
		L_156 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_154, ((int32_t)30), L_155, NULL);
		V_7 = L_156;
		// b2 -= b3;
		uint64_t L_157 = V_6;
		uint64_t L_158 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_157, (int64_t)L_158));
		// b5 = XorRotr(b5, ROTATION_4_2, b4);
		uint64_t L_159 = V_9;
		uint64_t L_160 = V_8;
		uint64_t L_161;
		L_161 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_159, ((int32_t)34), L_160, NULL);
		V_9 = L_161;
		// b4 -= b5;
		uint64_t L_162 = V_8;
		uint64_t L_163 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_162, (int64_t)L_163));
		// b7 = XorRotr(b7, ROTATION_4_3, b6);
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_10;
		uint64_t L_166;
		L_166 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_164, ((int32_t)24), L_165, NULL);
		V_11 = L_166;
		// b6 -= b7;
		uint64_t L_167 = V_10;
		uint64_t L_168 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_167, (int64_t)L_168));
		// b0 -= kw[dm9];
		uint64_t L_169 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = V_0;
		int32_t L_171 = V_13;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		int64_t L_173 = (int64_t)(L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_169, L_173));
		// b1 -= kw[dm9 + 1];
		uint64_t L_174 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_175 = V_0;
		int32_t L_176 = V_13;
		NullCheck(L_175);
		int32_t L_177 = ((int32_t)il2cpp_codegen_add(L_176, 1));
		int64_t L_178 = (int64_t)(L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_174, L_178));
		// b2 -= kw[dm9 + 2];
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		int32_t L_181 = V_13;
		NullCheck(L_180);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(L_181, 2));
		int64_t L_183 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, L_183));
		// b3 -= kw[dm9 + 3];
		uint64_t L_184 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = V_0;
		int32_t L_186 = V_13;
		NullCheck(L_185);
		int32_t L_187 = ((int32_t)il2cpp_codegen_add(L_186, 3));
		int64_t L_188 = (int64_t)(L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_184, L_188));
		// b4 -= kw[dm9 + 4];
		uint64_t L_189 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = V_0;
		int32_t L_191 = V_13;
		NullCheck(L_190);
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 4));
		int64_t L_193 = (int64_t)(L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_189, L_193));
		// b5 -= kw[dm9 + 5] + t[dm3];
		uint64_t L_194 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = V_0;
		int32_t L_196 = V_13;
		NullCheck(L_195);
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, 5));
		int64_t L_198 = (int64_t)(L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_199 = V_1;
		int32_t L_200 = V_14;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		int64_t L_202 = (int64_t)(L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_194, ((int64_t)il2cpp_codegen_add(L_198, L_202))));
		// b6 -= kw[dm9 + 6] + t[dm3 + 1];
		uint64_t L_203 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = V_0;
		int32_t L_205 = V_13;
		NullCheck(L_204);
		int32_t L_206 = ((int32_t)il2cpp_codegen_add(L_205, 6));
		int64_t L_207 = (int64_t)(L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_208 = V_1;
		int32_t L_209 = V_14;
		NullCheck(L_208);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		int64_t L_211 = (int64_t)(L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_203, ((int64_t)il2cpp_codegen_add(L_207, L_211))));
		// b7 -= kw[dm9 + 7] + (uint)d;
		uint64_t L_212 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = V_0;
		int32_t L_214 = V_13;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 7));
		int64_t L_216 = (int64_t)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_212, ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(uint64_t)((uint32_t)L_217))))));
		// b1 = XorRotr(b1, ROTATION_3_0, b6);
		uint64_t L_218 = V_5;
		uint64_t L_219 = V_10;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_218, ((int32_t)44), L_219, NULL);
		V_5 = L_220;
		// b6 -= b1;
		uint64_t L_221 = V_10;
		uint64_t L_222 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		// b7 = XorRotr(b7, ROTATION_3_1, b0);
		uint64_t L_223 = V_11;
		uint64_t L_224 = V_4;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_223, ((int32_t)9), L_224, NULL);
		V_11 = L_225;
		// b0 -= b7;
		uint64_t L_226 = V_4;
		uint64_t L_227 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		// b5 = XorRotr(b5, ROTATION_3_2, b2);
		uint64_t L_228 = V_9;
		uint64_t L_229 = V_6;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_228, ((int32_t)54), L_229, NULL);
		V_9 = L_230;
		// b2 -= b5;
		uint64_t L_231 = V_6;
		uint64_t L_232 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		// b3 = XorRotr(b3, ROTATION_3_3, b4);
		uint64_t L_233 = V_7;
		uint64_t L_234 = V_8;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_233, ((int32_t)56), L_234, NULL);
		V_7 = L_235;
		// b4 -= b3;
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		// b1 = XorRotr(b1, ROTATION_2_0, b4);
		uint64_t L_238 = V_5;
		uint64_t L_239 = V_8;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_238, ((int32_t)17), L_239, NULL);
		V_5 = L_240;
		// b4 -= b1;
		uint64_t L_241 = V_8;
		uint64_t L_242 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		// b3 = XorRotr(b3, ROTATION_2_1, b6);
		uint64_t L_243 = V_7;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_243, ((int32_t)49), L_244, NULL);
		V_7 = L_245;
		// b6 -= b3;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		// b5 = XorRotr(b5, ROTATION_2_2, b0);
		uint64_t L_248 = V_9;
		uint64_t L_249 = V_4;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_248, ((int32_t)36), L_249, NULL);
		V_9 = L_250;
		// b0 -= b5;
		uint64_t L_251 = V_4;
		uint64_t L_252 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		// b7 = XorRotr(b7, ROTATION_2_3, b2);
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_6;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_253, ((int32_t)39), L_254, NULL);
		V_11 = L_255;
		// b2 -= b7;
		uint64_t L_256 = V_6;
		uint64_t L_257 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		// b1 = XorRotr(b1, ROTATION_1_0, b2);
		uint64_t L_258 = V_5;
		uint64_t L_259 = V_6;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_258, ((int32_t)33), L_259, NULL);
		V_5 = L_260;
		// b2 -= b1;
		uint64_t L_261 = V_6;
		uint64_t L_262 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		// b7 = XorRotr(b7, ROTATION_1_1, b4);
		uint64_t L_263 = V_11;
		uint64_t L_264 = V_8;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_263, ((int32_t)27), L_264, NULL);
		V_11 = L_265;
		// b4 -= b7;
		uint64_t L_266 = V_8;
		uint64_t L_267 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		// b5 = XorRotr(b5, ROTATION_1_2, b6);
		uint64_t L_268 = V_9;
		uint64_t L_269 = V_10;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_268, ((int32_t)14), L_269, NULL);
		V_9 = L_270;
		// b6 -= b5;
		uint64_t L_271 = V_10;
		uint64_t L_272 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		// b3 = XorRotr(b3, ROTATION_1_3, b0);
		uint64_t L_273 = V_7;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_273, ((int32_t)42), L_274, NULL);
		V_7 = L_275;
		// b0 -= b3;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		// b1 = XorRotr(b1, ROTATION_0_0, b0);
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_4;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_278, ((int32_t)46), L_279, NULL);
		V_5 = L_280;
		// b0 -= b1;
		uint64_t L_281 = V_4;
		uint64_t L_282 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		// b3 = XorRotr(b3, ROTATION_0_1, b2);
		uint64_t L_283 = V_7;
		uint64_t L_284 = V_6;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_283, ((int32_t)36), L_284, NULL);
		V_7 = L_285;
		// b2 -= b3;
		uint64_t L_286 = V_6;
		uint64_t L_287 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		// b5 = XorRotr(b5, ROTATION_0_2, b4);
		uint64_t L_288 = V_9;
		uint64_t L_289 = V_8;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_288, ((int32_t)19), L_289, NULL);
		V_9 = L_290;
		// b4 -= b5;
		uint64_t L_291 = V_8;
		uint64_t L_292 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		// b7 = XorRotr(b7, ROTATION_0_3, b6);
		uint64_t L_293 = V_11;
		uint64_t L_294 = V_10;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_293, ((int32_t)37), L_294, NULL);
		V_11 = L_295;
		// b6 -= b7;
		uint64_t L_296 = V_10;
		uint64_t L_297 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		// for (int d = (ROUNDS_512 / 4) - 1; d >= 1; d -= 2)
		int32_t L_298 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_298, 2));
	}

IL_03c8:
	{
		// for (int d = (ROUNDS_512 / 4) - 1; d >= 1; d -= 2)
		int32_t L_299 = V_12;
		if ((((int32_t)L_299) >= ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		// b0 -= kw[0];
		uint64_t L_300 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_301 = V_0;
		NullCheck(L_301);
		int32_t L_302 = 0;
		int64_t L_303 = (int64_t)(L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_300, L_303));
		// b1 -= kw[1];
		uint64_t L_304 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		NullCheck(L_305);
		int32_t L_306 = 1;
		int64_t L_307 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_304, L_307));
		// b2 -= kw[2];
		uint64_t L_308 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = V_0;
		NullCheck(L_309);
		int32_t L_310 = 2;
		int64_t L_311 = (int64_t)(L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_308, L_311));
		// b3 -= kw[3];
		uint64_t L_312 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		NullCheck(L_313);
		int32_t L_314 = 3;
		int64_t L_315 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_312, L_315));
		// b4 -= kw[4];
		uint64_t L_316 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_0;
		NullCheck(L_317);
		int32_t L_318 = 4;
		int64_t L_319 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_316, L_319));
		// b5 -= kw[5] + t[0];
		uint64_t L_320 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_321 = V_0;
		NullCheck(L_321);
		int32_t L_322 = 5;
		int64_t L_323 = (int64_t)(L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_1;
		NullCheck(L_324);
		int32_t L_325 = 0;
		int64_t L_326 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_320, ((int64_t)il2cpp_codegen_add(L_323, L_326))));
		// b6 -= kw[6] + t[1];
		uint64_t L_327 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_328 = V_0;
		NullCheck(L_328);
		int32_t L_329 = 6;
		int64_t L_330 = (int64_t)(L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_1;
		NullCheck(L_331);
		int32_t L_332 = 1;
		int64_t L_333 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_327, ((int64_t)il2cpp_codegen_add(L_330, L_333))));
		// b7 -= kw[7];
		uint64_t L_334 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		NullCheck(L_335);
		int32_t L_336 = 7;
		int64_t L_337 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_334, L_337));
		// state[0] = b0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___1_state;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		// state[1] = b1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___1_state;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		// state[2] = b2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___1_state;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		// state[3] = b3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___1_state;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		// state[4] = b4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___1_state;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		// state[5] = b5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___1_state;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		// state[6] = b6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___1_state;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		// state[7] = b7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___1_state;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_m937D03ED4ADD92C0FFFAA69B1C932075428F4B50 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		// : base(kw, t)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		// ulong[] kw = this.kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw_1;
		V_0 = L_0;
		// ulong[] t = this.t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t_0;
		V_1 = L_1;
		// int[] mod17 = MOD17;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		// int[] mod3 = MOD3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		// if (kw.Length != 33)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (t.Length != 5)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733_RuntimeMethod_var)));
	}

IL_0033:
	{
		// ulong b0 = block[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// ulong b1 = block[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// ulong b2 = block[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// ulong b3 = block[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// ulong b4 = block[4];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		// ulong b5 = block[5];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		// ulong b6 = block[6];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		// ulong b7 = block[7];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		// ulong b8 = block[8];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_block;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		// ulong b9 = block[9];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___0_block;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		// ulong b10 = block[10];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_block;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		// ulong b11 = block[11];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___0_block;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		// ulong b12 = block[12];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_block;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		// ulong b13 = block[13];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___0_block;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		// ulong b14 = block[14];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_block;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		// ulong b15 = block[15];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_block;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		// b0 += kw[0];
		uint64_t L_56 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 0;
		int64_t L_59 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, L_59));
		// b1 += kw[1];
		uint64_t L_60 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 1;
		int64_t L_63 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, L_63));
		// b2 += kw[2];
		uint64_t L_64 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 2;
		int64_t L_67 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, L_67));
		// b3 += kw[3];
		uint64_t L_68 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = 3;
		int64_t L_71 = (int64_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, L_71));
		// b4 += kw[4];
		uint64_t L_72 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int64_t L_75 = (int64_t)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, L_75));
		// b5 += kw[5];
		uint64_t L_76 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = 5;
		int64_t L_79 = (int64_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, L_79));
		// b6 += kw[6];
		uint64_t L_80 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 6;
		int64_t L_83 = (int64_t)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, L_83));
		// b7 += kw[7];
		uint64_t L_84 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 7;
		int64_t L_87 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, L_87));
		// b8 += kw[8];
		uint64_t L_88 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 8;
		int64_t L_91 = (int64_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, L_91));
		// b9 += kw[9];
		uint64_t L_92 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)9);
		int64_t L_95 = (int64_t)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, L_95));
		// b10 += kw[10];
		uint64_t L_96 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)10);
		int64_t L_99 = (int64_t)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_99));
		// b11 += kw[11];
		uint64_t L_100 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)11);
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, L_103));
		// b12 += kw[12];
		uint64_t L_104 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = ((int32_t)12);
		int64_t L_107 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, L_107));
		// b13 += kw[13] + t[0];
		uint64_t L_108 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_0;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)13);
		int64_t L_111 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_1;
		NullCheck(L_112);
		int32_t L_113 = 0;
		int64_t L_114 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(L_111, L_114))));
		// b14 += kw[14] + t[1];
		uint64_t L_115 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_0;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)14);
		int64_t L_118 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = V_1;
		NullCheck(L_119);
		int32_t L_120 = 1;
		int64_t L_121 = (int64_t)(L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_add(L_118, L_121))));
		// b15 += kw[15];
		uint64_t L_122 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124 = ((int32_t)15);
		int64_t L_125 = (int64_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, L_125));
		// for (int d = 1; d < (ROUNDS_1024 / 4); d += 2)
		V_20 = 1;
		goto IL_0780;
	}

IL_0121:
	{
		// int dm17 = mod17[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_2;
		int32_t L_127 = V_20;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_21 = L_129;
		// int dm3 = mod3[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_3;
		int32_t L_131 = V_20;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		int32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_22 = L_133;
		// b1 = RotlXor(b1, ROTATION_0_0, b0 += b1);
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_4;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_4 = L_137;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_134, ((int32_t)24), L_137, NULL);
		V_5 = L_138;
		// b3 = RotlXor(b3, ROTATION_0_1, b2 += b3);
		uint64_t L_139 = V_7;
		uint64_t L_140 = V_6;
		uint64_t L_141 = V_7;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_6 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_139, ((int32_t)13), L_142, NULL);
		V_7 = L_143;
		// b5 = RotlXor(b5, ROTATION_0_2, b4 += b5);
		uint64_t L_144 = V_9;
		uint64_t L_145 = V_8;
		uint64_t L_146 = V_9;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_8 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_144, 8, L_147, NULL);
		V_9 = L_148;
		// b7 = RotlXor(b7, ROTATION_0_3, b6 += b7);
		uint64_t L_149 = V_11;
		uint64_t L_150 = V_10;
		uint64_t L_151 = V_11;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_10 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_149, ((int32_t)47), L_152, NULL);
		V_11 = L_153;
		// b9 = RotlXor(b9, ROTATION_0_4, b8 += b9);
		uint64_t L_154 = V_13;
		uint64_t L_155 = V_12;
		uint64_t L_156 = V_13;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_12 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_154, 8, L_157, NULL);
		V_13 = L_158;
		// b11 = RotlXor(b11, ROTATION_0_5, b10 += b11);
		uint64_t L_159 = V_15;
		uint64_t L_160 = V_14;
		uint64_t L_161 = V_15;
		int64_t L_162 = ((int64_t)il2cpp_codegen_add((int64_t)L_160, (int64_t)L_161));
		V_14 = L_162;
		uint64_t L_163;
		L_163 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_159, ((int32_t)17), L_162, NULL);
		V_15 = L_163;
		// b13 = RotlXor(b13, ROTATION_0_6, b12 += b13);
		uint64_t L_164 = V_17;
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_17;
		int64_t L_167 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		V_16 = L_167;
		uint64_t L_168;
		L_168 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_164, ((int32_t)22), L_167, NULL);
		V_17 = L_168;
		// b15 = RotlXor(b15, ROTATION_0_7, b14 += b15);
		uint64_t L_169 = V_19;
		uint64_t L_170 = V_18;
		uint64_t L_171 = V_19;
		int64_t L_172 = ((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)L_171));
		V_18 = L_172;
		uint64_t L_173;
		L_173 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_169, ((int32_t)37), L_172, NULL);
		V_19 = L_173;
		// b9 = RotlXor(b9, ROTATION_1_0, b0 += b9);
		uint64_t L_174 = V_13;
		uint64_t L_175 = V_4;
		uint64_t L_176 = V_13;
		int64_t L_177 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_176));
		V_4 = L_177;
		uint64_t L_178;
		L_178 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_174, ((int32_t)38), L_177, NULL);
		V_13 = L_178;
		// b13 = RotlXor(b13, ROTATION_1_1, b2 += b13);
		uint64_t L_179 = V_17;
		uint64_t L_180 = V_6;
		uint64_t L_181 = V_17;
		int64_t L_182 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, (int64_t)L_181));
		V_6 = L_182;
		uint64_t L_183;
		L_183 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_179, ((int32_t)19), L_182, NULL);
		V_17 = L_183;
		// b11 = RotlXor(b11, ROTATION_1_2, b6 += b11);
		uint64_t L_184 = V_15;
		uint64_t L_185 = V_10;
		uint64_t L_186 = V_15;
		int64_t L_187 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, (int64_t)L_186));
		V_10 = L_187;
		uint64_t L_188;
		L_188 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_184, ((int32_t)10), L_187, NULL);
		V_15 = L_188;
		// b15 = RotlXor(b15, ROTATION_1_3, b4 += b15);
		uint64_t L_189 = V_19;
		uint64_t L_190 = V_8;
		uint64_t L_191 = V_19;
		int64_t L_192 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		V_8 = L_192;
		uint64_t L_193;
		L_193 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_189, ((int32_t)55), L_192, NULL);
		V_19 = L_193;
		// b7 = RotlXor(b7, ROTATION_1_4, b10 += b7);
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_11;
		int64_t L_197 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, (int64_t)L_196));
		V_14 = L_197;
		uint64_t L_198;
		L_198 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_194, ((int32_t)49), L_197, NULL);
		V_11 = L_198;
		// b3 = RotlXor(b3, ROTATION_1_5, b12 += b3);
		uint64_t L_199 = V_7;
		uint64_t L_200 = V_16;
		uint64_t L_201 = V_7;
		int64_t L_202 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_201));
		V_16 = L_202;
		uint64_t L_203;
		L_203 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_199, ((int32_t)18), L_202, NULL);
		V_7 = L_203;
		// b5 = RotlXor(b5, ROTATION_1_6, b14 += b5);
		uint64_t L_204 = V_9;
		uint64_t L_205 = V_18;
		uint64_t L_206 = V_9;
		int64_t L_207 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, (int64_t)L_206));
		V_18 = L_207;
		uint64_t L_208;
		L_208 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_204, ((int32_t)23), L_207, NULL);
		V_9 = L_208;
		// b1 = RotlXor(b1, ROTATION_1_7, b8 += b1);
		uint64_t L_209 = V_5;
		uint64_t L_210 = V_12;
		uint64_t L_211 = V_5;
		int64_t L_212 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, (int64_t)L_211));
		V_12 = L_212;
		uint64_t L_213;
		L_213 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_209, ((int32_t)52), L_212, NULL);
		V_5 = L_213;
		// b7 = RotlXor(b7, ROTATION_2_0, b0 += b7);
		uint64_t L_214 = V_11;
		uint64_t L_215 = V_4;
		uint64_t L_216 = V_11;
		int64_t L_217 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		V_4 = L_217;
		uint64_t L_218;
		L_218 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_214, ((int32_t)33), L_217, NULL);
		V_11 = L_218;
		// b5 = RotlXor(b5, ROTATION_2_1, b2 += b5);
		uint64_t L_219 = V_9;
		uint64_t L_220 = V_6;
		uint64_t L_221 = V_9;
		int64_t L_222 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, (int64_t)L_221));
		V_6 = L_222;
		uint64_t L_223;
		L_223 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_219, 4, L_222, NULL);
		V_9 = L_223;
		// b3 = RotlXor(b3, ROTATION_2_2, b4 += b3);
		uint64_t L_224 = V_7;
		uint64_t L_225 = V_8;
		uint64_t L_226 = V_7;
		int64_t L_227 = ((int64_t)il2cpp_codegen_add((int64_t)L_225, (int64_t)L_226));
		V_8 = L_227;
		uint64_t L_228;
		L_228 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_224, ((int32_t)51), L_227, NULL);
		V_7 = L_228;
		// b1 = RotlXor(b1, ROTATION_2_3, b6 += b1);
		uint64_t L_229 = V_5;
		uint64_t L_230 = V_10;
		uint64_t L_231 = V_5;
		int64_t L_232 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)L_231));
		V_10 = L_232;
		uint64_t L_233;
		L_233 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_229, ((int32_t)13), L_232, NULL);
		V_5 = L_233;
		// b15 = RotlXor(b15, ROTATION_2_4, b12 += b15);
		uint64_t L_234 = V_19;
		uint64_t L_235 = V_16;
		uint64_t L_236 = V_19;
		int64_t L_237 = ((int64_t)il2cpp_codegen_add((int64_t)L_235, (int64_t)L_236));
		V_16 = L_237;
		uint64_t L_238;
		L_238 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_234, ((int32_t)34), L_237, NULL);
		V_19 = L_238;
		// b13 = RotlXor(b13, ROTATION_2_5, b14 += b13);
		uint64_t L_239 = V_17;
		uint64_t L_240 = V_18;
		uint64_t L_241 = V_17;
		int64_t L_242 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241));
		V_18 = L_242;
		uint64_t L_243;
		L_243 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_239, ((int32_t)41), L_242, NULL);
		V_17 = L_243;
		// b11 = RotlXor(b11, ROTATION_2_6, b8 += b11);
		uint64_t L_244 = V_15;
		uint64_t L_245 = V_12;
		uint64_t L_246 = V_15;
		int64_t L_247 = ((int64_t)il2cpp_codegen_add((int64_t)L_245, (int64_t)L_246));
		V_12 = L_247;
		uint64_t L_248;
		L_248 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_244, ((int32_t)59), L_247, NULL);
		V_15 = L_248;
		// b9 = RotlXor(b9, ROTATION_2_7, b10 += b9);
		uint64_t L_249 = V_13;
		uint64_t L_250 = V_14;
		uint64_t L_251 = V_13;
		int64_t L_252 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, (int64_t)L_251));
		V_14 = L_252;
		uint64_t L_253;
		L_253 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_249, ((int32_t)17), L_252, NULL);
		V_13 = L_253;
		// b15 = RotlXor(b15, ROTATION_3_0, b0 += b15);
		uint64_t L_254 = V_19;
		uint64_t L_255 = V_4;
		uint64_t L_256 = V_19;
		int64_t L_257 = ((int64_t)il2cpp_codegen_add((int64_t)L_255, (int64_t)L_256));
		V_4 = L_257;
		uint64_t L_258;
		L_258 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_254, 5, L_257, NULL);
		V_19 = L_258;
		// b11 = RotlXor(b11, ROTATION_3_1, b2 += b11);
		uint64_t L_259 = V_15;
		uint64_t L_260 = V_6;
		uint64_t L_261 = V_15;
		int64_t L_262 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, (int64_t)L_261));
		V_6 = L_262;
		uint64_t L_263;
		L_263 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_259, ((int32_t)20), L_262, NULL);
		V_15 = L_263;
		// b13 = RotlXor(b13, ROTATION_3_2, b6 += b13);
		uint64_t L_264 = V_17;
		uint64_t L_265 = V_10;
		uint64_t L_266 = V_17;
		int64_t L_267 = ((int64_t)il2cpp_codegen_add((int64_t)L_265, (int64_t)L_266));
		V_10 = L_267;
		uint64_t L_268;
		L_268 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_264, ((int32_t)48), L_267, NULL);
		V_17 = L_268;
		// b9 = RotlXor(b9, ROTATION_3_3, b4 += b9);
		uint64_t L_269 = V_13;
		uint64_t L_270 = V_8;
		uint64_t L_271 = V_13;
		int64_t L_272 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, (int64_t)L_271));
		V_8 = L_272;
		uint64_t L_273;
		L_273 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_269, ((int32_t)41), L_272, NULL);
		V_13 = L_273;
		// b1 = RotlXor(b1, ROTATION_3_4, b14 += b1);
		uint64_t L_274 = V_5;
		uint64_t L_275 = V_18;
		uint64_t L_276 = V_5;
		int64_t L_277 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, (int64_t)L_276));
		V_18 = L_277;
		uint64_t L_278;
		L_278 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_274, ((int32_t)47), L_277, NULL);
		V_5 = L_278;
		// b5 = RotlXor(b5, ROTATION_3_5, b8 += b5);
		uint64_t L_279 = V_9;
		uint64_t L_280 = V_12;
		uint64_t L_281 = V_9;
		int64_t L_282 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, (int64_t)L_281));
		V_12 = L_282;
		uint64_t L_283;
		L_283 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_279, ((int32_t)28), L_282, NULL);
		V_9 = L_283;
		// b3 = RotlXor(b3, ROTATION_3_6, b10 += b3);
		uint64_t L_284 = V_7;
		uint64_t L_285 = V_14;
		uint64_t L_286 = V_7;
		int64_t L_287 = ((int64_t)il2cpp_codegen_add((int64_t)L_285, (int64_t)L_286));
		V_14 = L_287;
		uint64_t L_288;
		L_288 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_284, ((int32_t)16), L_287, NULL);
		V_7 = L_288;
		// b7 = RotlXor(b7, ROTATION_3_7, b12 += b7);
		uint64_t L_289 = V_11;
		uint64_t L_290 = V_16;
		uint64_t L_291 = V_11;
		int64_t L_292 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)L_291));
		V_16 = L_292;
		uint64_t L_293;
		L_293 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_289, ((int32_t)25), L_292, NULL);
		V_11 = L_293;
		// b0 += kw[dm17];
		uint64_t L_294 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_295 = V_0;
		int32_t L_296 = V_21;
		NullCheck(L_295);
		int32_t L_297 = L_296;
		int64_t L_298 = (int64_t)(L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, L_298));
		// b1 += kw[dm17 + 1];
		uint64_t L_299 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_300 = V_0;
		int32_t L_301 = V_21;
		NullCheck(L_300);
		int32_t L_302 = ((int32_t)il2cpp_codegen_add(L_301, 1));
		int64_t L_303 = (int64_t)(L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_299, L_303));
		// b2 += kw[dm17 + 2];
		uint64_t L_304 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		int32_t L_306 = V_21;
		NullCheck(L_305);
		int32_t L_307 = ((int32_t)il2cpp_codegen_add(L_306, 2));
		int64_t L_308 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, L_308));
		// b3 += kw[dm17 + 3];
		uint64_t L_309 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_310 = V_0;
		int32_t L_311 = V_21;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 3));
		int64_t L_313 = (int64_t)(L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_309, L_313));
		// b4 += kw[dm17 + 4];
		uint64_t L_314 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_315 = V_0;
		int32_t L_316 = V_21;
		NullCheck(L_315);
		int32_t L_317 = ((int32_t)il2cpp_codegen_add(L_316, 4));
		int64_t L_318 = (int64_t)(L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, L_318));
		// b5 += kw[dm17 + 5];
		uint64_t L_319 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_320 = V_0;
		int32_t L_321 = V_21;
		NullCheck(L_320);
		int32_t L_322 = ((int32_t)il2cpp_codegen_add(L_321, 5));
		int64_t L_323 = (int64_t)(L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_319, L_323));
		// b6 += kw[dm17 + 6];
		uint64_t L_324 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_325 = V_0;
		int32_t L_326 = V_21;
		NullCheck(L_325);
		int32_t L_327 = ((int32_t)il2cpp_codegen_add(L_326, 6));
		int64_t L_328 = (int64_t)(L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, L_328));
		// b7 += kw[dm17 + 7];
		uint64_t L_329 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_330 = V_0;
		int32_t L_331 = V_21;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)il2cpp_codegen_add(L_331, 7));
		int64_t L_333 = (int64_t)(L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, L_333));
		// b8 += kw[dm17 + 8];
		uint64_t L_334 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		int32_t L_336 = V_21;
		NullCheck(L_335);
		int32_t L_337 = ((int32_t)il2cpp_codegen_add(L_336, 8));
		int64_t L_338 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_334, L_338));
		// b9 += kw[dm17 + 9];
		uint64_t L_339 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = V_0;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		int32_t L_342 = ((int32_t)il2cpp_codegen_add(L_341, ((int32_t)9)));
		int64_t L_343 = (int64_t)(L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_339, L_343));
		// b10 += kw[dm17 + 10];
		uint64_t L_344 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = V_0;
		int32_t L_346 = V_21;
		NullCheck(L_345);
		int32_t L_347 = ((int32_t)il2cpp_codegen_add(L_346, ((int32_t)10)));
		int64_t L_348 = (int64_t)(L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, L_348));
		// b11 += kw[dm17 + 11];
		uint64_t L_349 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = V_0;
		int32_t L_351 = V_21;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_add(L_351, ((int32_t)11)));
		int64_t L_353 = (int64_t)(L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_349, L_353));
		// b12 += kw[dm17 + 12];
		uint64_t L_354 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = V_0;
		int32_t L_356 = V_21;
		NullCheck(L_355);
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, ((int32_t)12)));
		int64_t L_358 = (int64_t)(L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, L_358));
		// b13 += kw[dm17 + 13] + t[dm3];
		uint64_t L_359 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_360 = V_0;
		int32_t L_361 = V_21;
		NullCheck(L_360);
		int32_t L_362 = ((int32_t)il2cpp_codegen_add(L_361, ((int32_t)13)));
		int64_t L_363 = (int64_t)(L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_1;
		int32_t L_365 = V_22;
		NullCheck(L_364);
		int32_t L_366 = L_365;
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_add(L_363, L_367))));
		// b14 += kw[dm17 + 14] + t[dm3 + 1];
		uint64_t L_368 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)14)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_373 = V_1;
		int32_t L_374 = V_22;
		NullCheck(L_373);
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 1));
		int64_t L_376 = (int64_t)(L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_add(L_372, L_376))));
		// b15 += kw[dm17 + 15] + (uint)d;
		uint64_t L_377 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_378 = V_0;
		int32_t L_379 = V_21;
		NullCheck(L_378);
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, ((int32_t)15)));
		int64_t L_381 = (int64_t)(L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		int32_t L_382 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_add(L_381, ((int64_t)(uint64_t)((uint32_t)L_382))))));
		// b1 = RotlXor(b1, ROTATION_4_0, b0 += b1);
		uint64_t L_383 = V_5;
		uint64_t L_384 = V_4;
		uint64_t L_385 = V_5;
		int64_t L_386 = ((int64_t)il2cpp_codegen_add((int64_t)L_384, (int64_t)L_385));
		V_4 = L_386;
		uint64_t L_387;
		L_387 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_383, ((int32_t)41), L_386, NULL);
		V_5 = L_387;
		// b3 = RotlXor(b3, ROTATION_4_1, b2 += b3);
		uint64_t L_388 = V_7;
		uint64_t L_389 = V_6;
		uint64_t L_390 = V_7;
		int64_t L_391 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, (int64_t)L_390));
		V_6 = L_391;
		uint64_t L_392;
		L_392 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_388, ((int32_t)9), L_391, NULL);
		V_7 = L_392;
		// b5 = RotlXor(b5, ROTATION_4_2, b4 += b5);
		uint64_t L_393 = V_9;
		uint64_t L_394 = V_8;
		uint64_t L_395 = V_9;
		int64_t L_396 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, (int64_t)L_395));
		V_8 = L_396;
		uint64_t L_397;
		L_397 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_393, ((int32_t)37), L_396, NULL);
		V_9 = L_397;
		// b7 = RotlXor(b7, ROTATION_4_3, b6 += b7);
		uint64_t L_398 = V_11;
		uint64_t L_399 = V_10;
		uint64_t L_400 = V_11;
		int64_t L_401 = ((int64_t)il2cpp_codegen_add((int64_t)L_399, (int64_t)L_400));
		V_10 = L_401;
		uint64_t L_402;
		L_402 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_398, ((int32_t)31), L_401, NULL);
		V_11 = L_402;
		// b9 = RotlXor(b9, ROTATION_4_4, b8 += b9);
		uint64_t L_403 = V_13;
		uint64_t L_404 = V_12;
		uint64_t L_405 = V_13;
		int64_t L_406 = ((int64_t)il2cpp_codegen_add((int64_t)L_404, (int64_t)L_405));
		V_12 = L_406;
		uint64_t L_407;
		L_407 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_403, ((int32_t)12), L_406, NULL);
		V_13 = L_407;
		// b11 = RotlXor(b11, ROTATION_4_5, b10 += b11);
		uint64_t L_408 = V_15;
		uint64_t L_409 = V_14;
		uint64_t L_410 = V_15;
		int64_t L_411 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)L_410));
		V_14 = L_411;
		uint64_t L_412;
		L_412 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_408, ((int32_t)47), L_411, NULL);
		V_15 = L_412;
		// b13 = RotlXor(b13, ROTATION_4_6, b12 += b13);
		uint64_t L_413 = V_17;
		uint64_t L_414 = V_16;
		uint64_t L_415 = V_17;
		int64_t L_416 = ((int64_t)il2cpp_codegen_add((int64_t)L_414, (int64_t)L_415));
		V_16 = L_416;
		uint64_t L_417;
		L_417 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_413, ((int32_t)44), L_416, NULL);
		V_17 = L_417;
		// b15 = RotlXor(b15, ROTATION_4_7, b14 += b15);
		uint64_t L_418 = V_19;
		uint64_t L_419 = V_18;
		uint64_t L_420 = V_19;
		int64_t L_421 = ((int64_t)il2cpp_codegen_add((int64_t)L_419, (int64_t)L_420));
		V_18 = L_421;
		uint64_t L_422;
		L_422 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_418, ((int32_t)30), L_421, NULL);
		V_19 = L_422;
		// b9 = RotlXor(b9, ROTATION_5_0, b0 += b9);
		uint64_t L_423 = V_13;
		uint64_t L_424 = V_4;
		uint64_t L_425 = V_13;
		int64_t L_426 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, (int64_t)L_425));
		V_4 = L_426;
		uint64_t L_427;
		L_427 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_423, ((int32_t)16), L_426, NULL);
		V_13 = L_427;
		// b13 = RotlXor(b13, ROTATION_5_1, b2 += b13);
		uint64_t L_428 = V_17;
		uint64_t L_429 = V_6;
		uint64_t L_430 = V_17;
		int64_t L_431 = ((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)L_430));
		V_6 = L_431;
		uint64_t L_432;
		L_432 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_428, ((int32_t)34), L_431, NULL);
		V_17 = L_432;
		// b11 = RotlXor(b11, ROTATION_5_2, b6 += b11);
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_10;
		uint64_t L_435 = V_15;
		int64_t L_436 = ((int64_t)il2cpp_codegen_add((int64_t)L_434, (int64_t)L_435));
		V_10 = L_436;
		uint64_t L_437;
		L_437 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_433, ((int32_t)56), L_436, NULL);
		V_15 = L_437;
		// b15 = RotlXor(b15, ROTATION_5_3, b4 += b15);
		uint64_t L_438 = V_19;
		uint64_t L_439 = V_8;
		uint64_t L_440 = V_19;
		int64_t L_441 = ((int64_t)il2cpp_codegen_add((int64_t)L_439, (int64_t)L_440));
		V_8 = L_441;
		uint64_t L_442;
		L_442 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_438, ((int32_t)51), L_441, NULL);
		V_19 = L_442;
		// b7 = RotlXor(b7, ROTATION_5_4, b10 += b7);
		uint64_t L_443 = V_11;
		uint64_t L_444 = V_14;
		uint64_t L_445 = V_11;
		int64_t L_446 = ((int64_t)il2cpp_codegen_add((int64_t)L_444, (int64_t)L_445));
		V_14 = L_446;
		uint64_t L_447;
		L_447 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_443, 4, L_446, NULL);
		V_11 = L_447;
		// b3 = RotlXor(b3, ROTATION_5_5, b12 += b3);
		uint64_t L_448 = V_7;
		uint64_t L_449 = V_16;
		uint64_t L_450 = V_7;
		int64_t L_451 = ((int64_t)il2cpp_codegen_add((int64_t)L_449, (int64_t)L_450));
		V_16 = L_451;
		uint64_t L_452;
		L_452 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_448, ((int32_t)53), L_451, NULL);
		V_7 = L_452;
		// b5 = RotlXor(b5, ROTATION_5_6, b14 += b5);
		uint64_t L_453 = V_9;
		uint64_t L_454 = V_18;
		uint64_t L_455 = V_9;
		int64_t L_456 = ((int64_t)il2cpp_codegen_add((int64_t)L_454, (int64_t)L_455));
		V_18 = L_456;
		uint64_t L_457;
		L_457 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_453, ((int32_t)42), L_456, NULL);
		V_9 = L_457;
		// b1 = RotlXor(b1, ROTATION_5_7, b8 += b1);
		uint64_t L_458 = V_5;
		uint64_t L_459 = V_12;
		uint64_t L_460 = V_5;
		int64_t L_461 = ((int64_t)il2cpp_codegen_add((int64_t)L_459, (int64_t)L_460));
		V_12 = L_461;
		uint64_t L_462;
		L_462 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_458, ((int32_t)41), L_461, NULL);
		V_5 = L_462;
		// b7 = RotlXor(b7, ROTATION_6_0, b0 += b7);
		uint64_t L_463 = V_11;
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_11;
		int64_t L_466 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, (int64_t)L_465));
		V_4 = L_466;
		uint64_t L_467;
		L_467 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_463, ((int32_t)31), L_466, NULL);
		V_11 = L_467;
		// b5 = RotlXor(b5, ROTATION_6_1, b2 += b5);
		uint64_t L_468 = V_9;
		uint64_t L_469 = V_6;
		uint64_t L_470 = V_9;
		int64_t L_471 = ((int64_t)il2cpp_codegen_add((int64_t)L_469, (int64_t)L_470));
		V_6 = L_471;
		uint64_t L_472;
		L_472 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_468, ((int32_t)44), L_471, NULL);
		V_9 = L_472;
		// b3 = RotlXor(b3, ROTATION_6_2, b4 += b3);
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_8;
		uint64_t L_475 = V_7;
		int64_t L_476 = ((int64_t)il2cpp_codegen_add((int64_t)L_474, (int64_t)L_475));
		V_8 = L_476;
		uint64_t L_477;
		L_477 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_473, ((int32_t)47), L_476, NULL);
		V_7 = L_477;
		// b1 = RotlXor(b1, ROTATION_6_3, b6 += b1);
		uint64_t L_478 = V_5;
		uint64_t L_479 = V_10;
		uint64_t L_480 = V_5;
		int64_t L_481 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, (int64_t)L_480));
		V_10 = L_481;
		uint64_t L_482;
		L_482 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_478, ((int32_t)46), L_481, NULL);
		V_5 = L_482;
		// b15 = RotlXor(b15, ROTATION_6_4, b12 += b15);
		uint64_t L_483 = V_19;
		uint64_t L_484 = V_16;
		uint64_t L_485 = V_19;
		int64_t L_486 = ((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)L_485));
		V_16 = L_486;
		uint64_t L_487;
		L_487 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_483, ((int32_t)19), L_486, NULL);
		V_19 = L_487;
		// b13 = RotlXor(b13, ROTATION_6_5, b14 += b13);
		uint64_t L_488 = V_17;
		uint64_t L_489 = V_18;
		uint64_t L_490 = V_17;
		int64_t L_491 = ((int64_t)il2cpp_codegen_add((int64_t)L_489, (int64_t)L_490));
		V_18 = L_491;
		uint64_t L_492;
		L_492 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_488, ((int32_t)42), L_491, NULL);
		V_17 = L_492;
		// b11 = RotlXor(b11, ROTATION_6_6, b8 += b11);
		uint64_t L_493 = V_15;
		uint64_t L_494 = V_12;
		uint64_t L_495 = V_15;
		int64_t L_496 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)L_495));
		V_12 = L_496;
		uint64_t L_497;
		L_497 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_493, ((int32_t)44), L_496, NULL);
		V_15 = L_497;
		// b9 = RotlXor(b9, ROTATION_6_7, b10 += b9);
		uint64_t L_498 = V_13;
		uint64_t L_499 = V_14;
		uint64_t L_500 = V_13;
		int64_t L_501 = ((int64_t)il2cpp_codegen_add((int64_t)L_499, (int64_t)L_500));
		V_14 = L_501;
		uint64_t L_502;
		L_502 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_498, ((int32_t)25), L_501, NULL);
		V_13 = L_502;
		// b15 = RotlXor(b15, ROTATION_7_0, b0 += b15);
		uint64_t L_503 = V_19;
		uint64_t L_504 = V_4;
		uint64_t L_505 = V_19;
		int64_t L_506 = ((int64_t)il2cpp_codegen_add((int64_t)L_504, (int64_t)L_505));
		V_4 = L_506;
		uint64_t L_507;
		L_507 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_503, ((int32_t)9), L_506, NULL);
		V_19 = L_507;
		// b11 = RotlXor(b11, ROTATION_7_1, b2 += b11);
		uint64_t L_508 = V_15;
		uint64_t L_509 = V_6;
		uint64_t L_510 = V_15;
		int64_t L_511 = ((int64_t)il2cpp_codegen_add((int64_t)L_509, (int64_t)L_510));
		V_6 = L_511;
		uint64_t L_512;
		L_512 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_508, ((int32_t)48), L_511, NULL);
		V_15 = L_512;
		// b13 = RotlXor(b13, ROTATION_7_2, b6 += b13);
		uint64_t L_513 = V_17;
		uint64_t L_514 = V_10;
		uint64_t L_515 = V_17;
		int64_t L_516 = ((int64_t)il2cpp_codegen_add((int64_t)L_514, (int64_t)L_515));
		V_10 = L_516;
		uint64_t L_517;
		L_517 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_513, ((int32_t)35), L_516, NULL);
		V_17 = L_517;
		// b9 = RotlXor(b9, ROTATION_7_3, b4 += b9);
		uint64_t L_518 = V_13;
		uint64_t L_519 = V_8;
		uint64_t L_520 = V_13;
		int64_t L_521 = ((int64_t)il2cpp_codegen_add((int64_t)L_519, (int64_t)L_520));
		V_8 = L_521;
		uint64_t L_522;
		L_522 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_518, ((int32_t)52), L_521, NULL);
		V_13 = L_522;
		// b1 = RotlXor(b1, ROTATION_7_4, b14 += b1);
		uint64_t L_523 = V_5;
		uint64_t L_524 = V_18;
		uint64_t L_525 = V_5;
		int64_t L_526 = ((int64_t)il2cpp_codegen_add((int64_t)L_524, (int64_t)L_525));
		V_18 = L_526;
		uint64_t L_527;
		L_527 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_523, ((int32_t)23), L_526, NULL);
		V_5 = L_527;
		// b5 = RotlXor(b5, ROTATION_7_5, b8 += b5);
		uint64_t L_528 = V_9;
		uint64_t L_529 = V_12;
		uint64_t L_530 = V_9;
		int64_t L_531 = ((int64_t)il2cpp_codegen_add((int64_t)L_529, (int64_t)L_530));
		V_12 = L_531;
		uint64_t L_532;
		L_532 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_528, ((int32_t)31), L_531, NULL);
		V_9 = L_532;
		// b3 = RotlXor(b3, ROTATION_7_6, b10 += b3);
		uint64_t L_533 = V_7;
		uint64_t L_534 = V_14;
		uint64_t L_535 = V_7;
		int64_t L_536 = ((int64_t)il2cpp_codegen_add((int64_t)L_534, (int64_t)L_535));
		V_14 = L_536;
		uint64_t L_537;
		L_537 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_533, ((int32_t)37), L_536, NULL);
		V_7 = L_537;
		// b7 = RotlXor(b7, ROTATION_7_7, b12 += b7);
		uint64_t L_538 = V_11;
		uint64_t L_539 = V_16;
		uint64_t L_540 = V_11;
		int64_t L_541 = ((int64_t)il2cpp_codegen_add((int64_t)L_539, (int64_t)L_540));
		V_16 = L_541;
		uint64_t L_542;
		L_542 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_538, ((int32_t)20), L_541, NULL);
		V_11 = L_542;
		// b0 += kw[dm17 + 1];
		uint64_t L_543 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_544 = V_0;
		int32_t L_545 = V_21;
		NullCheck(L_544);
		int32_t L_546 = ((int32_t)il2cpp_codegen_add(L_545, 1));
		int64_t L_547 = (int64_t)(L_544)->GetAt(static_cast<il2cpp_array_size_t>(L_546));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_543, L_547));
		// b1 += kw[dm17 + 2];
		uint64_t L_548 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_549 = V_0;
		int32_t L_550 = V_21;
		NullCheck(L_549);
		int32_t L_551 = ((int32_t)il2cpp_codegen_add(L_550, 2));
		int64_t L_552 = (int64_t)(L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_548, L_552));
		// b2 += kw[dm17 + 3];
		uint64_t L_553 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_554 = V_0;
		int32_t L_555 = V_21;
		NullCheck(L_554);
		int32_t L_556 = ((int32_t)il2cpp_codegen_add(L_555, 3));
		int64_t L_557 = (int64_t)(L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_553, L_557));
		// b3 += kw[dm17 + 4];
		uint64_t L_558 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_559 = V_0;
		int32_t L_560 = V_21;
		NullCheck(L_559);
		int32_t L_561 = ((int32_t)il2cpp_codegen_add(L_560, 4));
		int64_t L_562 = (int64_t)(L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_558, L_562));
		// b4 += kw[dm17 + 5];
		uint64_t L_563 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_564 = V_0;
		int32_t L_565 = V_21;
		NullCheck(L_564);
		int32_t L_566 = ((int32_t)il2cpp_codegen_add(L_565, 5));
		int64_t L_567 = (int64_t)(L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_563, L_567));
		// b5 += kw[dm17 + 6];
		uint64_t L_568 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		int32_t L_570 = V_21;
		NullCheck(L_569);
		int32_t L_571 = ((int32_t)il2cpp_codegen_add(L_570, 6));
		int64_t L_572 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_568, L_572));
		// b6 += kw[dm17 + 7];
		uint64_t L_573 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_574 = V_0;
		int32_t L_575 = V_21;
		NullCheck(L_574);
		int32_t L_576 = ((int32_t)il2cpp_codegen_add(L_575, 7));
		int64_t L_577 = (int64_t)(L_574)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_573, L_577));
		// b7 += kw[dm17 + 8];
		uint64_t L_578 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_579 = V_0;
		int32_t L_580 = V_21;
		NullCheck(L_579);
		int32_t L_581 = ((int32_t)il2cpp_codegen_add(L_580, 8));
		int64_t L_582 = (int64_t)(L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_581));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_578, L_582));
		// b8 += kw[dm17 + 9];
		uint64_t L_583 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_584 = V_0;
		int32_t L_585 = V_21;
		NullCheck(L_584);
		int32_t L_586 = ((int32_t)il2cpp_codegen_add(L_585, ((int32_t)9)));
		int64_t L_587 = (int64_t)(L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_583, L_587));
		// b9 += kw[dm17 + 10];
		uint64_t L_588 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		int32_t L_590 = V_21;
		NullCheck(L_589);
		int32_t L_591 = ((int32_t)il2cpp_codegen_add(L_590, ((int32_t)10)));
		int64_t L_592 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_591));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_588, L_592));
		// b10 += kw[dm17 + 11];
		uint64_t L_593 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_594 = V_0;
		int32_t L_595 = V_21;
		NullCheck(L_594);
		int32_t L_596 = ((int32_t)il2cpp_codegen_add(L_595, ((int32_t)11)));
		int64_t L_597 = (int64_t)(L_594)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_593, L_597));
		// b11 += kw[dm17 + 12];
		uint64_t L_598 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_599 = V_0;
		int32_t L_600 = V_21;
		NullCheck(L_599);
		int32_t L_601 = ((int32_t)il2cpp_codegen_add(L_600, ((int32_t)12)));
		int64_t L_602 = (int64_t)(L_599)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_598, L_602));
		// b12 += kw[dm17 + 13];
		uint64_t L_603 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_604 = V_0;
		int32_t L_605 = V_21;
		NullCheck(L_604);
		int32_t L_606 = ((int32_t)il2cpp_codegen_add(L_605, ((int32_t)13)));
		int64_t L_607 = (int64_t)(L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_603, L_607));
		// b13 += kw[dm17 + 14] + t[dm3 + 1];
		uint64_t L_608 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		int32_t L_610 = V_21;
		NullCheck(L_609);
		int32_t L_611 = ((int32_t)il2cpp_codegen_add(L_610, ((int32_t)14)));
		int64_t L_612 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_611));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_1;
		int32_t L_614 = V_22;
		NullCheck(L_613);
		int32_t L_615 = ((int32_t)il2cpp_codegen_add(L_614, 1));
		int64_t L_616 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_615));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_608, ((int64_t)il2cpp_codegen_add(L_612, L_616))));
		// b14 += kw[dm17 + 15] + t[dm3 + 2];
		uint64_t L_617 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_618 = V_0;
		int32_t L_619 = V_21;
		NullCheck(L_618);
		int32_t L_620 = ((int32_t)il2cpp_codegen_add(L_619, ((int32_t)15)));
		int64_t L_621 = (int64_t)(L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_620));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_622 = V_1;
		int32_t L_623 = V_22;
		NullCheck(L_622);
		int32_t L_624 = ((int32_t)il2cpp_codegen_add(L_623, 2));
		int64_t L_625 = (int64_t)(L_622)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_617, ((int64_t)il2cpp_codegen_add(L_621, L_625))));
		// b15 += kw[dm17 + 16] + (uint)d + 1;
		uint64_t L_626 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_0;
		int32_t L_628 = V_21;
		NullCheck(L_627);
		int32_t L_629 = ((int32_t)il2cpp_codegen_add(L_628, ((int32_t)16)));
		int64_t L_630 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_629));
		int32_t L_631 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_626, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_630, ((int64_t)(uint64_t)((uint32_t)L_631)))), ((int64_t)1)))));
		// for (int d = 1; d < (ROUNDS_1024 / 4); d += 2)
		int32_t L_632 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_632, 2));
	}

IL_0780:
	{
		// for (int d = 1; d < (ROUNDS_1024 / 4); d += 2)
		int32_t L_633 = V_20;
		if ((((int32_t)L_633) < ((int32_t)((int32_t)20))))
		{
			goto IL_0121;
		}
	}
	{
		// outWords[0] = b0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___1_outWords;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		// outWords[1] = b1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___1_outWords;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		// outWords[2] = b2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___1_outWords;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		// outWords[3] = b3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___1_outWords;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		// outWords[4] = b4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___1_outWords;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		// outWords[5] = b5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___1_outWords;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		// outWords[6] = b6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___1_outWords;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		// outWords[7] = b7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___1_outWords;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		// outWords[8] = b8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___1_outWords;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		// outWords[9] = b9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___1_outWords;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		// outWords[10] = b10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___1_outWords;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		// outWords[11] = b11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___1_outWords;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		// outWords[12] = b12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___1_outWords;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		// outWords[13] = b13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___1_outWords;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		// outWords[14] = b14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___1_outWords;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		// outWords[15] = b15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___1_outWords;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		// ulong[] kw = this.kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw_1;
		V_0 = L_0;
		// ulong[] t = this.t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t_0;
		V_1 = L_1;
		// int[] mod17 = MOD17;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		// int[] mod3 = MOD3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		// if (kw.Length != 33)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (t.Length != 5)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915_RuntimeMethod_var)));
	}

IL_0033:
	{
		// ulong b0 = block[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// ulong b1 = block[1];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// ulong b2 = block[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// ulong b3 = block[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// ulong b4 = block[4];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		// ulong b5 = block[5];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		// ulong b6 = block[6];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		// ulong b7 = block[7];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		// ulong b8 = block[8];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_block;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		// ulong b9 = block[9];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___0_block;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		// ulong b10 = block[10];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_block;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		// ulong b11 = block[11];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___0_block;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		// ulong b12 = block[12];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_block;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		// ulong b13 = block[13];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___0_block;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		// ulong b14 = block[14];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_block;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		// ulong b15 = block[15];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_block;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		// for (int d = (ROUNDS_1024 / 4) - 1; d >= 1; d -= 2)
		V_20 = ((int32_t)19);
		goto IL_0732;
	}

IL_0093:
	{
		// int dm17 = mod17[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		int32_t L_57 = V_20;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_21 = L_59;
		// int dm3 = mod3[d];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_20;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_22 = L_63;
		// b0 -= kw[dm17 + 1];
		uint64_t L_64 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		int32_t L_66 = V_21;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int64_t L_68 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_64, L_68));
		// b1 -= kw[dm17 + 2];
		uint64_t L_69 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_0;
		int32_t L_71 = V_21;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_69, L_73));
		// b2 -= kw[dm17 + 3];
		uint64_t L_74 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_21;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 3));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, L_78));
		// b3 -= kw[dm17 + 4];
		uint64_t L_79 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = V_0;
		int32_t L_81 = V_21;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		int64_t L_83 = (int64_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_79, L_83));
		// b4 -= kw[dm17 + 5];
		uint64_t L_84 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		int32_t L_86 = V_21;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		int64_t L_88 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_84, L_88));
		// b5 -= kw[dm17 + 6];
		uint64_t L_89 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = V_0;
		int32_t L_91 = V_21;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		int64_t L_93 = (int64_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_89, L_93));
		// b6 -= kw[dm17 + 7];
		uint64_t L_94 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = V_0;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 7));
		int64_t L_98 = (int64_t)(L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_94, L_98));
		// b7 -= kw[dm17 + 8];
		uint64_t L_99 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_0;
		int32_t L_101 = V_21;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 8));
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_99, L_103));
		// b8 -= kw[dm17 + 9];
		uint64_t L_104 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_21;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)9)));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_104, L_108));
		// b9 -= kw[dm17 + 10];
		uint64_t L_109 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = V_0;
		int32_t L_111 = V_21;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)10)));
		int64_t L_113 = (int64_t)(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_109, L_113));
		// b10 -= kw[dm17 + 11];
		uint64_t L_114 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_115 = V_0;
		int32_t L_116 = V_21;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, ((int32_t)11)));
		int64_t L_118 = (int64_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_114, L_118));
		// b11 -= kw[dm17 + 12];
		uint64_t L_119 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = V_0;
		int32_t L_121 = V_21;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)12)));
		int64_t L_123 = (int64_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_119, L_123));
		// b12 -= kw[dm17 + 13];
		uint64_t L_124 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = V_0;
		int32_t L_126 = V_21;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, ((int32_t)13)));
		int64_t L_128 = (int64_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_124, L_128));
		// b13 -= kw[dm17 + 14] + t[dm3 + 1];
		uint64_t L_129 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_130 = V_0;
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, ((int32_t)14)));
		int64_t L_133 = (int64_t)(L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = V_1;
		int32_t L_135 = V_22;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int64_t L_137 = (int64_t)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, ((int64_t)il2cpp_codegen_add(L_133, L_137))));
		// b14 -= kw[dm17 + 15] + t[dm3 + 2];
		uint64_t L_138 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_139 = V_0;
		int32_t L_140 = V_21;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, ((int32_t)15)));
		int64_t L_142 = (int64_t)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = V_1;
		int32_t L_144 = V_22;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 2));
		int64_t L_146 = (int64_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_138, ((int64_t)il2cpp_codegen_add(L_142, L_146))));
		// b15 -= kw[dm17 + 16] + (uint)d + 1;
		uint64_t L_147 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_148 = V_0;
		int32_t L_149 = V_21;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)16)));
		int64_t L_151 = (int64_t)(L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_151, ((int64_t)(uint64_t)((uint32_t)L_152)))), ((int64_t)1)))));
		// b15 = XorRotr(b15, ROTATION_7_0, b0);
		uint64_t L_153 = V_19;
		uint64_t L_154 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_155;
		L_155 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_153, ((int32_t)9), L_154, NULL);
		V_19 = L_155;
		// b0 -= b15;
		uint64_t L_156 = V_4;
		uint64_t L_157 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_156, (int64_t)L_157));
		// b11 = XorRotr(b11, ROTATION_7_1, b2);
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_6;
		uint64_t L_160;
		L_160 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_158, ((int32_t)48), L_159, NULL);
		V_15 = L_160;
		// b2 -= b11;
		uint64_t L_161 = V_6;
		uint64_t L_162 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_161, (int64_t)L_162));
		// b13 = XorRotr(b13, ROTATION_7_2, b6);
		uint64_t L_163 = V_17;
		uint64_t L_164 = V_10;
		uint64_t L_165;
		L_165 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_163, ((int32_t)35), L_164, NULL);
		V_17 = L_165;
		// b6 -= b13;
		uint64_t L_166 = V_10;
		uint64_t L_167 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_166, (int64_t)L_167));
		// b9 = XorRotr(b9, ROTATION_7_3, b4);
		uint64_t L_168 = V_13;
		uint64_t L_169 = V_8;
		uint64_t L_170;
		L_170 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_168, ((int32_t)52), L_169, NULL);
		V_13 = L_170;
		// b4 -= b9;
		uint64_t L_171 = V_8;
		uint64_t L_172 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_171, (int64_t)L_172));
		// b1 = XorRotr(b1, ROTATION_7_4, b14);
		uint64_t L_173 = V_5;
		uint64_t L_174 = V_18;
		uint64_t L_175;
		L_175 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_173, ((int32_t)23), L_174, NULL);
		V_5 = L_175;
		// b14 -= b1;
		uint64_t L_176 = V_18;
		uint64_t L_177 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_176, (int64_t)L_177));
		// b5 = XorRotr(b5, ROTATION_7_5, b8);
		uint64_t L_178 = V_9;
		uint64_t L_179 = V_12;
		uint64_t L_180;
		L_180 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_178, ((int32_t)31), L_179, NULL);
		V_9 = L_180;
		// b8 -= b5;
		uint64_t L_181 = V_12;
		uint64_t L_182 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_181, (int64_t)L_182));
		// b3 = XorRotr(b3, ROTATION_7_6, b10);
		uint64_t L_183 = V_7;
		uint64_t L_184 = V_14;
		uint64_t L_185;
		L_185 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_183, ((int32_t)37), L_184, NULL);
		V_7 = L_185;
		// b10 -= b3;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, (int64_t)L_187));
		// b7 = XorRotr(b7, ROTATION_7_7, b12);
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_16;
		uint64_t L_190;
		L_190 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_188, ((int32_t)20), L_189, NULL);
		V_11 = L_190;
		// b12 -= b7;
		uint64_t L_191 = V_16;
		uint64_t L_192 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_191, (int64_t)L_192));
		// b7 = XorRotr(b7, ROTATION_6_0, b0);
		uint64_t L_193 = V_11;
		uint64_t L_194 = V_4;
		uint64_t L_195;
		L_195 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_193, ((int32_t)31), L_194, NULL);
		V_11 = L_195;
		// b0 -= b7;
		uint64_t L_196 = V_4;
		uint64_t L_197 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_196, (int64_t)L_197));
		// b5 = XorRotr(b5, ROTATION_6_1, b2);
		uint64_t L_198 = V_9;
		uint64_t L_199 = V_6;
		uint64_t L_200;
		L_200 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_198, ((int32_t)44), L_199, NULL);
		V_9 = L_200;
		// b2 -= b5;
		uint64_t L_201 = V_6;
		uint64_t L_202 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_201, (int64_t)L_202));
		// b3 = XorRotr(b3, ROTATION_6_2, b4);
		uint64_t L_203 = V_7;
		uint64_t L_204 = V_8;
		uint64_t L_205;
		L_205 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_203, ((int32_t)47), L_204, NULL);
		V_7 = L_205;
		// b4 -= b3;
		uint64_t L_206 = V_8;
		uint64_t L_207 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_206, (int64_t)L_207));
		// b1 = XorRotr(b1, ROTATION_6_3, b6);
		uint64_t L_208 = V_5;
		uint64_t L_209 = V_10;
		uint64_t L_210;
		L_210 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_208, ((int32_t)46), L_209, NULL);
		V_5 = L_210;
		// b6 -= b1;
		uint64_t L_211 = V_10;
		uint64_t L_212 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_211, (int64_t)L_212));
		// b15 = XorRotr(b15, ROTATION_6_4, b12);
		uint64_t L_213 = V_19;
		uint64_t L_214 = V_16;
		uint64_t L_215;
		L_215 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_213, ((int32_t)19), L_214, NULL);
		V_19 = L_215;
		// b12 -= b15;
		uint64_t L_216 = V_16;
		uint64_t L_217 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_216, (int64_t)L_217));
		// b13 = XorRotr(b13, ROTATION_6_5, b14);
		uint64_t L_218 = V_17;
		uint64_t L_219 = V_18;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_218, ((int32_t)42), L_219, NULL);
		V_17 = L_220;
		// b14 -= b13;
		uint64_t L_221 = V_18;
		uint64_t L_222 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		// b11 = XorRotr(b11, ROTATION_6_6, b8);
		uint64_t L_223 = V_15;
		uint64_t L_224 = V_12;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_223, ((int32_t)44), L_224, NULL);
		V_15 = L_225;
		// b8 -= b11;
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		// b9 = XorRotr(b9, ROTATION_6_7, b10);
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_14;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_228, ((int32_t)25), L_229, NULL);
		V_13 = L_230;
		// b10 -= b9;
		uint64_t L_231 = V_14;
		uint64_t L_232 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		// b9 = XorRotr(b9, ROTATION_5_0, b0);
		uint64_t L_233 = V_13;
		uint64_t L_234 = V_4;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_233, ((int32_t)16), L_234, NULL);
		V_13 = L_235;
		// b0 -= b9;
		uint64_t L_236 = V_4;
		uint64_t L_237 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		// b13 = XorRotr(b13, ROTATION_5_1, b2);
		uint64_t L_238 = V_17;
		uint64_t L_239 = V_6;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_238, ((int32_t)34), L_239, NULL);
		V_17 = L_240;
		// b2 -= b13;
		uint64_t L_241 = V_6;
		uint64_t L_242 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		// b11 = XorRotr(b11, ROTATION_5_2, b6);
		uint64_t L_243 = V_15;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_243, ((int32_t)56), L_244, NULL);
		V_15 = L_245;
		// b6 -= b11;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		// b15 = XorRotr(b15, ROTATION_5_3, b4);
		uint64_t L_248 = V_19;
		uint64_t L_249 = V_8;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_248, ((int32_t)51), L_249, NULL);
		V_19 = L_250;
		// b4 -= b15;
		uint64_t L_251 = V_8;
		uint64_t L_252 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		// b7 = XorRotr(b7, ROTATION_5_4, b10);
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_14;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_253, 4, L_254, NULL);
		V_11 = L_255;
		// b10 -= b7;
		uint64_t L_256 = V_14;
		uint64_t L_257 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		// b3 = XorRotr(b3, ROTATION_5_5, b12);
		uint64_t L_258 = V_7;
		uint64_t L_259 = V_16;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_258, ((int32_t)53), L_259, NULL);
		V_7 = L_260;
		// b12 -= b3;
		uint64_t L_261 = V_16;
		uint64_t L_262 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		// b5 = XorRotr(b5, ROTATION_5_6, b14);
		uint64_t L_263 = V_9;
		uint64_t L_264 = V_18;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_263, ((int32_t)42), L_264, NULL);
		V_9 = L_265;
		// b14 -= b5;
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		// b1 = XorRotr(b1, ROTATION_5_7, b8);
		uint64_t L_268 = V_5;
		uint64_t L_269 = V_12;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_268, ((int32_t)41), L_269, NULL);
		V_5 = L_270;
		// b8 -= b1;
		uint64_t L_271 = V_12;
		uint64_t L_272 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		// b1 = XorRotr(b1, ROTATION_4_0, b0);
		uint64_t L_273 = V_5;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_273, ((int32_t)41), L_274, NULL);
		V_5 = L_275;
		// b0 -= b1;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		// b3 = XorRotr(b3, ROTATION_4_1, b2);
		uint64_t L_278 = V_7;
		uint64_t L_279 = V_6;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_278, ((int32_t)9), L_279, NULL);
		V_7 = L_280;
		// b2 -= b3;
		uint64_t L_281 = V_6;
		uint64_t L_282 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		// b5 = XorRotr(b5, ROTATION_4_2, b4);
		uint64_t L_283 = V_9;
		uint64_t L_284 = V_8;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_283, ((int32_t)37), L_284, NULL);
		V_9 = L_285;
		// b4 -= b5;
		uint64_t L_286 = V_8;
		uint64_t L_287 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		// b7 = XorRotr(b7, ROTATION_4_3, b6);
		uint64_t L_288 = V_11;
		uint64_t L_289 = V_10;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_288, ((int32_t)31), L_289, NULL);
		V_11 = L_290;
		// b6 -= b7;
		uint64_t L_291 = V_10;
		uint64_t L_292 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		// b9 = XorRotr(b9, ROTATION_4_4, b8);
		uint64_t L_293 = V_13;
		uint64_t L_294 = V_12;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_293, ((int32_t)12), L_294, NULL);
		V_13 = L_295;
		// b8 -= b9;
		uint64_t L_296 = V_12;
		uint64_t L_297 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		// b11 = XorRotr(b11, ROTATION_4_5, b10);
		uint64_t L_298 = V_15;
		uint64_t L_299 = V_14;
		uint64_t L_300;
		L_300 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_298, ((int32_t)47), L_299, NULL);
		V_15 = L_300;
		// b10 -= b11;
		uint64_t L_301 = V_14;
		uint64_t L_302 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_301, (int64_t)L_302));
		// b13 = XorRotr(b13, ROTATION_4_6, b12);
		uint64_t L_303 = V_17;
		uint64_t L_304 = V_16;
		uint64_t L_305;
		L_305 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_303, ((int32_t)44), L_304, NULL);
		V_17 = L_305;
		// b12 -= b13;
		uint64_t L_306 = V_16;
		uint64_t L_307 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_306, (int64_t)L_307));
		// b15 = XorRotr(b15, ROTATION_4_7, b14);
		uint64_t L_308 = V_19;
		uint64_t L_309 = V_18;
		uint64_t L_310;
		L_310 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_308, ((int32_t)30), L_309, NULL);
		V_19 = L_310;
		// b14 -= b15;
		uint64_t L_311 = V_18;
		uint64_t L_312 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_311, (int64_t)L_312));
		// b0 -= kw[dm17];
		uint64_t L_313 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_314 = V_0;
		int32_t L_315 = V_21;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		int64_t L_317 = (int64_t)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_313, L_317));
		// b1 -= kw[dm17 + 1];
		uint64_t L_318 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_319 = V_0;
		int32_t L_320 = V_21;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_add(L_320, 1));
		int64_t L_322 = (int64_t)(L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_318, L_322));
		// b2 -= kw[dm17 + 2];
		uint64_t L_323 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_0;
		int32_t L_325 = V_21;
		NullCheck(L_324);
		int32_t L_326 = ((int32_t)il2cpp_codegen_add(L_325, 2));
		int64_t L_327 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_323, L_327));
		// b3 -= kw[dm17 + 3];
		uint64_t L_328 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_329 = V_0;
		int32_t L_330 = V_21;
		NullCheck(L_329);
		int32_t L_331 = ((int32_t)il2cpp_codegen_add(L_330, 3));
		int64_t L_332 = (int64_t)(L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_328, L_332));
		// b4 -= kw[dm17 + 4];
		uint64_t L_333 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_334 = V_0;
		int32_t L_335 = V_21;
		NullCheck(L_334);
		int32_t L_336 = ((int32_t)il2cpp_codegen_add(L_335, 4));
		int64_t L_337 = (int64_t)(L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_333, L_337));
		// b5 -= kw[dm17 + 5];
		uint64_t L_338 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_339 = V_0;
		int32_t L_340 = V_21;
		NullCheck(L_339);
		int32_t L_341 = ((int32_t)il2cpp_codegen_add(L_340, 5));
		int64_t L_342 = (int64_t)(L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_338, L_342));
		// b6 -= kw[dm17 + 6];
		uint64_t L_343 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = V_0;
		int32_t L_345 = V_21;
		NullCheck(L_344);
		int32_t L_346 = ((int32_t)il2cpp_codegen_add(L_345, 6));
		int64_t L_347 = (int64_t)(L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_343, L_347));
		// b7 -= kw[dm17 + 7];
		uint64_t L_348 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_349 = V_0;
		int32_t L_350 = V_21;
		NullCheck(L_349);
		int32_t L_351 = ((int32_t)il2cpp_codegen_add(L_350, 7));
		int64_t L_352 = (int64_t)(L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_348, L_352));
		// b8 -= kw[dm17 + 8];
		uint64_t L_353 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_354 = V_0;
		int32_t L_355 = V_21;
		NullCheck(L_354);
		int32_t L_356 = ((int32_t)il2cpp_codegen_add(L_355, 8));
		int64_t L_357 = (int64_t)(L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_353, L_357));
		// b9 -= kw[dm17 + 9];
		uint64_t L_358 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_359 = V_0;
		int32_t L_360 = V_21;
		NullCheck(L_359);
		int32_t L_361 = ((int32_t)il2cpp_codegen_add(L_360, ((int32_t)9)));
		int64_t L_362 = (int64_t)(L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_358, L_362));
		// b10 -= kw[dm17 + 10];
		uint64_t L_363 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_0;
		int32_t L_365 = V_21;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, ((int32_t)10)));
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_363, L_367));
		// b11 -= kw[dm17 + 11];
		uint64_t L_368 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)11)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_368, L_372));
		// b12 -= kw[dm17 + 12];
		uint64_t L_373 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_374 = V_0;
		int32_t L_375 = V_21;
		NullCheck(L_374);
		int32_t L_376 = ((int32_t)il2cpp_codegen_add(L_375, ((int32_t)12)));
		int64_t L_377 = (int64_t)(L_374)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_373, L_377));
		// b13 -= kw[dm17 + 13] + t[dm3];
		uint64_t L_378 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_379 = V_0;
		int32_t L_380 = V_21;
		NullCheck(L_379);
		int32_t L_381 = ((int32_t)il2cpp_codegen_add(L_380, ((int32_t)13)));
		int64_t L_382 = (int64_t)(L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = V_1;
		int32_t L_384 = V_22;
		NullCheck(L_383);
		int32_t L_385 = L_384;
		int64_t L_386 = (int64_t)(L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_378, ((int64_t)il2cpp_codegen_add(L_382, L_386))));
		// b14 -= kw[dm17 + 14] + t[dm3 + 1];
		uint64_t L_387 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_388 = V_0;
		int32_t L_389 = V_21;
		NullCheck(L_388);
		int32_t L_390 = ((int32_t)il2cpp_codegen_add(L_389, ((int32_t)14)));
		int64_t L_391 = (int64_t)(L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_392 = V_1;
		int32_t L_393 = V_22;
		NullCheck(L_392);
		int32_t L_394 = ((int32_t)il2cpp_codegen_add(L_393, 1));
		int64_t L_395 = (int64_t)(L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_387, ((int64_t)il2cpp_codegen_add(L_391, L_395))));
		// b15 -= kw[dm17 + 15] + (uint)d;
		uint64_t L_396 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_397 = V_0;
		int32_t L_398 = V_21;
		NullCheck(L_397);
		int32_t L_399 = ((int32_t)il2cpp_codegen_add(L_398, ((int32_t)15)));
		int64_t L_400 = (int64_t)(L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		int32_t L_401 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_396, ((int64_t)il2cpp_codegen_add(L_400, ((int64_t)(uint64_t)((uint32_t)L_401))))));
		// b15 = XorRotr(b15, ROTATION_3_0, b0);
		uint64_t L_402 = V_19;
		uint64_t L_403 = V_4;
		uint64_t L_404;
		L_404 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_402, 5, L_403, NULL);
		V_19 = L_404;
		// b0 -= b15;
		uint64_t L_405 = V_4;
		uint64_t L_406 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_405, (int64_t)L_406));
		// b11 = XorRotr(b11, ROTATION_3_1, b2);
		uint64_t L_407 = V_15;
		uint64_t L_408 = V_6;
		uint64_t L_409;
		L_409 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_407, ((int32_t)20), L_408, NULL);
		V_15 = L_409;
		// b2 -= b11;
		uint64_t L_410 = V_6;
		uint64_t L_411 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_410, (int64_t)L_411));
		// b13 = XorRotr(b13, ROTATION_3_2, b6);
		uint64_t L_412 = V_17;
		uint64_t L_413 = V_10;
		uint64_t L_414;
		L_414 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_412, ((int32_t)48), L_413, NULL);
		V_17 = L_414;
		// b6 -= b13;
		uint64_t L_415 = V_10;
		uint64_t L_416 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_415, (int64_t)L_416));
		// b9 = XorRotr(b9, ROTATION_3_3, b4);
		uint64_t L_417 = V_13;
		uint64_t L_418 = V_8;
		uint64_t L_419;
		L_419 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_417, ((int32_t)41), L_418, NULL);
		V_13 = L_419;
		// b4 -= b9;
		uint64_t L_420 = V_8;
		uint64_t L_421 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_420, (int64_t)L_421));
		// b1 = XorRotr(b1, ROTATION_3_4, b14);
		uint64_t L_422 = V_5;
		uint64_t L_423 = V_18;
		uint64_t L_424;
		L_424 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_422, ((int32_t)47), L_423, NULL);
		V_5 = L_424;
		// b14 -= b1;
		uint64_t L_425 = V_18;
		uint64_t L_426 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_425, (int64_t)L_426));
		// b5 = XorRotr(b5, ROTATION_3_5, b8);
		uint64_t L_427 = V_9;
		uint64_t L_428 = V_12;
		uint64_t L_429;
		L_429 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_427, ((int32_t)28), L_428, NULL);
		V_9 = L_429;
		// b8 -= b5;
		uint64_t L_430 = V_12;
		uint64_t L_431 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_430, (int64_t)L_431));
		// b3 = XorRotr(b3, ROTATION_3_6, b10);
		uint64_t L_432 = V_7;
		uint64_t L_433 = V_14;
		uint64_t L_434;
		L_434 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_432, ((int32_t)16), L_433, NULL);
		V_7 = L_434;
		// b10 -= b3;
		uint64_t L_435 = V_14;
		uint64_t L_436 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_435, (int64_t)L_436));
		// b7 = XorRotr(b7, ROTATION_3_7, b12);
		uint64_t L_437 = V_11;
		uint64_t L_438 = V_16;
		uint64_t L_439;
		L_439 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_437, ((int32_t)25), L_438, NULL);
		V_11 = L_439;
		// b12 -= b7;
		uint64_t L_440 = V_16;
		uint64_t L_441 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_440, (int64_t)L_441));
		// b7 = XorRotr(b7, ROTATION_2_0, b0);
		uint64_t L_442 = V_11;
		uint64_t L_443 = V_4;
		uint64_t L_444;
		L_444 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_442, ((int32_t)33), L_443, NULL);
		V_11 = L_444;
		// b0 -= b7;
		uint64_t L_445 = V_4;
		uint64_t L_446 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, (int64_t)L_446));
		// b5 = XorRotr(b5, ROTATION_2_1, b2);
		uint64_t L_447 = V_9;
		uint64_t L_448 = V_6;
		uint64_t L_449;
		L_449 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_447, 4, L_448, NULL);
		V_9 = L_449;
		// b2 -= b5;
		uint64_t L_450 = V_6;
		uint64_t L_451 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_450, (int64_t)L_451));
		// b3 = XorRotr(b3, ROTATION_2_2, b4);
		uint64_t L_452 = V_7;
		uint64_t L_453 = V_8;
		uint64_t L_454;
		L_454 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_452, ((int32_t)51), L_453, NULL);
		V_7 = L_454;
		// b4 -= b3;
		uint64_t L_455 = V_8;
		uint64_t L_456 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_455, (int64_t)L_456));
		// b1 = XorRotr(b1, ROTATION_2_3, b6);
		uint64_t L_457 = V_5;
		uint64_t L_458 = V_10;
		uint64_t L_459;
		L_459 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_457, ((int32_t)13), L_458, NULL);
		V_5 = L_459;
		// b6 -= b1;
		uint64_t L_460 = V_10;
		uint64_t L_461 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_460, (int64_t)L_461));
		// b15 = XorRotr(b15, ROTATION_2_4, b12);
		uint64_t L_462 = V_19;
		uint64_t L_463 = V_16;
		uint64_t L_464;
		L_464 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_462, ((int32_t)34), L_463, NULL);
		V_19 = L_464;
		// b12 -= b15;
		uint64_t L_465 = V_16;
		uint64_t L_466 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_465, (int64_t)L_466));
		// b13 = XorRotr(b13, ROTATION_2_5, b14);
		uint64_t L_467 = V_17;
		uint64_t L_468 = V_18;
		uint64_t L_469;
		L_469 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_467, ((int32_t)41), L_468, NULL);
		V_17 = L_469;
		// b14 -= b13;
		uint64_t L_470 = V_18;
		uint64_t L_471 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_470, (int64_t)L_471));
		// b11 = XorRotr(b11, ROTATION_2_6, b8);
		uint64_t L_472 = V_15;
		uint64_t L_473 = V_12;
		uint64_t L_474;
		L_474 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_472, ((int32_t)59), L_473, NULL);
		V_15 = L_474;
		// b8 -= b11;
		uint64_t L_475 = V_12;
		uint64_t L_476 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_475, (int64_t)L_476));
		// b9 = XorRotr(b9, ROTATION_2_7, b10);
		uint64_t L_477 = V_13;
		uint64_t L_478 = V_14;
		uint64_t L_479;
		L_479 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_477, ((int32_t)17), L_478, NULL);
		V_13 = L_479;
		// b10 -= b9;
		uint64_t L_480 = V_14;
		uint64_t L_481 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_480, (int64_t)L_481));
		// b9 = XorRotr(b9, ROTATION_1_0, b0);
		uint64_t L_482 = V_13;
		uint64_t L_483 = V_4;
		uint64_t L_484;
		L_484 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_482, ((int32_t)38), L_483, NULL);
		V_13 = L_484;
		// b0 -= b9;
		uint64_t L_485 = V_4;
		uint64_t L_486 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_485, (int64_t)L_486));
		// b13 = XorRotr(b13, ROTATION_1_1, b2);
		uint64_t L_487 = V_17;
		uint64_t L_488 = V_6;
		uint64_t L_489;
		L_489 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_487, ((int32_t)19), L_488, NULL);
		V_17 = L_489;
		// b2 -= b13;
		uint64_t L_490 = V_6;
		uint64_t L_491 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_490, (int64_t)L_491));
		// b11 = XorRotr(b11, ROTATION_1_2, b6);
		uint64_t L_492 = V_15;
		uint64_t L_493 = V_10;
		uint64_t L_494;
		L_494 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_492, ((int32_t)10), L_493, NULL);
		V_15 = L_494;
		// b6 -= b11;
		uint64_t L_495 = V_10;
		uint64_t L_496 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_495, (int64_t)L_496));
		// b15 = XorRotr(b15, ROTATION_1_3, b4);
		uint64_t L_497 = V_19;
		uint64_t L_498 = V_8;
		uint64_t L_499;
		L_499 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_497, ((int32_t)55), L_498, NULL);
		V_19 = L_499;
		// b4 -= b15;
		uint64_t L_500 = V_8;
		uint64_t L_501 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_500, (int64_t)L_501));
		// b7 = XorRotr(b7, ROTATION_1_4, b10);
		uint64_t L_502 = V_11;
		uint64_t L_503 = V_14;
		uint64_t L_504;
		L_504 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_502, ((int32_t)49), L_503, NULL);
		V_11 = L_504;
		// b10 -= b7;
		uint64_t L_505 = V_14;
		uint64_t L_506 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_505, (int64_t)L_506));
		// b3 = XorRotr(b3, ROTATION_1_5, b12);
		uint64_t L_507 = V_7;
		uint64_t L_508 = V_16;
		uint64_t L_509;
		L_509 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_507, ((int32_t)18), L_508, NULL);
		V_7 = L_509;
		// b12 -= b3;
		uint64_t L_510 = V_16;
		uint64_t L_511 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_510, (int64_t)L_511));
		// b5 = XorRotr(b5, ROTATION_1_6, b14);
		uint64_t L_512 = V_9;
		uint64_t L_513 = V_18;
		uint64_t L_514;
		L_514 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_512, ((int32_t)23), L_513, NULL);
		V_9 = L_514;
		// b14 -= b5;
		uint64_t L_515 = V_18;
		uint64_t L_516 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_515, (int64_t)L_516));
		// b1 = XorRotr(b1, ROTATION_1_7, b8);
		uint64_t L_517 = V_5;
		uint64_t L_518 = V_12;
		uint64_t L_519;
		L_519 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_517, ((int32_t)52), L_518, NULL);
		V_5 = L_519;
		// b8 -= b1;
		uint64_t L_520 = V_12;
		uint64_t L_521 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_520, (int64_t)L_521));
		// b1 = XorRotr(b1, ROTATION_0_0, b0);
		uint64_t L_522 = V_5;
		uint64_t L_523 = V_4;
		uint64_t L_524;
		L_524 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_522, ((int32_t)24), L_523, NULL);
		V_5 = L_524;
		// b0 -= b1;
		uint64_t L_525 = V_4;
		uint64_t L_526 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_525, (int64_t)L_526));
		// b3 = XorRotr(b3, ROTATION_0_1, b2);
		uint64_t L_527 = V_7;
		uint64_t L_528 = V_6;
		uint64_t L_529;
		L_529 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_527, ((int32_t)13), L_528, NULL);
		V_7 = L_529;
		// b2 -= b3;
		uint64_t L_530 = V_6;
		uint64_t L_531 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_530, (int64_t)L_531));
		// b5 = XorRotr(b5, ROTATION_0_2, b4);
		uint64_t L_532 = V_9;
		uint64_t L_533 = V_8;
		uint64_t L_534;
		L_534 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_532, 8, L_533, NULL);
		V_9 = L_534;
		// b4 -= b5;
		uint64_t L_535 = V_8;
		uint64_t L_536 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_535, (int64_t)L_536));
		// b7 = XorRotr(b7, ROTATION_0_3, b6);
		uint64_t L_537 = V_11;
		uint64_t L_538 = V_10;
		uint64_t L_539;
		L_539 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_537, ((int32_t)47), L_538, NULL);
		V_11 = L_539;
		// b6 -= b7;
		uint64_t L_540 = V_10;
		uint64_t L_541 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_540, (int64_t)L_541));
		// b9 = XorRotr(b9, ROTATION_0_4, b8);
		uint64_t L_542 = V_13;
		uint64_t L_543 = V_12;
		uint64_t L_544;
		L_544 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_542, 8, L_543, NULL);
		V_13 = L_544;
		// b8 -= b9;
		uint64_t L_545 = V_12;
		uint64_t L_546 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_545, (int64_t)L_546));
		// b11 = XorRotr(b11, ROTATION_0_5, b10);
		uint64_t L_547 = V_15;
		uint64_t L_548 = V_14;
		uint64_t L_549;
		L_549 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_547, ((int32_t)17), L_548, NULL);
		V_15 = L_549;
		// b10 -= b11;
		uint64_t L_550 = V_14;
		uint64_t L_551 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_550, (int64_t)L_551));
		// b13 = XorRotr(b13, ROTATION_0_6, b12);
		uint64_t L_552 = V_17;
		uint64_t L_553 = V_16;
		uint64_t L_554;
		L_554 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_552, ((int32_t)22), L_553, NULL);
		V_17 = L_554;
		// b12 -= b13;
		uint64_t L_555 = V_16;
		uint64_t L_556 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_555, (int64_t)L_556));
		// b15 = XorRotr(b15, ROTATION_0_7, b14);
		uint64_t L_557 = V_19;
		uint64_t L_558 = V_18;
		uint64_t L_559;
		L_559 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_557, ((int32_t)37), L_558, NULL);
		V_19 = L_559;
		// b14 -= b15;
		uint64_t L_560 = V_18;
		uint64_t L_561 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_560, (int64_t)L_561));
		// for (int d = (ROUNDS_1024 / 4) - 1; d >= 1; d -= 2)
		int32_t L_562 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_562, 2));
	}

IL_0732:
	{
		// for (int d = (ROUNDS_1024 / 4) - 1; d >= 1; d -= 2)
		int32_t L_563 = V_20;
		if ((((int32_t)L_563) >= ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		// b0 -= kw[0];
		uint64_t L_564 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_565 = V_0;
		NullCheck(L_565);
		int32_t L_566 = 0;
		int64_t L_567 = (int64_t)(L_565)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_564, L_567));
		// b1 -= kw[1];
		uint64_t L_568 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		NullCheck(L_569);
		int32_t L_570 = 1;
		int64_t L_571 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_568, L_571));
		// b2 -= kw[2];
		uint64_t L_572 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_573 = V_0;
		NullCheck(L_573);
		int32_t L_574 = 2;
		int64_t L_575 = (int64_t)(L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_572, L_575));
		// b3 -= kw[3];
		uint64_t L_576 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_577 = V_0;
		NullCheck(L_577);
		int32_t L_578 = 3;
		int64_t L_579 = (int64_t)(L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_576, L_579));
		// b4 -= kw[4];
		uint64_t L_580 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_581 = V_0;
		NullCheck(L_581);
		int32_t L_582 = 4;
		int64_t L_583 = (int64_t)(L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_580, L_583));
		// b5 -= kw[5];
		uint64_t L_584 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_585 = V_0;
		NullCheck(L_585);
		int32_t L_586 = 5;
		int64_t L_587 = (int64_t)(L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_584, L_587));
		// b6 -= kw[6];
		uint64_t L_588 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		NullCheck(L_589);
		int32_t L_590 = 6;
		int64_t L_591 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_588, L_591));
		// b7 -= kw[7];
		uint64_t L_592 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_593 = V_0;
		NullCheck(L_593);
		int32_t L_594 = 7;
		int64_t L_595 = (int64_t)(L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_592, L_595));
		// b8 -= kw[8];
		uint64_t L_596 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_597 = V_0;
		NullCheck(L_597);
		int32_t L_598 = 8;
		int64_t L_599 = (int64_t)(L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_596, L_599));
		// b9 -= kw[9];
		uint64_t L_600 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_601 = V_0;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)9);
		int64_t L_603 = (int64_t)(L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_600, L_603));
		// b10 -= kw[10];
		uint64_t L_604 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_605 = V_0;
		NullCheck(L_605);
		int32_t L_606 = ((int32_t)10);
		int64_t L_607 = (int64_t)(L_605)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_604, L_607));
		// b11 -= kw[11];
		uint64_t L_608 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)11);
		int64_t L_611 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_608, L_611));
		// b12 -= kw[12];
		uint64_t L_612 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_0;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)12);
		int64_t L_615 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_612, L_615));
		// b13 -= kw[13] + t[0];
		uint64_t L_616 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_617 = V_0;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)13);
		int64_t L_619 = (int64_t)(L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_620 = V_1;
		NullCheck(L_620);
		int32_t L_621 = 0;
		int64_t L_622 = (int64_t)(L_620)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_616, ((int64_t)il2cpp_codegen_add(L_619, L_622))));
		// b14 -= kw[14] + t[1];
		uint64_t L_623 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_624 = V_0;
		NullCheck(L_624);
		int32_t L_625 = ((int32_t)14);
		int64_t L_626 = (int64_t)(L_624)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_1;
		NullCheck(L_627);
		int32_t L_628 = 1;
		int64_t L_629 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_623, ((int64_t)il2cpp_codegen_add(L_626, L_629))));
		// b15 -= kw[15];
		uint64_t L_630 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_631 = V_0;
		NullCheck(L_631);
		int32_t L_632 = ((int32_t)15);
		int64_t L_633 = (int64_t)(L_631)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_630, L_633));
		// state[0] = b0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___1_state;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		// state[1] = b1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___1_state;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		// state[2] = b2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___1_state;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		// state[3] = b3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___1_state;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		// state[4] = b4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___1_state;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		// state[5] = b5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___1_state;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		// state[6] = b6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___1_state;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		// state[7] = b7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___1_state;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		// state[8] = b8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___1_state;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		// state[9] = b9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___1_state;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		// state[10] = b10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___1_state;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		// state[11] = b11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___1_state;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		// state[12] = b12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___1_state;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		// state[13] = b13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___1_state;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		// state[14] = b14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___1_state;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		// state[15] = b15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___1_state;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
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
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TnepresEngine_get_AlgorithmName_m5E8847265705FA0B37255201F289EAD762DAD1E1 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Tnepres"; }
		return _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
	}
}
// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine::MakeWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TnepresEngine_MakeWorkingKey_mA88B6D9DC946D3993075A7FDB6A2F002214EC604 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int[] kPad = new int[16];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		// int off = 0;
		V_1 = 0;
		// int length = 0;
		V_2 = 0;
		// for (off = key.Length - 4; off > 0; off -= 4)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_key;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4));
		goto IL_0026;
	}

IL_0014:
	{
		// kPad[length++] = (int)Pack.BE_To_UInt32(key, off);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_key;
		int32_t L_6 = V_1;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_5, L_6, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		// for (off = key.Length - 4; off > 0; off -= 4)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 4));
	}

IL_0026:
	{
		// for (off = key.Length - 4; off > 0; off -= 4)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// if (off == 0)
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		// kPad[length++] = (int)Pack.BE_To_UInt32(key, 0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_key;
		uint32_t L_15;
		L_15 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_14, 0, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_15);
		// if (length < 8)
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		// kPad[length] = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)1);
		goto IL_0050;
	}

IL_0045:
	{
		// throw new ArgumentException("key must be a multiple of 4 bytes");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TnepresEngine_MakeWorkingKey_mA88B6D9DC946D3993075A7FDB6A2F002214EC604_RuntimeMethod_var)));
	}

IL_0050:
	{
		// int amount = (ROUNDS + 1) * 4;
		V_3 = ((int32_t)132);
		// int[] w = new int[amount];
		int32_t L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		// for (int i = 8; i < 16; i++)
		V_5 = 8;
		goto IL_009a;
	}

IL_0063:
	{
		// kPad[i] = RotateLeft(kPad[i - 8] ^ kPad[i - 5] ^ kPad[i - 3] ^ kPad[i - 1] ^ PHI ^ (i - 8), 11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 8));
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 5));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 3));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_27^L_31))^L_35))^L_39))^((int32_t)-1640531527)))^((int32_t)il2cpp_codegen_subtract(L_40, 8)))), ((int32_t)11), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_41);
		// for (int i = 8; i < 16; i++)
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_009a:
	{
		// for (int i = 8; i < 16; i++)
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)16))))
		{
			goto IL_0063;
		}
	}
	{
		// Array.Copy(kPad, 8, w, 0, 8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_44, 8, (RuntimeArray*)L_45, 0, 8, NULL);
		// for (int i = 8; i < amount; i++)
		V_6 = 8;
		goto IL_00ea;
	}

IL_00b0:
	{
		// w[i] = RotateLeft(w[i - 8] ^ w[i - 5] ^ w[i - 3] ^ w[i - 1] ^ PHI ^ i, 11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_4;
		int32_t L_47 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_4;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 8));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 5));
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_4;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 3));
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		int32_t L_61 = V_6;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_51^L_55))^L_59))^L_63))^((int32_t)-1640531527)))^L_64)), ((int32_t)11), NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_65);
		// for (int i = 8; i < amount; i++)
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00ea:
	{
		// for (int i = 8; i < amount; i++)
		int32_t L_67 = V_6;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00b0;
		}
	}
	{
		// Sb3(w[0], w[1], w[2], w[3]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70 = 0;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		NullCheck(L_72);
		int32_t L_73 = 1;
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_4;
		NullCheck(L_75);
		int32_t L_76 = 2;
		int32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_4;
		NullCheck(L_78);
		int32_t L_79 = 3;
		int32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_71, L_74, L_77, L_80, NULL);
		// w[0] = X0; w[1] = X1; w[2] = X2; w[3] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_4;
		int32_t L_82 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_82);
		// w[0] = X0; w[1] = X1; w[2] = X2; w[3] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_4;
		int32_t L_84 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_84);
		// w[0] = X0; w[1] = X1; w[2] = X2; w[3] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_4;
		int32_t L_86 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_86);
		// w[0] = X0; w[1] = X1; w[2] = X2; w[3] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_4;
		int32_t L_88 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_88);
		// Sb2(w[4], w[5], w[6], w[7]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_4;
		NullCheck(L_89);
		int32_t L_90 = 4;
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = 5;
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_4;
		NullCheck(L_95);
		int32_t L_96 = 6;
		int32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_4;
		NullCheck(L_98);
		int32_t L_99 = 7;
		int32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_91, L_94, L_97, L_100, NULL);
		// w[4] = X0; w[5] = X1; w[6] = X2; w[7] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_4;
		int32_t L_102 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_102);
		// w[4] = X0; w[5] = X1; w[6] = X2; w[7] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_4;
		int32_t L_104 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_104);
		// w[4] = X0; w[5] = X1; w[6] = X2; w[7] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_4;
		int32_t L_106 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_106);
		// w[4] = X0; w[5] = X1; w[6] = X2; w[7] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_4;
		int32_t L_108 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_108);
		// Sb1(w[8], w[9], w[10], w[11]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = V_4;
		NullCheck(L_109);
		int32_t L_110 = 8;
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)9);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_4;
		NullCheck(L_115);
		int32_t L_116 = ((int32_t)10);
		int32_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_4;
		NullCheck(L_118);
		int32_t L_119 = ((int32_t)11);
		int32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_111, L_114, L_117, L_120, NULL);
		// w[8] = X0; w[9] = X1; w[10] = X2; w[11] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = V_4;
		int32_t L_122 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_122);
		// w[8] = X0; w[9] = X1; w[10] = X2; w[11] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = V_4;
		int32_t L_124 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_124);
		// w[8] = X0; w[9] = X1; w[10] = X2; w[11] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = V_4;
		int32_t L_126 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)L_126);
		// w[8] = X0; w[9] = X1; w[10] = X2; w[11] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_4;
		int32_t L_128 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)L_128);
		// Sb0(w[12], w[13], w[14], w[15]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)12);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = V_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)13);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_4;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)14);
		int32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_4;
		NullCheck(L_138);
		int32_t L_139 = ((int32_t)15);
		int32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_131, L_134, L_137, L_140, NULL);
		// w[12] = X0; w[13] = X1; w[14] = X2; w[15] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_4;
		int32_t L_142 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)L_142);
		// w[12] = X0; w[13] = X1; w[14] = X2; w[15] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_4;
		int32_t L_144 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)L_144);
		// w[12] = X0; w[13] = X1; w[14] = X2; w[15] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = V_4;
		int32_t L_146 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)L_146);
		// w[12] = X0; w[13] = X1; w[14] = X2; w[15] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = V_4;
		int32_t L_148 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)L_148);
		// Sb7(w[16], w[17], w[18], w[19]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)16);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)17);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_4;
		NullCheck(L_155);
		int32_t L_156 = ((int32_t)18);
		int32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_4;
		NullCheck(L_158);
		int32_t L_159 = ((int32_t)19);
		int32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_151, L_154, L_157, L_160, NULL);
		// w[16] = X0; w[17] = X1; w[18] = X2; w[19] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_4;
		int32_t L_162 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)L_162);
		// w[16] = X0; w[17] = X1; w[18] = X2; w[19] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = V_4;
		int32_t L_164 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (int32_t)L_164);
		// w[16] = X0; w[17] = X1; w[18] = X2; w[19] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = V_4;
		int32_t L_166 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (int32_t)L_166);
		// w[16] = X0; w[17] = X1; w[18] = X2; w[19] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = V_4;
		int32_t L_168 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (int32_t)L_168);
		// Sb6(w[20], w[21], w[22], w[23]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = V_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)20);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = V_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)21);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_175 = V_4;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)22);
		int32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = V_4;
		NullCheck(L_178);
		int32_t L_179 = ((int32_t)23);
		int32_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_171, L_174, L_177, L_180, NULL);
		// w[20] = X0; w[21] = X1; w[22] = X2; w[23] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = V_4;
		int32_t L_182 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (int32_t)L_182);
		// w[20] = X0; w[21] = X1; w[22] = X2; w[23] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = V_4;
		int32_t L_184 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (int32_t)L_184);
		// w[20] = X0; w[21] = X1; w[22] = X2; w[23] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = V_4;
		int32_t L_186 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (int32_t)L_186);
		// w[20] = X0; w[21] = X1; w[22] = X2; w[23] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = V_4;
		int32_t L_188 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (int32_t)L_188);
		// Sb5(w[24], w[25], w[26], w[27]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)24);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)25);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_4;
		NullCheck(L_195);
		int32_t L_196 = ((int32_t)26);
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_4;
		NullCheck(L_198);
		int32_t L_199 = ((int32_t)27);
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_191, L_194, L_197, L_200, NULL);
		// w[24] = X0; w[25] = X1; w[26] = X2; w[27] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = V_4;
		int32_t L_202 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (int32_t)L_202);
		// w[24] = X0; w[25] = X1; w[26] = X2; w[27] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_203 = V_4;
		int32_t L_204 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (int32_t)L_204);
		// w[24] = X0; w[25] = X1; w[26] = X2; w[27] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = V_4;
		int32_t L_206 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (int32_t)L_206);
		// w[24] = X0; w[25] = X1; w[26] = X2; w[27] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_4;
		int32_t L_208 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (int32_t)L_208);
		// Sb4(w[28], w[29], w[30], w[31]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = V_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)28);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = V_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)29);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_215 = V_4;
		NullCheck(L_215);
		int32_t L_216 = ((int32_t)30);
		int32_t L_217 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = V_4;
		NullCheck(L_218);
		int32_t L_219 = ((int32_t)31);
		int32_t L_220 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_211, L_214, L_217, L_220, NULL);
		// w[28] = X0; w[29] = X1; w[30] = X2; w[31] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = V_4;
		int32_t L_222 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (int32_t)L_222);
		// w[28] = X0; w[29] = X1; w[30] = X2; w[31] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = V_4;
		int32_t L_224 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_223);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (int32_t)L_224);
		// w[28] = X0; w[29] = X1; w[30] = X2; w[31] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = V_4;
		int32_t L_226 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (int32_t)L_226);
		// w[28] = X0; w[29] = X1; w[30] = X2; w[31] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = V_4;
		int32_t L_228 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (int32_t)L_228);
		// Sb3(w[32], w[33], w[34], w[35]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = V_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)32);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)33);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = V_4;
		NullCheck(L_235);
		int32_t L_236 = ((int32_t)34);
		int32_t L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_4;
		NullCheck(L_238);
		int32_t L_239 = ((int32_t)35);
		int32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_231, L_234, L_237, L_240, NULL);
		// w[32] = X0; w[33] = X1; w[34] = X2; w[35] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_4;
		int32_t L_242 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_241);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)L_242);
		// w[32] = X0; w[33] = X1; w[34] = X2; w[35] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = V_4;
		int32_t L_244 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (int32_t)L_244);
		// w[32] = X0; w[33] = X1; w[34] = X2; w[35] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_245 = V_4;
		int32_t L_246 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (int32_t)L_246);
		// w[32] = X0; w[33] = X1; w[34] = X2; w[35] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = V_4;
		int32_t L_248 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (int32_t)L_248);
		// Sb2(w[36], w[37], w[38], w[39]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = V_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)36);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = V_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)37);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = V_4;
		NullCheck(L_255);
		int32_t L_256 = ((int32_t)38);
		int32_t L_257 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = V_4;
		NullCheck(L_258);
		int32_t L_259 = ((int32_t)39);
		int32_t L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_251, L_254, L_257, L_260, NULL);
		// w[36] = X0; w[37] = X1; w[38] = X2; w[39] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = V_4;
		int32_t L_262 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (int32_t)L_262);
		// w[36] = X0; w[37] = X1; w[38] = X2; w[39] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = V_4;
		int32_t L_264 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_263);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (int32_t)L_264);
		// w[36] = X0; w[37] = X1; w[38] = X2; w[39] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_4;
		int32_t L_266 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (int32_t)L_266);
		// w[36] = X0; w[37] = X1; w[38] = X2; w[39] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = V_4;
		int32_t L_268 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (int32_t)L_268);
		// Sb1(w[40], w[41], w[42], w[43]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = V_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)40);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)41);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_275 = V_4;
		NullCheck(L_275);
		int32_t L_276 = ((int32_t)42);
		int32_t L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_4;
		NullCheck(L_278);
		int32_t L_279 = ((int32_t)43);
		int32_t L_280 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_271, L_274, L_277, L_280, NULL);
		// w[40] = X0; w[41] = X1; w[42] = X2; w[43] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = V_4;
		int32_t L_282 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_281);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (int32_t)L_282);
		// w[40] = X0; w[41] = X1; w[42] = X2; w[43] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = V_4;
		int32_t L_284 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (int32_t)L_284);
		// w[40] = X0; w[41] = X1; w[42] = X2; w[43] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = V_4;
		int32_t L_286 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_285);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (int32_t)L_286);
		// w[40] = X0; w[41] = X1; w[42] = X2; w[43] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = V_4;
		int32_t L_288 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_287);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (int32_t)L_288);
		// Sb0(w[44], w[45], w[46], w[47]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = V_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)44);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)45);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_295 = V_4;
		NullCheck(L_295);
		int32_t L_296 = ((int32_t)46);
		int32_t L_297 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = V_4;
		NullCheck(L_298);
		int32_t L_299 = ((int32_t)47);
		int32_t L_300 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_291, L_294, L_297, L_300, NULL);
		// w[44] = X0; w[45] = X1; w[46] = X2; w[47] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = V_4;
		int32_t L_302 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)L_302);
		// w[44] = X0; w[45] = X1; w[46] = X2; w[47] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = V_4;
		int32_t L_304 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (int32_t)L_304);
		// w[44] = X0; w[45] = X1; w[46] = X2; w[47] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_305 = V_4;
		int32_t L_306 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)L_306);
		// w[44] = X0; w[45] = X1; w[46] = X2; w[47] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_307 = V_4;
		int32_t L_308 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (int32_t)L_308);
		// Sb7(w[48], w[49], w[50], w[51]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = V_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)48);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = V_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)49);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = V_4;
		NullCheck(L_315);
		int32_t L_316 = ((int32_t)50);
		int32_t L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = V_4;
		NullCheck(L_318);
		int32_t L_319 = ((int32_t)51);
		int32_t L_320 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_311, L_314, L_317, L_320, NULL);
		// w[48] = X0; w[49] = X1; w[50] = X2; w[51] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = V_4;
		int32_t L_322 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (int32_t)L_322);
		// w[48] = X0; w[49] = X1; w[50] = X2; w[51] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = V_4;
		int32_t L_324 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (int32_t)L_324);
		// w[48] = X0; w[49] = X1; w[50] = X2; w[51] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_325 = V_4;
		int32_t L_326 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (int32_t)L_326);
		// w[48] = X0; w[49] = X1; w[50] = X2; w[51] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = V_4;
		int32_t L_328 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_327);
		(L_327)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (int32_t)L_328);
		// Sb6(w[52], w[53], w[54], w[55]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = V_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)52);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)53);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = V_4;
		NullCheck(L_335);
		int32_t L_336 = ((int32_t)54);
		int32_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_4;
		NullCheck(L_338);
		int32_t L_339 = ((int32_t)55);
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_331, L_334, L_337, L_340, NULL);
		// w[52] = X0; w[53] = X1; w[54] = X2; w[55] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_4;
		int32_t L_342 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_341);
		(L_341)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (int32_t)L_342);
		// w[52] = X0; w[53] = X1; w[54] = X2; w[55] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = V_4;
		int32_t L_344 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_343);
		(L_343)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (int32_t)L_344);
		// w[52] = X0; w[53] = X1; w[54] = X2; w[55] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = V_4;
		int32_t L_346 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_345);
		(L_345)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (int32_t)L_346);
		// w[52] = X0; w[53] = X1; w[54] = X2; w[55] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_347 = V_4;
		int32_t L_348 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_347);
		(L_347)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (int32_t)L_348);
		// Sb5(w[56], w[57], w[58], w[59]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = V_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)56);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = V_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)57);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_355 = V_4;
		NullCheck(L_355);
		int32_t L_356 = ((int32_t)58);
		int32_t L_357 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = V_4;
		NullCheck(L_358);
		int32_t L_359 = ((int32_t)59);
		int32_t L_360 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_351, L_354, L_357, L_360, NULL);
		// w[56] = X0; w[57] = X1; w[58] = X2; w[59] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = V_4;
		int32_t L_362 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (int32_t)L_362);
		// w[56] = X0; w[57] = X1; w[58] = X2; w[59] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = V_4;
		int32_t L_364 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_363);
		(L_363)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (int32_t)L_364);
		// w[56] = X0; w[57] = X1; w[58] = X2; w[59] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_365 = V_4;
		int32_t L_366 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_365);
		(L_365)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (int32_t)L_366);
		// w[56] = X0; w[57] = X1; w[58] = X2; w[59] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_367 = V_4;
		int32_t L_368 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (int32_t)L_368);
		// Sb4(w[60], w[61], w[62], w[63]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = V_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)60);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)61);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_375 = V_4;
		NullCheck(L_375);
		int32_t L_376 = ((int32_t)62);
		int32_t L_377 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_4;
		NullCheck(L_378);
		int32_t L_379 = ((int32_t)63);
		int32_t L_380 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_371, L_374, L_377, L_380, NULL);
		// w[60] = X0; w[61] = X1; w[62] = X2; w[63] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = V_4;
		int32_t L_382 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (int32_t)L_382);
		// w[60] = X0; w[61] = X1; w[62] = X2; w[63] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = V_4;
		int32_t L_384 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (int32_t)L_384);
		// w[60] = X0; w[61] = X1; w[62] = X2; w[63] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_385 = V_4;
		int32_t L_386 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (int32_t)L_386);
		// w[60] = X0; w[61] = X1; w[62] = X2; w[63] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = V_4;
		int32_t L_388 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_387);
		(L_387)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (int32_t)L_388);
		// Sb3(w[64], w[65], w[66], w[67]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = V_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)64);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = V_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)65);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_395 = V_4;
		NullCheck(L_395);
		int32_t L_396 = ((int32_t)66);
		int32_t L_397 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_396));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = V_4;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)67);
		int32_t L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_391, L_394, L_397, L_400, NULL);
		// w[64] = X0; w[65] = X1; w[66] = X2; w[67] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = V_4;
		int32_t L_402 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_401);
		(L_401)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (int32_t)L_402);
		// w[64] = X0; w[65] = X1; w[66] = X2; w[67] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_403 = V_4;
		int32_t L_404 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_403);
		(L_403)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (int32_t)L_404);
		// w[64] = X0; w[65] = X1; w[66] = X2; w[67] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_405 = V_4;
		int32_t L_406 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_405);
		(L_405)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (int32_t)L_406);
		// w[64] = X0; w[65] = X1; w[66] = X2; w[67] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_407 = V_4;
		int32_t L_408 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_407);
		(L_407)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (int32_t)L_408);
		// Sb2(w[68], w[69], w[70], w[71]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = V_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)68);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)69);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_415 = V_4;
		NullCheck(L_415);
		int32_t L_416 = ((int32_t)70);
		int32_t L_417 = (L_415)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_4;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)71);
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_411, L_414, L_417, L_420, NULL);
		// w[68] = X0; w[69] = X1; w[70] = X2; w[71] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = V_4;
		int32_t L_422 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_421);
		(L_421)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (int32_t)L_422);
		// w[68] = X0; w[69] = X1; w[70] = X2; w[71] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = V_4;
		int32_t L_424 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_423);
		(L_423)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (int32_t)L_424);
		// w[68] = X0; w[69] = X1; w[70] = X2; w[71] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = V_4;
		int32_t L_426 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_425);
		(L_425)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (int32_t)L_426);
		// w[68] = X0; w[69] = X1; w[70] = X2; w[71] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_427 = V_4;
		int32_t L_428 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_427);
		(L_427)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (int32_t)L_428);
		// Sb1(w[72], w[73], w[74], w[75]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = V_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)72);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = V_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)73);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_435 = V_4;
		NullCheck(L_435);
		int32_t L_436 = ((int32_t)74);
		int32_t L_437 = (L_435)->GetAt(static_cast<il2cpp_array_size_t>(L_436));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = V_4;
		NullCheck(L_438);
		int32_t L_439 = ((int32_t)75);
		int32_t L_440 = (L_438)->GetAt(static_cast<il2cpp_array_size_t>(L_439));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_431, L_434, L_437, L_440, NULL);
		// w[72] = X0; w[73] = X1; w[74] = X2; w[75] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = V_4;
		int32_t L_442 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_441);
		(L_441)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (int32_t)L_442);
		// w[72] = X0; w[73] = X1; w[74] = X2; w[75] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = V_4;
		int32_t L_444 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_443);
		(L_443)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (int32_t)L_444);
		// w[72] = X0; w[73] = X1; w[74] = X2; w[75] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_445 = V_4;
		int32_t L_446 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_445);
		(L_445)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (int32_t)L_446);
		// w[72] = X0; w[73] = X1; w[74] = X2; w[75] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_447 = V_4;
		int32_t L_448 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (int32_t)L_448);
		// Sb0(w[76], w[77], w[78], w[79]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = V_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)76);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)77);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_455 = V_4;
		NullCheck(L_455);
		int32_t L_456 = ((int32_t)78);
		int32_t L_457 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_456));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_4;
		NullCheck(L_458);
		int32_t L_459 = ((int32_t)79);
		int32_t L_460 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_451, L_454, L_457, L_460, NULL);
		// w[76] = X0; w[77] = X1; w[78] = X2; w[79] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = V_4;
		int32_t L_462 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_461);
		(L_461)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (int32_t)L_462);
		// w[76] = X0; w[77] = X1; w[78] = X2; w[79] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_463 = V_4;
		int32_t L_464 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_463);
		(L_463)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (int32_t)L_464);
		// w[76] = X0; w[77] = X1; w[78] = X2; w[79] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_465 = V_4;
		int32_t L_466 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_465);
		(L_465)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (int32_t)L_466);
		// w[76] = X0; w[77] = X1; w[78] = X2; w[79] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_467 = V_4;
		int32_t L_468 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_467);
		(L_467)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (int32_t)L_468);
		// Sb7(w[80], w[81], w[82], w[83]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = V_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)80);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = V_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)81);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_475 = V_4;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)82);
		int32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_478 = V_4;
		NullCheck(L_478);
		int32_t L_479 = ((int32_t)83);
		int32_t L_480 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_479));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_471, L_474, L_477, L_480, NULL);
		// w[80] = X0; w[81] = X1; w[82] = X2; w[83] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = V_4;
		int32_t L_482 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_481);
		(L_481)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (int32_t)L_482);
		// w[80] = X0; w[81] = X1; w[82] = X2; w[83] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_483 = V_4;
		int32_t L_484 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_483);
		(L_483)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (int32_t)L_484);
		// w[80] = X0; w[81] = X1; w[82] = X2; w[83] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_485 = V_4;
		int32_t L_486 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_485);
		(L_485)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (int32_t)L_486);
		// w[80] = X0; w[81] = X1; w[82] = X2; w[83] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_487 = V_4;
		int32_t L_488 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_487);
		(L_487)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (int32_t)L_488);
		// Sb6(w[84], w[85], w[86], w[87]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = V_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)84);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)85);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_495 = V_4;
		NullCheck(L_495);
		int32_t L_496 = ((int32_t)86);
		int32_t L_497 = (L_495)->GetAt(static_cast<il2cpp_array_size_t>(L_496));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_4;
		NullCheck(L_498);
		int32_t L_499 = ((int32_t)87);
		int32_t L_500 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_491, L_494, L_497, L_500, NULL);
		// w[84] = X0; w[85] = X1; w[86] = X2; w[87] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = V_4;
		int32_t L_502 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_501);
		(L_501)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (int32_t)L_502);
		// w[84] = X0; w[85] = X1; w[86] = X2; w[87] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_503 = V_4;
		int32_t L_504 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_503);
		(L_503)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (int32_t)L_504);
		// w[84] = X0; w[85] = X1; w[86] = X2; w[87] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_505 = V_4;
		int32_t L_506 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_505);
		(L_505)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (int32_t)L_506);
		// w[84] = X0; w[85] = X1; w[86] = X2; w[87] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_507 = V_4;
		int32_t L_508 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_507);
		(L_507)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (int32_t)L_508);
		// Sb5(w[88], w[89], w[90], w[91]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = V_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)88);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = V_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)89);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = V_4;
		NullCheck(L_515);
		int32_t L_516 = ((int32_t)90);
		int32_t L_517 = (L_515)->GetAt(static_cast<il2cpp_array_size_t>(L_516));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = V_4;
		NullCheck(L_518);
		int32_t L_519 = ((int32_t)91);
		int32_t L_520 = (L_518)->GetAt(static_cast<il2cpp_array_size_t>(L_519));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_511, L_514, L_517, L_520, NULL);
		// w[88] = X0; w[89] = X1; w[90] = X2; w[91] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = V_4;
		int32_t L_522 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_521);
		(L_521)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (int32_t)L_522);
		// w[88] = X0; w[89] = X1; w[90] = X2; w[91] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_523 = V_4;
		int32_t L_524 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_523);
		(L_523)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (int32_t)L_524);
		// w[88] = X0; w[89] = X1; w[90] = X2; w[91] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_525 = V_4;
		int32_t L_526 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_525);
		(L_525)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (int32_t)L_526);
		// w[88] = X0; w[89] = X1; w[90] = X2; w[91] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_4;
		int32_t L_528 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_527);
		(L_527)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (int32_t)L_528);
		// Sb4(w[92], w[93], w[94], w[95]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)92);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_4;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)93);
		int32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_535 = V_4;
		NullCheck(L_535);
		int32_t L_536 = ((int32_t)94);
		int32_t L_537 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_4;
		NullCheck(L_538);
		int32_t L_539 = ((int32_t)95);
		int32_t L_540 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_531, L_534, L_537, L_540, NULL);
		// w[92] = X0; w[93] = X1; w[94] = X2; w[95] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_4;
		int32_t L_542 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_541);
		(L_541)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (int32_t)L_542);
		// w[92] = X0; w[93] = X1; w[94] = X2; w[95] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_543 = V_4;
		int32_t L_544 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_543);
		(L_543)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (int32_t)L_544);
		// w[92] = X0; w[93] = X1; w[94] = X2; w[95] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = V_4;
		int32_t L_546 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_545);
		(L_545)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (int32_t)L_546);
		// w[92] = X0; w[93] = X1; w[94] = X2; w[95] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = V_4;
		int32_t L_548 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_547);
		(L_547)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (int32_t)L_548);
		// Sb3(w[96], w[97], w[98], w[99]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = V_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)96);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_552 = V_4;
		NullCheck(L_552);
		int32_t L_553 = ((int32_t)97);
		int32_t L_554 = (L_552)->GetAt(static_cast<il2cpp_array_size_t>(L_553));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_555 = V_4;
		NullCheck(L_555);
		int32_t L_556 = ((int32_t)98);
		int32_t L_557 = (L_555)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_558 = V_4;
		NullCheck(L_558);
		int32_t L_559 = ((int32_t)99);
		int32_t L_560 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_559));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_551, L_554, L_557, L_560, NULL);
		// w[96] = X0; w[97] = X1; w[98] = X2; w[99] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = V_4;
		int32_t L_562 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_561);
		(L_561)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (int32_t)L_562);
		// w[96] = X0; w[97] = X1; w[98] = X2; w[99] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = V_4;
		int32_t L_564 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_563);
		(L_563)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (int32_t)L_564);
		// w[96] = X0; w[97] = X1; w[98] = X2; w[99] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_565 = V_4;
		int32_t L_566 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_565);
		(L_565)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (int32_t)L_566);
		// w[96] = X0; w[97] = X1; w[98] = X2; w[99] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_567 = V_4;
		int32_t L_568 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_567);
		(L_567)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (int32_t)L_568);
		// Sb2(w[100], w[101], w[102], w[103]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = V_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)100);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_572 = V_4;
		NullCheck(L_572);
		int32_t L_573 = ((int32_t)101);
		int32_t L_574 = (L_572)->GetAt(static_cast<il2cpp_array_size_t>(L_573));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_4;
		NullCheck(L_575);
		int32_t L_576 = ((int32_t)102);
		int32_t L_577 = (L_575)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_578 = V_4;
		NullCheck(L_578);
		int32_t L_579 = ((int32_t)103);
		int32_t L_580 = (L_578)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_571, L_574, L_577, L_580, NULL);
		// w[100] = X0; w[101] = X1; w[102] = X2; w[103] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = V_4;
		int32_t L_582 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_581);
		(L_581)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (int32_t)L_582);
		// w[100] = X0; w[101] = X1; w[102] = X2; w[103] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_583 = V_4;
		int32_t L_584 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_583);
		(L_583)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (int32_t)L_584);
		// w[100] = X0; w[101] = X1; w[102] = X2; w[103] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_585 = V_4;
		int32_t L_586 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_585);
		(L_585)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (int32_t)L_586);
		// w[100] = X0; w[101] = X1; w[102] = X2; w[103] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_587 = V_4;
		int32_t L_588 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_587);
		(L_587)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (int32_t)L_588);
		// Sb1(w[104], w[105], w[106], w[107]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = V_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)104);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_592 = V_4;
		NullCheck(L_592);
		int32_t L_593 = ((int32_t)105);
		int32_t L_594 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_593));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_595 = V_4;
		NullCheck(L_595);
		int32_t L_596 = ((int32_t)106);
		int32_t L_597 = (L_595)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_598 = V_4;
		NullCheck(L_598);
		int32_t L_599 = ((int32_t)107);
		int32_t L_600 = (L_598)->GetAt(static_cast<il2cpp_array_size_t>(L_599));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_591, L_594, L_597, L_600, NULL);
		// w[104] = X0; w[105] = X1; w[106] = X2; w[107] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = V_4;
		int32_t L_602 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_601);
		(L_601)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (int32_t)L_602);
		// w[104] = X0; w[105] = X1; w[106] = X2; w[107] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_603 = V_4;
		int32_t L_604 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_603);
		(L_603)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (int32_t)L_604);
		// w[104] = X0; w[105] = X1; w[106] = X2; w[107] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_605 = V_4;
		int32_t L_606 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_605);
		(L_605)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (int32_t)L_606);
		// w[104] = X0; w[105] = X1; w[106] = X2; w[107] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_607 = V_4;
		int32_t L_608 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_607);
		(L_607)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (int32_t)L_608);
		// Sb0(w[108], w[109], w[110], w[111]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = V_4;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)108);
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_4;
		NullCheck(L_612);
		int32_t L_613 = ((int32_t)109);
		int32_t L_614 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_615 = V_4;
		NullCheck(L_615);
		int32_t L_616 = ((int32_t)110);
		int32_t L_617 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_616));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_4;
		NullCheck(L_618);
		int32_t L_619 = ((int32_t)111);
		int32_t L_620 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_619));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_611, L_614, L_617, L_620, NULL);
		// w[108] = X0; w[109] = X1; w[110] = X2; w[111] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = V_4;
		int32_t L_622 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_621);
		(L_621)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (int32_t)L_622);
		// w[108] = X0; w[109] = X1; w[110] = X2; w[111] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_623 = V_4;
		int32_t L_624 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_623);
		(L_623)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (int32_t)L_624);
		// w[108] = X0; w[109] = X1; w[110] = X2; w[111] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_625 = V_4;
		int32_t L_626 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_625);
		(L_625)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (int32_t)L_626);
		// w[108] = X0; w[109] = X1; w[110] = X2; w[111] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_627 = V_4;
		int32_t L_628 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_627);
		(L_627)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (int32_t)L_628);
		// Sb7(w[112], w[113], w[114], w[115]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_4;
		NullCheck(L_629);
		int32_t L_630 = ((int32_t)112);
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_632 = V_4;
		NullCheck(L_632);
		int32_t L_633 = ((int32_t)113);
		int32_t L_634 = (L_632)->GetAt(static_cast<il2cpp_array_size_t>(L_633));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_635 = V_4;
		NullCheck(L_635);
		int32_t L_636 = ((int32_t)114);
		int32_t L_637 = (L_635)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_638 = V_4;
		NullCheck(L_638);
		int32_t L_639 = ((int32_t)115);
		int32_t L_640 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_639));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_631, L_634, L_637, L_640, NULL);
		// w[112] = X0; w[113] = X1; w[114] = X2; w[115] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = V_4;
		int32_t L_642 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_641);
		(L_641)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (int32_t)L_642);
		// w[112] = X0; w[113] = X1; w[114] = X2; w[115] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_643 = V_4;
		int32_t L_644 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_643);
		(L_643)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (int32_t)L_644);
		// w[112] = X0; w[113] = X1; w[114] = X2; w[115] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_645 = V_4;
		int32_t L_646 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_645);
		(L_645)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (int32_t)L_646);
		// w[112] = X0; w[113] = X1; w[114] = X2; w[115] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_647 = V_4;
		int32_t L_648 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_647);
		(L_647)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (int32_t)L_648);
		// Sb6(w[116], w[117], w[118], w[119]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = V_4;
		NullCheck(L_649);
		int32_t L_650 = ((int32_t)116);
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_652 = V_4;
		NullCheck(L_652);
		int32_t L_653 = ((int32_t)117);
		int32_t L_654 = (L_652)->GetAt(static_cast<il2cpp_array_size_t>(L_653));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = V_4;
		NullCheck(L_655);
		int32_t L_656 = ((int32_t)118);
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = V_4;
		NullCheck(L_658);
		int32_t L_659 = ((int32_t)119);
		int32_t L_660 = (L_658)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_651, L_654, L_657, L_660, NULL);
		// w[116] = X0; w[117] = X1; w[118] = X2; w[119] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = V_4;
		int32_t L_662 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_661);
		(L_661)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (int32_t)L_662);
		// w[116] = X0; w[117] = X1; w[118] = X2; w[119] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_663 = V_4;
		int32_t L_664 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_663);
		(L_663)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (int32_t)L_664);
		// w[116] = X0; w[117] = X1; w[118] = X2; w[119] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_665 = V_4;
		int32_t L_666 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_665);
		(L_665)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (int32_t)L_666);
		// w[116] = X0; w[117] = X1; w[118] = X2; w[119] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = V_4;
		int32_t L_668 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_667);
		(L_667)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (int32_t)L_668);
		// Sb5(w[120], w[121], w[122], w[123]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_669 = V_4;
		NullCheck(L_669);
		int32_t L_670 = ((int32_t)120);
		int32_t L_671 = (L_669)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_4;
		NullCheck(L_672);
		int32_t L_673 = ((int32_t)121);
		int32_t L_674 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_673));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_675 = V_4;
		NullCheck(L_675);
		int32_t L_676 = ((int32_t)122);
		int32_t L_677 = (L_675)->GetAt(static_cast<il2cpp_array_size_t>(L_676));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_4;
		NullCheck(L_678);
		int32_t L_679 = ((int32_t)123);
		int32_t L_680 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_679));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_671, L_674, L_677, L_680, NULL);
		// w[120] = X0; w[121] = X1; w[122] = X2; w[123] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_681 = V_4;
		int32_t L_682 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_681);
		(L_681)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (int32_t)L_682);
		// w[120] = X0; w[121] = X1; w[122] = X2; w[123] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_683 = V_4;
		int32_t L_684 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_683);
		(L_683)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)121)), (int32_t)L_684);
		// w[120] = X0; w[121] = X1; w[122] = X2; w[123] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_685 = V_4;
		int32_t L_686 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_685);
		(L_685)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)122)), (int32_t)L_686);
		// w[120] = X0; w[121] = X1; w[122] = X2; w[123] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_687 = V_4;
		int32_t L_688 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_687);
		(L_687)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)123)), (int32_t)L_688);
		// Sb4(w[124], w[125], w[126], w[127]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = V_4;
		NullCheck(L_689);
		int32_t L_690 = ((int32_t)124);
		int32_t L_691 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_690));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_692 = V_4;
		NullCheck(L_692);
		int32_t L_693 = ((int32_t)125);
		int32_t L_694 = (L_692)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_695 = V_4;
		NullCheck(L_695);
		int32_t L_696 = ((int32_t)126);
		int32_t L_697 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_696));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_698 = V_4;
		NullCheck(L_698);
		int32_t L_699 = ((int32_t)127);
		int32_t L_700 = (L_698)->GetAt(static_cast<il2cpp_array_size_t>(L_699));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_691, L_694, L_697, L_700, NULL);
		// w[124] = X0; w[125] = X1; w[126] = X2; w[127] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = V_4;
		int32_t L_702 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_701);
		(L_701)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)124)), (int32_t)L_702);
		// w[124] = X0; w[125] = X1; w[126] = X2; w[127] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_703 = V_4;
		int32_t L_704 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_703);
		(L_703)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)125)), (int32_t)L_704);
		// w[124] = X0; w[125] = X1; w[126] = X2; w[127] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_705 = V_4;
		int32_t L_706 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_705);
		(L_705)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)126)), (int32_t)L_706);
		// w[124] = X0; w[125] = X1; w[126] = X2; w[127] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_707 = V_4;
		int32_t L_708 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_707);
		(L_707)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)127)), (int32_t)L_708);
		// Sb3(w[128], w[129], w[130], w[131]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_709 = V_4;
		NullCheck(L_709);
		int32_t L_710 = ((int32_t)128);
		int32_t L_711 = (L_709)->GetAt(static_cast<il2cpp_array_size_t>(L_710));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_712 = V_4;
		NullCheck(L_712);
		int32_t L_713 = ((int32_t)129);
		int32_t L_714 = (L_712)->GetAt(static_cast<il2cpp_array_size_t>(L_713));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_715 = V_4;
		NullCheck(L_715);
		int32_t L_716 = ((int32_t)130);
		int32_t L_717 = (L_715)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_718 = V_4;
		NullCheck(L_718);
		int32_t L_719 = ((int32_t)131);
		int32_t L_720 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_719));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_711, L_714, L_717, L_720, NULL);
		// w[128] = X0; w[129] = X1; w[130] = X2; w[131] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_721 = V_4;
		int32_t L_722 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		NullCheck(L_721);
		(L_721)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (int32_t)L_722);
		// w[128] = X0; w[129] = X1; w[130] = X2; w[131] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_723 = V_4;
		int32_t L_724 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		NullCheck(L_723);
		(L_723)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)129)), (int32_t)L_724);
		// w[128] = X0; w[129] = X1; w[130] = X2; w[131] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_725 = V_4;
		int32_t L_726 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		NullCheck(L_725);
		(L_725)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)130)), (int32_t)L_726);
		// w[128] = X0; w[129] = X1; w[130] = X2; w[131] = X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_727 = V_4;
		int32_t L_728 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		NullCheck(L_727);
		(L_727)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)131)), (int32_t)L_728);
		// return w;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_729 = V_4;
		return L_729;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_EncryptBlock_mA13969E752D215B7D994379D1C9C6CF9E04B6D8A (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		// X3 = (int)Pack.BE_To_UInt32(input, inOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = L_2;
		// X2 = (int)Pack.BE_To_UInt32(input, inOff + 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = L_5;
		// X1 = (int)Pack.BE_To_UInt32(input, inOff + 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = L_8;
		// X0 = (int)Pack.BE_To_UInt32(input, inOff + 12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = L_11;
		// Sb0(wKey[0] ^ X0, wKey[1] ^ X1, wKey[2] ^ X2, wKey[3] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_20);
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_24);
		int32_t L_25 = 3;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_14^L_15)), ((int32_t)(L_18^L_19)), ((int32_t)(L_22^L_23)), ((int32_t)(L_26^L_27)), NULL);
		// Sb0(wKey[0] ^ X0, wKey[1] ^ X1, wKey[2] ^ X2, wKey[3] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb1(wKey[4] ^ X0, wKey[5] ^ X1, wKey[6] ^ X2, wKey[7] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_28);
		int32_t L_29 = 4;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_32);
		int32_t L_33 = 5;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_36);
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_40);
		int32_t L_41 = 7;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_30^L_31)), ((int32_t)(L_34^L_35)), ((int32_t)(L_38^L_39)), ((int32_t)(L_42^L_43)), NULL);
		// Sb1(wKey[4] ^ X0, wKey[5] ^ X1, wKey[6] ^ X2, wKey[7] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb2(wKey[8] ^ X0, wKey[9] ^ X1, wKey[10] ^ X2, wKey[11] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_44);
		int32_t L_45 = 8;
		int32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)9);
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)10);
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)11);
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_46^L_47)), ((int32_t)(L_50^L_51)), ((int32_t)(L_54^L_55)), ((int32_t)(L_58^L_59)), NULL);
		// Sb2(wKey[8] ^ X0, wKey[9] ^ X1, wKey[10] ^ X2, wKey[11] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb3(wKey[12] ^ X0, wKey[13] ^ X1, wKey[14] ^ X2, wKey[15] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_60);
		int32_t L_61 = ((int32_t)12);
		int32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)13);
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)14);
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)15);
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_62^L_63)), ((int32_t)(L_66^L_67)), ((int32_t)(L_70^L_71)), ((int32_t)(L_74^L_75)), NULL);
		// Sb3(wKey[12] ^ X0, wKey[13] ^ X1, wKey[14] ^ X2, wKey[15] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb4(wKey[16] ^ X0, wKey[17] ^ X1, wKey[18] ^ X2, wKey[19] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)16);
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)17);
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)18);
		int32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_88);
		int32_t L_89 = ((int32_t)19);
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_78^L_79)), ((int32_t)(L_82^L_83)), ((int32_t)(L_86^L_87)), ((int32_t)(L_90^L_91)), NULL);
		// Sb4(wKey[16] ^ X0, wKey[17] ^ X1, wKey[18] ^ X2, wKey[19] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb5(wKey[20] ^ X0, wKey[21] ^ X1, wKey[22] ^ X2, wKey[23] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)20);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_96);
		int32_t L_97 = ((int32_t)21);
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)22);
		int32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_104);
		int32_t L_105 = ((int32_t)23);
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_94^L_95)), ((int32_t)(L_98^L_99)), ((int32_t)(L_102^L_103)), ((int32_t)(L_106^L_107)), NULL);
		// Sb5(wKey[20] ^ X0, wKey[21] ^ X1, wKey[22] ^ X2, wKey[23] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb6(wKey[24] ^ X0, wKey[25] ^ X1, wKey[26] ^ X2, wKey[27] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)24);
		int32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)25);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)26);
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)27);
		int32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_110^L_111)), ((int32_t)(L_114^L_115)), ((int32_t)(L_118^L_119)), ((int32_t)(L_122^L_123)), NULL);
		// Sb6(wKey[24] ^ X0, wKey[25] ^ X1, wKey[26] ^ X2, wKey[27] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb7(wKey[28] ^ X0, wKey[29] ^ X1, wKey[30] ^ X2, wKey[31] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_124);
		int32_t L_125 = ((int32_t)28);
		int32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)29);
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)31);
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_126^L_127)), ((int32_t)(L_130^L_131)), ((int32_t)(L_134^L_135)), ((int32_t)(L_138^L_139)), NULL);
		// Sb7(wKey[28] ^ X0, wKey[29] ^ X1, wKey[30] ^ X2, wKey[31] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb0(wKey[32] ^ X0, wKey[33] ^ X1, wKey[34] ^ X2, wKey[35] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)32);
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_144);
		int32_t L_145 = ((int32_t)33);
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_148);
		int32_t L_149 = ((int32_t)34);
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)35);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_142^L_143)), ((int32_t)(L_146^L_147)), ((int32_t)(L_150^L_151)), ((int32_t)(L_154^L_155)), NULL);
		// Sb0(wKey[32] ^ X0, wKey[33] ^ X1, wKey[34] ^ X2, wKey[35] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb1(wKey[36] ^ X0, wKey[37] ^ X1, wKey[38] ^ X2, wKey[39] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)36);
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_160);
		int32_t L_161 = ((int32_t)37);
		int32_t L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_164);
		int32_t L_165 = ((int32_t)38);
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_168);
		int32_t L_169 = ((int32_t)39);
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_158^L_159)), ((int32_t)(L_162^L_163)), ((int32_t)(L_166^L_167)), ((int32_t)(L_170^L_171)), NULL);
		// Sb1(wKey[36] ^ X0, wKey[37] ^ X1, wKey[38] ^ X2, wKey[39] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb2(wKey[40] ^ X0, wKey[41] ^ X1, wKey[42] ^ X2, wKey[43] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)40);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_176);
		int32_t L_177 = ((int32_t)41);
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_180);
		int32_t L_181 = ((int32_t)42);
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)43);
		int32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_174^L_175)), ((int32_t)(L_178^L_179)), ((int32_t)(L_182^L_183)), ((int32_t)(L_186^L_187)), NULL);
		// Sb2(wKey[40] ^ X0, wKey[41] ^ X1, wKey[42] ^ X2, wKey[43] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb3(wKey[44] ^ X0, wKey[45] ^ X1, wKey[46] ^ X2, wKey[47] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_188);
		int32_t L_189 = ((int32_t)44);
		int32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)45);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_196);
		int32_t L_197 = ((int32_t)46);
		int32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_200);
		int32_t L_201 = ((int32_t)47);
		int32_t L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_190^L_191)), ((int32_t)(L_194^L_195)), ((int32_t)(L_198^L_199)), ((int32_t)(L_202^L_203)), NULL);
		// Sb3(wKey[44] ^ X0, wKey[45] ^ X1, wKey[46] ^ X2, wKey[47] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb4(wKey[48] ^ X0, wKey[49] ^ X1, wKey[50] ^ X2, wKey[51] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_204);
		int32_t L_205 = ((int32_t)48);
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_208);
		int32_t L_209 = ((int32_t)49);
		int32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		int32_t L_211 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)50);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)51);
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_206^L_207)), ((int32_t)(L_210^L_211)), ((int32_t)(L_214^L_215)), ((int32_t)(L_218^L_219)), NULL);
		// Sb4(wKey[48] ^ X0, wKey[49] ^ X1, wKey[50] ^ X2, wKey[51] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb5(wKey[52] ^ X0, wKey[53] ^ X1, wKey[54] ^ X2, wKey[55] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_220);
		int32_t L_221 = ((int32_t)52);
		int32_t L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_224);
		int32_t L_225 = ((int32_t)53);
		int32_t L_226 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)54);
		int32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)55);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_222^L_223)), ((int32_t)(L_226^L_227)), ((int32_t)(L_230^L_231)), ((int32_t)(L_234^L_235)), NULL);
		// Sb5(wKey[52] ^ X0, wKey[53] ^ X1, wKey[54] ^ X2, wKey[55] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb6(wKey[56] ^ X0, wKey[57] ^ X1, wKey[58] ^ X2, wKey[59] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_236);
		int32_t L_237 = ((int32_t)56);
		int32_t L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)57);
		int32_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_244);
		int32_t L_245 = ((int32_t)58);
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_248);
		int32_t L_249 = ((int32_t)59);
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_238^L_239)), ((int32_t)(L_242^L_243)), ((int32_t)(L_246^L_247)), ((int32_t)(L_250^L_251)), NULL);
		// Sb6(wKey[56] ^ X0, wKey[57] ^ X1, wKey[58] ^ X2, wKey[59] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb7(wKey[60] ^ X0, wKey[61] ^ X1, wKey[62] ^ X2, wKey[63] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)60);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)61);
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_260);
		int32_t L_261 = ((int32_t)62);
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_264);
		int32_t L_265 = ((int32_t)63);
		int32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_254^L_255)), ((int32_t)(L_258^L_259)), ((int32_t)(L_262^L_263)), ((int32_t)(L_266^L_267)), NULL);
		// Sb7(wKey[60] ^ X0, wKey[61] ^ X1, wKey[62] ^ X2, wKey[63] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb0(wKey[64] ^ X0, wKey[65] ^ X1, wKey[66] ^ X2, wKey[67] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_268);
		int32_t L_269 = ((int32_t)64);
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)65);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)66);
		int32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_280);
		int32_t L_281 = ((int32_t)67);
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_270^L_271)), ((int32_t)(L_274^L_275)), ((int32_t)(L_278^L_279)), ((int32_t)(L_282^L_283)), NULL);
		// Sb0(wKey[64] ^ X0, wKey[65] ^ X1, wKey[66] ^ X2, wKey[67] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb1(wKey[68] ^ X0, wKey[69] ^ X1, wKey[70] ^ X2, wKey[71] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_284);
		int32_t L_285 = ((int32_t)68);
		int32_t L_286 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_288);
		int32_t L_289 = ((int32_t)69);
		int32_t L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)70);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_296);
		int32_t L_297 = ((int32_t)71);
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t L_299 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_286^L_287)), ((int32_t)(L_290^L_291)), ((int32_t)(L_294^L_295)), ((int32_t)(L_298^L_299)), NULL);
		// Sb1(wKey[68] ^ X0, wKey[69] ^ X1, wKey[70] ^ X2, wKey[71] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb2(wKey[72] ^ X0, wKey[73] ^ X1, wKey[74] ^ X2, wKey[75] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_300);
		int32_t L_301 = ((int32_t)72);
		int32_t L_302 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)73);
		int32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		int32_t L_307 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_308);
		int32_t L_309 = ((int32_t)74);
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)75);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		int32_t L_315 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_302^L_303)), ((int32_t)(L_306^L_307)), ((int32_t)(L_310^L_311)), ((int32_t)(L_314^L_315)), NULL);
		// Sb2(wKey[72] ^ X0, wKey[73] ^ X1, wKey[74] ^ X2, wKey[75] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb3(wKey[76] ^ X0, wKey[77] ^ X1, wKey[78] ^ X2, wKey[79] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_316);
		int32_t L_317 = ((int32_t)76);
		int32_t L_318 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_320);
		int32_t L_321 = ((int32_t)77);
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t L_323 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_324);
		int32_t L_325 = ((int32_t)78);
		int32_t L_326 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_328);
		int32_t L_329 = ((int32_t)79);
		int32_t L_330 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_318^L_319)), ((int32_t)(L_322^L_323)), ((int32_t)(L_326^L_327)), ((int32_t)(L_330^L_331)), NULL);
		// Sb3(wKey[76] ^ X0, wKey[77] ^ X1, wKey[78] ^ X2, wKey[79] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb4(wKey[80] ^ X0, wKey[81] ^ X1, wKey[82] ^ X2, wKey[83] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)80);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_336);
		int32_t L_337 = ((int32_t)81);
		int32_t L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		int32_t L_339 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_340);
		int32_t L_341 = ((int32_t)82);
		int32_t L_342 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_344);
		int32_t L_345 = ((int32_t)83);
		int32_t L_346 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		int32_t L_347 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_334^L_335)), ((int32_t)(L_338^L_339)), ((int32_t)(L_342^L_343)), ((int32_t)(L_346^L_347)), NULL);
		// Sb4(wKey[80] ^ X0, wKey[81] ^ X1, wKey[82] ^ X2, wKey[83] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb5(wKey[84] ^ X0, wKey[85] ^ X1, wKey[86] ^ X2, wKey[87] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_348);
		int32_t L_349 = ((int32_t)84);
		int32_t L_350 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)85);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_356);
		int32_t L_357 = ((int32_t)86);
		int32_t L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_360);
		int32_t L_361 = ((int32_t)87);
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_350^L_351)), ((int32_t)(L_354^L_355)), ((int32_t)(L_358^L_359)), ((int32_t)(L_362^L_363)), NULL);
		// Sb5(wKey[84] ^ X0, wKey[85] ^ X1, wKey[86] ^ X2, wKey[87] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb6(wKey[88] ^ X0, wKey[89] ^ X1, wKey[90] ^ X2, wKey[91] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_364);
		int32_t L_365 = ((int32_t)88);
		int32_t L_366 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_368);
		int32_t L_369 = ((int32_t)89);
		int32_t L_370 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)90);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_376);
		int32_t L_377 = ((int32_t)91);
		int32_t L_378 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		int32_t L_379 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_366^L_367)), ((int32_t)(L_370^L_371)), ((int32_t)(L_374^L_375)), ((int32_t)(L_378^L_379)), NULL);
		// Sb6(wKey[88] ^ X0, wKey[89] ^ X1, wKey[90] ^ X2, wKey[91] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb7(wKey[92] ^ X0, wKey[93] ^ X1, wKey[94] ^ X2, wKey[95] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)92);
		int32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_384);
		int32_t L_385 = ((int32_t)93);
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_388);
		int32_t L_389 = ((int32_t)94);
		int32_t L_390 = (L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)95);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		int32_t L_395 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_382^L_383)), ((int32_t)(L_386^L_387)), ((int32_t)(L_390^L_391)), ((int32_t)(L_394^L_395)), NULL);
		// Sb7(wKey[92] ^ X0, wKey[93] ^ X1, wKey[94] ^ X2, wKey[95] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb0(wKey[96] ^ X0, wKey[97] ^ X1, wKey[98] ^ X2, wKey[99] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_396);
		int32_t L_397 = ((int32_t)96);
		int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_400 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_400);
		int32_t L_401 = ((int32_t)97);
		int32_t L_402 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		int32_t L_403 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)98);
		int32_t L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_408);
		int32_t L_409 = ((int32_t)99);
		int32_t L_410 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_409));
		int32_t L_411 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_398^L_399)), ((int32_t)(L_402^L_403)), ((int32_t)(L_406^L_407)), ((int32_t)(L_410^L_411)), NULL);
		// Sb0(wKey[96] ^ X0, wKey[97] ^ X1, wKey[98] ^ X2, wKey[99] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb1(wKey[100] ^ X0, wKey[101] ^ X1, wKey[102] ^ X2, wKey[103] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)100);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)101);
		int32_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_420);
		int32_t L_421 = ((int32_t)102);
		int32_t L_422 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_424);
		int32_t L_425 = ((int32_t)103);
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t L_427 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_414^L_415)), ((int32_t)(L_418^L_419)), ((int32_t)(L_422^L_423)), ((int32_t)(L_426^L_427)), NULL);
		// Sb1(wKey[100] ^ X0, wKey[101] ^ X1, wKey[102] ^ X2, wKey[103] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb2(wKey[104] ^ X0, wKey[105] ^ X1, wKey[106] ^ X2, wKey[107] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_428);
		int32_t L_429 = ((int32_t)104);
		int32_t L_430 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)105);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_436);
		int32_t L_437 = ((int32_t)106);
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_440 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_440);
		int32_t L_441 = ((int32_t)107);
		int32_t L_442 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_430^L_431)), ((int32_t)(L_434^L_435)), ((int32_t)(L_438^L_439)), ((int32_t)(L_442^L_443)), NULL);
		// Sb2(wKey[104] ^ X0, wKey[105] ^ X1, wKey[106] ^ X2, wKey[107] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb3(wKey[108] ^ X0, wKey[109] ^ X1, wKey[110] ^ X2, wKey[111] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_444);
		int32_t L_445 = ((int32_t)108);
		int32_t L_446 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_448);
		int32_t L_449 = ((int32_t)109);
		int32_t L_450 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)110);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)111);
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_446^L_447)), ((int32_t)(L_450^L_451)), ((int32_t)(L_454^L_455)), ((int32_t)(L_458^L_459)), NULL);
		// Sb3(wKey[108] ^ X0, wKey[109] ^ X1, wKey[110] ^ X2, wKey[111] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb4(wKey[112] ^ X0, wKey[113] ^ X1, wKey[114] ^ X2, wKey[115] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_460);
		int32_t L_461 = ((int32_t)112);
		int32_t L_462 = (L_460)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_464);
		int32_t L_465 = ((int32_t)113);
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t L_467 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_468);
		int32_t L_469 = ((int32_t)114);
		int32_t L_470 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)115);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		int32_t L_475 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_462^L_463)), ((int32_t)(L_466^L_467)), ((int32_t)(L_470^L_471)), ((int32_t)(L_474^L_475)), NULL);
		// Sb4(wKey[112] ^ X0, wKey[113] ^ X1, wKey[114] ^ X2, wKey[115] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb5(wKey[116] ^ X0, wKey[117] ^ X1, wKey[118] ^ X2, wKey[119] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_476);
		int32_t L_477 = ((int32_t)116);
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_480 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_480);
		int32_t L_481 = ((int32_t)117);
		int32_t L_482 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		int32_t L_483 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_484);
		int32_t L_485 = ((int32_t)118);
		int32_t L_486 = (L_484)->GetAt(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_488);
		int32_t L_489 = ((int32_t)119);
		int32_t L_490 = (L_488)->GetAt(static_cast<il2cpp_array_size_t>(L_489));
		int32_t L_491 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_478^L_479)), ((int32_t)(L_482^L_483)), ((int32_t)(L_486^L_487)), ((int32_t)(L_490^L_491)), NULL);
		// Sb5(wKey[116] ^ X0, wKey[117] ^ X1, wKey[118] ^ X2, wKey[119] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb6(wKey[120] ^ X0, wKey[121] ^ X1, wKey[122] ^ X2, wKey[123] ^ X3); LT();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)120);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_496);
		int32_t L_497 = ((int32_t)121);
		int32_t L_498 = (L_496)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		int32_t L_499 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_500);
		int32_t L_501 = ((int32_t)122);
		int32_t L_502 = (L_500)->GetAt(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_504);
		int32_t L_505 = ((int32_t)123);
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_494^L_495)), ((int32_t)(L_498^L_499)), ((int32_t)(L_502^L_503)), ((int32_t)(L_506^L_507)), NULL);
		// Sb6(wKey[120] ^ X0, wKey[121] ^ X1, wKey[122] ^ X2, wKey[123] ^ X3); LT();
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		// Sb7(wKey[124] ^ X0, wKey[125] ^ X1, wKey[126] ^ X2, wKey[127] ^ X3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_508);
		int32_t L_509 = ((int32_t)124);
		int32_t L_510 = (L_508)->GetAt(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)125);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_516);
		int32_t L_517 = ((int32_t)126);
		int32_t L_518 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_520);
		int32_t L_521 = ((int32_t)127);
		int32_t L_522 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_521));
		int32_t L_523 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_510^L_511)), ((int32_t)(L_514^L_515)), ((int32_t)(L_518^L_519)), ((int32_t)(L_522^L_523)), NULL);
		// Pack.UInt32_To_BE((uint)(wKey[131] ^ X3), output, outOff);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_524);
		int32_t L_525 = ((int32_t)131);
		int32_t L_526 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_528 = ___2_output;
		int32_t L_529 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_526^L_527)), L_528, L_529, NULL);
		// Pack.UInt32_To_BE((uint)(wKey[130] ^ X2), output, outOff + 4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)130);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		int32_t L_533 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_534 = ___2_output;
		int32_t L_535 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_532^L_533)), L_534, ((int32_t)il2cpp_codegen_add(L_535, 4)), NULL);
		// Pack.UInt32_To_BE((uint)(wKey[129] ^ X1), output, outOff + 8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_536);
		int32_t L_537 = ((int32_t)129);
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_540 = ___2_output;
		int32_t L_541 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_538^L_539)), L_540, ((int32_t)il2cpp_codegen_add(L_541, 8)), NULL);
		// Pack.UInt32_To_BE((uint)(wKey[128] ^ X0), output, outOff + 12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_542);
		int32_t L_543 = ((int32_t)128);
		int32_t L_544 = (L_542)->GetAt(static_cast<il2cpp_array_size_t>(L_543));
		int32_t L_545 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = ___2_output;
		int32_t L_547 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_544^L_545)), L_546, ((int32_t)il2cpp_codegen_add(L_547, ((int32_t)12))), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_DecryptBlock_m5A6F132C533F9B0BBB66BEAD914C15A605030618 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		// X3 = wKey[131] ^ (int)Pack.BE_To_UInt32(input, inOff);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)131);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, L_4, NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_2^(int32_t)L_5));
		// X2 = wKey[130] ^ (int)Pack.BE_To_UInt32(input, inOff + 4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)130);
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_8^(int32_t)L_11));
		// X1 = wKey[129] ^ (int)Pack.BE_To_UInt32(input, inOff + 8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)129);
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = ___1_inOff;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_15, ((int32_t)il2cpp_codegen_add(L_16, 8)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_14^(int32_t)L_17));
		// X0 = wKey[128] ^ (int)Pack.BE_To_UInt32(input, inOff + 12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)128);
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
		int32_t L_22 = ___1_inOff;
		uint32_t L_23;
		L_23 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12))), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_20^(int32_t)L_23));
		// Ib7(X0, X1, X2, X3);
		int32_t L_24 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_25 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_26 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_27 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_24, L_25, L_26, L_27, NULL);
		// X0 ^= wKey[124]; X1 ^= wKey[125]; X2 ^= wKey[126]; X3 ^= wKey[127];
		int32_t L_28 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)124);
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_28^L_31));
		// X0 ^= wKey[124]; X1 ^= wKey[125]; X2 ^= wKey[126]; X3 ^= wKey[127];
		int32_t L_32 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)125);
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_32^L_35));
		// X0 ^= wKey[124]; X1 ^= wKey[125]; X2 ^= wKey[126]; X3 ^= wKey[127];
		int32_t L_36 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)126);
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_36^L_39));
		// X0 ^= wKey[124]; X1 ^= wKey[125]; X2 ^= wKey[126]; X3 ^= wKey[127];
		int32_t L_40 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)127);
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_40^L_43));
		// InverseLT(); Ib6(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib6(X0, X1, X2, X3);
		int32_t L_44 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_45 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_46 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_47 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_44, L_45, L_46, L_47, NULL);
		// X0 ^= wKey[120]; X1 ^= wKey[121]; X2 ^= wKey[122]; X3 ^= wKey[123];
		int32_t L_48 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_49);
		int32_t L_50 = ((int32_t)120);
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_48^L_51));
		// X0 ^= wKey[120]; X1 ^= wKey[121]; X2 ^= wKey[122]; X3 ^= wKey[123];
		int32_t L_52 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)121);
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_52^L_55));
		// X0 ^= wKey[120]; X1 ^= wKey[121]; X2 ^= wKey[122]; X3 ^= wKey[123];
		int32_t L_56 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)122);
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_56^L_59));
		// X0 ^= wKey[120]; X1 ^= wKey[121]; X2 ^= wKey[122]; X3 ^= wKey[123];
		int32_t L_60 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)123);
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_60^L_63));
		// InverseLT(); Ib5(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib5(X0, X1, X2, X3);
		int32_t L_64 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_65 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_66 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_67 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_64, L_65, L_66, L_67, NULL);
		// X0 ^= wKey[116]; X1 ^= wKey[117]; X2 ^= wKey[118]; X3 ^= wKey[119];
		int32_t L_68 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)116);
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_68^L_71));
		// X0 ^= wKey[116]; X1 ^= wKey[117]; X2 ^= wKey[118]; X3 ^= wKey[119];
		int32_t L_72 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)117);
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_72^L_75));
		// X0 ^= wKey[116]; X1 ^= wKey[117]; X2 ^= wKey[118]; X3 ^= wKey[119];
		int32_t L_76 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_77);
		int32_t L_78 = ((int32_t)118);
		int32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_76^L_79));
		// X0 ^= wKey[116]; X1 ^= wKey[117]; X2 ^= wKey[118]; X3 ^= wKey[119];
		int32_t L_80 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)119);
		int32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_80^L_83));
		// InverseLT(); Ib4(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib4(X0, X1, X2, X3);
		int32_t L_84 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_85 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_86 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_87 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_84, L_85, L_86, L_87, NULL);
		// X0 ^= wKey[112]; X1 ^= wKey[113]; X2 ^= wKey[114]; X3 ^= wKey[115];
		int32_t L_88 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_89);
		int32_t L_90 = ((int32_t)112);
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_88^L_91));
		// X0 ^= wKey[112]; X1 ^= wKey[113]; X2 ^= wKey[114]; X3 ^= wKey[115];
		int32_t L_92 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)113);
		int32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_92^L_95));
		// X0 ^= wKey[112]; X1 ^= wKey[113]; X2 ^= wKey[114]; X3 ^= wKey[115];
		int32_t L_96 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)114);
		int32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_96^L_99));
		// X0 ^= wKey[112]; X1 ^= wKey[113]; X2 ^= wKey[114]; X3 ^= wKey[115];
		int32_t L_100 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)115);
		int32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_100^L_103));
		// InverseLT(); Ib3(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib3(X0, X1, X2, X3);
		int32_t L_104 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_105 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_106 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_107 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_104, L_105, L_106, L_107, NULL);
		// X0 ^= wKey[108]; X1 ^= wKey[109]; X2 ^= wKey[110]; X3 ^= wKey[111];
		int32_t L_108 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)108);
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_108^L_111));
		// X0 ^= wKey[108]; X1 ^= wKey[109]; X2 ^= wKey[110]; X3 ^= wKey[111];
		int32_t L_112 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)109);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_112^L_115));
		// X0 ^= wKey[108]; X1 ^= wKey[109]; X2 ^= wKey[110]; X3 ^= wKey[111];
		int32_t L_116 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)110);
		int32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_116^L_119));
		// X0 ^= wKey[108]; X1 ^= wKey[109]; X2 ^= wKey[110]; X3 ^= wKey[111];
		int32_t L_120 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_121);
		int32_t L_122 = ((int32_t)111);
		int32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_120^L_123));
		// InverseLT(); Ib2(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib2(X0, X1, X2, X3);
		int32_t L_124 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_125 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_126 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_127 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_124, L_125, L_126, L_127, NULL);
		// X0 ^= wKey[104]; X1 ^= wKey[105]; X2 ^= wKey[106]; X3 ^= wKey[107];
		int32_t L_128 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)104);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_128^L_131));
		// X0 ^= wKey[104]; X1 ^= wKey[105]; X2 ^= wKey[106]; X3 ^= wKey[107];
		int32_t L_132 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)105);
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_132^L_135));
		// X0 ^= wKey[104]; X1 ^= wKey[105]; X2 ^= wKey[106]; X3 ^= wKey[107];
		int32_t L_136 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_137);
		int32_t L_138 = ((int32_t)106);
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_136^L_139));
		// X0 ^= wKey[104]; X1 ^= wKey[105]; X2 ^= wKey[106]; X3 ^= wKey[107];
		int32_t L_140 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)107);
		int32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_140^L_143));
		// InverseLT(); Ib1(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib1(X0, X1, X2, X3);
		int32_t L_144 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_145 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_146 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_147 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_144, L_145, L_146, L_147, NULL);
		// X0 ^= wKey[100]; X1 ^= wKey[101]; X2 ^= wKey[102]; X3 ^= wKey[103];
		int32_t L_148 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)100);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_148^L_151));
		// X0 ^= wKey[100]; X1 ^= wKey[101]; X2 ^= wKey[102]; X3 ^= wKey[103];
		int32_t L_152 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_153);
		int32_t L_154 = ((int32_t)101);
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_152^L_155));
		// X0 ^= wKey[100]; X1 ^= wKey[101]; X2 ^= wKey[102]; X3 ^= wKey[103];
		int32_t L_156 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_157);
		int32_t L_158 = ((int32_t)102);
		int32_t L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_156^L_159));
		// X0 ^= wKey[100]; X1 ^= wKey[101]; X2 ^= wKey[102]; X3 ^= wKey[103];
		int32_t L_160 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_161);
		int32_t L_162 = ((int32_t)103);
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_160^L_163));
		// InverseLT(); Ib0(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib0(X0, X1, X2, X3);
		int32_t L_164 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_165 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_166 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_167 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_164, L_165, L_166, L_167, NULL);
		// X0 ^= wKey[96]; X1 ^= wKey[97]; X2 ^= wKey[98]; X3 ^= wKey[99];
		int32_t L_168 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)96);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_168^L_171));
		// X0 ^= wKey[96]; X1 ^= wKey[97]; X2 ^= wKey[98]; X3 ^= wKey[99];
		int32_t L_172 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_173);
		int32_t L_174 = ((int32_t)97);
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_172^L_175));
		// X0 ^= wKey[96]; X1 ^= wKey[97]; X2 ^= wKey[98]; X3 ^= wKey[99];
		int32_t L_176 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_177);
		int32_t L_178 = ((int32_t)98);
		int32_t L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_176^L_179));
		// X0 ^= wKey[96]; X1 ^= wKey[97]; X2 ^= wKey[98]; X3 ^= wKey[99];
		int32_t L_180 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_181);
		int32_t L_182 = ((int32_t)99);
		int32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_180^L_183));
		// InverseLT(); Ib7(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib7(X0, X1, X2, X3);
		int32_t L_184 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_185 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_186 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_187 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_184, L_185, L_186, L_187, NULL);
		// X0 ^= wKey[92]; X1 ^= wKey[93]; X2 ^= wKey[94]; X3 ^= wKey[95];
		int32_t L_188 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)92);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_188^L_191));
		// X0 ^= wKey[92]; X1 ^= wKey[93]; X2 ^= wKey[94]; X3 ^= wKey[95];
		int32_t L_192 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)93);
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_192^L_195));
		// X0 ^= wKey[92]; X1 ^= wKey[93]; X2 ^= wKey[94]; X3 ^= wKey[95];
		int32_t L_196 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_197);
		int32_t L_198 = ((int32_t)94);
		int32_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_196^L_199));
		// X0 ^= wKey[92]; X1 ^= wKey[93]; X2 ^= wKey[94]; X3 ^= wKey[95];
		int32_t L_200 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_201);
		int32_t L_202 = ((int32_t)95);
		int32_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_200^L_203));
		// InverseLT(); Ib6(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib6(X0, X1, X2, X3);
		int32_t L_204 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_205 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_206 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_207 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_204, L_205, L_206, L_207, NULL);
		// X0 ^= wKey[88]; X1 ^= wKey[89]; X2 ^= wKey[90]; X3 ^= wKey[91];
		int32_t L_208 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)88);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_208^L_211));
		// X0 ^= wKey[88]; X1 ^= wKey[89]; X2 ^= wKey[90]; X3 ^= wKey[91];
		int32_t L_212 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_213);
		int32_t L_214 = ((int32_t)89);
		int32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_212^L_215));
		// X0 ^= wKey[88]; X1 ^= wKey[89]; X2 ^= wKey[90]; X3 ^= wKey[91];
		int32_t L_216 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_217);
		int32_t L_218 = ((int32_t)90);
		int32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_216^L_219));
		// X0 ^= wKey[88]; X1 ^= wKey[89]; X2 ^= wKey[90]; X3 ^= wKey[91];
		int32_t L_220 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_221);
		int32_t L_222 = ((int32_t)91);
		int32_t L_223 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_220^L_223));
		// InverseLT(); Ib5(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib5(X0, X1, X2, X3);
		int32_t L_224 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_225 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_226 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_227 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_224, L_225, L_226, L_227, NULL);
		// X0 ^= wKey[84]; X1 ^= wKey[85]; X2 ^= wKey[86]; X3 ^= wKey[87];
		int32_t L_228 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)84);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_228^L_231));
		// X0 ^= wKey[84]; X1 ^= wKey[85]; X2 ^= wKey[86]; X3 ^= wKey[87];
		int32_t L_232 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)85);
		int32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_232^L_235));
		// X0 ^= wKey[84]; X1 ^= wKey[85]; X2 ^= wKey[86]; X3 ^= wKey[87];
		int32_t L_236 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)86);
		int32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_236^L_239));
		// X0 ^= wKey[84]; X1 ^= wKey[85]; X2 ^= wKey[86]; X3 ^= wKey[87];
		int32_t L_240 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_241);
		int32_t L_242 = ((int32_t)87);
		int32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_240^L_243));
		// InverseLT(); Ib4(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib4(X0, X1, X2, X3);
		int32_t L_244 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_245 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_246 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_247 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_244, L_245, L_246, L_247, NULL);
		// X0 ^= wKey[80]; X1 ^= wKey[81]; X2 ^= wKey[82]; X3 ^= wKey[83];
		int32_t L_248 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)80);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_248^L_251));
		// X0 ^= wKey[80]; X1 ^= wKey[81]; X2 ^= wKey[82]; X3 ^= wKey[83];
		int32_t L_252 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_253);
		int32_t L_254 = ((int32_t)81);
		int32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_252^L_255));
		// X0 ^= wKey[80]; X1 ^= wKey[81]; X2 ^= wKey[82]; X3 ^= wKey[83];
		int32_t L_256 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)82);
		int32_t L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_256^L_259));
		// X0 ^= wKey[80]; X1 ^= wKey[81]; X2 ^= wKey[82]; X3 ^= wKey[83];
		int32_t L_260 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_261);
		int32_t L_262 = ((int32_t)83);
		int32_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_260^L_263));
		// InverseLT(); Ib3(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib3(X0, X1, X2, X3);
		int32_t L_264 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_265 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_266 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_267 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_264, L_265, L_266, L_267, NULL);
		// X0 ^= wKey[76]; X1 ^= wKey[77]; X2 ^= wKey[78]; X3 ^= wKey[79];
		int32_t L_268 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)76);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_268^L_271));
		// X0 ^= wKey[76]; X1 ^= wKey[77]; X2 ^= wKey[78]; X3 ^= wKey[79];
		int32_t L_272 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)77);
		int32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_272^L_275));
		// X0 ^= wKey[76]; X1 ^= wKey[77]; X2 ^= wKey[78]; X3 ^= wKey[79];
		int32_t L_276 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_277);
		int32_t L_278 = ((int32_t)78);
		int32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_276^L_279));
		// X0 ^= wKey[76]; X1 ^= wKey[77]; X2 ^= wKey[78]; X3 ^= wKey[79];
		int32_t L_280 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_281);
		int32_t L_282 = ((int32_t)79);
		int32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_280^L_283));
		// InverseLT(); Ib2(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib2(X0, X1, X2, X3);
		int32_t L_284 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_285 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_286 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_287 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_284, L_285, L_286, L_287, NULL);
		// X0 ^= wKey[72]; X1 ^= wKey[73]; X2 ^= wKey[74]; X3 ^= wKey[75];
		int32_t L_288 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)72);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_288^L_291));
		// X0 ^= wKey[72]; X1 ^= wKey[73]; X2 ^= wKey[74]; X3 ^= wKey[75];
		int32_t L_292 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_293);
		int32_t L_294 = ((int32_t)73);
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_292^L_295));
		// X0 ^= wKey[72]; X1 ^= wKey[73]; X2 ^= wKey[74]; X3 ^= wKey[75];
		int32_t L_296 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_297);
		int32_t L_298 = ((int32_t)74);
		int32_t L_299 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_296^L_299));
		// X0 ^= wKey[72]; X1 ^= wKey[73]; X2 ^= wKey[74]; X3 ^= wKey[75];
		int32_t L_300 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_301);
		int32_t L_302 = ((int32_t)75);
		int32_t L_303 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_300^L_303));
		// InverseLT(); Ib1(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib1(X0, X1, X2, X3);
		int32_t L_304 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_305 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_306 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_307 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_304, L_305, L_306, L_307, NULL);
		// X0 ^= wKey[68]; X1 ^= wKey[69]; X2 ^= wKey[70]; X3 ^= wKey[71];
		int32_t L_308 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)68);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_308^L_311));
		// X0 ^= wKey[68]; X1 ^= wKey[69]; X2 ^= wKey[70]; X3 ^= wKey[71];
		int32_t L_312 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_313);
		int32_t L_314 = ((int32_t)69);
		int32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_312^L_315));
		// X0 ^= wKey[68]; X1 ^= wKey[69]; X2 ^= wKey[70]; X3 ^= wKey[71];
		int32_t L_316 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_317);
		int32_t L_318 = ((int32_t)70);
		int32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_316^L_319));
		// X0 ^= wKey[68]; X1 ^= wKey[69]; X2 ^= wKey[70]; X3 ^= wKey[71];
		int32_t L_320 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_321);
		int32_t L_322 = ((int32_t)71);
		int32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_320^L_323));
		// InverseLT(); Ib0(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib0(X0, X1, X2, X3);
		int32_t L_324 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_325 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_326 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_327 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_324, L_325, L_326, L_327, NULL);
		// X0 ^= wKey[64]; X1 ^= wKey[65]; X2 ^= wKey[66]; X3 ^= wKey[67];
		int32_t L_328 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)64);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_328^L_331));
		// X0 ^= wKey[64]; X1 ^= wKey[65]; X2 ^= wKey[66]; X3 ^= wKey[67];
		int32_t L_332 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_333);
		int32_t L_334 = ((int32_t)65);
		int32_t L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_332^L_335));
		// X0 ^= wKey[64]; X1 ^= wKey[65]; X2 ^= wKey[66]; X3 ^= wKey[67];
		int32_t L_336 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_337);
		int32_t L_338 = ((int32_t)66);
		int32_t L_339 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_336^L_339));
		// X0 ^= wKey[64]; X1 ^= wKey[65]; X2 ^= wKey[66]; X3 ^= wKey[67];
		int32_t L_340 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_341);
		int32_t L_342 = ((int32_t)67);
		int32_t L_343 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_340^L_343));
		// InverseLT(); Ib7(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib7(X0, X1, X2, X3);
		int32_t L_344 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_345 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_346 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_347 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_344, L_345, L_346, L_347, NULL);
		// X0 ^= wKey[60]; X1 ^= wKey[61]; X2 ^= wKey[62]; X3 ^= wKey[63];
		int32_t L_348 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)60);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_348^L_351));
		// X0 ^= wKey[60]; X1 ^= wKey[61]; X2 ^= wKey[62]; X3 ^= wKey[63];
		int32_t L_352 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_353);
		int32_t L_354 = ((int32_t)61);
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_352^L_355));
		// X0 ^= wKey[60]; X1 ^= wKey[61]; X2 ^= wKey[62]; X3 ^= wKey[63];
		int32_t L_356 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_357);
		int32_t L_358 = ((int32_t)62);
		int32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_356^L_359));
		// X0 ^= wKey[60]; X1 ^= wKey[61]; X2 ^= wKey[62]; X3 ^= wKey[63];
		int32_t L_360 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)63);
		int32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_360^L_363));
		// InverseLT(); Ib6(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib6(X0, X1, X2, X3);
		int32_t L_364 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_365 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_366 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_367 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_364, L_365, L_366, L_367, NULL);
		// X0 ^= wKey[56]; X1 ^= wKey[57]; X2 ^= wKey[58]; X3 ^= wKey[59];
		int32_t L_368 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)56);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_368^L_371));
		// X0 ^= wKey[56]; X1 ^= wKey[57]; X2 ^= wKey[58]; X3 ^= wKey[59];
		int32_t L_372 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_373);
		int32_t L_374 = ((int32_t)57);
		int32_t L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_372^L_375));
		// X0 ^= wKey[56]; X1 ^= wKey[57]; X2 ^= wKey[58]; X3 ^= wKey[59];
		int32_t L_376 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_377);
		int32_t L_378 = ((int32_t)58);
		int32_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_376^L_379));
		// X0 ^= wKey[56]; X1 ^= wKey[57]; X2 ^= wKey[58]; X3 ^= wKey[59];
		int32_t L_380 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_381);
		int32_t L_382 = ((int32_t)59);
		int32_t L_383 = (L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_382));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_380^L_383));
		// InverseLT(); Ib5(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib5(X0, X1, X2, X3);
		int32_t L_384 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_385 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_386 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_387 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_384, L_385, L_386, L_387, NULL);
		// X0 ^= wKey[52]; X1 ^= wKey[53]; X2 ^= wKey[54]; X3 ^= wKey[55];
		int32_t L_388 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)52);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_388^L_391));
		// X0 ^= wKey[52]; X1 ^= wKey[53]; X2 ^= wKey[54]; X3 ^= wKey[55];
		int32_t L_392 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_393);
		int32_t L_394 = ((int32_t)53);
		int32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_392^L_395));
		// X0 ^= wKey[52]; X1 ^= wKey[53]; X2 ^= wKey[54]; X3 ^= wKey[55];
		int32_t L_396 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_397 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_397);
		int32_t L_398 = ((int32_t)54);
		int32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_396^L_399));
		// X0 ^= wKey[52]; X1 ^= wKey[53]; X2 ^= wKey[54]; X3 ^= wKey[55];
		int32_t L_400 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_401);
		int32_t L_402 = ((int32_t)55);
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_400^L_403));
		// InverseLT(); Ib4(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib4(X0, X1, X2, X3);
		int32_t L_404 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_405 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_406 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_407 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_404, L_405, L_406, L_407, NULL);
		// X0 ^= wKey[48]; X1 ^= wKey[49]; X2 ^= wKey[50]; X3 ^= wKey[51];
		int32_t L_408 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)48);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_408^L_411));
		// X0 ^= wKey[48]; X1 ^= wKey[49]; X2 ^= wKey[50]; X3 ^= wKey[51];
		int32_t L_412 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_413);
		int32_t L_414 = ((int32_t)49);
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_412^L_415));
		// X0 ^= wKey[48]; X1 ^= wKey[49]; X2 ^= wKey[50]; X3 ^= wKey[51];
		int32_t L_416 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_417);
		int32_t L_418 = ((int32_t)50);
		int32_t L_419 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_416^L_419));
		// X0 ^= wKey[48]; X1 ^= wKey[49]; X2 ^= wKey[50]; X3 ^= wKey[51];
		int32_t L_420 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_421);
		int32_t L_422 = ((int32_t)51);
		int32_t L_423 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_420^L_423));
		// InverseLT(); Ib3(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib3(X0, X1, X2, X3);
		int32_t L_424 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_425 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_426 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_427 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_424, L_425, L_426, L_427, NULL);
		// X0 ^= wKey[44]; X1 ^= wKey[45]; X2 ^= wKey[46]; X3 ^= wKey[47];
		int32_t L_428 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)44);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_428^L_431));
		// X0 ^= wKey[44]; X1 ^= wKey[45]; X2 ^= wKey[46]; X3 ^= wKey[47];
		int32_t L_432 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_433);
		int32_t L_434 = ((int32_t)45);
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_432^L_435));
		// X0 ^= wKey[44]; X1 ^= wKey[45]; X2 ^= wKey[46]; X3 ^= wKey[47];
		int32_t L_436 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)46);
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_436^L_439));
		// X0 ^= wKey[44]; X1 ^= wKey[45]; X2 ^= wKey[46]; X3 ^= wKey[47];
		int32_t L_440 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_441);
		int32_t L_442 = ((int32_t)47);
		int32_t L_443 = (L_441)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_440^L_443));
		// InverseLT(); Ib2(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib2(X0, X1, X2, X3);
		int32_t L_444 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_445 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_446 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_447 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_444, L_445, L_446, L_447, NULL);
		// X0 ^= wKey[40]; X1 ^= wKey[41]; X2 ^= wKey[42]; X3 ^= wKey[43];
		int32_t L_448 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)40);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_448^L_451));
		// X0 ^= wKey[40]; X1 ^= wKey[41]; X2 ^= wKey[42]; X3 ^= wKey[43];
		int32_t L_452 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_453);
		int32_t L_454 = ((int32_t)41);
		int32_t L_455 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_452^L_455));
		// X0 ^= wKey[40]; X1 ^= wKey[41]; X2 ^= wKey[42]; X3 ^= wKey[43];
		int32_t L_456 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_457 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_457);
		int32_t L_458 = ((int32_t)42);
		int32_t L_459 = (L_457)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_456^L_459));
		// X0 ^= wKey[40]; X1 ^= wKey[41]; X2 ^= wKey[42]; X3 ^= wKey[43];
		int32_t L_460 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_461);
		int32_t L_462 = ((int32_t)43);
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_460^L_463));
		// InverseLT(); Ib1(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib1(X0, X1, X2, X3);
		int32_t L_464 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_465 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_466 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_467 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_464, L_465, L_466, L_467, NULL);
		// X0 ^= wKey[36]; X1 ^= wKey[37]; X2 ^= wKey[38]; X3 ^= wKey[39];
		int32_t L_468 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)36);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_468^L_471));
		// X0 ^= wKey[36]; X1 ^= wKey[37]; X2 ^= wKey[38]; X3 ^= wKey[39];
		int32_t L_472 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)37);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_472^L_475));
		// X0 ^= wKey[36]; X1 ^= wKey[37]; X2 ^= wKey[38]; X3 ^= wKey[39];
		int32_t L_476 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_477 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_477);
		int32_t L_478 = ((int32_t)38);
		int32_t L_479 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_476^L_479));
		// X0 ^= wKey[36]; X1 ^= wKey[37]; X2 ^= wKey[38]; X3 ^= wKey[39];
		int32_t L_480 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_481);
		int32_t L_482 = ((int32_t)39);
		int32_t L_483 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_482));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_480^L_483));
		// InverseLT(); Ib0(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib0(X0, X1, X2, X3);
		int32_t L_484 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_485 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_486 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_487 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_484, L_485, L_486, L_487, NULL);
		// X0 ^= wKey[32]; X1 ^= wKey[33]; X2 ^= wKey[34]; X3 ^= wKey[35];
		int32_t L_488 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)32);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_488^L_491));
		// X0 ^= wKey[32]; X1 ^= wKey[33]; X2 ^= wKey[34]; X3 ^= wKey[35];
		int32_t L_492 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_493);
		int32_t L_494 = ((int32_t)33);
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_492^L_495));
		// X0 ^= wKey[32]; X1 ^= wKey[33]; X2 ^= wKey[34]; X3 ^= wKey[35];
		int32_t L_496 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_497);
		int32_t L_498 = ((int32_t)34);
		int32_t L_499 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_498));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_496^L_499));
		// X0 ^= wKey[32]; X1 ^= wKey[33]; X2 ^= wKey[34]; X3 ^= wKey[35];
		int32_t L_500 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_501);
		int32_t L_502 = ((int32_t)35);
		int32_t L_503 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_500^L_503));
		// InverseLT(); Ib7(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib7(X0, X1, X2, X3);
		int32_t L_504 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_505 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_506 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_507 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_504, L_505, L_506, L_507, NULL);
		// X0 ^= wKey[28]; X1 ^= wKey[29]; X2 ^= wKey[30]; X3 ^= wKey[31];
		int32_t L_508 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)28);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_508^L_511));
		// X0 ^= wKey[28]; X1 ^= wKey[29]; X2 ^= wKey[30]; X3 ^= wKey[31];
		int32_t L_512 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)29);
		int32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_512^L_515));
		// X0 ^= wKey[28]; X1 ^= wKey[29]; X2 ^= wKey[30]; X3 ^= wKey[31];
		int32_t L_516 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_517);
		int32_t L_518 = ((int32_t)30);
		int32_t L_519 = (L_517)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_516^L_519));
		// X0 ^= wKey[28]; X1 ^= wKey[29]; X2 ^= wKey[30]; X3 ^= wKey[31];
		int32_t L_520 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_521);
		int32_t L_522 = ((int32_t)31);
		int32_t L_523 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_520^L_523));
		// InverseLT(); Ib6(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib6(X0, X1, X2, X3);
		int32_t L_524 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_525 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_526 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_527 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_524, L_525, L_526, L_527, NULL);
		// X0 ^= wKey[24]; X1 ^= wKey[25]; X2 ^= wKey[26]; X3 ^= wKey[27];
		int32_t L_528 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)24);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_528^L_531));
		// X0 ^= wKey[24]; X1 ^= wKey[25]; X2 ^= wKey[26]; X3 ^= wKey[27];
		int32_t L_532 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_533);
		int32_t L_534 = ((int32_t)25);
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_532^L_535));
		// X0 ^= wKey[24]; X1 ^= wKey[25]; X2 ^= wKey[26]; X3 ^= wKey[27];
		int32_t L_536 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_537);
		int32_t L_538 = ((int32_t)26);
		int32_t L_539 = (L_537)->GetAt(static_cast<il2cpp_array_size_t>(L_538));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_536^L_539));
		// X0 ^= wKey[24]; X1 ^= wKey[25]; X2 ^= wKey[26]; X3 ^= wKey[27];
		int32_t L_540 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_541);
		int32_t L_542 = ((int32_t)27);
		int32_t L_543 = (L_541)->GetAt(static_cast<il2cpp_array_size_t>(L_542));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_540^L_543));
		// InverseLT(); Ib5(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib5(X0, X1, X2, X3);
		int32_t L_544 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_545 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_546 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_547 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_544, L_545, L_546, L_547, NULL);
		// X0 ^= wKey[20]; X1 ^= wKey[21]; X2 ^= wKey[22]; X3 ^= wKey[23];
		int32_t L_548 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)20);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_548^L_551));
		// X0 ^= wKey[20]; X1 ^= wKey[21]; X2 ^= wKey[22]; X3 ^= wKey[23];
		int32_t L_552 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_553);
		int32_t L_554 = ((int32_t)21);
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_552^L_555));
		// X0 ^= wKey[20]; X1 ^= wKey[21]; X2 ^= wKey[22]; X3 ^= wKey[23];
		int32_t L_556 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)22);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_556^L_559));
		// X0 ^= wKey[20]; X1 ^= wKey[21]; X2 ^= wKey[22]; X3 ^= wKey[23];
		int32_t L_560 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_561);
		int32_t L_562 = ((int32_t)23);
		int32_t L_563 = (L_561)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_560^L_563));
		// InverseLT(); Ib4(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib4(X0, X1, X2, X3);
		int32_t L_564 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_565 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_566 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_567 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_564, L_565, L_566, L_567, NULL);
		// X0 ^= wKey[16]; X1 ^= wKey[17]; X2 ^= wKey[18]; X3 ^= wKey[19];
		int32_t L_568 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)16);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_568^L_571));
		// X0 ^= wKey[16]; X1 ^= wKey[17]; X2 ^= wKey[18]; X3 ^= wKey[19];
		int32_t L_572 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_573);
		int32_t L_574 = ((int32_t)17);
		int32_t L_575 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_572^L_575));
		// X0 ^= wKey[16]; X1 ^= wKey[17]; X2 ^= wKey[18]; X3 ^= wKey[19];
		int32_t L_576 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_577 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_577);
		int32_t L_578 = ((int32_t)18);
		int32_t L_579 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_576^L_579));
		// X0 ^= wKey[16]; X1 ^= wKey[17]; X2 ^= wKey[18]; X3 ^= wKey[19];
		int32_t L_580 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_581);
		int32_t L_582 = ((int32_t)19);
		int32_t L_583 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_580^L_583));
		// InverseLT(); Ib3(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib3(X0, X1, X2, X3);
		int32_t L_584 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_585 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_586 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_587 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_584, L_585, L_586, L_587, NULL);
		// X0 ^= wKey[12]; X1 ^= wKey[13]; X2 ^= wKey[14]; X3 ^= wKey[15];
		int32_t L_588 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)12);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_588^L_591));
		// X0 ^= wKey[12]; X1 ^= wKey[13]; X2 ^= wKey[14]; X3 ^= wKey[15];
		int32_t L_592 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_593);
		int32_t L_594 = ((int32_t)13);
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_592^L_595));
		// X0 ^= wKey[12]; X1 ^= wKey[13]; X2 ^= wKey[14]; X3 ^= wKey[15];
		int32_t L_596 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_597 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_597);
		int32_t L_598 = ((int32_t)14);
		int32_t L_599 = (L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_596^L_599));
		// X0 ^= wKey[12]; X1 ^= wKey[13]; X2 ^= wKey[14]; X3 ^= wKey[15];
		int32_t L_600 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)15);
		int32_t L_603 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_600^L_603));
		// InverseLT(); Ib2(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib2(X0, X1, X2, X3);
		int32_t L_604 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_605 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_606 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_607 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_604, L_605, L_606, L_607, NULL);
		// X0 ^= wKey[8]; X1 ^= wKey[9]; X2 ^= wKey[10]; X3 ^= wKey[11];
		int32_t L_608 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_609);
		int32_t L_610 = 8;
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_608^L_611));
		// X0 ^= wKey[8]; X1 ^= wKey[9]; X2 ^= wKey[10]; X3 ^= wKey[11];
		int32_t L_612 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)9);
		int32_t L_615 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_612^L_615));
		// X0 ^= wKey[8]; X1 ^= wKey[9]; X2 ^= wKey[10]; X3 ^= wKey[11];
		int32_t L_616 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)10);
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_616^L_619));
		// X0 ^= wKey[8]; X1 ^= wKey[9]; X2 ^= wKey[10]; X3 ^= wKey[11];
		int32_t L_620 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_621);
		int32_t L_622 = ((int32_t)11);
		int32_t L_623 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_622));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_620^L_623));
		// InverseLT(); Ib1(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib1(X0, X1, X2, X3);
		int32_t L_624 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_625 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_626 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_627 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_624, L_625, L_626, L_627, NULL);
		// X0 ^= wKey[4]; X1 ^= wKey[5]; X2 ^= wKey[6]; X3 ^= wKey[7];
		int32_t L_628 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_629);
		int32_t L_630 = 4;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5 = ((int32_t)(L_628^L_631));
		// X0 ^= wKey[4]; X1 ^= wKey[5]; X2 ^= wKey[6]; X3 ^= wKey[7];
		int32_t L_632 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_633);
		int32_t L_634 = 5;
		int32_t L_635 = (L_633)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6 = ((int32_t)(L_632^L_635));
		// X0 ^= wKey[4]; X1 ^= wKey[5]; X2 ^= wKey[6]; X3 ^= wKey[7];
		int32_t L_636 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_637 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_637);
		int32_t L_638 = 6;
		int32_t L_639 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_638));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7 = ((int32_t)(L_636^L_639));
		// X0 ^= wKey[4]; X1 ^= wKey[5]; X2 ^= wKey[6]; X3 ^= wKey[7];
		int32_t L_640 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_641);
		int32_t L_642 = 7;
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8 = ((int32_t)(L_640^L_643));
		// InverseLT(); Ib0(X0, X1, X2, X3);
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		// InverseLT(); Ib0(X0, X1, X2, X3);
		int32_t L_644 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		int32_t L_645 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		int32_t L_646 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		int32_t L_647 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_644, L_645, L_646, L_647, NULL);
		// Pack.UInt32_To_BE((uint)(X3 ^ wKey[3]), output, outOff);
		int32_t L_648 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_649);
		int32_t L_650 = 3;
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_652 = ___2_output;
		int32_t L_653 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_648^L_651)), L_652, L_653, NULL);
		// Pack.UInt32_To_BE((uint)(X2 ^ wKey[2]), output, outOff + 4);
		int32_t L_654 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_655);
		int32_t L_656 = 2;
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_658 = ___2_output;
		int32_t L_659 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_654^L_657)), L_658, ((int32_t)il2cpp_codegen_add(L_659, 4)), NULL);
		// Pack.UInt32_To_BE((uint)(X1 ^ wKey[1]), output, outOff + 8);
		int32_t L_660 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_661);
		int32_t L_662 = 1;
		int32_t L_663 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_662));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_664 = ___2_output;
		int32_t L_665 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_660^L_663)), L_664, ((int32_t)il2cpp_codegen_add(L_665, 8)), NULL);
		// Pack.UInt32_To_BE((uint)(X0 ^ wKey[0]), output, outOff + 12);
		int32_t L_666 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey_4;
		NullCheck(L_667);
		int32_t L_668 = 0;
		int32_t L_669 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_668));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_670 = ___2_output;
		int32_t L_671 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_666^L_669)), L_670, ((int32_t)il2cpp_codegen_add(L_671, ((int32_t)12))), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TnepresEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine__ctor_m6A5071547550D08925EABDC8F50F3308868E3D43 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		SerpentEngineBase__ctor_m8E2575758EAF86D04B4A066F4536CC3294422DAC(__this, NULL);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__ctor_mEF2BFC9973B48FC7851851B9874E4D69FF921785 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// private int[] gMDS0 = new int[MAX_KEY_BITS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS0_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS0_37), (void*)L_0);
		// private int[] gMDS1 = new int[MAX_KEY_BITS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS1_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS1_38), (void*)L_1);
		// private int[] gMDS2 = new int[MAX_KEY_BITS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS2_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS2_39), (void*)L_2);
		// private int[] gMDS3 = new int[MAX_KEY_BITS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS3_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS3_40), (void*)L_3);
		// public TwofishEngine()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// int[] m1 = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_4;
		// int[] mX = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		// int[] mY = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		// for (int i=0; i< MAX_KEY_BITS ; i++)
		V_4 = 0;
		goto IL_0159;
	}

IL_0063:
	{
		// j = P[0,i] & 0xff;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_7 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		uint8_t L_9;
		L_9 = (L_7)->GetAt(0, L_8);
		V_3 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		// m1[0] = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		// mX[0] = Mx_X(j) & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14;
		L_14 = TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663(__this, L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_14&((int32_t)255))));
		// mY[0] = Mx_Y(j) & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3(__this, L_16, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_17&((int32_t)255))));
		// j = P[1,i] & 0xff;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_18 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		uint8_t L_20;
		L_20 = (L_18)->GetAt(1, L_19);
		V_3 = ((int32_t)((int32_t)L_20&((int32_t)255)));
		// m1[1] = j;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_22);
		// mX[1] = Mx_X(j) & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663(__this, L_24, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_25&((int32_t)255))));
		// mY[1] = Mx_Y(j) & 0xff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3(__this, L_27, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_28&((int32_t)255))));
		// gMDS0[i] = m1[P_00]       | mX[P_00] <<  8 |
		//             mY[P_00] << 16 | mY[P_00] << 24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___gMDS0_37;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 1;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_33|((int32_t)(L_36<<8))))|((int32_t)(L_39<<((int32_t)16)))))|((int32_t)(L_42<<((int32_t)24))))));
		// gMDS1[i] = mY[P_10]       | mY[P_10] <<  8 |
		//             mX[P_10] << 16 | m1[P_10] << 24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___gMDS1_38;
		int32_t L_44 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = 0;
		int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = 0;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = 0;
		int32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_47|((int32_t)(L_50<<8))))|((int32_t)(L_53<<((int32_t)16)))))|((int32_t)(L_56<<((int32_t)24))))));
		// gMDS2[i] = mX[P_20]       | mY[P_20] <<  8 |
		//             m1[P_20] << 16 | mY[P_20] << 24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___gMDS2_39;
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 1;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 1;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_61|((int32_t)(L_64<<8))))|((int32_t)(L_67<<((int32_t)16)))))|((int32_t)(L_70<<((int32_t)24))))));
		// gMDS3[i] = mX[P_30]       | m1[P_30] <<  8 |
		//             mY[P_30] << 16 | mX[P_30] << 24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = __this->___gMDS3_40;
		int32_t L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		NullCheck(L_79);
		int32_t L_80 = 0;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = 0;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_75|((int32_t)(L_78<<8))))|((int32_t)(L_81<<((int32_t)16)))))|((int32_t)(L_84<<((int32_t)24))))));
		// for (int i=0; i< MAX_KEY_BITS ; i++)
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0159:
	{
		// for (int i=0; i< MAX_KEY_BITS ; i++)
		int32_t L_86 = V_4;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)256))))
		{
			goto IL_0063;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Init(System.Boolean,BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Init_m657A3D704EF33BC7E5F2876E256B9463E65CAA45 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(parameters is KeyParameter))
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException("invalid parameter passed to Twofish init - " + BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.GetTypeName(parameters));
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_Init_m657A3D704EF33BC7E5F2876E256B9463E65CAA45_RuntimeMethod_var)));
	}

IL_001e:
	{
		// this.encrypting = forEncryption;
		bool L_5 = ___0_forEncryption;
		__this->___encrypting_36 = L_5;
		// this.workingKey = ((KeyParameter)parameters).GetKey();
		RuntimeObject* L_6 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey_44 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_44), (void*)L_7);
		// this.k64Cnt = (this.workingKey.Length / 8); // pre-padded ?
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___workingKey_44;
		NullCheck(L_8);
		__this->___k64Cnt_43 = ((int32_t)(((int32_t)(((RuntimeArray*)L_8)->max_length))/8));
		// SetKey(this.workingKey);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___workingKey_44;
		TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859(__this, L_9, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TwofishEngine_get_AlgorithmName_m2F3E5EBEAF8219E0205616F06A030B8820DBA98D (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Twofish"; }
		return _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwofishEngine_get_IsPartialBlockOkay_mEF33B056938A032E34275C822CF91426E5E3CA9B (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_ProcessBlock_m55BCF5286E04760E20413E196EB75958D7BEB852 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (workingKey == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Twofish not initialised");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_ProcessBlock_m55BCF5286E04760E20413E196EB75958D7BEB852_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Check.DataLength(input, inOff, BLOCK_SIZE, "input buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		// Check.OutputLength(output, outOff, BLOCK_SIZE, "output buffer too short");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		// if (encrypting)
		bool L_6 = __this->___encrypting_36;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// EncryptBlock(input, inOff, output, outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_input;
		int32_t L_8 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_output;
		int32_t L_10 = ___3_outOff;
		TwofishEngine_EncryptBlock_mCE0387ED1F262DD20EA7F28DEEB333A8BCC18655(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_0050;
	}

IL_0045:
	{
		// DecryptBlock(input, inOff, output, outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_input;
		int32_t L_12 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_output;
		int32_t L_14 = ___3_outOff;
		TwofishEngine_DecryptBlock_mFA996A8B8A641EA807D6E60D63D563A258CAA2E8(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_0050:
	{
		// return BLOCK_SIZE;
		return ((int32_t)16);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Reset_mFB07EA8F0BD37F8246B929D61AA0469799D59B32 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	{
		// if (this.workingKey != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// SetKey(this.workingKey);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingKey_44;
		TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_GetBlockSize_m9F7756F67A6D08CB866B95668973D97D90F00037 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	{
		// return BLOCK_SIZE;
		return ((int32_t)16);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		// int[] k32e = new int[MAX_KEY_BITS/64]; // 4
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// int[] k32o = new int[MAX_KEY_BITS/64]; // 4
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		// int[] sBoxKeys = new int[MAX_KEY_BITS/64]; // 4
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		// gSubKeys = new int[TOTAL_SUBKEYS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___gSubKeys_41 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSubKeys_41), (void*)L_3);
		// if (k64Cnt < 1)
		int32_t L_4 = __this->___k64Cnt_43;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		// throw new ArgumentException("Key size less than 64 bits");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859_RuntimeMethod_var)));
	}

IL_0036:
	{
		// if (k64Cnt > 4)
		int32_t L_6 = __this->___k64Cnt_43;
		if ((((int32_t)L_6) <= ((int32_t)4)))
		{
			goto IL_004a;
		}
	}
	{
		// throw new ArgumentException("Key size larger than 256 bits");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4690523A3F07C01F5A658C98771DE79551536F47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859_RuntimeMethod_var)));
	}

IL_004a:
	{
		// for (int i=0,p=0; i<k64Cnt ; i++)
		V_14 = 0;
		// for (int i=0,p=0; i<k64Cnt ; i++)
		V_15 = 0;
		goto IL_0095;
	}

IL_0052:
	{
		// p = i* 8;
		int32_t L_8 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_multiply(L_8, 8));
		// k32e[i] = BytesTo32Bits(key, p);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_key;
		int32_t L_12 = V_15;
		int32_t L_13;
		L_13 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_11, L_12, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_13);
		// k32o[i] = BytesTo32Bits(key, p+4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_key;
		int32_t L_17 = V_15;
		int32_t L_18;
		L_18 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_18);
		// sBoxKeys[k64Cnt-1-i] = RS_MDS_Encode(k32e[i], k32o[i]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		int32_t L_20 = __this->___k64Cnt_43;
		int32_t L_21 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_14;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_1;
		int32_t L_27 = V_14;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = TwofishEngine_RS_MDS_Encode_m64EF5D08A927C8453D3070AFD7673675C1DBA7F8(__this, L_25, L_29, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21))), (int32_t)L_30);
		// for (int i=0,p=0; i<k64Cnt ; i++)
		int32_t L_31 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0095:
	{
		// for (int i=0,p=0; i<k64Cnt ; i++)
		int32_t L_32 = V_14;
		int32_t L_33 = __this->___k64Cnt_43;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0052;
		}
	}
	{
		// for (int i=0; i < TOTAL_SUBKEYS / 2 ; i++)
		V_16 = 0;
		goto IL_010c;
	}

IL_00a4:
	{
		// q = i*SK_STEP;
		int32_t L_34 = V_16;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)33686018)));
		// A = F32(q,         k32e);
		int32_t L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37;
		L_37 = TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A(__this, L_35, L_36, NULL);
		V_4 = L_37;
		// B = F32(q+SK_BUMP, k32o);
		int32_t L_38 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40;
		L_40 = TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A(__this, ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)16843009))), L_39, NULL);
		V_5 = L_40;
		// B = B << 8 | (int)((uint)B >> 24);
		int32_t L_41 = V_5;
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(((int32_t)(L_41<<8))|((int32_t)((uint32_t)L_42>>((int32_t)24)))));
		// A += B;
		int32_t L_43 = V_4;
		int32_t L_44 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		// gSubKeys[i*2] = A;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___gSubKeys_41;
		int32_t L_46 = V_16;
		int32_t L_47 = V_4;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_46, 2))), (int32_t)L_47);
		// A += B;
		int32_t L_48 = V_4;
		int32_t L_49 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, L_49));
		// gSubKeys[i*2 + 1] = A << SK_ROTL | (int)((uint)A >> (32-SK_ROTL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___gSubKeys_41;
		int32_t L_51 = V_16;
		int32_t L_52 = V_4;
		int32_t L_53 = V_4;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_51, 2)), 1))), (int32_t)((int32_t)(((int32_t)(L_52<<((int32_t)9)))|((int32_t)((uint32_t)L_53>>((int32_t)23))))));
		// for (int i=0; i < TOTAL_SUBKEYS / 2 ; i++)
		int32_t L_54 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_010c:
	{
		// for (int i=0; i < TOTAL_SUBKEYS / 2 ; i++)
		int32_t L_55 = V_16;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)20))))
		{
			goto IL_00a4;
		}
	}
	{
		// int k0 = sBoxKeys[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_6 = L_58;
		// int k1 = sBoxKeys[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_7 = L_61;
		// int k2 = sBoxKeys[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 2;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		// int k3 = sBoxKeys[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = 3;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_9 = L_67;
		// gSBox = new int[4*MAX_KEY_BITS];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___gSBox_42 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSBox_42), (void*)L_68);
		// for (int i=0; i<MAX_KEY_BITS; i++)
		V_17 = 0;
		goto IL_0460;
	}

IL_013e:
	{
		// b0 = b1 = b2 = b3 = i;
		int32_t L_69 = V_17;
		int32_t L_70 = L_69;
		V_13 = L_70;
		int32_t L_71 = L_70;
		V_12 = L_71;
		int32_t L_72 = L_71;
		V_11 = L_72;
		V_10 = L_72;
		// switch (k64Cnt & 3)
		int32_t L_73 = __this->___k64Cnt_43;
		V_18 = ((int32_t)(L_73&3));
		int32_t L_74 = V_18;
		switch (L_74)
		{
			case 0:
			{
				goto IL_023c;
			}
			case 1:
			{
				goto IL_0171;
			}
			case 2:
			{
				goto IL_032c;
			}
			case 3:
			{
				goto IL_02b4;
			}
		}
	}
	{
		goto IL_045a;
	}

IL_0171:
	{
		// gSBox[i*2]       = gMDS0[(P[P_01,b0] & 0xff) ^ M_b0(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___gSBox_42;
		int32_t L_76 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_78 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_79 = V_10;
		NullCheck(L_78);
		uint8_t L_80;
		L_80 = (L_78)->GetAt(0, L_79);
		int32_t L_81 = V_6;
		int32_t L_82;
		L_82 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_81, NULL);
		NullCheck(L_77);
		int32_t L_83 = ((int32_t)(((int32_t)((int32_t)L_80&((int32_t)255)))^L_82));
		int32_t L_84 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_76, 2))), (int32_t)L_84);
		// gSBox[i*2+1]     = gMDS1[(P[P_11,b1] & 0xff) ^ M_b1(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSBox_42;
		int32_t L_86 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_88 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_89 = V_11;
		NullCheck(L_88);
		uint8_t L_90;
		L_90 = (L_88)->GetAt(0, L_89);
		int32_t L_91 = V_6;
		int32_t L_92;
		L_92 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_91, NULL);
		NullCheck(L_87);
		int32_t L_93 = ((int32_t)(((int32_t)((int32_t)L_90&((int32_t)255)))^L_92));
		int32_t L_94 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_86, 2)), 1))), (int32_t)L_94);
		// gSBox[i*2+0x200] = gMDS2[(P[P_21,b2] & 0xff) ^ M_b2(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___gSBox_42;
		int32_t L_96 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_98 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_99 = V_12;
		NullCheck(L_98);
		uint8_t L_100;
		L_100 = (L_98)->GetAt(1, L_99);
		int32_t L_101 = V_6;
		int32_t L_102;
		L_102 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_101, NULL);
		NullCheck(L_97);
		int32_t L_103 = ((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))^L_102));
		int32_t L_104 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_96, 2)), ((int32_t)512)))), (int32_t)L_104);
		// gSBox[i*2+0x201] = gMDS3[(P[P_31,b3] & 0xff) ^ M_b3(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___gSBox_42;
		int32_t L_106 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_109 = V_13;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_6;
		int32_t L_112;
		L_112 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_111, NULL);
		NullCheck(L_107);
		int32_t L_113 = ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112));
		int32_t L_114 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_106, 2)), ((int32_t)513)))), (int32_t)L_114);
		// break;
		goto IL_045a;
	}

IL_023c:
	{
		// b0 = (P[P_04,b0] & 0xff) ^ M_b0(k3);
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_115 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_116 = V_10;
		NullCheck(L_115);
		uint8_t L_117;
		L_117 = (L_115)->GetAt(1, L_116);
		int32_t L_118 = V_9;
		int32_t L_119;
		L_119 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_118, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_117&((int32_t)255)))^L_119));
		// b1 = (P[P_14,b1] & 0xff) ^ M_b1(k3);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_121 = V_11;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_9;
		int32_t L_124;
		L_124 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_123, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124));
		// b2 = (P[P_24,b2] & 0xff) ^ M_b2(k3);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_125 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_126 = V_12;
		NullCheck(L_125);
		uint8_t L_127;
		L_127 = (L_125)->GetAt(0, L_126);
		int32_t L_128 = V_9;
		int32_t L_129;
		L_129 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_128, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_127&((int32_t)255)))^L_129));
		// b3 = (P[P_34,b3] & 0xff) ^ M_b3(k3);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_130 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_131 = V_13;
		NullCheck(L_130);
		uint8_t L_132;
		L_132 = (L_130)->GetAt(1, L_131);
		int32_t L_133 = V_9;
		int32_t L_134;
		L_134 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_133, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_132&((int32_t)255)))^L_134));
	}

IL_02b4:
	{
		// b0 = (P[P_03,b0] & 0xff) ^ M_b0(k2);
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_135 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_136 = V_10;
		NullCheck(L_135);
		uint8_t L_137;
		L_137 = (L_135)->GetAt(1, L_136);
		int32_t L_138 = V_8;
		int32_t L_139;
		L_139 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_138, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		// b1 = (P[P_13,b1] & 0xff) ^ M_b1(k2);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_140 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_141 = V_11;
		NullCheck(L_140);
		uint8_t L_142;
		L_142 = (L_140)->GetAt(1, L_141);
		int32_t L_143 = V_8;
		int32_t L_144;
		L_144 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_143, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_142&((int32_t)255)))^L_144));
		// b2 = (P[P_23,b2] & 0xff) ^ M_b2(k2);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_145 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_146 = V_12;
		NullCheck(L_145);
		uint8_t L_147;
		L_147 = (L_145)->GetAt(0, L_146);
		int32_t L_148 = V_8;
		int32_t L_149;
		L_149 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_148, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_147&((int32_t)255)))^L_149));
		// b3 = (P[P_33,b3] & 0xff) ^ M_b3(k2);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_150 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_151 = V_13;
		NullCheck(L_150);
		uint8_t L_152;
		L_152 = (L_150)->GetAt(0, L_151);
		int32_t L_153 = V_8;
		int32_t L_154;
		L_154 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_153, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_152&((int32_t)255)))^L_154));
	}

IL_032c:
	{
		// gSBox[i * 2] = gMDS0[(P[P_01, (P[P_02, b0] & 0xff) ^ M_b0(k1)] & 0xff) ^ M_b0(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___gSBox_42;
		int32_t L_156 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_158 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_159 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_160 = V_10;
		NullCheck(L_159);
		uint8_t L_161;
		L_161 = (L_159)->GetAt(0, L_160);
		int32_t L_162 = V_7;
		int32_t L_163;
		L_163 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_162, NULL);
		NullCheck(L_158);
		uint8_t L_164;
		L_164 = (L_158)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_161&((int32_t)255)))^L_163)));
		int32_t L_165 = V_6;
		int32_t L_166;
		L_166 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_165, NULL);
		NullCheck(L_157);
		int32_t L_167 = ((int32_t)(((int32_t)((int32_t)L_164&((int32_t)255)))^L_166));
		int32_t L_168 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_156, 2))), (int32_t)L_168);
		// gSBox[i*2+1] = gMDS1[(P[P_11,(P[P_12,b1] & 0xff) ^ M_b1(k1)] & 0xff) ^ M_b1(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = __this->___gSBox_42;
		int32_t L_170 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_172 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_173 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_174 = V_11;
		NullCheck(L_173);
		uint8_t L_175;
		L_175 = (L_173)->GetAt(1, L_174);
		int32_t L_176 = V_7;
		int32_t L_177;
		L_177 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_176, NULL);
		NullCheck(L_172);
		uint8_t L_178;
		L_178 = (L_172)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_175&((int32_t)255)))^L_177)));
		int32_t L_179 = V_6;
		int32_t L_180;
		L_180 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_179, NULL);
		NullCheck(L_171);
		int32_t L_181 = ((int32_t)(((int32_t)((int32_t)L_178&((int32_t)255)))^L_180));
		int32_t L_182 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_170, 2)), 1))), (int32_t)L_182);
		// gSBox[i*2+0x200] = gMDS2[(P[P_21,(P[P_22,b2] & 0xff) ^ M_b2(k1)] & 0xff) ^ M_b2(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___gSBox_42;
		int32_t L_184 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_186 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_187 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_188 = V_12;
		NullCheck(L_187);
		uint8_t L_189;
		L_189 = (L_187)->GetAt(0, L_188);
		int32_t L_190 = V_7;
		int32_t L_191;
		L_191 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_190, NULL);
		NullCheck(L_186);
		uint8_t L_192;
		L_192 = (L_186)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_189&((int32_t)255)))^L_191)));
		int32_t L_193 = V_6;
		int32_t L_194;
		L_194 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_193, NULL);
		NullCheck(L_185);
		int32_t L_195 = ((int32_t)(((int32_t)((int32_t)L_192&((int32_t)255)))^L_194));
		int32_t L_196 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_184, 2)), ((int32_t)512)))), (int32_t)L_196);
		// gSBox[i * 2 + 0x201] = gMDS3[(P[P_31, (P[P_32, b3] & 0xff) ^ M_b3(k1)] & 0xff) ^ M_b3(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___gSBox_42;
		int32_t L_198 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_199 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_200 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_201 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_202 = V_13;
		NullCheck(L_201);
		uint8_t L_203;
		L_203 = (L_201)->GetAt(1, L_202);
		int32_t L_204 = V_7;
		int32_t L_205;
		L_205 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_204, NULL);
		NullCheck(L_200);
		uint8_t L_206;
		L_206 = (L_200)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_203&((int32_t)255)))^L_205)));
		int32_t L_207 = V_6;
		int32_t L_208;
		L_208 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_207, NULL);
		NullCheck(L_199);
		int32_t L_209 = ((int32_t)(((int32_t)((int32_t)L_206&((int32_t)255)))^L_208));
		int32_t L_210 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_198, 2)), ((int32_t)513)))), (int32_t)L_210);
	}

IL_045a:
	{
		// for (int i=0; i<MAX_KEY_BITS; i++)
		int32_t L_211 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_211, 1));
	}

IL_0460:
	{
		// for (int i=0; i<MAX_KEY_BITS; i++)
		int32_t L_212 = V_17;
		if ((((int32_t)L_212) < ((int32_t)((int32_t)256))))
		{
			goto IL_013e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_mCE0387ED1F262DD20EA7F28DEEB333A8BCC18655 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int x0 = BytesTo32Bits(src, srcIndex) ^ gSubKeys[INPUT_WHITEN];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		// int x1 = BytesTo32Bits(src, srcIndex + 4) ^ gSubKeys[INPUT_WHITEN + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_src;
		int32_t L_7 = ___1_srcIndex;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		// int x2 = BytesTo32Bits(src, srcIndex + 8) ^ gSubKeys[INPUT_WHITEN + 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_src;
		int32_t L_13 = ___1_srcIndex;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		NullCheck(L_15);
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		// int x3 = BytesTo32Bits(src, srcIndex + 12) ^ gSubKeys[INPUT_WHITEN + 3];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_src;
		int32_t L_19 = ___1_srcIndex;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		NullCheck(L_21);
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		// int k = ROUND_SUBKEYS;
		V_4 = 8;
		// for (int r = 0; r < ROUNDS; r +=2)
		V_7 = 0;
		goto IL_0104;
	}

IL_005a:
	{
		// t0 = Fe32_0(x0);
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_24, NULL);
		V_5 = L_25;
		// t1 = Fe32_3(x1);
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_26, NULL);
		V_6 = L_27;
		// x2 ^= t0 + t1 + gSubKeys[k++];
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_35))));
		// x2 = (int)((uint)x2 >>1) | x2 << 31;
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_36>>1))|((int32_t)(L_37<<((int32_t)31)))));
		// x3 = (x3 << 1 | (int) ((uint)x3 >> 31)) ^ (t0 + 2*t1 + gSubKeys[k++]);
		int32_t L_38 = V_3;
		int32_t L_39 = V_3;
		int32_t L_40 = V_5;
		int32_t L_41 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___gSubKeys_41;
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(L_38<<1))|((int32_t)((uint32_t)L_39>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(2, L_41)))), L_46))));
		// t0 = Fe32_0(x2);
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_47, NULL);
		V_5 = L_48;
		// t1 = Fe32_3(x3);
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_49, NULL);
		V_6 = L_50;
		// x0 ^= t0 + t1 + gSubKeys[k++];
		int32_t L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_58))));
		// x0 = (int) ((uint)x0 >>1) | x0 << 31;
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_59>>1))|((int32_t)(L_60<<((int32_t)31)))));
		// x1 = (x1 << 1 | (int)((uint)x1 >> 31)) ^ (t0 + 2*t1 + gSubKeys[k++]);
		int32_t L_61 = V_1;
		int32_t L_62 = V_1;
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___gSubKeys_41;
		int32_t L_66 = V_4;
		int32_t L_67 = L_66;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		NullCheck(L_65);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_61<<1))|((int32_t)((uint32_t)L_62>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, ((int32_t)il2cpp_codegen_multiply(2, L_64)))), L_69))));
		// for (int r = 0; r < ROUNDS; r +=2)
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0104:
	{
		// for (int r = 0; r < ROUNDS; r +=2)
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005a;
		}
	}
	{
		// Bits32ToBytes(x2 ^ gSubKeys[OUTPUT_WHITEN], dst, dstIndex);
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___2_dst;
		int32_t L_77 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		// Bits32ToBytes(x3 ^ gSubKeys[OUTPUT_WHITEN + 1], dst, dstIndex + 4);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		NullCheck(L_79);
		int32_t L_80 = 5;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___2_dst;
		int32_t L_83 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		// Bits32ToBytes(x0 ^ gSubKeys[OUTPUT_WHITEN + 2], dst, dstIndex + 8);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		NullCheck(L_85);
		int32_t L_86 = 6;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___2_dst;
		int32_t L_89 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		// Bits32ToBytes(x1 ^ gSubKeys[OUTPUT_WHITEN + 3], dst, dstIndex + 12);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		NullCheck(L_91);
		int32_t L_92 = 7;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___2_dst;
		int32_t L_95 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_mFA996A8B8A641EA807D6E60D63D563A258CAA2E8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int x2 = BytesTo32Bits(src, srcIndex) ^ gSubKeys[OUTPUT_WHITEN];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		NullCheck(L_3);
		int32_t L_4 = 4;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		// int x3 = BytesTo32Bits(src, srcIndex+4) ^ gSubKeys[OUTPUT_WHITEN + 1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_src;
		int32_t L_7 = ___1_srcIndex;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		NullCheck(L_9);
		int32_t L_10 = 5;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		// int x0 = BytesTo32Bits(src, srcIndex+8) ^ gSubKeys[OUTPUT_WHITEN + 2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_src;
		int32_t L_13 = ___1_srcIndex;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		NullCheck(L_15);
		int32_t L_16 = 6;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		// int x1 = BytesTo32Bits(src, srcIndex+12) ^ gSubKeys[OUTPUT_WHITEN + 3];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_src;
		int32_t L_19 = ___1_srcIndex;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		// int k = ROUND_SUBKEYS + 2 * ROUNDS -1 ;
		V_4 = ((int32_t)39);
		// for (int r = 0; r< ROUNDS ; r +=2)
		V_7 = 0;
		goto IL_0105;
	}

IL_005b:
	{
		// t0 = Fe32_0(x2);
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_24, NULL);
		V_5 = L_25;
		// t1 = Fe32_3(x3);
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_26, NULL);
		V_6 = L_27;
		// x1 ^= t0 + 2*t1 + gSubKeys[k--];
		int32_t L_28 = V_3;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(2, L_30)))), L_35))));
		// x0 = (x0 << 1 | (int)((uint) x0 >> 31)) ^ (t0 + t1 + gSubKeys[k--]);
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___gSubKeys_41;
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(L_36<<1))|((int32_t)((uint32_t)L_37>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_44))));
		// x1 = (int) ((uint)x1 >>1) | x1 << 31;
		int32_t L_45 = V_3;
		int32_t L_46 = V_3;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_45>>1))|((int32_t)(L_46<<((int32_t)31)))));
		// t0 = Fe32_0(x0);
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_47, NULL);
		V_5 = L_48;
		// t1 = Fe32_3(x1);
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_49, NULL);
		V_6 = L_50;
		// x3 ^= t0 + 2*t1 + gSubKeys[k--];
		int32_t L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_1 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(2, L_53)))), L_58))));
		// x2 = (x2 << 1 | (int)((uint)x2 >> 31)) ^ (t0 + t1 + gSubKeys[k--]);
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___gSubKeys_41;
		int32_t L_64 = V_4;
		int32_t L_65 = L_64;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		NullCheck(L_63);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_59<<1))|((int32_t)((uint32_t)L_60>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_67))));
		// x3 = (int)((uint)x3 >>1) | x3 << 31;
		int32_t L_68 = V_1;
		int32_t L_69 = V_1;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_68>>1))|((int32_t)(L_69<<((int32_t)31)))));
		// for (int r = 0; r< ROUNDS ; r +=2)
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0105:
	{
		// for (int r = 0; r< ROUNDS ; r +=2)
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		// Bits32ToBytes(x0 ^ gSubKeys[INPUT_WHITEN], dst, dstIndex);
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___2_dst;
		int32_t L_77 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		// Bits32ToBytes(x1 ^ gSubKeys[INPUT_WHITEN + 1], dst, dstIndex + 4);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		NullCheck(L_79);
		int32_t L_80 = 1;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___2_dst;
		int32_t L_83 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		// Bits32ToBytes(x2 ^ gSubKeys[INPUT_WHITEN + 2], dst, dstIndex + 8);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		NullCheck(L_85);
		int32_t L_86 = 2;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___2_dst;
		int32_t L_89 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		// Bits32ToBytes(x3 ^ gSubKeys[INPUT_WHITEN + 3], dst, dstIndex + 12);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		NullCheck(L_91);
		int32_t L_92 = 3;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___2_dst;
		int32_t L_95 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_k32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// int b0 = M_b0(x);
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_0, NULL);
		V_0 = L_1;
		// int b1 = M_b1(x);
		int32_t L_2 = ___0_x;
		int32_t L_3;
		L_3 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_2, NULL);
		V_1 = L_3;
		// int b2 = M_b2(x);
		int32_t L_4 = ___0_x;
		int32_t L_5;
		L_5 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_4, NULL);
		V_2 = L_5;
		// int b3 = M_b3(x);
		int32_t L_6 = ___0_x;
		int32_t L_7;
		L_7 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_6, NULL);
		V_3 = L_7;
		// int k0 = k32[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___1_k32;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// int k1 = k32[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___1_k32;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// int k2 = k32[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___1_k32;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		// int k3 = k32[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_k32;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		// int result = 0;
		V_8 = 0;
		// switch (k64Cnt & 3)
		int32_t L_20 = __this->___k64Cnt_43;
		V_9 = ((int32_t)(L_20&3));
		int32_t L_21 = V_9;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_01cf;
			}
			case 3:
			{
				goto IL_015f;
			}
		}
	}
	{
		goto IL_02c4;
	}

IL_005d:
	{
		// result = gMDS0[(P[P_01,b0] & 0xff) ^ M_b0(k0)] ^
		//         gMDS1[(P[P_11,b1] & 0xff) ^ M_b1(k0)] ^
		//         gMDS2[(P[P_21,b2] & 0xff) ^ M_b2(k0)] ^
		//         gMDS3[(P[P_31,b3] & 0xff) ^ M_b3(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_23 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		uint8_t L_25;
		L_25 = (L_23)->GetAt(0, L_24);
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_26, NULL);
		NullCheck(L_22);
		int32_t L_28 = ((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))^L_27));
		int32_t L_29 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_31 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		uint8_t L_33;
		L_33 = (L_31)->GetAt(0, L_32);
		int32_t L_34 = V_4;
		int32_t L_35;
		L_35 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_34, NULL);
		NullCheck(L_30);
		int32_t L_36 = ((int32_t)(((int32_t)((int32_t)L_33&((int32_t)255)))^L_35));
		int32_t L_37 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_39 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		uint8_t L_41;
		L_41 = (L_39)->GetAt(1, L_40);
		int32_t L_42 = V_4;
		int32_t L_43;
		L_43 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_42, NULL);
		NullCheck(L_38);
		int32_t L_44 = ((int32_t)(((int32_t)((int32_t)L_41&((int32_t)255)))^L_43));
		int32_t L_45 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_47 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		uint8_t L_49;
		L_49 = (L_47)->GetAt(1, L_48);
		int32_t L_50 = V_4;
		int32_t L_51;
		L_51 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_50, NULL);
		NullCheck(L_46);
		int32_t L_52 = ((int32_t)(((int32_t)((int32_t)L_49&((int32_t)255)))^L_51));
		int32_t L_53 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_29^L_37))^L_45))^L_53));
		// break;
		goto IL_02c4;
	}

IL_00ef:
	{
		// b0 = (P[P_04,b0] & 0xff) ^ M_b0(k3);
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_54 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		uint8_t L_56;
		L_56 = (L_54)->GetAt(1, L_55);
		int32_t L_57 = V_7;
		int32_t L_58;
		L_58 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_57, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_56&((int32_t)255)))^L_58));
		// b1 = (P[P_14,b1] & 0xff) ^ M_b1(k3);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_59 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		uint8_t L_61;
		L_61 = (L_59)->GetAt(0, L_60);
		int32_t L_62 = V_7;
		int32_t L_63;
		L_63 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_62, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_61&((int32_t)255)))^L_63));
		// b2 = (P[P_24,b2] & 0xff) ^ M_b2(k3);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_64 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		uint8_t L_66;
		L_66 = (L_64)->GetAt(0, L_65);
		int32_t L_67 = V_7;
		int32_t L_68;
		L_68 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_67, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_66&((int32_t)255)))^L_68));
		// b3 = (P[P_34,b3] & 0xff) ^ M_b3(k3);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_69 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_70 = V_3;
		NullCheck(L_69);
		uint8_t L_71;
		L_71 = (L_69)->GetAt(1, L_70);
		int32_t L_72 = V_7;
		int32_t L_73;
		L_73 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_72, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_71&((int32_t)255)))^L_73));
	}

IL_015f:
	{
		// b0 = (P[P_03,b0] & 0xff) ^ M_b0(k2);
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_74 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		uint8_t L_76;
		L_76 = (L_74)->GetAt(1, L_75);
		int32_t L_77 = V_6;
		int32_t L_78;
		L_78 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_77, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_76&((int32_t)255)))^L_78));
		// b1 = (P[P_13,b1] & 0xff) ^ M_b1(k2);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_79 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		uint8_t L_81;
		L_81 = (L_79)->GetAt(1, L_80);
		int32_t L_82 = V_6;
		int32_t L_83;
		L_83 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_82, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_81&((int32_t)255)))^L_83));
		// b2 = (P[P_23,b2] & 0xff) ^ M_b2(k2);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_84 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		uint8_t L_86;
		L_86 = (L_84)->GetAt(0, L_85);
		int32_t L_87 = V_6;
		int32_t L_88;
		L_88 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_87, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_86&((int32_t)255)))^L_88));
		// b3 = (P[P_33,b3] & 0xff) ^ M_b3(k2);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_89 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_90 = V_3;
		NullCheck(L_89);
		uint8_t L_91;
		L_91 = (L_89)->GetAt(0, L_90);
		int32_t L_92 = V_6;
		int32_t L_93;
		L_93 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_92, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_91&((int32_t)255)))^L_93));
	}

IL_01cf:
	{
		// result =
		// gMDS0[(P[P_01,(P[P_02,b0]&0xff)^M_b0(k1)]&0xff)^M_b0(k0)] ^
		// gMDS1[(P[P_11,(P[P_12,b1]&0xff)^M_b1(k1)]&0xff)^M_b1(k0)] ^
		// gMDS2[(P[P_21,(P[P_22,b2]&0xff)^M_b2(k1)]&0xff)^M_b2(k0)] ^
		// gMDS3[(P[P_31,(P[P_32,b3]&0xff)^M_b3(k1)]&0xff)^M_b3(k0)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_95 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_96 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_97 = V_0;
		NullCheck(L_96);
		uint8_t L_98;
		L_98 = (L_96)->GetAt(0, L_97);
		int32_t L_99 = V_5;
		int32_t L_100;
		L_100 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_99, NULL);
		NullCheck(L_95);
		uint8_t L_101;
		L_101 = (L_95)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_98&((int32_t)255)))^L_100)));
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_102, NULL);
		NullCheck(L_94);
		int32_t L_104 = ((int32_t)(((int32_t)((int32_t)L_101&((int32_t)255)))^L_103));
		int32_t L_105 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_107 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_109 = V_1;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_5;
		int32_t L_112;
		L_112 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_111, NULL);
		NullCheck(L_107);
		uint8_t L_113;
		L_113 = (L_107)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112)));
		int32_t L_114 = V_4;
		int32_t L_115;
		L_115 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_114, NULL);
		NullCheck(L_106);
		int32_t L_116 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)255)))^L_115));
		int32_t L_117 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_119 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_121 = V_2;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_5;
		int32_t L_124;
		L_124 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_123, NULL);
		NullCheck(L_119);
		uint8_t L_125;
		L_125 = (L_119)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124)));
		int32_t L_126 = V_4;
		int32_t L_127;
		L_127 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_126, NULL);
		NullCheck(L_118);
		int32_t L_128 = ((int32_t)(((int32_t)((int32_t)L_125&((int32_t)255)))^L_127));
		int32_t L_129 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_131 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_132 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_133 = V_3;
		NullCheck(L_132);
		uint8_t L_134;
		L_134 = (L_132)->GetAt(1, L_133);
		int32_t L_135 = V_5;
		int32_t L_136;
		L_136 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_135, NULL);
		NullCheck(L_131);
		uint8_t L_137;
		L_137 = (L_131)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_134&((int32_t)255)))^L_136)));
		int32_t L_138 = V_4;
		int32_t L_139;
		L_139 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_138, NULL);
		NullCheck(L_130);
		int32_t L_140 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		int32_t L_141 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_105^L_117))^L_129))^L_141));
	}

IL_02c4:
	{
		// return result;
		int32_t L_142 = V_8;
		return L_142;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m64EF5D08A927C8453D3070AFD7673675C1DBA7F8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_k0, int32_t ___1_k1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int r = k1;
		int32_t L_0 = ___1_k1;
		V_0 = L_0;
		// for (int i = 0 ; i < 4 ; i++) // shift 1 byte at a time
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		// r = RS_rem(r);
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E(__this, L_1, NULL);
		V_0 = L_2;
		// for (int i = 0 ; i < 4 ; i++) // shift 1 byte at a time
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0012:
	{
		// for (int i = 0 ; i < 4 ; i++) // shift 1 byte at a time
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		// r ^= k0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_k0;
		V_0 = ((int32_t)(L_5^L_6));
		// for (int i=0 ; i < 4 ; i++)
		V_2 = 0;
		goto IL_002a;
	}

IL_001e:
	{
		// r = RS_rem(r);
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E(__this, L_7, NULL);
		V_0 = L_8;
		// for (int i=0 ; i < 4 ; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		// for (int i=0 ; i < 4 ; i++)
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		// return r;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// int b = (int) (((uint)x >> 24) & 0xff);
		int32_t L_0 = ___0_x;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
		// int g2 = ((b << 1) ^
		//         ((b & 0x80) != 0 ? RS_GF_FDBK : 0)) & 0xff;
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		G_B1_0 = ((int32_t)(L_1<<1));
		if (((int32_t)(L_2&((int32_t)128))))
		{
			G_B2_0 = ((int32_t)(L_1<<1));
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)333);
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		V_1 = ((int32_t)(((int32_t)(G_B3_1^G_B3_0))&((int32_t)255)));
		// int g3 = ( (int)((uint)b >> 1) ^
		//         ((b & 0x01) != 0 ? (int)((uint)RS_GF_FDBK >> 1) : 0)) ^ g2 ;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		G_B4_0 = ((int32_t)((uint32_t)L_3>>1));
		if (((int32_t)(L_4&1)))
		{
			G_B5_0 = ((int32_t)((uint32_t)L_3>>1));
			goto IL_0032;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B6_0 = ((int32_t)166);
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)(G_B6_1^G_B6_0))^L_5));
		// return ((x << 8) ^ (g3 << 24) ^ (g2 << 16) ^ (g3 << 8) ^ b);
		int32_t L_6 = ___0_x;
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_6<<8))^((int32_t)(L_7<<((int32_t)24)))))^((int32_t)(L_8<<((int32_t)16)))))^((int32_t)(L_9<<8))))^L_10));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mE0BC0E375CF661A5CB87B76CDBE421CFF0A80A37 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// return (x >> 1) ^
		//         (((x & 0x01) != 0) ? GF256_FDBK_2 : 0);
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		G_B1_0 = ((int32_t)(L_0>>1));
		if (((int32_t)(L_1&1)))
		{
			G_B2_0 = ((int32_t)(L_0>>1));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// return (x >> 2) ^
		//         (((x & 0x02) != 0) ? GF256_FDBK_2 : 0) ^
		//         (((x & 0x01) != 0) ? GF256_FDBK_4 : 0);
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		G_B1_0 = ((int32_t)(L_0>>2));
		if (((int32_t)(L_1&2)))
		{
			G_B2_0 = ((int32_t)(L_0>>2));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		int32_t L_2 = ___0_x;
		G_B4_0 = ((int32_t)(G_B3_1^G_B3_0));
		if (((int32_t)(L_2&1)))
		{
			G_B5_0 = ((int32_t)(G_B3_1^G_B3_0));
			goto IL_0019;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_001b;
	}

IL_0019:
	{
		G_B6_0 = ((int32_t)90);
		G_B6_1 = G_B5_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B6_1^G_B6_0));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return x ^ LFSR2(x);
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54(__this, L_1, NULL);
		return ((int32_t)(L_0^L_2));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return x ^ LFSR1(x) ^ LFSR2(x);
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR1_mE0BC0E375CF661A5CB87B76CDBE421CFF0A80A37(__this, L_1, NULL);
		int32_t L_3 = ___0_x;
		int32_t L_4;
		L_4 = TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54(__this, L_3, NULL);
		return ((int32_t)(((int32_t)(L_0^L_2))^L_4));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return x & 0xff;
		int32_t L_0 = ___0_x;
		return ((int32_t)(L_0&((int32_t)255)));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return (int)((uint)x >> 8) & 0xff;
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>8))&((int32_t)255)));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return (int)((uint)x >> 16) & 0xff;
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)16)))&((int32_t)255)));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return (int)((uint)x >> 24) & 0xff;
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return gSBox[ 0x000 + 2*(x & 0xff) ] ^
		//     gSBox[ 0x001 + 2*((int)((uint)x >> 8) & 0xff) ] ^
		//     gSBox[ 0x200 + 2*((int)((uint)x >> 16) & 0xff) ] ^
		//     gSBox[ 0x201 + 2*((int)((uint)x >> 24) & 0xff) ];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_1&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// return gSBox[ 0x000 + 2*((int)((uint)x >> 24) & 0xff) ] ^
		//     gSBox[ 0x001 + 2*(x & 0xff) ] ^
		//     gSBox[ 0x200 + 2*((int)((uint)x >> 8) & 0xff) ] ^
		//     gSBox[ 0x201 + 2*((int)((uint)x >> 16) & 0xff) ];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_1>>((int32_t)24)))&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_5&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_p, const RuntimeMethod* method) 
{
	{
		// return ((b[p] & 0xff) ) |
		//     ((b[p+1] & 0xff) << 8) |
		//     ((b[p+2] & 0xff) << 16) |
		//     ((b[p+3] & 0xff) << 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_b;
		int32_t L_1 = ___1_p;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_b;
		int32_t L_5 = ___1_p;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_b;
		int32_t L_9 = ___1_p;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_b;
		int32_t L_13 = ___1_p;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)24)))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_inData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		// b[offset] = (byte)inData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_b;
		int32_t L_1 = ___2_offset;
		int32_t L_2 = ___0_inData;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// b[offset + 1] = (byte)(inData >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_b;
		int32_t L_4 = ___2_offset;
		int32_t L_5 = ___0_inData;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		// b[offset + 2] = (byte)(inData >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_b;
		int32_t L_7 = ___2_offset;
		int32_t L_8 = ___0_inData;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		// b[offset + 3] = (byte)(inData >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_b;
		int32_t L_10 = ___2_offset;
		int32_t L_11 = ___0_inData;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.TwofishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__cctor_mFD5BC02C75FD89653F50F12493CEC8635EDAE44E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_131_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[,] P =  {
		// {  // p0
		//     (byte) 0xA9, (byte) 0x67, (byte) 0xB3, (byte) 0xE8,
		//     (byte) 0x04, (byte) 0xFD, (byte) 0xA3, (byte) 0x76,
		//     (byte) 0x9A, (byte) 0x92, (byte) 0x80, (byte) 0x78,
		//     (byte) 0xE4, (byte) 0xDD, (byte) 0xD1, (byte) 0x38,
		//     (byte) 0x0D, (byte) 0xC6, (byte) 0x35, (byte) 0x98,
		//     (byte) 0x18, (byte) 0xF7, (byte) 0xEC, (byte) 0x6C,
		//     (byte) 0x43, (byte) 0x75, (byte) 0x37, (byte) 0x26,
		//     (byte) 0xFA, (byte) 0x13, (byte) 0x94, (byte) 0x48,
		//     (byte) 0xF2, (byte) 0xD0, (byte) 0x8B, (byte) 0x30,
		//     (byte) 0x84, (byte) 0x54, (byte) 0xDF, (byte) 0x23,
		//     (byte) 0x19, (byte) 0x5B, (byte) 0x3D, (byte) 0x59,
		//     (byte) 0xF3, (byte) 0xAE, (byte) 0xA2, (byte) 0x82,
		//     (byte) 0x63, (byte) 0x01, (byte) 0x83, (byte) 0x2E,
		//     (byte) 0xD9, (byte) 0x51, (byte) 0x9B, (byte) 0x7C,
		//     (byte) 0xA6, (byte) 0xEB, (byte) 0xA5, (byte) 0xBE,
		//     (byte) 0x16, (byte) 0x0C, (byte) 0xE3, (byte) 0x61,
		//     (byte) 0xC0, (byte) 0x8C, (byte) 0x3A, (byte) 0xF5,
		//     (byte) 0x73, (byte) 0x2C, (byte) 0x25, (byte) 0x0B,
		//     (byte) 0xBB, (byte) 0x4E, (byte) 0x89, (byte) 0x6B,
		//     (byte) 0x53, (byte) 0x6A, (byte) 0xB4, (byte) 0xF1,
		//     (byte) 0xE1, (byte) 0xE6, (byte) 0xBD, (byte) 0x45,
		//     (byte) 0xE2, (byte) 0xF4, (byte) 0xB6, (byte) 0x66,
		//     (byte) 0xCC, (byte) 0x95, (byte) 0x03, (byte) 0x56,
		//     (byte) 0xD4, (byte) 0x1C, (byte) 0x1E, (byte) 0xD7,
		//     (byte) 0xFB, (byte) 0xC3, (byte) 0x8E, (byte) 0xB5,
		//     (byte) 0xE9, (byte) 0xCF, (byte) 0xBF, (byte) 0xBA,
		//     (byte) 0xEA, (byte) 0x77, (byte) 0x39, (byte) 0xAF,
		//     (byte) 0x33, (byte) 0xC9, (byte) 0x62, (byte) 0x71,
		//     (byte) 0x81, (byte) 0x79, (byte) 0x09, (byte) 0xAD,
		//     (byte) 0x24, (byte) 0xCD, (byte) 0xF9, (byte) 0xD8,
		//     (byte) 0xE5, (byte) 0xC5, (byte) 0xB9, (byte) 0x4D,
		//     (byte) 0x44, (byte) 0x08, (byte) 0x86, (byte) 0xE7,
		//     (byte) 0xA1, (byte) 0x1D, (byte) 0xAA, (byte) 0xED,
		//     (byte) 0x06, (byte) 0x70, (byte) 0xB2, (byte) 0xD2,
		//     (byte) 0x41, (byte) 0x7B, (byte) 0xA0, (byte) 0x11,
		//     (byte) 0x31, (byte) 0xC2, (byte) 0x27, (byte) 0x90,
		//     (byte) 0x20, (byte) 0xF6, (byte) 0x60, (byte) 0xFF,
		//     (byte) 0x96, (byte) 0x5C, (byte) 0xB1, (byte) 0xAB,
		//     (byte) 0x9E, (byte) 0x9C, (byte) 0x52, (byte) 0x1B,
		//     (byte) 0x5F, (byte) 0x93, (byte) 0x0A, (byte) 0xEF,
		//     (byte) 0x91, (byte) 0x85, (byte) 0x49, (byte) 0xEE,
		//     (byte) 0x2D, (byte) 0x4F, (byte) 0x8F, (byte) 0x3B,
		//     (byte) 0x47, (byte) 0x87, (byte) 0x6D, (byte) 0x46,
		//     (byte) 0xD6, (byte) 0x3E, (byte) 0x69, (byte) 0x64,
		//     (byte) 0x2A, (byte) 0xCE, (byte) 0xCB, (byte) 0x2F,
		//     (byte) 0xFC, (byte) 0x97, (byte) 0x05, (byte) 0x7A,
		//     (byte) 0xAC, (byte) 0x7F, (byte) 0xD5, (byte) 0x1A,
		//     (byte) 0x4B, (byte) 0x0E, (byte) 0xA7, (byte) 0x5A,
		//     (byte) 0x28, (byte) 0x14, (byte) 0x3F, (byte) 0x29,
		//     (byte) 0x88, (byte) 0x3C, (byte) 0x4C, (byte) 0x02,
		//     (byte) 0xB8, (byte) 0xDA, (byte) 0xB0, (byte) 0x17,
		//     (byte) 0x55, (byte) 0x1F, (byte) 0x8A, (byte) 0x7D,
		//     (byte) 0x57, (byte) 0xC7, (byte) 0x8D, (byte) 0x74,
		//     (byte) 0xB7, (byte) 0xC4, (byte) 0x9F, (byte) 0x72,
		//     (byte) 0x7E, (byte) 0x15, (byte) 0x22, (byte) 0x12,
		//     (byte) 0x58, (byte) 0x07, (byte) 0x99, (byte) 0x34,
		//     (byte) 0x6E, (byte) 0x50, (byte) 0xDE, (byte) 0x68,
		//     (byte) 0x65, (byte) 0xBC, (byte) 0xDB, (byte) 0xF8,
		//     (byte) 0xC8, (byte) 0xA8, (byte) 0x2B, (byte) 0x40,
		//     (byte) 0xDC, (byte) 0xFE, (byte) 0x32, (byte) 0xA4,
		//     (byte) 0xCA, (byte) 0x10, (byte) 0x21, (byte) 0xF0,
		//     (byte) 0xD3, (byte) 0x5D, (byte) 0x0F, (byte) 0x00,
		//     (byte) 0x6F, (byte) 0x9D, (byte) 0x36, (byte) 0x42,
		//     (byte) 0x4A, (byte) 0x5E, (byte) 0xC1, (byte) 0xE0 },
		// {  // p1
		//     (byte) 0x75, (byte) 0xF3, (byte) 0xC6, (byte) 0xF4,
		//     (byte) 0xDB, (byte) 0x7B, (byte) 0xFB, (byte) 0xC8,
		//     (byte) 0x4A, (byte) 0xD3, (byte) 0xE6, (byte) 0x6B,
		//     (byte) 0x45, (byte) 0x7D, (byte) 0xE8, (byte) 0x4B,
		//     (byte) 0xD6, (byte) 0x32, (byte) 0xD8, (byte) 0xFD,
		//     (byte) 0x37, (byte) 0x71, (byte) 0xF1, (byte) 0xE1,
		//     (byte) 0x30, (byte) 0x0F, (byte) 0xF8, (byte) 0x1B,
		//     (byte) 0x87, (byte) 0xFA, (byte) 0x06, (byte) 0x3F,
		//     (byte) 0x5E, (byte) 0xBA, (byte) 0xAE, (byte) 0x5B,
		//     (byte) 0x8A, (byte) 0x00, (byte) 0xBC, (byte) 0x9D,
		//     (byte) 0x6D, (byte) 0xC1, (byte) 0xB1, (byte) 0x0E,
		//     (byte) 0x80, (byte) 0x5D, (byte) 0xD2, (byte) 0xD5,
		//     (byte) 0xA0, (byte) 0x84, (byte) 0x07, (byte) 0x14,
		//     (byte) 0xB5, (byte) 0x90, (byte) 0x2C, (byte) 0xA3,
		//     (byte) 0xB2, (byte) 0x73, (byte) 0x4C, (byte) 0x54,
		//     (byte) 0x92, (byte) 0x74, (byte) 0x36, (byte) 0x51,
		//     (byte) 0x38, (byte) 0xB0, (byte) 0xBD, (byte) 0x5A,
		//     (byte) 0xFC, (byte) 0x60, (byte) 0x62, (byte) 0x96,
		//     (byte) 0x6C, (byte) 0x42, (byte) 0xF7, (byte) 0x10,
		//     (byte) 0x7C, (byte) 0x28, (byte) 0x27, (byte) 0x8C,
		//     (byte) 0x13, (byte) 0x95, (byte) 0x9C, (byte) 0xC7,
		//     (byte) 0x24, (byte) 0x46, (byte) 0x3B, (byte) 0x70,
		//     (byte) 0xCA, (byte) 0xE3, (byte) 0x85, (byte) 0xCB,
		//     (byte) 0x11, (byte) 0xD0, (byte) 0x93, (byte) 0xB8,
		//     (byte) 0xA6, (byte) 0x83, (byte) 0x20, (byte) 0xFF,
		//     (byte) 0x9F, (byte) 0x77, (byte) 0xC3, (byte) 0xCC,
		//     (byte) 0x03, (byte) 0x6F, (byte) 0x08, (byte) 0xBF,
		//     (byte) 0x40, (byte) 0xE7, (byte) 0x2B, (byte) 0xE2,
		//     (byte) 0x79, (byte) 0x0C, (byte) 0xAA, (byte) 0x82,
		//     (byte) 0x41, (byte) 0x3A, (byte) 0xEA, (byte) 0xB9,
		//     (byte) 0xE4, (byte) 0x9A, (byte) 0xA4, (byte) 0x97,
		//     (byte) 0x7E, (byte) 0xDA, (byte) 0x7A, (byte) 0x17,
		//     (byte) 0x66, (byte) 0x94, (byte) 0xA1, (byte) 0x1D,
		//     (byte) 0x3D, (byte) 0xF0, (byte) 0xDE, (byte) 0xB3,
		//     (byte) 0x0B, (byte) 0x72, (byte) 0xA7, (byte) 0x1C,
		//     (byte) 0xEF, (byte) 0xD1, (byte) 0x53, (byte) 0x3E,
		//     (byte) 0x8F, (byte) 0x33, (byte) 0x26, (byte) 0x5F,
		//     (byte) 0xEC, (byte) 0x76, (byte) 0x2A, (byte) 0x49,
		//     (byte) 0x81, (byte) 0x88, (byte) 0xEE, (byte) 0x21,
		//     (byte) 0xC4, (byte) 0x1A, (byte) 0xEB, (byte) 0xD9,
		//     (byte) 0xC5, (byte) 0x39, (byte) 0x99, (byte) 0xCD,
		//     (byte) 0xAD, (byte) 0x31, (byte) 0x8B, (byte) 0x01,
		//     (byte) 0x18, (byte) 0x23, (byte) 0xDD, (byte) 0x1F,
		//     (byte) 0x4E, (byte) 0x2D, (byte) 0xF9, (byte) 0x48,
		//     (byte) 0x4F, (byte) 0xF2, (byte) 0x65, (byte) 0x8E,
		//     (byte) 0x78, (byte) 0x5C, (byte) 0x58, (byte) 0x19,
		//     (byte) 0x8D, (byte) 0xE5, (byte) 0x98, (byte) 0x57,
		//     (byte) 0x67, (byte) 0x7F, (byte) 0x05, (byte) 0x64,
		//     (byte) 0xAF, (byte) 0x63, (byte) 0xB6, (byte) 0xFE,
		//     (byte) 0xF5, (byte) 0xB7, (byte) 0x3C, (byte) 0xA5,
		//     (byte) 0xCE, (byte) 0xE9, (byte) 0x68, (byte) 0x44,
		//     (byte) 0xE0, (byte) 0x4D, (byte) 0x43, (byte) 0x69,
		//     (byte) 0x29, (byte) 0x2E, (byte) 0xAC, (byte) 0x15,
		//     (byte) 0x59, (byte) 0xA8, (byte) 0x0A, (byte) 0x9E,
		//     (byte) 0x6E, (byte) 0x47, (byte) 0xDF, (byte) 0x34,
		//     (byte) 0x35, (byte) 0x6A, (byte) 0xCF, (byte) 0xDC,
		//     (byte) 0x22, (byte) 0xC9, (byte) 0xC0, (byte) 0x9B,
		//     (byte) 0x89, (byte) 0xD4, (byte) 0xED, (byte) 0xAB,
		//     (byte) 0x12, (byte) 0xA2, (byte) 0x0D, (byte) 0x52,
		//     (byte) 0xBB, (byte) 0x02, (byte) 0x2F, (byte) 0xA9,
		//     (byte) 0xD7, (byte) 0x61, (byte) 0x1E, (byte) 0xB4,
		//     (byte) 0x50, (byte) 0x04, (byte) 0xF6, (byte) 0xC2,
		//     (byte) 0x16, (byte) 0x25, (byte) 0x86, (byte) 0x56,
		//     (byte) 0x55, (byte) 0x09, (byte) 0xBE, (byte) 0x91  }
		// };
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)((int32_t)256) };
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_0 = (ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638*)GenArrayNew(ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var, L_1);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_131_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P_0), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_m3706EE54311F6BD833CB80C71C1C18BD2D48E227_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) 
{
	{
		// get { return parameters; }
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline (ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* __this, const RuntimeMethod* method) 
{
	{
		// get { return parameters; }
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_0 = __this->___parameters_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline (ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B* __this, const RuntimeMethod* method) 
{
	{
		// get { return q; }
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = __this->___q_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		// get { return h; }
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = __this->___h_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ParametersWithRandom_get_Random_mEA11E3BF8C0CEAD478D02EE8BD106BC9A6BC9C5E_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) 
{
	{
		// get { return random; }
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_0 = __this->___random_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		// get { return curve; }
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = __this->___curve_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECDomainParameters_get_G_m168D02E316313C80F26DAC3F8CB67E8F8C613D86_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		// get { return g; }
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = __this->___g_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECPrivateKeyParameters_get_D_m519EB228A8E14620BD059187CAC803C94AA09B80_inline (ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return d; }
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = __this->___d_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		// get { return n; }
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = __this->___n_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) 
{
	{
		// get { return sign; }
		int32_t L_0 = __this->___sign_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* TweakableBlockCipherParameters_get_Key_m9532CACCD9CFE5FBA4EC3613A960C9EEDB7F0626_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) 
{
	{
		// get { return key; }
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_0 = __this->___key_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TweakableBlockCipherParameters_get_Tweak_m76D8F6B45EBE3419E4831A7E6E0A50898BB9BEC3_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) 
{
	{
		// get { return tweak; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___tweak_0;
		return L_0;
	}
}
