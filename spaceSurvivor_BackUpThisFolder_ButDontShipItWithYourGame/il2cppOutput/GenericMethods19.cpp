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

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t985708A4E9373BBDD77FF87081DB836863066E48;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ES3Reader
struct ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518;
// ES3Settings
struct ES3Settings_t5FF4E8DB95573CB739527FD69BD1823D602885C1;
// ES3Types.ES3Type
struct ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE;
// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B;
// ES3Types.ES3Type_Color
struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958;
// ES3Types.ES3Type_Color32
struct ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903;
// ES3Types.ES3Type_ColorBySpeedModule
struct ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71;
// ES3Types.ES3Type_ColorOverLifetimeModule
struct ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81;
// ES3Types.ES3Type_DateTime
struct ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;

IL2CPP_EXTERN_C RuntimeClass* CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB;
IL2CPP_EXTERN_C String_t* _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF;
IL2CPP_EXTERN_C String_t* _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var;


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

// ES3Types.ES3Type_CollisionModule
struct ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_CollisionModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_Color32
struct ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color32::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_ColorBySpeedModule
struct ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_ColorBySpeedModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_ColorOverLifetimeModule
struct ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_ColorOverLifetimeModule::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
};

// ES3Types.ES3Type_DateTime
struct ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_DateTime::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
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

// ES3Types.ES3Type_Vector2
struct ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Vector2::Instance
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

// ES3Types.ES3Type_byte
struct ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_byte::Instance
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

// ES3Types.ES3Type_long
struct ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3  : public ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE
{
};

struct ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_long::Instance
	ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___Instance_12;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/CollisionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/CollisionModule
struct CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorBySpeedModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorBySpeedModule
struct ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ColorOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ColorOverLifetimeModule
struct ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_gshared (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Byte>(ES3Types.ES3Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_gshared (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method) ;

// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_type(UnityEngine.ParticleSystemCollisionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_mode(UnityEngine.ParticleSystemCollisionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampen(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_dampenMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounce(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_bounceMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLoss(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_lifetimeLossMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_minKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxKillSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_collidesWith(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_enableDynamicColliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_maxCollisionShapes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_quality(UnityEngine.ParticleSystemCollisionQuality)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_voxelSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_radiusScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/CollisionModule::set_sendCollisionMessages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928 (CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083* __this, bool ___value0, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Single>(ES3Types.ES3Type)
inline float ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method)
{
	return ((  float (*) (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// T ES3Reader::ReadProperty<System.Byte>(ES3Types.ES3Type)
inline uint8_t ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2 (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* __this, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* ___type0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*, const RuntimeMethod*))ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_gshared)(__this, ___type0, method);
}
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81 (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::set_color(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorBySpeedModule::set_range(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB (ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ColorOverLifetimeModule::set_color(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B (ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mACD3FFC0AC2DCED474692B4442E850202373F433_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mC2E83EE8F9048785D25A66F8A981D160454F45A1_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m28408C289634056B34719CE2018B4EF39CCBCF1C_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mEE55B9FB1050014A2D20F0BD31CC4520D1D9B210_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m2272EDB8FAD7A55EF49956404CA04BC21F44DFB9_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mE202E638C5AE9D012D0B8F80116881B0F1D969B9_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mC7437538881395BCF71FABFD71D82C564548A690_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mF226D1D03D6773211BBEA67ACDF0D71832AC2E22_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mEED9D12F91F3223D0A3D798AC74EA3247C8F3DFB_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m82873A87036E3A6C2AB85C4FE427F75139B5FB92_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mDA6E4226172BEBFAC5D7EF36B555315ECEA9D935_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m4D6556D063138E16AAAAEE80F373FBD37B53587A_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m56C18D0D6F521812A2000C6D32AE370A76305D44_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m4C4D738D38B9DF8C337FDF0A1620C6FFCCF47680_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m7BDE01DF321BB29A08967AC305F31BE13B4C7819_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_mD0EB47E36FB5769E33414C88E6873646F1E20C09_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m3419B81B4DCA1735C040748042A498E75591163B_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_CollisionModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_CollisionModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m5A9451A849F94249ED47051363B0C00B75D5E703_gshared (ES3Type_CollisionModule_t63443A4CBFCCAD09F920185310930B36416FDE8B* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0317A306ED723D1D918D4A2375990962859D5A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E);
		s_Il2CppMethodInitialized = true;
	}
	CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.CollisionModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)((CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)(CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083*)UnBox(L_0, CollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_il2cpp_TypeInfo_var))));
		goto IL_03ee;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1857126515)))))
		{
			goto IL_00ad;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)862152253)))))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)465431036)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_0136;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)465431036))))
		{
			goto IL_0232;
		}
	}
	{
		goto IL_03e8;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)570285707))))
		{
			goto IL_018a;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)862152253))))
		{
			goto IL_019f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0064:
	{
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)1694773170)))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1361572173))))
		{
			goto IL_014b;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1694773170))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_03e8;
	}

