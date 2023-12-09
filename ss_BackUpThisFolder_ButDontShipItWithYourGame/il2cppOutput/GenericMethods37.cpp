#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t985708A4E9373BBDD77FF87081DB836863066E48;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ES3Reader
struct ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518;
// ES3Settings
struct ES3Settings_t5FF4E8DB95573CB739527FD69BD1823D602885C1;
// ES3Types.ES3Type
struct ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE;
// ES3Types.ES3Type_TextureSheetAnimationModule
struct ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA;
// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A;
// ES3Types.ES3Type_Transform
struct ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7;
// ES3Types.ES3Type_TriggerModule
struct ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00;
IL2CPP_EXTERN_C String_t* _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA;
IL2CPP_EXTERN_C String_t* _stringLiteral354281948B6269615E32D856CF85B6F456724DAA;
IL2CPP_EXTERN_C String_t* _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B;
IL2CPP_EXTERN_C String_t* _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01;
IL2CPP_EXTERN_C String_t* _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119;
IL2CPP_EXTERN_C String_t* _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756;
IL2CPP_EXTERN_C String_t* _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578;
IL2CPP_EXTERN_C String_t* _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F;
IL2CPP_EXTERN_C String_t* _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866;
IL2CPP_EXTERN_C String_t* _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F632BD073069C926450B792B45EAAB22036D149;
IL2CPP_EXTERN_C String_t* _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A;
IL2CPP_EXTERN_C String_t* _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120;
IL2CPP_EXTERN_C String_t* _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B;
IL2CPP_EXTERN_C String_t* _stringLiteralB1439A3AE532D1310341C818741450454C83AA36;
IL2CPP_EXTERN_C String_t* _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450;
IL2CPP_EXTERN_C String_t* _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182;
IL2CPP_EXTERN_C String_t* _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25;
IL2CPP_EXTERN_C String_t* _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E;
IL2CPP_EXTERN_C String_t* _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m47D7C0F40BE7736A385976BEBB77FF3B8CBDB00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE4227CE82740716176BC1A48503F99039FC9EE02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m585944D8C944AA566E56450CF86D6E4BF87264ED_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t5FF4E8DB95573CB739527FD69BD1823D602885C1* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t985708A4E9373BBDD77FF87081DB836863066E48* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isEnum
	bool ___isEnum_7;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_8;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_9;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_10;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_11;
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

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader_0;
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

// ES3Types.ES3ObjectType
struct ES3ObjectType_t97D4D5BF1057D26370EFE65DD23BA3695986EA3C  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_MinMaxGradient
struct ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxGradient::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_TextureSheetAnimationModule
struct ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TextureSheetAnimationModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_TrailModule
struct ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TrailModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_TriggerModule
struct ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_TriggerModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_int
struct ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TriggerModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TriggerModule
struct TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B  : public ES3ObjectType_t97D4D5BF1057D26370EFE65DD23BA3695986EA3C
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

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B  : public ES3UnityObjectType_t3436D50553BAED8BDAD2A84B56E1F267FB66B24B
{
};

// ES3Types.ES3Type_Transform
struct ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7  : public ES3ComponentType_tA96FBCDEF44843795CFD0CC92E345662DD11834B
{
};