IL_0087:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1805931883))))
		{
			goto IL_0286;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1861680392))))
		{
			goto IL_0208;
		}
	}
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-1857126515))))
		{
			goto IL_0247;
		}
	}
	{
		goto IL_03e8;
	}

IL_00ad:
	{
		uint32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)-1521608910)))))
		{
			goto IL_00f3;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1697296346)))))
		{
			goto IL_00d8;
		}
	}
	{
		uint32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1753074514))))
		{
			goto IL_0271;
		}
	}
	{
		uint32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1697296346))))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_03e8;
	}

IL_00d8:
	{
		uint32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1653360271))))
		{
			goto IL_029b;
		}
	}
	{
		uint32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1521608910))))
		{
			goto IL_01de;
		}
	}
	{
		goto IL_03e8;
	}

IL_00f3:
	{
		uint32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) <= ((uint32_t)((int32_t)-758073322)))))
		{
			goto IL_0113;
		}
	}
	{
		uint32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_0175;
		}
	}
	{
		uint32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-758073322))))
		{
			goto IL_021d;
		}
	}
	{
		goto IL_03e8;
	}

IL_0113:
	{
		uint32_t L_25 = V_2;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-547695551))))
		{
			goto IL_01c9;
		}
	}
	{
		uint32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-350273842))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)-328277998))))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_03e8;
	}

IL_0136:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_29)
		{
			goto IL_02b0;
		}
	}
	{
		goto IL_03e8;
	}

IL_014b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
		if (L_31)
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03e8;
	}

IL_0160:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74, NULL);
		if (L_33)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_0175:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_35)
		{
			goto IL_02e6;
		}
	}
	{
		goto IL_03e8;
	}

IL_018a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralBECB8D83211180C66305E31A3F96EEA6A345EBB0, NULL);
		if (L_37)
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_03e8;
	}

IL_019f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB02526E4F2EB86E2E6FB40E442C2B2B5A23418FF, NULL);
		if (L_39)
		{
			goto IL_030f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01b4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, _stringLiteralBF9A12A4289AC32EFCFEEF753C76F68EDD38B118, NULL);
		if (L_41)
		{
			goto IL_0326;
		}
	}
	{
		goto IL_03e8;
	}

IL_01c9:
	{
		String_t* L_42 = V_1;
		bool L_43;
		L_43 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_42, _stringLiteralFB43B29FC3DA021C8D7107AAC8795C4670BD9D8E, NULL);
		if (L_43)
		{
			goto IL_0338;
		}
	}
	{
		goto IL_03e8;
	}

IL_01de:
	{
		String_t* L_44 = V_1;
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteral3789C2CF33A8160503BFE81B439BAD687D9AFD8D, NULL);
		if (L_45)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_01f3:
	{
		String_t* L_46 = V_1;
		bool L_47;
		L_47 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_46, _stringLiteralA41424B5C5791579D9A40752687F1C95CA82BE82, NULL);
		if (L_47)
		{
			goto IL_0361;
		}
	}
	{
		goto IL_03e8;
	}

IL_0208:
	{
		String_t* L_48 = V_1;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral85C07633C547C7CBD93BF6322BC72B2CAC4B1765, NULL);
		if (L_49)
		{
			goto IL_0370;
		}
	}
	{
		goto IL_03e8;
	}

IL_021d:
	{
		String_t* L_50 = V_1;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteral9E1B3C5D62A707D183916CF77B9EB710BC7AEB4C, NULL);
		if (L_51)
		{
			goto IL_037f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0232:
	{
		String_t* L_52 = V_1;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral5FAC8D867F4601BB1D0C0AC017420709A2C64EB2, NULL);
		if (L_53)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03e8;
	}