struct ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7_StaticFields
{
	// System.Int32 ES3Types.ES3Type_Transform::countRead
	int32_t ___countRead_13;
	// ES3Types.ES3Type ES3Types.ES3Type_Transform::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_14;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_numTilesX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_numTilesY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_animation(UnityEngine.ParticleSystemAnimationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_rowMode(UnityEngine.ParticleSystemAnimationRowMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_frameOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_frameOverTimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_startFrame(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_startFrameMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_cycleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_rowIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_uvChannelMask(UnityEngine.Rendering.UVChannelFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_lifetimeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_minVertexDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_textureMode(UnityEngine.ParticleSystemTrailTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_worldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_dieWithParticles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_sizeAffectsLifetime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_inheritParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverLifetime(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrail(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_widthOverTrailMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TrailModule::set_colorOverTrail(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8 (ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_inside(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_outside(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_enter(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_exit(UnityEngine.ParticleSystemOverlapAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TriggerModule::set_radiusScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373 (TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m6ABCBE2B67F3B0366947F67440E32904722FFD9E_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m051D597B1F76FC914F2A96EEFADA8176748C074C_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m0DCAF7894DFE83364CF14CEE4527EBDEA85BAF63_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m841E59DB1C50B1940FDC06354A16A9FAFDA7805A_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mC3C06B3684AB16097EA80BD28B4E1A838640C04C_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m4562AF5798F37BEAC4991F89F9EFB4587A97AEA4_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m763DA12FF8653AF7D1319C04D4DA676A666D9E6C_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m21FC6FB7329F73906EA42376F18CDDD72A7BE74E_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m96D96B4915125D2E1DA9DB4AD6A2E0115ADEDE23_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TextureSheetAnimationModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TextureSheetAnimationModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m96A7783FDFCE32A66E7C14772E9AB5636265C6C7_gshared (ES3Type_TextureSheetAnimationModule_tFF1DDE83A6A6F2866B67D016668791C94DC75DEA* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1439A3AE532D1310341C818741450454C83AA36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TextureSheetAnimationModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)((TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)(TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6*)UnBox(L_0, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_il2cpp_TypeInfo_var))));
		goto IL_02a9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1755569519)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)154306809)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00b7;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)57108932))))
		{
			goto IL_014a;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)154306809))))
		{
			goto IL_019e;
		}
	}
	{
		goto IL_02a3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)834825294))))
		{
			goto IL_0135;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)968475780))))
		{
			goto IL_010b;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1755569519))))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_02a3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1225229793)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1259238181))))
		{
			goto IL_015f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1242007412))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1225229793))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-606730264))))
		{
			goto IL_0174;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-515510691))))
		{
			goto IL_00f6;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-169490499))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_02a3;
	}

IL_00b7:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_02a3;
	}

IL_00cc:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralB1439A3AE532D1310341C818741450454C83AA36, NULL);
		if (L_21)
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02a3;
	}

IL_00e1:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral658DF8A1F8E85D67D3A7E0E23694124E177C0578, NULL);
		if (L_23)
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_02a3;
	}

IL_00f6:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralDDED2ADB7FD59559EE5F70797A5DE817D7BB1FC8, NULL);
		if (L_25)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_02a3;
	}

IL_010b:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral65564F44178CA3B198F478E8BD34D153C599CB4A, NULL);
		if (L_27)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_02a3;
	}

IL_0120:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0E80BCDD650EC23910A2F0D9B92ADD3B4DDA2DE4, NULL);
		if (L_29)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0135:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral3912D666739215405CD9E41375C05BE3D300CA8B, NULL);
		if (L_31)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_02a3;
	}

IL_014a:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralD44E69FAFE4804768887E473E32FA48B04CEED25, NULL);
		if (L_33)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_02a3;
	}

IL_015f:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralB785973753F0A95A9D97BBC4DCB0C6276026B450, NULL);
		if (L_35)
		{
			goto IL_0258;
		}
	}
	{
		goto IL_02a3;
	}

IL_0174:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral6990D0B06D65A737BFC9E6C635D586129C254866, NULL);
		if (L_37)
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0189:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralE16F169997476E03BBE05CA021F3A282B41B082E, NULL);
		if (L_39)
		{
			goto IL_0280;
		}
	}
	{
		goto IL_02a3;
	}

IL_019e:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral904D072FB430A74EACC6CBE3B2F3DC66C611EA9A, NULL);
		if (L_41)
		{
			goto IL_0294;
		}
	}
	{
		goto IL_02a3;
	}

IL_01b3:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_42 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_43 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_42, L_43);
		TextureSheetAnimationModule_set_enabled_m2DC6E0435567287200A5DC0A2CFB6145D67387B3((&V_0), L_44, NULL);
		// break;
		goto IL_02a9;
	}

IL_01ca:
	{
		// instance.numTilesX = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_45 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_46 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_45);
		int32_t L_47;
		L_47 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_45, L_46);
		TextureSheetAnimationModule_set_numTilesX_m015ED086E30149F3B9B13A44639FF1B2643C163D((&V_0), L_47, NULL);
		// break;
		goto IL_02a9;
	}

IL_01e1:
	{
		// instance.numTilesY = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_48 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_49 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_48, L_49);
		TextureSheetAnimationModule_set_numTilesY_m691266ADE55A2B252193AA0D8FE8D38C7DC9FB31((&V_0), L_50, NULL);
		// break;
		goto IL_02a9;
	}

IL_01f8:
	{
		// instance.animation = reader.Read<UnityEngine.ParticleSystemAnimationType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_51 = ___reader0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationType_tBB7F36A21A20FB3EE6E59C064EA515833C46C9E8_m23EA9C84B27392ED66DEDC51DA8DF5FEA109FD59_RuntimeMethod_var, L_51);
		TextureSheetAnimationModule_set_animation_mB6F0CD2D6609E107A83F72EB5B12ABA191F6B778((&V_0), L_52, NULL);
		// break;
		goto IL_02a9;
	}

IL_020a:
	{
		// instance.rowMode = reader.Read<ParticleSystemAnimationRowMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemAnimationRowMode_tFD1614041B9C2C0A1DBEA2332A643776E9694FCD_m329AD5FD808430EDF069E40FF1FD9805E1C19E1F_RuntimeMethod_var, L_53);
		TextureSheetAnimationModule_set_rowMode_m0BAFE1EEFB957E4DB781CD377666416188358CB7((&V_0), L_54, NULL);
		// break;
		goto IL_02a9;
	}

IL_021c:
	{
		// instance.frameOverTime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_55 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_56 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_55);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_55, L_56);
		TextureSheetAnimationModule_set_frameOverTime_mFC4023CC0A033C434EF2A6DCFEEAC9B6A6465079((&V_0), L_57, NULL);
		// break;
		goto IL_02a9;
	}

IL_0230:
	{
		// instance.frameOverTimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_58 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_59 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_58);
		float L_60;
		L_60 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_58, L_59);
		TextureSheetAnimationModule_set_frameOverTimeMultiplier_mF67BEB38DFB49CC555336081DE65515BC7141DF2((&V_0), L_60, NULL);
		// break;
		goto IL_02a9;
	}

IL_0244:
	{
		// instance.startFrame = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_61 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_62 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_61);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_63;
		L_63 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_61, L_62);
		TextureSheetAnimationModule_set_startFrame_m0781E61297AD380BEEA53A0646C11E19A7AE33CA((&V_0), L_63, NULL);
		// break;
		goto IL_02a9;
	}

IL_0258:
	{
		// instance.startFrameMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_65 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_64);
		float L_66;
		L_66 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_64, L_65);
		TextureSheetAnimationModule_set_startFrameMultiplier_m9EE676C4D923A23ADE733B70ED874C41B48277FC((&V_0), L_66, NULL);
		// break;
		goto IL_02a9;
	}

IL_026c:
	{
		// instance.cycleCount = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_67 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_68 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_67);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_67, L_68);
		TextureSheetAnimationModule_set_cycleCount_mAD4E2B874ECD444FFA9E7FCD7E5534EBD9B19206((&V_0), L_69, NULL);
		// break;
		goto IL_02a9;
	}

IL_0280:
	{
		// instance.rowIndex = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_t05A5E7A96442F23CE33E24A71CD349372A70E0C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		int32_t L_72;
		L_72 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEFCC4D52DD5B822D3561A53591AE11CDB25CDB6F_RuntimeMethod_var, L_70, L_71);
		TextureSheetAnimationModule_set_rowIndex_m77E7D4D7BC3AE342AFB308AC41885687BBB6DAA5((&V_0), L_72, NULL);
		// break;
		goto IL_02a9;
	}

IL_0294:
	{
		// instance.uvChannelMask = reader.Read<UnityEngine.Rendering.UVChannelFlags>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisUVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099_m922B40E2953FBBAF80F0738B2C3D29D52F10D539_RuntimeMethod_var, L_73);
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), L_74, NULL);
		// break;
		goto IL_02a9;
	}

IL_02a3:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		NullCheck(L_75);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_75);
	}