IL_0247:
	{
		String_t* L_54 = V_1;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral0317A306ED723D1D918D4A2375990962859D5A28, NULL);
		if (L_55)
		{
			goto IL_039d;
		}
	}
	{
		goto IL_03e8;
	}

IL_025c:
	{
		String_t* L_56 = V_1;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteralC5F2406640F4F08577B3ADFE0B94DDC1B821F406, NULL);
		if (L_57)
		{
			goto IL_03ac;
		}
	}
	{
		goto IL_03e8;
	}

IL_0271:
	{
		String_t* L_58 = V_1;
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteral4E67FE863284F77675319CCFF97C2569D1C57D12, NULL);
		if (L_59)
		{
			goto IL_03bb;
		}
	}
	{
		goto IL_03e8;
	}

IL_0286:
	{
		String_t* L_60 = V_1;
		bool L_61;
		L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_60, _stringLiteral13BD29917AF948B1A92E00D8851EF237F4BD42DB, NULL);
		if (L_61)
		{
			goto IL_03ca;
		}
	}
	{
		goto IL_03e8;
	}

IL_029b:
	{
		String_t* L_62 = V_1;
		bool L_63;
		L_63 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_62, _stringLiteral279B285803F294CD6FD06ADAFB0BFB99C5CC76BC, NULL);
		if (L_63)
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_03e8;
	}

IL_02b0:
	{
		// instance.enabled = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_64 = ___reader0;
		NullCheck(L_64);
		bool L_65;
		L_65 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_64);
		CollisionModule_set_enabled_mA0EDE8A101EDDF9FB2C08DE7799460F8EED36B00((&V_0), L_65, NULL);
		// break;
		goto IL_03ee;
	}

IL_02c2:
	{
		// instance.type = reader.Read<UnityEngine.ParticleSystemCollisionType>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionType_t59D96919949433FB181EB4BF624282287989343D_m5F9078BC9533924D0216C4B7444758E024656056_RuntimeMethod_var, L_66);
		CollisionModule_set_type_m1007A6AEC81A59204035D1A27F2D8C15765A78B4((&V_0), L_67, NULL);
		// break;
		goto IL_03ee;
	}

IL_02d4:
	{
		// instance.mode = reader.Read<UnityEngine.ParticleSystemCollisionMode>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_68 = ___reader0;
		NullCheck(L_68);
		int32_t L_69;
		L_69 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionMode_t4CA3435F0487EB67281F191163E418EE72A734BC_mF13BC37D5BFCD55256ED224E357358830EFFCA82_RuntimeMethod_var, L_68);
		CollisionModule_set_mode_mA54EDE930CF8859E67D42A34E876861E9C6031AC((&V_0), L_69, NULL);
		// break;
		goto IL_03ee;
	}

IL_02e6:
	{
		// instance.dampen = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_70 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_71 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_70);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_72;
		L_72 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_70, L_71);
		CollisionModule_set_dampen_m087F326EE3706DC6C04E440790022FB742948A84((&V_0), L_72, NULL);
		// break;
		goto IL_03ee;
	}

IL_02fd:
	{
		// instance.dampenMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_73 = ___reader0;
		NullCheck(L_73);
		float L_74;
		L_74 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_73);
		CollisionModule_set_dampenMultiplier_m987B1FC9A930CA64C7871CF53AB3DBBD78A6D9A5((&V_0), L_74, NULL);
		// break;
		goto IL_03ee;
	}

IL_030f:
	{
		// instance.bounce = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_75 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_76 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_75);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_77;
		L_77 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_75, L_76);
		CollisionModule_set_bounce_mAC0BCE470C78C28A383CDF5B903FD69A613C51D8((&V_0), L_77, NULL);
		// break;
		goto IL_03ee;
	}

IL_0326:
	{
		// instance.bounceMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_78 = ___reader0;
		NullCheck(L_78);
		float L_79;
		L_79 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_78);
		CollisionModule_set_bounceMultiplier_mB8F50CCBA9F0BE5F73AD9BA531FB239A02280747((&V_0), L_79, NULL);
		// break;
		goto IL_03ee;
	}

IL_0338:
	{
		// instance.lifetimeLoss = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_80 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_81 = ((ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t1C147718750ACBECE5D2B7F545D2A434A3C5409B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_80);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_82;
		L_82 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m9D6B4042B923127DEA4A2CAA3E35EED37D75B3D0_RuntimeMethod_var, L_80, L_81);
		CollisionModule_set_lifetimeLoss_mDF801151ED3093C40D2EC2E79801EF09A26F81CF((&V_0), L_82, NULL);
		// break;
		goto IL_03ee;
	}

IL_034f:
	{
		// instance.lifetimeLossMultiplier = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_83 = ___reader0;
		NullCheck(L_83);
		float L_84;
		L_84 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_83);
		CollisionModule_set_lifetimeLossMultiplier_m07D09F00B9AD635597B9C638E6983ADB7213D21E((&V_0), L_84, NULL);
		// break;
		goto IL_03ee;
	}

IL_0361:
	{
		// instance.minKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_85 = ___reader0;
		NullCheck(L_85);
		float L_86;
		L_86 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_85);
		CollisionModule_set_minKillSpeed_mC8ECB60B4124BDD006CE49B684E790F7932A70D3((&V_0), L_86, NULL);
		// break;
		goto IL_03ee;
	}

IL_0370:
	{
		// instance.maxKillSpeed = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_87 = ___reader0;
		NullCheck(L_87);
		float L_88;
		L_88 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_87);
		CollisionModule_set_maxKillSpeed_m105F1874F0CB30E46593D8A5177CE7E1EF8DFE71((&V_0), L_88, NULL);
		// break;
		goto IL_03ee;
	}

IL_037f:
	{
		// instance.collidesWith = reader.Read<UnityEngine.LayerMask>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_89 = ___reader0;
		NullCheck(L_89);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_90;
		L_90 = GenericVirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(ES3Reader_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m5D70E477C2758863BE3FB597733881ABE2FD2C24_RuntimeMethod_var, L_89);
		CollisionModule_set_collidesWith_m496B2955F28CD2EAF41255919CFA020A038B95E7((&V_0), L_90, NULL);
		// break;
		goto IL_03ee;
	}

IL_038e:
	{
		// instance.enableDynamicColliders = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_91 = ___reader0;
		NullCheck(L_91);
		bool L_92;
		L_92 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_91);
		CollisionModule_set_enableDynamicColliders_mF71E1AFFED8929021E07746A7F7413B9BBF0B847((&V_0), L_92, NULL);
		// break;
		goto IL_03ee;
	}

IL_039d:
	{
		// instance.maxCollisionShapes = reader.Read<System.Int32>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_93 = ___reader0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF36B1B6CB092B1C819A3957B7E8B196D059C00AE_RuntimeMethod_var, L_93);
		CollisionModule_set_maxCollisionShapes_mF05284311248CDECA36BBD70458E83181DCAF1E9((&V_0), L_94, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ac:
	{
		// instance.quality = reader.Read<UnityEngine.ParticleSystemCollisionQuality>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_95 = ___reader0;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemCollisionQuality_tCDCFC9A606FF4EEF13CE865C8D60284692863C00_mEB936608A6916898E20F06FCE5D1FC560B8711B8_RuntimeMethod_var, L_95);
		CollisionModule_set_quality_m09FC8E7CD16EC856174C0A2C689F0F57B782F297((&V_0), L_96, NULL);
		// break;
		goto IL_03ee;
	}

IL_03bb:
	{
		// instance.voxelSize = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_97 = ___reader0;
		NullCheck(L_97);
		float L_98;
		L_98 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_97);
		CollisionModule_set_voxelSize_m7103A32B054623A62C873242AADEF0BFBFBC52EC((&V_0), L_98, NULL);
		// break;
		goto IL_03ee;
	}

IL_03ca:
	{
		// instance.radiusScale = reader.Read<System.Single>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_99 = ___reader0;
		NullCheck(L_99);
		float L_100;
		L_100 = GenericVirtualFuncInvoker0< float >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8A67325A3D20ACE51002587BFCE23F2BED3BCF95_RuntimeMethod_var, L_99);
		CollisionModule_set_radiusScale_mDA9D2459D3202899F6CA15BBA513A9B122AD7028((&V_0), L_100, NULL);
		// break;
		goto IL_03ee;
	}