IL_02a9:
	{
		// while ((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_76 = ___reader0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_76);
		String_t* L_78 = L_77;
		V_1 = L_78;
		if (L_78)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m7568BB37DD331CF1EE02B52FFECED6DE53594A32_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m17F8EE7C96C642A39B46FEA4484660716BCB45E9_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m23F16E5B6B3C84B82063662569BECCFC409CF4DB_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC80CCEDBC21C3C3173FBA75992ED88B3400F8520_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1F8AA1868415A1D1F3AA1F103FE774749E125698_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8C0BEAF665D05992B39BE30EE1FDFFFEACC087D5_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6512A15B16D97DB0AE2E9A03A000B24950AAE342_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m42251121F2AD1980BAD341CA16998976CFDB8803_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mA37308F90FE8F75A6FD65E9BBF4DFBFC057A3F5F_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRuntimeObject_m0571A5BE7D1AC84F515C44B16E7EFD0B61EEFC57_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m56BC5F5F36C988F6FFACAF9E8EF8B8559026BEE9_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mAF3CD0704A1DBBF315C5C69544DB6E960E74EA48_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m891AF64178EDA42D379F8FEB910FE0C0E7B9DD4D_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6872B2F9039E465B1D292A2D23967256FCD2297F_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE07A7BBFC3E0F55E63962E1F8C4929194CF6AE82_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCFFE8946ACF90CDA8D97561218E39AAA2323F8FE_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m4832536DE634D94671DD9D4B60E3C0059E7E95C0_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mF6BE5697072783ECF3E005921A6A283B3CFF53EF_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TrailModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TrailModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m553DBFD45EA5DD72EA48C688FB6E4E43CB6A25E6_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TrailModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_1 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_2 = L_1;
		RuntimeObject* L_3 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4 = V_0;
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_5 = L_4;
		RuntimeObject* L_6 = Box(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRuntimeObject_mEC1FE75BD26B6AB49B4CBE729466C7FB8EA1A703_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m8DC4EEDE0BFD352A8FC96BED563AA62395FFF4BD_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mAFD203DB7AFA50283F058DF69210BCAE31723221_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m4A6A784AD53C3684CFEC8CBA11236F4C9118BC42_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m3B84BA6A3E22B27B671FFD1A65AF61F488CFB63F_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m91C18FCE08230CB776A8A95CBD956455B4768620_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m6D4E8F2AB4B9E751FC4D6FCBAB9B6002701DDDA0_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m32CFDCFA9294E8FD99D08539ABE4CDC177519DE5_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m652CB43FB6700A2106EC7992D9EED880F18CA8E4_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m69E3EAF013DB6F27BFB991551DFEE0917D8AE26E_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mC85AE2CB9A2C29B69BD9ABAC66FD827FA10B2A4E_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m92230A90D6F6E81679AFD2A4FDF517972C9D1798_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m63A93E8CECB80E24504A0E71013F490EE4770DE0_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mDD2358C4F0E69A8A54800AD5E8D762634C98BEBC_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m93FE38E1905646F62EC71C3D6908E8414D757601_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m4959CD605C6D8A7AF248265A42B8640381A881B6_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m4F93AB08C95F6FFEDCD62329F38270838BDB9E40_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_mBE3E1B797FA0AE2212E4B9D46A55727CB257B24D_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TrailModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TrailModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m0ABEF8EFD3F4A09A4F799710F8E75FFCFE0F7205_gshared (ES3Type_TrailModule_t2FDDF3061332A61C73736B597277B49ED163DC8A* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354281948B6269615E32D856CF85B6F456724DAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4221314F268D184F46688D45C85446821F1F1BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F);
		s_Il2CppMethodInitialized = true;
	}
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.TrailModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)((TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)(TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D*)UnBox(L_0, TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_il2cpp_TypeInfo_var))));
		goto IL_0388;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1376955374)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)494095910)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0108;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)341298456))))
		{
			goto IL_0219;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)494095910))))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0382;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)973733911)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)559929418))))
		{
			goto IL_01b0;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)973733911))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0382;
	}

IL_006c:
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024708593))))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376955374))))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_0382;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)-2100707162)))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1975189197)))))
		{
			goto IL_00b2;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1546474083))))
		{
			goto IL_0204;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1975189197))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0382;
	}

IL_00b2:
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)2053023684))))
		{
			goto IL_019b;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2100707162))))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0382;
	}

IL_00cd:
	{
		uint32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)-1319579393)))))
		{
			goto IL_00f0;
		}
	}
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1562862963))))
		{
			goto IL_01da;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1319579393))))
		{
			goto IL_0186;
		}
	}
	{
		goto IL_0382;
	}

IL_00f0:
	{
		uint32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-413379935))))
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_0382;
	}

IL_0108:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_25)
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0382;
	}

IL_011d:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_27)
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0382;
	}

IL_0132:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralBE2893848F9FC647C2288DA6581A1522E9695182, NULL);
		if (L_29)
		{
			goto IL_0271;
		}
	}
	{
		goto IL_0382;
	}