IL_03d9:
	{
		// instance.sendCollisionMessages = reader.Read<System.Boolean>();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_101 = ___reader0;
		NullCheck(L_101);
		bool L_102;
		L_102 = GenericVirtualFuncInvoker0< bool >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3636F510569B5F68AD505052B523A8EB53CC2D81_RuntimeMethod_var, L_101);
		CollisionModule_set_sendCollisionMessages_m59CA83E489107FF4F1112AFFA5341D7694E14928((&V_0), L_102, NULL);
		// break;
		goto IL_03ee;
	}

IL_03e8:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_103 = ___reader0;
		NullCheck(L_103);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_103);
	}

IL_03ee:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_104 = ___reader0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_104);
		String_t* L_106 = L_105;
		V_1 = L_106;
		if (L_106)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m09E7E2866232C9ACE21A97603503DEAA306B931E_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m02D8E9FE450491F46028E64E11C0F42B1DF21BEB_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCA1632E5CE1B5513610403CFC0D52F9AB4F443C7_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m75C916FC4EA5E29E554662E44B1C67700B09D460_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAA08AAC54C0F4DC163D0A83AFC27DDD85017DF_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEC98CA91FC45E30A99BDE0D6B4008C82B9B78680_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m03AEBBBACEF1FD35E2398EABD1B5E659F58D121E_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mF2B2E9EEA2A80D1C0028AB04E7DAB3D29FC48615_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mB340605FC333D1FD2B8E29376D6DCA0F6B642F0D_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisRuntimeObject_m535624CC3158836730D0E6F385B9FD4BE3278AE7_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m2B1176F18854E70D93BC8279F574EADF2504A0C2_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m3537DCC19CBB8906B4A951A73E7B2CC665805503_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_m75E2B0FAC43031911BBBD582881ABCE3D241F117_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6B00A3A037A2FF23358F8CBA58557A968935E59_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m55C87DE3C0FD381ED00F216585EF68A6B7C208BD_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCE8856B3002D14A5F9CEAB2A52ADDE10AFB3DEEE_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m0A97B2F89708D6C7FD61607F5CA6D21DE712BCF0_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m0A2F2FC47D189E2AE078D3FFFFCF2F614C642C93_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mBD112637EA5FFD04D514237865CAD63D74D78F36_gshared (ES3Type_Color_t673DF1A1D899E95FF5E687BDC6EE2D5A8A98D958* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color(    reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance),
		//                     reader.ReadProperty<float>(ES3Type_float.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		float L_2;
		L_2 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_0, L_1, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		float L_5;
		L_5 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_3, L_4, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		float L_8;
		L_8 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_6, L_7, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t01425EFF33E1C00AE354A5F2ECAF02436CDE9B77_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		float L_11;
		L_11 = ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E(L_9, L_10, ES3Reader_ReadProperty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8F4CCACEA7C2C6867D11247FE083B386345D275E_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m882A66569E6023D93CB3BCDCF826CACB5EEAFC17_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m29472C62E68F932FD09F6F924B38E2652F22E6C5_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m33F5268C831FDCFC34EB14C181FF17F8CE1E4CE1_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m9E9549BD54DA004EDAABED4F1FA50E4B13F3E200_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m56FF86BC857250F1651B39DA6BE438B4BAFC89E8_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m1DA5582A0F1521C492273CA88C480EF132156DD5_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mAA36EC2E794D40E2E08DE36197FEBEBD03833493_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m61F3539B93A1B2D9722D59A4E53D9DFEFD0BD9E4_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3018A542CAA2633E8C4641CEA81322D48750CEFA_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisRuntimeObject_mE76A78E4AAC3CE80CB74DF01E55567C71EA5E40F_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mE62C5D0FCBC7CF224160C46549B12B81986429F2_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mFA5651F53C90E67B97EB71C207C48E71E139E497_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mBD72F3E758FF11CA661F5ECBA4BA7116C12C1B41_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE33D02C13BAE0475F0AAB0C92D3F9E4706F0A51_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5D852E1D8F47517CCD6A33CA51E0882927B14919_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD9216345B5AAADCC54D190CA1A3DFDC4F9214E3E_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mE9B28E4230163648CB997D1BEBB674EB67129265_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mA9A658080B9BDA8C1ADE631996720B4826CC59DD_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_Color32::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_Color32_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mE525CEE52268A6B0000873D4BFDB8723CA3CB791_gshared (ES3Type_Color32_tEE75D12C02C7C1DBCD38A9AA990C7E09542A6903* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Color32(    reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance),
		//                     reader.ReadProperty<byte>(ES3Type_byte.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_1 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_0, L_1, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_3 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_4 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_3);
		uint8_t L_5;
		L_5 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_3, L_4, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_6 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_7 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_6, L_7, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_9 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_10 = ((ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_byte_t559C8BDC50C33083E9F5EEA64C9E0B00E35FEAEA_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_9);
		uint8_t L_11;
		L_11 = ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2(L_9, L_10, ES3Reader_ReadProperty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF2A1521DB862269E2F5AAF007BAA73A70ED8CF2_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = L_12;
		RuntimeObject* L_14 = Box(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD5F0F47741112218532A7CAF35BC7869AF61A90F_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2798BB9BD3A9A31F97D532BE451C3D5255820835_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m305F332F1A22007F28F910ACBCAABFF7A9A67206_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mD190B00ADEC717B4590A2365D7FA963215357741_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4609C4567EB48323823B2F2F5B1BE6C7B85D05CB_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27058F20989AEEA584BCEC746668014442D14B7_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF372D57DAACA08DB0E92D2BDE80D292766849228_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mEBAA59F48F26F61E17FF924B3D1864E21DFE76A1_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m2F35B580676C127D3136D1A6682773A12C3EC566_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisRuntimeObject_m12B01F5FDB1B36196F716DE2345EE83981A1EF65_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m76771CE0328D67A92166AA8B97879E965D73C9A4_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m425FED607E9070CC04C118EA6F5162B3D280A70E_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mBC5FB58A1BFFC1A19AFD45CEF192FF41ABC30F8C_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m54E3537EB9EDD04CB584D53D31AB7A5F6549ECE7_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEBF2B0FA295B3DA35FCDF34CBEC833CD50ECE7A0_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0EC244DBE2C45BF1881A22FA4D95BFE54158EF51_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3BD68192A06E4469FDAD3534E5D64B65A163DE95_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mF5E696F08193FECD6B512214558F8164F2FB8E85_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorBySpeedModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorBySpeedModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m319760EB86CE0492D020DE531BC782FCD78F8C2A_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorBySpeedModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_1 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_4 = V_0;
		ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisRuntimeObject_m490036ED542E427069FB9729A878BA1ED8F95768_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m775CA6EABEA6DFB6F932CD9C710210D5D7D5A965_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m58E24D3196B4ABA58D1722F134D7C8E344E6AB5D_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m46CF917268D138A1AED9260BD3050EF7366139CC_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_mAB057AEC0200FEF89FA897BA0E8F173E5C453DF7_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m18A7B6A4576F0FBE58E57DD5094BAFBF97441BBC_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m318D724424A1C1982C03291D8A23D1E2184AE649_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mEE4B939830E0EDD36C54A5252E69761E0F464361_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mF5A60AA63506E35C597D5A14C795C5BF23141A5D_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mEC11F12F9863E68CEF775F84F62F184454BF7F05_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_mF704061529CDA76C18B63BA2CAD1E6A0D6C53612_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m2E8C138274D8A7FE294BC570949DC636FAFE10B6_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m51493303D09E7EA7E68EAFB601DA62C111D3F361_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m855F8073F0DCB55819E90F9FC7EE5CB790D7B7AA_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mAEEBDD84BE795E44AE2BB7E9BC49BC2A7CEA46D0_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m55162286651589A6D4DB97F757081A76F61126E6_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m4EC5F68B87D31BF03B3C3B94A9B37164E1C8E0A1_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m09EC30BE880F5B57CE0B5AC4288DC95EB78F65BE_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorBySpeedModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorBySpeedModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mEED745256126ABA6DC4EFBD610EB7F1B8BEF9F8F_gshared (ES3Type_ColorBySpeedModule_tAAE201C61FB1DEF92C1DD4FADFCED28C9853BD71* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorBySpeedModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)((ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)(ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B*)UnBox(L_0, ColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_il2cpp_TypeInfo_var))));
		goto IL_0074;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_006e;
	}

IL_0032:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_7 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_8 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_7);
		bool L_9;
		L_9 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_7, L_8);
		ColorBySpeedModule_set_enabled_mE2B792758F135B82025AA5754B39D694DBDD4A81((&V_0), L_9, NULL);
		// break;
		goto IL_0074;
	}