IL_0147:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4221314F268D184F46688D45C85446821F1F1BC3, NULL);
		if (L_31)
		{
			goto IL_0288;
		}
	}
	{
		goto IL_0382;
	}

IL_015c:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral5C86338F177203D001C41D9C348A83D1338CC7D0, NULL);
		if (L_33)
		{
			goto IL_029f;
		}
	}
	{
		goto IL_0382;
	}

IL_0171:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralFE5F89F63E2381500F62A7CBD6954563BE44562F, NULL);
		if (L_35)
		{
			goto IL_02b6;
		}
	}
	{
		goto IL_0382;
	}

IL_0186:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral87F70660D62DE5FC257FBADE9DA4EC9188597DE5, NULL);
		if (L_37)
		{
			goto IL_02c8;
		}
	}
	{
		goto IL_0382;
	}

IL_019b:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral354281948B6269615E32D856CF85B6F456724DAA, NULL);
		if (L_39)
		{
			goto IL_02df;
		}
	}
	{
		goto IL_0382;
	}

IL_01b0:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralADAEB0839588196B349BDB6CF33AFA3E0736360B, NULL);
		if (L_41)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0382;
	}

IL_01c5:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC580B374AA991574F91DFC86C068E7FAD661A3A4, NULL);
		if (L_43)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0382;
	}

IL_01da:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralE049DB547285CFCE1CB9A95934B6B6DCE2D219EC, NULL);
		if (L_45)
		{
			goto IL_031e;
		}
	}
	{
		goto IL_0382;
	}

IL_01ef:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteralBF540D6548854CC21630064FBA5390C9409C86F0, NULL);
		if (L_47)
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0382;
	}

IL_0204:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral1D87A56AE67B2CD49CAE6E942C2FB7AD98925C00, NULL);
		if (L_49)
		{
			goto IL_0346;
		}
	}
	{
		goto IL_0382;
	}

IL_0219:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteralA967787586EC9E5A17A9C55E2002AB73A5E21A0A, NULL);
		if (L_51)
		{
			goto IL_035a;
		}
	}
	{
		goto IL_0382;
	}

IL_022e:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteral47C47DD09640803AD8016748EAE1F04DD1D41119, NULL);
		if (L_53)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_0382;
	}

IL_0243:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_54 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_55 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_54, L_55);
		TrailModule_set_enabled_m905BF8B82FF8F6FCCC430A05BD7DF0AE66A86C36((&V_0), L_56, NULL);
		// break;
		goto IL_0388;
	}

IL_025a:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_57 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_58 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_57);
		float L_59;
		L_59 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_57, L_58);
		TrailModule_set_ratio_m15C58FC59EF586D5A27ECD17117D3975E6102962((&V_0), L_59, NULL);
		// break;
		goto IL_0388;
	}

IL_0271:
	{
		// instance.lifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_60 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_61 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_60);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_62;
		L_62 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_60, L_61);
		TrailModule_set_lifetime_m88FF7C3DB54ABF9688DD3A35FD8DC1C5C9A12D50((&V_0), L_62, NULL);
		// break;
		goto IL_0388;
	}

IL_0288:
	{
		// instance.lifetimeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_63 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_64 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_63);
		float L_65;
		L_65 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_63, L_64);
		TrailModule_set_lifetimeMultiplier_mF122EFB2F80D89A77FC6D5CC46FD06A45B92A351((&V_0), L_65, NULL);
		// break;
		goto IL_0388;
	}

IL_029f:
	{
		// instance.minVertexDistance = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_67 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_66, L_67);
		TrailModule_set_minVertexDistance_m523B83A0C97F3CC81E0CC79276F8DCFE4B564838((&V_0), L_68, NULL);
		// break;
		goto IL_0388;
	}

IL_02b6:
	{
		// instance.textureMode = reader.Read<UnityEngine.ParticleSystemTrailTextureMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_69 = ___reader0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemTrailTextureMode_t16B88C3C158689E1346F1BC41DFED312D4DC9CBD_m78C6C6E5A96A9AA0F8A774C835011CEB82D30C13_RuntimeMethod_var, L_69);
		TrailModule_set_textureMode_mE334965265F71446DB3A85ECCC4DA30A0DF6F9E9((&V_0), L_70, NULL);
		// break;
		goto IL_0388;
	}