IL_0046:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_10 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_11 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_10);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_10, L_11);
		ColorBySpeedModule_set_color_m0EF870465136473EE34C555D4216141F902DE36E((&V_0), L_12, NULL);
		// break;
		goto IL_0074;
	}

IL_005a:
	{
		// instance.range = reader.Read<UnityEngine.Vector2>(ES3Type_Vector2.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_13 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_14 = ((ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Vector2_tB51CE4B1AFCBAFE7ADC540050621735C4F8D4387_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = GenericVirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m95B09869E3B912BD36BC3571D842BA21C71EB14B_RuntimeMethod_var, L_13, L_14);
		ColorBySpeedModule_set_range_m68B2FDC75365AF7A584A33A3E7B62978E49097AB((&V_0), L_15, NULL);
		// break;
		goto IL_0074;
	}

IL_006e:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_16 = ___reader0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_16);
	}

IL_0074:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_17 = ___reader0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_17);
		String_t* L_19 = L_18;
		V_1 = L_19;
		if (L_19)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4FD5A571EA36D3CB67E832CBAE4A93C02E56953E_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m37E4AF34D7323000392AFF92CCA78C3ECEF6FE86_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF2F0DBA7268BF5BC1A44A7B1B45CA2EA4197C09D_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m29C2098F4B2D9CBB67EBB29548F3BBE96FA4AE62_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4B867EEE70085ECAADB2F97068AAA58C66A09C1A_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m1B167D81DE986DF2689380A3322463F96CE4E89E_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBCB023F0B07C1CAFB5EECF3A05C0C406DCF74F9B_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mFEF4CB5A7C47BF4C1FCB9F31AD6BE06A8CEE40E3_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m8E88ED2B57D8D3C9459445423BB1E1A6C0C38F3D_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisRuntimeObject_mA7FA285BBF8ADF10E51A40B5615636BBBEEF75B6_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m6C4CB9405F0D3B0653255CF54B2908922783AE7C_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m120AEB82A495A7DC829423C04DAFB6FCD7783DC4_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.RenderTextureDescriptor>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisRenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46_mF7B6407868DCE7441B23D8732209BFA0BA9CFD04_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCBEEDBA545A3F873893D25970D20F904394A4B2C_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m0F5730AC97BE3C98C6623E6C6EC94A55E244DCB1_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4085B4D171E53127D68614EABA79ED3BAC5973BB_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5550093D0FFE9C882E06AC627112EA65246ADF26_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mA57BA17B066AAB11F17BB2862C5070A5937AE3CB_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_ColorOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_ColorOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mB644682A8A649F0B87523507AC311CFE3D8941B3_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.ColorOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9));
		// ReadInto<T>(reader, instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_1 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_2 = L_1;
		RuntimeObject* L_3 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE*)__this, L_0, L_3);
		// return instance;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_4 = V_0;
		ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 L_5 = L_4;
		RuntimeObject* L_6 = Box(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisRuntimeObject_mCB3652C6EBAD612B0B98835BF4F3444BE3191D64_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mAED63E51735748A00CDDCADFFE635B93638D0E5C_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_mE54E5848C8D9B9A7A735C773F380030950CC2A96_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m32E5418991F27C7721CC575B190A9607DEB9660B_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m8EE80FA03886A4D74EBFB26B83B9AFFB4FD7339A_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_m7C3D659CB4DBCE83BB48EC64B1D59C708C0891A5_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mDB20D0FF205EC51D13443AF714EEFB3830BD8AB0_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_mAA1FEB00D07DF70FC0B55C9FA5B791298AD605D8_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mDAC6D943B1222E6B449694957289CC85DE2DA8E3_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m664683A98422B641EE7AF557D6751864CD173E93_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m67BCE62A7EA4DF8F82AE7BD684C9AF4A8F6D4A9C_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mCFF2020DB53AE6962872FB66214122168EBA5F11_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD58E06760E9EF14150E3BEDF25F6C2F44D7B2F46_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mA160D65AD4B9BD09D867ABD915DA191DEC788E51_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mAC804DB1FA1B7678D2689DE554C59C8A62DF2965_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m3B31F7407F6D73C1640489CDA85EE0FCB740E327_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m9DE9CD8F184BE1390EF4AC64F4F73ACD78B511D0_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m0BA6DCF11D90F476BDED870A7CA7A58E362A140F_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_ColorOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_ColorOverLifetimeModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_mF3A60145393AEF33D89C823943E89AEC38BFA686_gshared (ES3Type_ColorOverLifetimeModule_tD589BC311364958BAE4892968E97E8EB3BDD9C81* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// var instance = (UnityEngine.ParticleSystem.ColorOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)((ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)(ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9*)UnBox(L_0, ColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_il2cpp_TypeInfo_var))));
		goto IL_0053;
	}

IL_0009:
	{
		String_t* L_1 = V_1;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004d;
	}

IL_0025:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_5 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_6 = ((ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t4E050FE3D8D0513299DFB16E86EBDDF86B749FFD_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_5);
		bool L_7;
		L_7 = GenericVirtualFuncInvoker1< bool, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFFB70EE53D8CD0255A4E599780F62A3EB1520E83_RuntimeMethod_var, L_5, L_6);
		ColorOverLifetimeModule_set_enabled_m356D3ABCE0A5B979105F546C2EAA54702297059C((&V_0), L_7, NULL);
		// break;
		goto IL_0053;
	}