IL_02c8:
	{
		// instance.worldSpace = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_71 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_72 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_71);
		bool L_73;
		L_73 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_71, L_72);
		TrailModule_set_worldSpace_m3D121E2160FAEB9E8E6C63AFCBF7A724D8CCC389((&V_0), L_73, NULL);
		// break;
		goto IL_0388;
	}

IL_02df:
	{
		// instance.dieWithParticles = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_74 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_75 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_74);
		bool L_76;
		L_76 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_74, L_75);
		TrailModule_set_dieWithParticles_mA3E9458E8FA5C397E7DDC6B27BB03B5C5B9DE0FF((&V_0), L_76, NULL);
		// break;
		goto IL_0388;
	}

IL_02f6:
	{
		// instance.sizeAffectsWidth = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_77 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_78 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_77);
		bool L_79;
		L_79 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_77, L_78);
		TrailModule_set_sizeAffectsWidth_m438DF54F0AB8980D7C8FE629AAD5E8E556128B6D((&V_0), L_79, NULL);
		// break;
		goto IL_0388;
	}

IL_030a:
	{
		// instance.sizeAffectsLifetime = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		bool L_82;
		L_82 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_80, L_81);
		TrailModule_set_sizeAffectsLifetime_m80AC8177E421DC15ABD26F089BB5B4DE40BEE8E2((&V_0), L_82, NULL);
		// break;
		goto IL_0388;
	}

IL_031e:
	{
		// instance.inheritParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_84 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_83);
		bool L_85;
		L_85 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_83, L_84);
		TrailModule_set_inheritParticleColor_m5FD3C04160F311908CC5EB677B9C9255F5422B56((&V_0), L_85, NULL);
		// break;
		goto IL_0388;
	}

IL_0332:
	{
		// instance.colorOverLifetime = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_86 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_87 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_86);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_88;
		L_88 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_86, L_87);
		TrailModule_set_colorOverLifetime_m165805394DF2614570A561E5ADA6666A194D314A((&V_0), L_88, NULL);
		// break;
		goto IL_0388;
	}

IL_0346:
	{
		// instance.widthOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_90 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_89);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_91;
		L_91 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_89, L_90);
		TrailModule_set_widthOverTrail_m5E726BBFD0AB6D4EAB7469E46C0968987725AD95((&V_0), L_91, NULL);
		// break;
		goto IL_0388;
	}

IL_035a:
	{
		// instance.widthOverTrailMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_92 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_93 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_92);
		float L_94;
		L_94 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_92, L_93);
		TrailModule_set_widthOverTrailMultiplier_m69B5726A93BC2B1ABAFCB84844D2F90B7856806E((&V_0), L_94, NULL);
		// break;
		goto IL_0388;
	}

IL_036e:
	{
		// instance.colorOverTrail = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_96 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_95);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_97;
		L_97 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_95, L_96);
		TrailModule_set_colorOverTrail_mB5665651F6E47720EA6F42FB0461623632582CC0((&V_0), L_97, NULL);
		// break;
		goto IL_0388;
	}

IL_0382:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_98 = ___reader0;
		NullCheck(L_98);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_98);
	}

IL_0388:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_99);
		String_t* L_101 = L_100;
		V_1 = L_101;
		if (L_101)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_Transform::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Transform_ReadComponent_TisRuntimeObject_mDA0A37E4726BF5AEDA0B2A901C3A3BDD03401A98_gshared (ES3Type_Transform_t744F7C45C7A4F966265500803F08C4965797DAD7* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m47D7C0F40BE7736A385976BEBB77FF3B8CBDB00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE4227CE82740716176BC1A48503F99039FC9EE02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m585944D8C944AA566E56450CF86D6E4BF87264ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F632BD073069C926450B792B45EAAB22036D149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var instance = (Transform)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_t66947BCA34F5716A7F0FECC09CDD3D2125703EB2* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mD6FEB8C37D84D9BBAB20D1A4DDCE3407BA971CA8(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_00d0;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00d0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b3_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				bool L_10;
				L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral483DFA9A614472DBFD4B58265DDE1C943D92F756, NULL);
				if (L_10)
				{
					goto IL_0067_1;
				}
			}
			{
				String_t* L_11 = V_2;
				bool L_12;
				L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral8A9E9F41FB83E43385B4BF4AA395DC6C61CEF5AD, NULL);
				if (L_12)
				{
					goto IL_0075_1;
				}
			}
			{
				String_t* L_13 = V_2;
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral9BF0B5A4BB89E5C81AAA223E94154671C2E7D120, NULL);
				if (L_14)
				{
					goto IL_0083_1;
				}
			}
			{
				String_t* L_15 = V_2;
				bool L_16;
				L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral4613D0F986526A6F03E1E5D07E13698655725A01, NULL);
				if (L_16)
				{
					goto IL_0091_1;
				}
			}
			{
				String_t* L_17 = V_2;
				bool L_18;
				L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral8F632BD073069C926450B792B45EAAB22036D149, NULL);
				if (L_18)
				{
					goto IL_009f_1;
				}
			}
			{
				goto IL_00ad_1;
			}