IL_0039:
	{
		// instance.color = reader.Read<UnityEngine.ParticleSystem.MinMaxGradient>(ES3Type_MinMaxGradient.Instance);
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_8 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_9 = ((ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxGradient_tDE2B65F0D3CF28657A6F04D48DA23B56D4F30CD9_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_8);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = GenericVirtualFuncInvoker1< MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m0A43F7DD1A8FF36328E2FAD9CC74B9F9CD285798_RuntimeMethod_var, L_8, L_9);
		ColorOverLifetimeModule_set_color_m054950B589DA58FFD5BDBC10A70304BF89E3C86B((&V_0), L_10, NULL);
		// break;
		goto IL_0053;
	}

IL_004d:
	{
		// reader.Skip();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_11 = ___reader0;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_11);
	}

IL_0053:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_12);
		String_t* L_14 = L_13;
		V_1 = L_14;
		if (L_14)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m771C384FF6247F66828C4076E4D19935ADA0A506_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m10AF062011156F032E2D6120931332C35ECEEE32_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCEB395B87A820CB5F1B527FEB664909D285BB540_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFAA3763451C841F820F563E27B262C775AC6868A_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mADE6CD66CED8A384E59A6B686A3BC153140AF138_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFE95C0CE3279983E279C9CB2DA14C80628631AD7_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m5E6A57CC699844825278048E02F13439FE2A3BBA_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m6BE4F20DFAA045772A4D8C9AB6CF5CDF8A4706C0_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m07916949450F81BC7256A8191873B082BE936A68_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Object ES3Types.ES3Type_DateTime::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_DateTime_Read_TisRuntimeObject_m5EB364FB326C03A2008DA11AD5064DA4A76E9A85_gshared (ES3Type_DateTime_tC67C813E733CFA7C0B56FA88181B2CA3C4464EE1* __this, ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reader.ReadPropertyName();
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_0);
		// return new DateTime(reader.Read<long>(ES3Type_long.Instance));
		ES3Reader_tD4A93111A5956D843A1254CBF8B41CF82B163518* L_2 = ___reader0;
		ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* L_3 = ((ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_long_t9F4C0831F00424EE6113708D742EBA919B9968C3_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_2);
		int64_t L_4;
		L_4 = GenericVirtualFuncInvoker1< int64_t, ES3Type_tCD75BA2AE54698656A2064A3EC0B60B8BD91AEEE* >::Invoke(ES3Reader_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE239326E5D146B3B69FE9733B364BADA442882A_RuntimeMethod_var, L_2, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_5), L_4, /*hidden argument*/NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