IL_0067_1:
			{
				// instance.SetParent(reader.Read<Transform>());
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_20 = ___reader0;
				NullCheck(L_20);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
				L_21 = GenericVirtualFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(ES3Reader_Read_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mE4227CE82740716176BC1A48503F99039FC9EE02_RuntimeMethod_var, L_20);
				NullCheck(L_19);
				Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_19, L_21, NULL);
				// break;
				goto IL_00b3_1;
			}

IL_0075_1:
			{
				// instance.localPosition = reader.Read<Vector3>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_23 = ___reader0;
				NullCheck(L_23);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = GenericVirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m585944D8C944AA566E56450CF86D6E4BF87264ED_RuntimeMethod_var, L_23);
				NullCheck(L_22);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_24, NULL);
				// break;
				goto IL_00b3_1;
			}

IL_0083_1:
			{
				// instance.localRotation = reader.Read<Quaternion>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_26 = ___reader0;
				NullCheck(L_26);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
				L_27 = GenericVirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(ES3Reader_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m47D7C0F40BE7736A385976BEBB77FF3B8CBDB00D_RuntimeMethod_var, L_26);
				NullCheck(L_25);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_25, L_27, NULL);
				// break;
				goto IL_00b3_1;
			}

IL_0091_1:
			{
				// instance.localScale = reader.Read<Vector3>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_29 = ___reader0;
				NullCheck(L_29);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = GenericVirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(ES3Reader_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m585944D8C944AA566E56450CF86D6E4BF87264ED_RuntimeMethod_var, L_29);
				NullCheck(L_28);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_30, NULL);
				// break;
				goto IL_00b3_1;
			}

IL_009f_1:
			{
				// instance.SetSiblingIndex(reader.Read<int>());
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_0;
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_32 = ___reader0;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_32);
				NullCheck(L_31);
				Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_31, L_33, NULL);
				// break;
				goto IL_00b3_1;
			}

IL_00ad_1:
			{
				// reader.Skip();
				ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_34 = ___reader0;
				NullCheck(L_34);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_34);
			}

IL_00b3_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_35 = V_1;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_00d1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m988F77F80613876500388640306831803043FCC3_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE2C2BE2AF12C57F2C9D38D11FCC0D05B11B8099F_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA61262E6FFADA6E0FB2CBEC56C98D4950AC5936_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mEFE5D73CF2F1387DB6AC874FD3E26C5555255B6E_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6246CEDDC56242A9E08B6001F68B9774367F37FF_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m0E4E53AC246FB103A23BE0B972C77DFFBC89A4A2_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA66DC482F78C873A9E46C5D9894C49D91C298350_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m958B2E9E22C0BACE22E69D4683FA542C7243CF2D_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m7A22FDC5375334A8F92F5EB44EC8988F56C4F3C0_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRuntimeObject_mC06D19985F0C96E94643718BC074ED909E08D747_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m736D0CB7272C000AEDB5989149147F98DF08D6C7_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mCFA961186EBABBE5949071E0817D90FA178B93CD_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m33E7E9F71C32825E2B7EF55F68FF04478C4250C5_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF9F837AB746D1ACEAB7BD42FC4485E61866E6D4F_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1490F1F4B10F46BF0F6D6C4B9484C99F6CB7E5CC_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4BE18684C7BE13F4446625B501C7710B364BADD0_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF8F391FFFF8041B09CD404F929051182A254A954_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m85C2B727343671DAC0741B6EBEE671F02921FB27_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_TriggerModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_TriggerModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mBB7012946C9141C3EA71F843C399D3360F8F700B_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.TriggerModule();
		il2cpp_codegen_initobj((&V_0), sizeof(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_1 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_4 = V_0;
		TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisRuntimeObject_m9F6B07805B38A2BA8E0C089CC7E77E85BA60DCBD_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00c6;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_10)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00c0;
	}

IL_005c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		bool L_15;
		L_15 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_13, L_14);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_15, NULL);
		// break;
		goto IL_00c6;
	}

IL_0070:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_16);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_17, NULL);
		// break;
		goto IL_00c6;
	}

IL_007f:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_18);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_19, NULL);
		// break;
		goto IL_00c6;
	}

IL_008e:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_20);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_21, NULL);
		// break;
		goto IL_00c6;
	}

IL_009d:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_22);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_23, NULL);
		// break;
		goto IL_00c6;
	}

IL_00ac:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_24 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_25 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_24);
		float L_26;
		L_26 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_24, L_25);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_26, NULL);
		// break;
		goto IL_00c6;
	}

IL_00c0:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_27);
	}

IL_00c6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_28 = ___reader0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_28);
		String_t* L_30 = L_29;
		V_1 = L_30;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_TriggerModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_TriggerModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m15485E4CC558178CC6363529D6987E0B5DC252D5_gshared (ES3Type_TriggerModule_tE5344E4298839B1D8AAADC3B40940B4A3BAB9390* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.TriggerModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)((TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)(TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1*)UnBox(L_0, TriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_il2cpp_TypeInfo_var))));
		goto IL_00c6;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral91582CEA37B22A0011CA13B216711E98B2E27451, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralEC364C87F10C9A1ABC7CD21601131B776C5B0700, NULL);
		if (L_6)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral66341B56B0DF5D2B9828F53BCC8EA02586D6A73F, NULL);
		if (L_8)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral2482E3BD37A553E7BBDF77C14F2DEE1DBA3F51AA, NULL);
		if (L_10)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_12)
		{
			goto IL_00ac;
		}
	}
	{
		goto IL_00c0;
	}

IL_005c:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		bool L_15;
		L_15 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_13, L_14);
		TriggerModule_set_enabled_mA292342C02C69F4DD3DED85BF0E52E8ACBBA0292((&V_0), L_15, NULL);
		// break;
		goto IL_00c6;
	}

IL_0070:
	{
		// instance.inside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_16);
		TriggerModule_set_inside_mC39E129035124F71899ED76D8C98D84C6E6FDAB8((&V_0), L_17, NULL);
		// break;
		goto IL_00c6;
	}

IL_007f:
	{
		// instance.outside = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_18);
		TriggerModule_set_outside_mEAFF45E982431CCB87275B8FAFAE3E4D86152E71((&V_0), L_19, NULL);
		// break;
		goto IL_00c6;
	}

IL_008e:
	{
		// instance.enter = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_20);
		TriggerModule_set_enter_m22EA55E1D9146D23CA0D267B537049F8A939492B((&V_0), L_21, NULL);
		// break;
		goto IL_00c6;
	}

IL_009d:
	{
		// instance.exit = reader.Read<UnityEngine.ParticleSystemOverlapAction>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_22 = ___reader0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemOverlapAction_t0A5B603B039CCB64E64D35BA1210D8F02B30012D_mE1758CEB0EFBFE9EE10CAD7B5310524D74A0880C_RuntimeMethod_var, L_22);
		TriggerModule_set_exit_m1074025BEEE221A4F99072BDECE1B12C812A4823((&V_0), L_23, NULL);
		// break;
		goto IL_00c6;
	}

IL_00ac:
	{
		// instance.radiusScale = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_24 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_25 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_24);
		float L_26;
		L_26 = GenericVirtualFuncInvoker1< float, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA86928BC888E342D2C2644535E3399952F5077ED_RuntimeMethod_var, L_24, L_25);
		TriggerModule_set_radiusScale_mDC48C5B8C283CB8D2E0E55318F802E9BCE984373((&V_0), L_26, NULL);
		// break;
		goto IL_00c6;
	}

IL_00c0:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_27 = ___reader0;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_27);
	}

IL_00c6:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_28 = ___reader0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_28);
		String_t* L_30 = L_29;
		V_1 = L_30;
		if (L_30)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
